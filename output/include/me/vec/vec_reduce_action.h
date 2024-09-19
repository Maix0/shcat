/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_reduce_action.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:09:05 by rparodi           #+#    #+#             */
/*   Updated: 2024/09/19 17:45:30 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC_REDUCE_ACTION_H
# define VEC_REDUCE_ACTION_H

# include "parser/inner/reduce_action_inner.h"
# include "me/types.h"

/// @brief A function that takes two t_reduce_action and compare them
typedef bool	(*t_vec_reduce_action_sort_fn)(\
	t_reduce_action *, t_reduce_action *);
/// @brief A function that free an t_reduce_action
typedef void	(*t_free_reduce_action_item)(t_reduce_action);

/// @brief A dynamic array of t_reduce_action
typedef struct s_vec_reduce_action
{
	t_free_reduce_action_item	free_func;
	t_usize						len;
	t_usize						capacity;
	t_reduce_action				*buffer;
}								t_vec_reduce_action;

struct s_vec_reduce_action_splice_arguments
{
	t_usize					index;
	t_usize					old_count;
	t_usize					new_count;
	const t_reduce_action	*elements;
};

/// @brief Create a new vec_reduce_action with a given capacity
/// @param capacity The capacity of the new vec_reduce_action (in terms of
/// elements)
/// @param free_function The function that will be used to free the elements of
/// the vec_reduce_action
t_vec_reduce_action							vec_reduce_action_new(\
	t_usize capacity, t_free_reduce_action_item free_function);

/// @brief Push an element to the last position of the vec_reduce_action
/// @param vec The vec_reduce_action to push the element to
/// @param element The element to push
t_error										vec_reduce_action_push(\
	t_vec_reduce_action *vec, t_reduce_action element);

/// @brief Push an element to the first position of the vec_reduce_action
/// @param vec The vec_reduce_action to push the element to
/// @param element The element to push
/// @note This operation is O(n)
t_error										vec_reduce_action_push_front(\
	t_vec_reduce_action *vec, t_reduce_action element);

/// @brief Get the last element from the vec_reduce_action, 
/// and remove it from the vec_reduce_action
/// @param vec The vec_reduce_action to get the element from
/// @param[out] out The last element of the vec_reduce_action
/// @return true if the operation failed, false otherwise
t_error										vec_reduce_action_pop(\
	t_vec_reduce_action *vec, t_reduce_action *value);

/// @brief Get the first element from the vec_reduce_action, and remove it from
/// the vec_reduce_action
/// @param vec The vec_reduce_action to get the element from
/// @param[out] out The first element of the vec_reduce_action
/// @return true if the operation failed, false otherwise
/// @note This operation is O(n)
t_error										vec_reduce_action_pop_front(\
	t_vec_reduce_action *vec, t_reduce_action *value);

/// @brief Free the vector and all its elements
/// @param vec The vec_reduce_action to free
void										vec_reduce_action_free(\
	t_vec_reduce_action vec);

/// @brief Make the vec_reduce_action at least the given capacity
/// @param vec The vec_reduce_action to reserve
/// @param wanted_capacity The minimum capacity to reserve
/// @return true if the operation failed, false otherwise
t_error										vec_reduce_action_reserve(\
	t_vec_reduce_action *vec, t_usize wanted_capacity);

/// @brief Run the function and returns the index of the first element that
/// returns true
/// @param vec The vec_reduce_action to search in
/// @param fn The function to run on each element
/// @param[out] index The index of the first element that returns true
t_error										vec_reduce_action_find(\
	t_vec_reduce_action *vec, bool (*fn)(\
	const t_reduce_action *), t_usize *index);

/// @brief Run the function and returns the index of the first element that
/// returns true, but starting at index starting_index
/// @param vec The vec_reduce_action to search in
/// @param fn The function to run on each element
/// @param starting_index The index to start the search from
/// @param[out] index The index of the first element that returns true
t_error										vec_reduce_action_find_starting(\
	t_vec_reduce_action *vec, bool (*fn)(\
	const t_reduce_action *), t_usize starting_index, t_usize *index);

/// @brief Run the function on every element of the 
/// vec_reduce_action and returns if all elements returned true
/// @param vec The vec_reduce_action to search in
/// @param fn The function to run on each element
/// @param[out] result The result of the operation
/// @return true if the operation failed, false otherwise
/// @note If the vec_reduce_action is empty, result will be true
t_error										vec_reduce_action_all(\
	t_vec_reduce_action *vec, bool (*fn)(\
	const t_reduce_action *), bool *result);

/// @brief Run the function on every element 
/// of the vec_reduce_action and returns if any element returned true
/// @param vec The vec_reduce_action to search in
/// @param fn The function to run on each element
/// @param[out] result The result of the operation
/// @return true if the operation failed, false otherwise
/// @note If the vec_reduce_action is empty, result will be false
t_error										vec_reduce_action_any(\
	t_vec_reduce_action *vec, bool (*fn)(\
	const t_reduce_action *), bool *result);

/// @brief Run the function on every element of the vec_reduce_action
/// @param vec The vec_reduce_action to iterate over
/// @param fn The function to run on each element
/// @param state The state to pass to the function
void										vec_reduce_action_iter(\
	t_vec_reduce_action *vec, void (*fn)(\
	t_usize index, t_reduce_action *value, void *state), void *state);

/// @brief Reverse the order of the elements in the vec_reduce_action
/// @param vec The vec_reduce_action to reverse
void										vec_reduce_action_reverse(\
	t_vec_reduce_action *vec);

/// @brief Sort the elements of the vec_reduce_action
/// @param vec The vec_reduce_action to sort
/// @param is_sorted The function to use to compare the elements
void										vec_reduce_action_sort(\
	t_vec_reduce_action *vec, t_vec_reduce_action_sort_fn is_sorted);

/// @brief Get a pointer to the last element of the vec_reduce_action
/// @param vec The vec_reduce_action to get the element from
/// @param[out] out A pointer to the last element of the vec_reduce_action
/// @return true if the operation failed, false otherwise
t_error										vec_reduce_action_back(\
	t_vec_reduce_action *vec, t_reduce_action **out);

/// @brief Get a pointer to the i'th element, or NULL otherwise
/// @param vec The vec_reduce_action to get the element from
/// @return A pointer to the element or NULL
t_reduce_action								*vec_reduce_action_get(\
	t_vec_reduce_action *vec, t_usize i);

/// @brief Get a pointer to the last element, or NULL otherwise
/// @param vec The vec_reduce_action to get the element from
/// @return A pointer to the last element or NULL
t_reduce_action								*vec_reduce_action_last(\
	t_vec_reduce_action *vec);

/// @brief Perform a simple bytewise copy into the other vector
/// @param vec The vec_reduce_action to be copied from
/// @param dest The vec_reduce_action to be copied to
void										vec_reduce_action_copy_into(\
	t_vec_reduce_action *vec, t_vec_reduce_action *dest);

/// read code lol
void										vec_reduce_action_splice(\
	t_vec_reduce_action *self, \
	struct s_vec_reduce_action_splice_arguments args);

struct s_vec_reduce_action_splice_arguments	vec_reduce_action_splice_args( \
	t_usize index, t_usize old_count, t_usize new_count, \
	const t_reduce_action *elements);

#endif
