/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 12:03:07 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/31 18:34:46 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSE_STACK_H
#define PARSE_STACK_H

#include "me/types.h"
#include "parser/array.h"
#include "parser/subtree.h"

typedef struct s_stack				 t_stack;
typedef t_u32						 t_stack_version;
typedef struct s_stack_slice		 t_stack_slice;
typedef struct s_stack_summary_entry t_stack_summary_entry;
typedef Array(t_stack_slice) 		 t_stack_slice_array;
typedef Array(t_stack_summary_entry) t_stack_summary;

#define STACK_VERSION_NONE ((t_stack_version) - 1)

struct s_stack_slice
{
	t_vec_subtree subtrees;
	t_stack_version version;
};

struct s_stack_summary_entry
{
	Length	  position;
	t_u32	  depth;
	TSStateId state;
};

t_stack *ts_stack_new(void);
void ts_stack_delete(t_stack *);
t_u32 ts_stack_version_count(const t_stack *);
TSStateId ts_stack_state(const t_stack *, t_stack_version);
t_subtree ts_stack_last_external_token(const t_stack *, t_stack_version);
void ts_stack_set_last_external_token(t_stack *, t_stack_version, t_subtree);
Length ts_stack_position(const t_stack *, t_stack_version);
void ts_stack_push(t_stack *, t_stack_version, t_subtree, bool, TSStateId);
t_stack_slice_array ts_stack_pop_count(t_stack *, t_stack_version, t_u32 count);
t_vec_subtree ts_stack_pop_error(t_stack *, t_stack_version);
t_stack_slice_array ts_stack_pop_pending(t_stack *, t_stack_version);
t_stack_slice_array ts_stack_pop_all(t_stack *, t_stack_version);
t_u32 ts_stack_node_count_since_error(const t_stack *, t_stack_version);
int ts_stack_dynamic_precedence(t_stack *, t_stack_version);
bool ts_stack_has_advanced_since_error(const t_stack *, t_stack_version);
void ts_stack_record_summary(t_stack *, t_stack_version, t_u32 max_depth);
t_stack_summary *ts_stack_get_summary(t_stack *, t_stack_version);
t_u32 ts_stack_error_cost(const t_stack *, t_stack_version version);
bool ts_stack_merge(t_stack *, t_stack_version, t_stack_version);
bool ts_stack_can_merge(t_stack *, t_stack_version, t_stack_version);
t_subtree ts_stack_resume(t_stack *, t_stack_version);
void ts_stack_pause(t_stack *, t_stack_version, t_subtree);
void ts_stack_halt(t_stack *, t_stack_version);
bool ts_stack_is_active(const t_stack *, t_stack_version);
bool ts_stack_is_paused(const t_stack *, t_stack_version);
bool ts_stack_is_halted(const t_stack *, t_stack_version);
void ts_stack_renumber_version(t_stack *, t_stack_version, t_stack_version);
void ts_stack_swap_versions(t_stack *, t_stack_version, t_stack_version);
t_stack_version ts_stack_copy_version(t_stack *, t_stack_version);
void ts_stack_remove_version(t_stack *, t_stack_version);
void ts_stack_clear(t_stack *);

#endif // PARSE_STACK_H
