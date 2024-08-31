/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 15:22:58 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/31 15:35:03 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/stack.h"
#include "me/mem/mem.h"
#include "me/types.h"
#include "parser/array.h"
#include "parser/language.h"
#include "parser/length.h"
#include "parser/subtree.h"
#include <assert.h>
#include <stdio.h>

#define MAX_LINK_COUNT 1
#define MAX_NODE_POOL_SIZE 0
#define MAX_ITERATOR_COUNT 0

typedef enum e_stack_status				 t_stack_status;
typedef struct s_stack_head				 t_stack_head;
typedef struct s_stack_iterator			 t_stack_iterator;
typedef struct s_stack_link				 t_stack_link;
typedef struct s_stack_node				 t_stack_node;
typedef struct s_summarize_stack_session t_summarize_stack_session;
typedef t_u32							 t_stack_action;

typedef t_stack_action (*t_stack_callback)(void *, const t_stack_iterator *);

struct s_stack_link
{
	t_stack_node *node;
	Subtree		  subtree;
	bool		  is_pending;
};

struct s_stack_node
{
	TSStateId	 state;
	Length		 position;
	t_stack_link links[MAX_LINK_COUNT];
	t_u16		 link_count;
	t_u32		 ref_count;
	t_u32		 error_cost;
	t_u32		 node_count;
	int			 dynamic_precedence;
};

struct s_stack_iterator
{
	t_stack_node *node;
	SubtreeArray  subtrees;
	t_u32		  subtree_count;
	bool		  is_pending;
};

enum e_stack_status
{
	SStatusActive,
	SStatusPaused,
	SStatusHalted,
};

struct s_stack_head
{
	t_stack_node	*node;
	t_stack_summary *summary;
	t_u32			 node_count_at_last_error;
	Subtree			 last_external_token;
	Subtree			 lookahead_when_paused;
	t_stack_status	 status;
};

struct s_stack
{
	Array(t_stack_head) heads;
	t_stack_slice_array slices;
	Array(t_stack_iterator) iterators;
	t_stack_node *base_node;
};

enum e_stack_action
{
	SActionNone,
	SActionStop = 1,
	SActionPop = 2,
};

struct s_summarize_stack_session
{
	t_stack_summary *summary;
	t_u32			 max_depth;
};

static void stack_node_retain(t_stack_node *self)
{
	if (!self)
		return;
	assert(self->ref_count > 0);
	self->ref_count++;
	assert(self->ref_count != 0);
}

static void stack_node_release(t_stack_node *self)
{
recur:
	assert(self->ref_count != 0);
	self->ref_count--;
	if (self->ref_count > 0)
		return;

	t_stack_node *first_predecessor = NULL;
	if (self->link_count > 0)
	{
		for (t_u32 i = self->link_count - 1; i > 0; i--)
		{
			t_stack_link link = self->links[i];
			if (link.subtree)
				ts_subtree_release(link.subtree);
			stack_node_release(link.node);
		}
		t_stack_link link = self->links[0];
		if (link.subtree)
			ts_subtree_release(link.subtree);
		first_predecessor = self->links[0].node;
	}

	mem_free(self);

	if (first_predecessor)
	{
		self = first_predecessor;
		goto recur;
	}
}

/// Get the number of nodes in the subtree, for the purpose of measuring
/// how much progress has been made by a given version of the stack.
static t_u32 stack__subtree_node_count(Subtree subtree)
{
	t_u32 count = ts_subtree_visible_descendant_count(subtree);
	if (ts_subtree_visible(subtree))
		count++;

	// Count intermediate error nodes even though they are not visible,
	// because a stack version's node count is used to check whether it
	// has made any progress since the last time it encountered an error.
	if (ts_subtree_symbol(subtree) == ts_builtin_sym_error_repeat)
		count++;

	return count;
}

static t_stack_node *stack_node_new(t_stack_node *previous_node, Subtree subtree, bool is_pending, TSStateId state)
{
	t_stack_node *node = mem_alloc(sizeof(t_stack_node));
	*node = (t_stack_node){.ref_count = 1, .link_count = 0, .state = state};

	if (previous_node != NULL)
	{
		node->link_count = 1;
		node->links[0] = (t_stack_link){
			.node = previous_node,
			.subtree = subtree,
			.is_pending = is_pending,
		};

		node->position = previous_node->position;
		node->error_cost = previous_node->error_cost;
		node->dynamic_precedence = previous_node->dynamic_precedence;
		node->node_count = previous_node->node_count;

		if (subtree)
		{
			node->error_cost += ts_subtree_error_cost(subtree);
			node->position = length_add(node->position, ts_subtree_total_size(subtree));
			node->node_count += stack__subtree_node_count(subtree);
			node->dynamic_precedence += ts_subtree_dynamic_precedence(subtree);
		}
	}
	else
	{
		node->position = length_zero();
		node->error_cost = 0;
	}

	return node;
}

static bool stack__subtree_is_equivalent(Subtree left, Subtree right)
{
	if (left == right)
		return true;
	if (!left || !right)
		return false;

	// Symbols must match
	if (ts_subtree_symbol(left) != ts_subtree_symbol(right))
		return false;

	// If both have errors, don't bother keeping both.
	if (ts_subtree_error_cost(left) > 0 && ts_subtree_error_cost(right) > 0)
		return true;

	return (ts_subtree_padding(left).bytes == ts_subtree_padding(right).bytes &&
			ts_subtree_size(left).bytes == ts_subtree_size(right).bytes && ts_subtree_child_count(left) == ts_subtree_child_count(right) &&
			ts_subtree_extra(left) == ts_subtree_extra(right) && ts_subtree_external_scanner_state_eq(left, right));
}

static void stack_node_add_link(t_stack_node *self, t_stack_link link)
{
	if (link.node == self)
		return;

	for (int i = 0; i < self->link_count; i++)
	{
		t_stack_link *existing_link = &self->links[i];
		if (stack__subtree_is_equivalent(existing_link->subtree, link.subtree))
		{
			// In general, we preserve ambiguities until they are removed from the stack
			// during a pop operation where multiple paths lead to the same node. But in
			// the special case where two links directly connect the same pair of nodes,
			// we can safely remove the ambiguity ahead of time without changing behavior.
			if (existing_link->node == link.node)
			{
				if (ts_subtree_dynamic_precedence(link.subtree) > ts_subtree_dynamic_precedence(existing_link->subtree))
				{
					ts_subtree_retain(link.subtree);
					ts_subtree_release(/*subtree_pool, */ existing_link->subtree);
					existing_link->subtree = link.subtree;
					self->dynamic_precedence = link.node->dynamic_precedence + ts_subtree_dynamic_precedence(link.subtree);
				}
				return;
			}

			// If the previous nodes are mergeable, merge them recursively.
			if (existing_link->node->state == link.node->state && existing_link->node->position.bytes == link.node->position.bytes &&
				existing_link->node->error_cost == link.node->error_cost)
			{
				for (int j = 0; j < link.node->link_count; j++)
				{
					stack_node_add_link(existing_link->node, link.node->links[j]);
				}
				t_i32 dynamic_precedence = link.node->dynamic_precedence;
				if (link.subtree)
				{
					dynamic_precedence += ts_subtree_dynamic_precedence(link.subtree);
				}
				if (dynamic_precedence > self->dynamic_precedence)
				{
					self->dynamic_precedence = dynamic_precedence;
				}
				return;
			}
		}
	}

	if (self->link_count == MAX_LINK_COUNT)
		return;

	stack_node_retain(link.node);
	t_u32 node_count = link.node->node_count;
	int	  dynamic_precedence = link.node->dynamic_precedence;
	self->links[self->link_count++] = link;

	if (link.subtree)
	{
		ts_subtree_retain(link.subtree);
		node_count += stack__subtree_node_count(link.subtree);
		dynamic_precedence += ts_subtree_dynamic_precedence(link.subtree);
	}

	if (node_count > self->node_count)
		self->node_count = node_count;
	if (dynamic_precedence > self->dynamic_precedence)
		self->dynamic_precedence = dynamic_precedence;
}

static void stack_head_delete(t_stack_head *self)
{
	if (self->node)
	{
		if (self->last_external_token)
		{
			ts_subtree_release(self->last_external_token);
		}
		if (self->lookahead_when_paused)
		{
			ts_subtree_release(self->lookahead_when_paused);
		}
		if (self->summary)
		{
			array_delete(self->summary);
			mem_free(self->summary);
		}
		stack_node_release(self->node);
	}
}

static t_stack_version ts_stack__add_version(Stack *self, t_stack_version original_version, t_stack_node *node)
{
	t_stack_head head = {
		.node = node,
		.node_count_at_last_error = self->heads.contents[original_version].node_count_at_last_error,
		.last_external_token = self->heads.contents[original_version].last_external_token,
		.status = SStatusActive,
		.lookahead_when_paused = NULL,
	};
	array_push(&self->heads, head);
	stack_node_retain(node);
	if (head.last_external_token)
		ts_subtree_retain(head.last_external_token);
	return (t_stack_version)(self->heads.size - 1);
}

static void ts_stack__add_slice(Stack *self, t_stack_version original_version, t_stack_node *node, SubtreeArray *subtrees)
{
	for (t_u32 i = self->slices.size - 1; i + 1 > 0; i--)
	{
		t_stack_version version = self->slices.contents[i].version;
		if (self->heads.contents[version].node == node)
		{
			t_stack_slice slice = {*subtrees, version};
			array_insert(&self->slices, i + 1, slice);
			return;
		}
	}

	t_stack_version version = ts_stack__add_version(self, original_version, node);
	t_stack_slice	slice = {*subtrees, version};
	array_push(&self->slices, slice);
}

static t_stack_slice_array stack__iter(Stack *self, t_stack_version version, t_stack_callback callback, void *payload,
									   int goal_subtree_count)
{
	array_clear(&self->slices);
	array_clear(&self->iterators);

	t_stack_head	*head = array_get(&self->heads, version);
	t_stack_iterator new_iterator = {
		.node = head->node,
		.subtrees = array_new(),
		.subtree_count = 0,
		.is_pending = true,
	};

	bool include_subtrees = false;
	if (goal_subtree_count >= 0)
	{
		include_subtrees = true;
		array_reserve(&new_iterator.subtrees, (t_u32)ts_subtree_alloc_size(goal_subtree_count) / sizeof(Subtree));
	}

	array_push(&self->iterators, new_iterator);

	while (self->iterators.size > 0)
	{
		for (t_u32 i = 0, size = self->iterators.size; i < size; i++)
		{
			t_stack_iterator *iterator = &self->iterators.contents[i];
			t_stack_node	 *node = iterator->node;

			t_stack_action action = callback(payload, iterator);
			bool		   should_pop = action & SActionPop;
			bool		   should_stop = action & SActionStop || node->link_count == 0;

			if (should_pop)
			{
				SubtreeArray subtrees = iterator->subtrees;
				if (!should_stop)
				{
					ts_subtree_array_copy(subtrees, &subtrees);
				}
				ts_subtree_array_reverse(&subtrees);
				ts_stack__add_slice(self, version, node, &subtrees);
			}

			if (should_stop)
			{
				if (!should_pop)
				{
					ts_subtree_array_delete(&iterator->subtrees);
				}
				array_erase(&self->iterators, i);
				i--, size--;
				continue;
			}

			for (t_u32 j = 1; j <= node->link_count; j++)
			{
				t_stack_iterator *next_iterator;
				t_stack_link	  link;
				if (j == node->link_count)
				{
					link = node->links[0];
					next_iterator = &self->iterators.contents[i];
				}
				else
				{
					if (self->iterators.size >= MAX_ITERATOR_COUNT)
						continue;
					link = node->links[j];
					t_stack_iterator current_iterator = self->iterators.contents[i];
					array_push(&self->iterators, current_iterator);
					next_iterator = array_back(&self->iterators);
					ts_subtree_array_copy(next_iterator->subtrees, &next_iterator->subtrees);
				}

				next_iterator->node = link.node;
				if (link.subtree)
				{
					if (include_subtrees)
					{
						array_push(&next_iterator->subtrees, link.subtree);
						ts_subtree_retain(link.subtree);
					}

					if (!ts_subtree_extra(link.subtree))
					{
						next_iterator->subtree_count++;
						if (!link.is_pending)
						{
							next_iterator->is_pending = false;
						}
					}
				}
				else
				{
					next_iterator->subtree_count++;
					next_iterator->is_pending = false;
				}
			}
		}
	}

	return self->slices;
}

Stack *ts_stack_new(void)
{
	Stack *self;

	self = mem_alloc(sizeof(*self));

	array_init(&self->heads);
	array_init(&self->slices);
	array_init(&self->iterators);
	array_reserve(&self->heads, 4);
	array_reserve(&self->slices, 4);
	array_reserve(&self->iterators, 4);

	self->base_node = stack_node_new(NULL, NULL, false, 1);
	ts_stack_clear(self);

	return (self);
}

void ts_stack_delete(Stack *self)
{
	if (self->slices.contents)
		array_delete(&self->slices);
	if (self->iterators.contents)
		array_delete(&self->iterators);
	stack_node_release(self->base_node);
	for (t_u32 i = 0; i < self->heads.size; i++)
	{
		stack_head_delete(&self->heads.contents[i]);
	}
	array_clear(&self->heads);
	array_delete(&self->heads);
	mem_free(self);
}

t_u32 ts_stack_version_count(const Stack *self)
{
	return self->heads.size;
}

TSStateId ts_stack_state(const Stack *self, t_stack_version version)
{
	return array_get(&self->heads, version)->node->state;
}

Length ts_stack_position(const Stack *self, t_stack_version version)
{
	return array_get(&self->heads, version)->node->position;
}

Subtree ts_stack_last_external_token(const Stack *self, t_stack_version version)
{
	return array_get(&self->heads, version)->last_external_token;
}

void ts_stack_set_last_external_token(Stack *self, t_stack_version version, Subtree token)
{
	t_stack_head *head = array_get(&self->heads, version);
	if (token)
		ts_subtree_retain(token);
	if (head->last_external_token)
		ts_subtree_release(head->last_external_token);
	head->last_external_token = token;
}

t_u32 ts_stack_error_cost(const Stack *self, t_stack_version version)
{
	t_stack_head *head = array_get(&self->heads, version);
	t_u32		  result = head->node->error_cost;
	if (head->status == SStatusPaused || (head->node->state == ERROR_STATE && !head->node->links[0].subtree))
	{
		result += ERROR_COST_PER_RECOVERY;
	}
	return result;
}

t_u32 ts_stack_node_count_since_error(const Stack *self, t_stack_version version)
{
	t_stack_head *head = array_get(&self->heads, version);
	if (head->node->node_count < head->node_count_at_last_error)
	{
		head->node_count_at_last_error = head->node->node_count;
	}
	return head->node->node_count - head->node_count_at_last_error;
}

void ts_stack_push(Stack *self, t_stack_version version, Subtree subtree, bool pending, TSStateId state)
{
	t_stack_head *head = array_get(&self->heads, version);
	t_stack_node *new_node = stack_node_new(head->node, subtree, pending, state);
	if (!subtree)
		head->node_count_at_last_error = new_node->node_count;
	head->node = new_node;
}

t_stack_action pop_count_callback(void *payload, const t_stack_iterator *iterator)
{
	t_u32 *goal_subtree_count = payload;
	if (iterator->subtree_count == *goal_subtree_count)
	{
		return SActionPop | SActionStop;
	}
	else
	{
		return SActionNone;
	}
}

t_stack_slice_array ts_stack_pop_count(Stack *self, t_stack_version version, t_u32 count)
{
	return stack__iter(self, version, pop_count_callback, &count, (int)count);
}

t_stack_action pop_pending_callback(void *payload, const t_stack_iterator *iterator)
{
	(void)payload;
	if (iterator->subtree_count >= 1)
	{
		if (iterator->is_pending)
		{
			return SActionPop | SActionStop;
		}
		else
		{
			return SActionStop;
		}
	}
	else
	{
		return SActionNone;
	}
}

t_stack_slice_array ts_stack_pop_pending(Stack *self, t_stack_version version)
{
	t_stack_slice_array pop = stack__iter(self, version, pop_pending_callback, NULL, 0);
	if (pop.size > 0)
	{
		ts_stack_renumber_version(self, pop.contents[0].version, version);
		pop.contents[0].version = version;
	}
	return pop;
}

t_stack_action pop_error_callback(void *payload, const t_stack_iterator *iterator)
{
	if (iterator->subtrees.size > 0)
	{
		bool *found_error = payload;
		if (!*found_error && ts_subtree_is_error(iterator->subtrees.contents[0]))
		{
			*found_error = true;
			return SActionPop | SActionStop;
		}
		else
		{
			return SActionStop;
		}
	}
	else
	{
		return SActionNone;
	}
}

SubtreeArray ts_stack_pop_error(Stack *self, t_stack_version version)
{
	t_stack_node *node = array_get(&self->heads, version)->node;
	for (t_u32 i = 0; i < node->link_count; i++)
	{
		if (node->links[i].subtree && ts_subtree_is_error(node->links[i].subtree))
		{
			bool				found_error = false;
			t_stack_slice_array pop = stack__iter(self, version, pop_error_callback, &found_error, 1);
			if (pop.size > 0)
			{
				assert(pop.size == 1);
				ts_stack_renumber_version(self, pop.contents[0].version, version);
				return pop.contents[0].subtrees;
			}
			break;
		}
	}
	return (SubtreeArray){.size = 0};
}

t_stack_action pop_all_callback(void *payload, const t_stack_iterator *iterator)
{
	(void)payload;
	return iterator->node->link_count == 0 ? SActionPop : SActionNone;
}

t_stack_slice_array ts_stack_pop_all(Stack *self, t_stack_version version)
{
	return stack__iter(self, version, pop_all_callback, NULL, 0);
}

t_stack_action summarize_stack_callback(void *payload, const t_stack_iterator *iterator)
{
	t_summarize_stack_session *session = payload;
	TSStateId				   state = iterator->node->state;
	t_u32					   depth = iterator->subtree_count;
	if (depth > session->max_depth)
		return SActionStop;
	for (t_u32 i = session->summary->size - 1; i + 1 > 0; i--)
	{
		t_stack_summary_entry entry = session->summary->contents[i];
		if (entry.depth < depth)
			break;
		if (entry.depth == depth && entry.state == state)
			return SActionNone;
	}
	array_push(session->summary, ((t_stack_summary_entry){
									 .position = iterator->node->position,
									 .depth = depth,
									 .state = state,
								 }));
	return SActionNone;
}

void ts_stack_record_summary(Stack *self, t_stack_version version, t_u32 max_depth)
{
	t_summarize_stack_session session = {.summary = mem_alloc(sizeof(t_stack_summary)), .max_depth = max_depth};
	array_init(session.summary);
	stack__iter(self, version, summarize_stack_callback, &session, -1);
	t_stack_head *head = &self->heads.contents[version];
	if (head->summary)
	{
		array_delete(head->summary);
		mem_free(head->summary);
	}
	head->summary = session.summary;
}

t_stack_summary *ts_stack_get_summary(Stack *self, t_stack_version version)
{
	return array_get(&self->heads, version)->summary;
}

int ts_stack_dynamic_precedence(Stack *self, t_stack_version version)
{
	return array_get(&self->heads, version)->node->dynamic_precedence;
}

bool ts_stack_has_advanced_since_error(const Stack *self, t_stack_version version)
{
	const t_stack_head *head = array_get(&self->heads, version);
	const t_stack_node *node = head->node;
	if (node->error_cost == 0)
		return true;
	while (node)
	{
		if (node->link_count > 0)
		{
			Subtree subtree = node->links[0].subtree;
			if (subtree)
			{
				if (ts_subtree_total_bytes(subtree) > 0)
				{
					return true;
				}
				else if (node->node_count > head->node_count_at_last_error && ts_subtree_error_cost(subtree) == 0)
				{
					node = node->links[0].node;
					continue;
				}
			}
		}
		break;
	}
	return false;
}

void ts_stack_remove_version(Stack *self, t_stack_version version)
{
	stack_head_delete(array_get(&self->heads, version));
	array_erase(&self->heads, version);
}

void ts_stack_renumber_version(Stack *self, t_stack_version v1, t_stack_version v2)
{
	if (v1 == v2)
		return;
	assert(v2 < v1);
	assert((t_u32)v1 < self->heads.size);
	t_stack_head *source_head = &self->heads.contents[v1];
	t_stack_head *target_head = &self->heads.contents[v2];
	if (target_head->summary && !source_head->summary)
	{
		source_head->summary = target_head->summary;
		target_head->summary = NULL;
	}
	stack_head_delete(target_head);
	*target_head = *source_head;
	array_erase(&self->heads, v1);
}

void ts_stack_swap_versions(Stack *self, t_stack_version v1, t_stack_version v2)
{
	t_stack_head temporary_head = self->heads.contents[v1];
	self->heads.contents[v1] = self->heads.contents[v2];
	self->heads.contents[v2] = temporary_head;
}

t_stack_version ts_stack_copy_version(Stack *self, t_stack_version version)
{
	assert(version < self->heads.size);
	array_push(&self->heads, self->heads.contents[version]);
	t_stack_head *head = array_back(&self->heads);
	stack_node_retain(head->node);
	if (head->last_external_token)
		ts_subtree_retain(head->last_external_token);
	head->summary = NULL;
	return self->heads.size - 1;
}

bool ts_stack_merge(Stack *self, t_stack_version version1, t_stack_version version2)
{
	if (!ts_stack_can_merge(self, version1, version2))
		return false;
	t_stack_head *head1 = &self->heads.contents[version1];
	t_stack_head *head2 = &self->heads.contents[version2];
	for (t_u32 i = 0; i < head2->node->link_count; i++)
	{
		stack_node_add_link(head1->node, head2->node->links[i]);
	}
	if (head1->node->state == ERROR_STATE)
	{
		head1->node_count_at_last_error = head1->node->node_count;
	}
	ts_stack_remove_version(self, version2);
	return true;
}

bool ts_stack_can_merge(Stack *self, t_stack_version version1, t_stack_version version2)
{
	t_stack_head *head1 = &self->heads.contents[version1];
	t_stack_head *head2 = &self->heads.contents[version2];
	return head1->status == SStatusActive && head2->status == SStatusActive && head1->node->state == head2->node->state &&
		   head1->node->position.bytes == head2->node->position.bytes && head1->node->error_cost == head2->node->error_cost &&
		   ts_subtree_external_scanner_state_eq(head1->last_external_token, head2->last_external_token);
}

void ts_stack_halt(Stack *self, t_stack_version version)
{
	array_get(&self->heads, version)->status = SStatusHalted;
}

void ts_stack_pause(Stack *self, t_stack_version version, Subtree lookahead)
{
	t_stack_head *head = array_get(&self->heads, version);
	head->status = SStatusPaused;
	head->lookahead_when_paused = lookahead;
	head->node_count_at_last_error = head->node->node_count;
}

bool ts_stack_is_active(const Stack *self, t_stack_version version)
{
	return array_get(&self->heads, version)->status == SStatusActive;
}

bool ts_stack_is_halted(const Stack *self, t_stack_version version)
{
	return array_get(&self->heads, version)->status == SStatusHalted;
}

bool ts_stack_is_paused(const Stack *self, t_stack_version version)
{
	return array_get(&self->heads, version)->status == SStatusPaused;
}

Subtree ts_stack_resume(Stack *self, t_stack_version version)
{
	t_stack_head *head = array_get(&self->heads, version);
	assert(head->status == SStatusPaused);
	Subtree result = head->lookahead_when_paused;
	head->status = SStatusActive;
	head->lookahead_when_paused = NULL;
	return result;
}

void ts_stack_clear(Stack *self)
{
	stack_node_retain(self->base_node);
	for (t_u32 i = 0; i < self->heads.size; i++)
	{
		stack_head_delete(&self->heads.contents[i]);
	}
	array_clear(&self->heads);
	array_push(&self->heads, ((t_stack_head){
								 .node = self->base_node,
								 .status = SStatusActive,
								 .last_external_token = NULL,
								 .lookahead_when_paused = NULL,
							 }));
}

#undef forceinline
