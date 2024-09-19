/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_inner.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 16:37:50 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/19 18:23:03 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_INNER_H
#define STACK_INNER_H

#include "me/types.h"
#include "parser/inner/length_inner.h"
#include "parser/subtree.h"

#define MAX_LINK_COUNT 8
#define MAX_NODE_POOL_SIZE 50
#define MAX_ITERATOR_COUNT 64
#define STACK_VERSION_NONE -1

typedef struct s_stack				 		t_stack;
typedef t_u32						 		t_stack_version;
typedef struct s_stack_slice		 		t_stack_slice;
typedef struct s_stack_summary_entry		t_stack_summary_entry;
typedef Array(t_stack_slice)		 		t_stack_slice_array;
typedef Array(t_stack_summary_entry)		t_stack_summary;

typedef enum e_stack_status					t_stack_status;
typedef struct s_stack_head					t_stack_head;
typedef struct s_stack_iterator				t_stack_iterator;
typedef struct s_stack_link					t_stack_link;
typedef struct s_stack_node					t_stack_node;
typedef struct s_summarize_stack_session	t_summarize_stack_session;
typedef t_u32								t_stack_action;

typedef t_stack_action						(*t_stack_callback)(void *,
							const t_stack_iterator *);

struct										s_stack_link
{
	t_stack_node							*node;
	t_subtree								subtree;
	bool									is_pending;
};

struct										s_stack_node
{
	t_state_id								state;
	t_length									position;
	t_stack_link							links[MAX_LINK_COUNT];
	t_u16									link_count;
	t_u32									ref_count;
	t_u32									error_cost;
	t_u32									node_count;
	int										dynamic_precedence;
};

struct										s_stack_iterator
{
	t_stack_node							*node;
	t_vec_subtree							subtrees;
	t_u32									subtree_count;
	bool									is_pending;
};

enum										e_stack_status
{
	SStatusActive,
	SStatusPaused,
	SStatusHalted,
};

struct										s_stack_head
{
	t_stack_node							*node;
	t_stack_summary							*summary;
	t_u32									node_count_at_last_error;
	t_subtree								last_external_token;
	t_subtree								lookahead_when_paused;
	t_stack_status							status;
};

struct										s_stack
{
	Array(t_stack_head) heads;
	t_stack_slice_array						slices;
	Array(t_stack_iterator) iterators;
	t_stack_node							*base_node;
};

enum										e_stack_action
{
	SActionNone,
	SActionStop = 1,
	SActionPop = 2,
};

struct										s_summarize_stack_session
{
	t_stack_summary							*summary;
	t_u32									max_depth;
};

struct										s_stack_slice
{
	t_vec_subtree							subtrees;
	t_stack_version							version;
};

struct										s_stack_summary_entry
{
	t_length	  							position;
	t_u32	  								depth;
	t_state_id 								state;
};

struct										s_stack_push_arg
{
	t_stack_version							version;
	t_subtree								subtree;
	bool									pending;
	t_state_id								state;
};

struct										s_stack_iter_args
{
	t_stack_version							version;
	t_stack_callback						callback;
	void									*payload;
	int										goal_subtree_count;
};

struct										s_stack_iter_indexes
{
	t_usize 								i;
	t_usize 								j;
	t_usize 								size;
};


t_length ts_stack_position(const t_stack *self, t_stack_version version);
t_state_id ts_stack_state(const t_stack *self, t_stack_version version);
bool stack__subtree_is_equivalent(t_subtree left, t_subtree right);
bool ts_stack_can_merge(t_stack *self, t_stack_version version1, t_stack_version version2);
bool ts_stack_has_advanced_since_error(const t_stack *self, t_stack_version version);
bool ts_stack_is_active(const t_stack *self, t_stack_version version);
bool ts_stack_is_halted(const t_stack *self, t_stack_version version);
bool ts_stack_is_paused(const t_stack *self, t_stack_version version);
bool ts_stack_merge(t_stack *self, t_stack_version version1, t_stack_version version2);
int ts_stack_dynamic_precedence(t_stack *self, t_stack_version version);
t_stack *ts_stack_new(void);
t_stack_action pop_all_callback(void *payload, const t_stack_iterator *iterator);
t_stack_action pop_count_callback(void *payload, const t_stack_iterator *iterator);
t_stack_action pop_error_callback(void *payload, const t_stack_iterator *iterator);
t_stack_action pop_pending_callback(void *payload, const t_stack_iterator *iterator);
t_stack_action summarize_stack_callback(void *payload, const t_stack_iterator *iterator);
t_stack_node *stack_node_new(t_stack_node *previous_node, t_subtree subtree, bool is_pending, t_state_id state);
t_stack_slice_array stack__iter(t_stack *self, struct s_stack_iter_args args);
t_stack_slice_array ts_stack_pop_all(t_stack *self, t_stack_version version);
t_stack_slice_array ts_stack_pop_count(t_stack *self, t_stack_version version, t_u32 count);
t_stack_slice_array ts_stack_pop_pending(t_stack *self, t_stack_version version);
t_stack_summary *ts_stack_get_summary(t_stack *self, t_stack_version version);
t_stack_version ts_stack__add_version(t_stack *self, t_stack_version original_version, t_stack_node *node);
t_stack_version ts_stack_copy_version(t_stack *self, t_stack_version version);
t_subtree ts_stack_last_external_token(const t_stack *self, t_stack_version version);
t_subtree ts_stack_resume(t_stack *self, t_stack_version version);
t_u32 stack__subtree_node_count(t_subtree subtree);
t_u32 ts_stack_error_cost(const t_stack *self, t_stack_version version);
t_u32 ts_stack_node_count_since_error(const t_stack *self, t_stack_version version);
t_u32 ts_stack_version_count(const t_stack *self);
t_vec_subtree ts_stack_pop_error(t_stack *self, t_stack_version version);
void stack_head_delete(t_stack_head *self);
void stack_node_add_link(t_stack_node *self, t_stack_link link);
void stack_node_release(t_stack_node *self);
void stack_node_retain(t_stack_node *self);
void ts_stack__add_slice(t_stack *self, t_stack_version original_version, t_stack_node *node, t_vec_subtree *subtrees);
void ts_stack_clear(t_stack *self);
void ts_stack_delete(t_stack *self);
void ts_stack_halt(t_stack *self, t_stack_version version);
void ts_stack_pause(t_stack *self, t_stack_version version, t_subtree lookahead);
void ts_stack_push(t_stack *self, struct s_stack_push_arg args);
void ts_stack_record_summary(t_stack *self, t_stack_version version, t_u32 max_depth);
void ts_stack_remove_version(t_stack *self, t_stack_version version);
void ts_stack_renumber_version(t_stack *self, t_stack_version v1, t_stack_version v2);
void ts_stack_set_last_external_token(t_stack *self, t_stack_version version, t_subtree token);
void ts_stack_swap_versions(t_stack *self, t_stack_version v1, t_stack_version v2);


#endif /* STACK_INNER_H */
