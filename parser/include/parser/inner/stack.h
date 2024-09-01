/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 16:37:50 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/31 18:36:27 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
#define STACK_H

#include "me/types.h"
#include "parser/subtree.h"
#include "parser/stack.h"

#define MAX_LINK_COUNT 1
#define MAX_NODE_POOL_SIZE 0
#define MAX_ITERATOR_COUNT 0

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
	TSStateId								state;
	Length									position;
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
	SubtreeArray							subtrees;
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
	t_subtree									last_external_token;
	t_subtree									lookahead_when_paused;
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

bool	stack__subtree_is_equivalent(t_subtree left, t_subtree right);
t_stack_node *stack_node_new(t_stack_node *previous_node, t_subtree subtree, bool is_pending, TSStateId state);
t_stack_slice_array stack__iter(t_stack *self, t_stack_version version, t_stack_callback callback, void *payload, int goal_subtree_count);
t_stack_version ts_stack__add_version(t_stack *self, t_stack_version original_version, t_stack_node *node);
t_u32 stack__subtree_node_count(t_subtree subtree);
void stack_head_delete(t_stack_head *self);
void stack_node_add_link(t_stack_node *self, t_stack_link link);
void stack_node_release(t_stack_node *self);
void stack_node_retain(t_stack_node *self);
void ts_stack__add_slice(t_stack *self, t_stack_version original_version, t_stack_node *node, SubtreeArray *subtrees);

#endif /* STACK_H */
