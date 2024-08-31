/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 12:03:07 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/31 15:27:32 by maiboyer         ###   ########.fr       */
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
	SubtreeArray subtrees;
	t_stack_version version;
};

struct s_stack_summary_entry
{
	Length	  position;
	t_u32	  depth;
	TSStateId state;
};

// Create a stack.
t_stack *ts_stack_new(/*SubtreePool **/);

// Release the memory reserved for a given stack.
void ts_stack_delete(t_stack *);

// Get the stack's current number of versions.
t_u32 ts_stack_version_count(const t_stack *);

// Get the state at the top of the given version of the stack. If the stack is
// empty, this returns the initial state, 0.
TSStateId ts_stack_state(const t_stack *, t_stack_version);

// Get the last external token associated with a given version of the stack.
Subtree ts_stack_last_external_token(const t_stack *, t_stack_version);

// Set the last external token associated with a given version of the stack.
void ts_stack_set_last_external_token(t_stack *, t_stack_version, Subtree);

// Get the position of the given version of the stack within the document.
Length ts_stack_position(const t_stack *, t_stack_version);

// Push a tree and state onto the given version of the stack.
//
// This transfers ownership of the tree to the t_stack. Callers that
// need to retain ownership of the tree for their own purposes should
// first retain the tree.
void ts_stack_push(t_stack *, t_stack_version, Subtree, bool, TSStateId);

// Pop the given number of entries from the given version of the stack. This
// operation can increase the number of stack versions by revealing multiple
// versions which had previously been merged. It returns an array that
// specifies the index of each revealed version and the trees that were
// removed from that version.
t_stack_slice_array ts_stack_pop_count(t_stack *, t_stack_version, t_u32 count);

// Remove an error at the top of the given version of the stack.
SubtreeArray ts_stack_pop_error(t_stack *, t_stack_version);

// Remove any pending trees from the top of the given version of the stack.
t_stack_slice_array ts_stack_pop_pending(t_stack *, t_stack_version);

// Remove any all trees from the given version of the stack.
t_stack_slice_array ts_stack_pop_all(t_stack *, t_stack_version);

// Get the maximum number of tree nodes reachable from this version of the stack
// since the last error was detected.
t_u32 ts_stack_node_count_since_error(const t_stack *, t_stack_version);

int ts_stack_dynamic_precedence(t_stack *, t_stack_version);

bool ts_stack_has_advanced_since_error(const t_stack *, t_stack_version);

// Compute a summary of all the parse states near the top of the given
// version of the stack and store the summary for later retrieval.
void ts_stack_record_summary(t_stack *, t_stack_version, t_u32 max_depth);

// Retrieve a summary of all the parse states near the top of the
// given version of the stack.
t_stack_summary *ts_stack_get_summary(t_stack *, t_stack_version);

// Get the total cost of all errors on the given version of the stack.
t_u32 ts_stack_error_cost(const t_stack *, t_stack_version version);

// Merge the given two stack versions if possible, returning true
// if they were successfully merged and false otherwise.
bool ts_stack_merge(t_stack *, t_stack_version, t_stack_version);

// Determine whether the given two stack versions can be merged.
bool ts_stack_can_merge(t_stack *, t_stack_version, t_stack_version);

Subtree ts_stack_resume(t_stack *, t_stack_version);

void ts_stack_pause(t_stack *, t_stack_version, Subtree);

void ts_stack_halt(t_stack *, t_stack_version);

bool ts_stack_is_active(const t_stack *, t_stack_version);

bool ts_stack_is_paused(const t_stack *, t_stack_version);

bool ts_stack_is_halted(const t_stack *, t_stack_version);

void ts_stack_renumber_version(t_stack *, t_stack_version, t_stack_version);

void ts_stack_swap_versions(t_stack *, t_stack_version, t_stack_version);

t_stack_version ts_stack_copy_version(t_stack *, t_stack_version);

// Remove the given version from the stack.
void ts_stack_remove_version(t_stack *, t_stack_version);

void ts_stack_clear(t_stack *);

#endif // PARSE_STACK_H
