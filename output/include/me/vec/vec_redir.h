/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_redir.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:46:53 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/09 17:53:00 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC_REDIR_H
#define VEC_REDIR_H

#include "exec/spawn_cmd/_redirection.h"
#include "me/types.h"

/// @brief A function that takes two t_exec_redirect and compare them
typedef bool (*t_vec_redir_sort_fn)(t_exec_redirect *, t_exec_redirect *);
/// @brief A function that free an t_exec_redirect
typedef void (*t_free_redir_item)(t_exec_redirect);

/// @brief A dynamic array of t_exec_redirect
typedef struct s_vec_redir
{
	t_free_redir_item free_func;
	t_usize					len;
	t_usize					capacity;
	t_exec_redirect		   *buffer;
} t_vec_redir;

/// @brief Create a new vec_redir with a given capacity
/// @param capacity The capacity of the new vec_redir (in terms of elements)
/// @param free_function The function that will be used to free the elements of the vec_redir
t_vec_redir vec_redir_new(t_usize capacity, t_free_redir_item free_function);
/// @brief Push an element to the last position of the vec_redir
/// @param vec The vec_redir to push the element to
/// @param element The element to push
t_error vec_redir_push(t_vec_redir *vec, t_exec_redirect element);

/// @brief Push an element to the first position of the vec_redir
/// @param vec The vec_redir to push the element to
/// @param element The element to push
/// @note This operation is O(n)
t_error vec_redir_push_front(t_vec_redir *vec, t_exec_redirect	  element);

/// @brief Get the last element from the vec_redir, and remove it from the vec_redir
/// @param vec The vec_redir to get the element from
/// @param[out] out The last element of the vec_redir
/// @return true if the operation failed, false otherwise
t_error vec_redir_pop(t_vec_redir *vec, t_exec_redirect *value);


/// @brief Get the first element from the vec_redir, and remove it from the vec_redir
/// @param vec The vec_redir to get the element from
/// @param[out] out The first element of the vec_redir
/// @return true if the operation failed, false otherwise
/// @note This operation is O(n)
t_error vec_redir_pop_front(t_vec_redir *vec, t_exec_redirect *value);

/// @brief Free the vector and all its elements
/// @param vec The vec_redir to free
void	vec_redir_free(t_vec_redir vec);

/// @brief Make the vec_redir at least the given capacity
/// @param vec The vec_redir to reserve
/// @param wanted_capacity The minimum capacity to reserve
/// @return true if the operation failed, false otherwise
t_error vec_redir_reserve(t_vec_redir *vec, t_usize wanted_capacity);

/// @brief Run the function and returns the index of the first element that returns true
/// @param vec The vec_redir to search in
/// @param fn The function to run on each element
/// @param[out] index The index of the first element that returns true
t_error vec_redir_find(t_vec_redir *vec, bool (*fn)(const t_exec_redirect *), t_usize *index);


/// @brief Run the function and returns the index of the first element that returns true, but starting at index starting_index
/// @param vec The vec_redir to search in
/// @param fn The function to run on each element
/// @param starting_index The index to start the search from
/// @param[out] index The index of the first element that returns true
t_error vec_redir_find_starting(t_vec_redir *vec, bool (*fn)(const t_exec_redirect *), t_usize starting_index, t_usize *index);

/// @brief Run the function on every element of the vec_redir and returns if all elements returned true
/// @param vec The vec_redir to search in
/// @param fn The function to run on each element
/// @param[out] result The result of the operation
/// @return true if the operation failed, false otherwise
/// @note If the vec_redir is empty, result will be true
t_error vec_redir_all(t_vec_redir *vec, bool (*fn)(const t_exec_redirect *), bool *result);

/// @brief Run the function on every element of the vec_redir and returns if any element returned true
/// @param vec The vec_redir to search in
/// @param fn The function to run on each element
/// @param[out] result The result of the operation
/// @return true if the operation failed, false otherwise
/// @note If the vec_redir is empty, result will be false
t_error vec_redir_any(t_vec_redir *vec, bool (*fn)(const t_exec_redirect *), bool *result);

/// @brief Run the function on every element of the vec_redir
/// @param vec The vec_redir to iterate over
/// @param fn The function to run on each element
/// @param state The state to pass to the function
void	vec_redir_iter(t_vec_redir *vec, void (*fn)(t_usize index, t_exec_redirect *value, void *state), void *state);

/// @brief Reverse the order of the elements in the vec_redir
/// @param vec The vec_redir to reverse
void	vec_redir_reverse(t_vec_redir *vec);

/// @brief Sort the elements of the vec_redir
/// @param vec The vec_redir to sort
/// @param is_sorted The function to use to compare the elements
void	vec_redir_sort(t_vec_redir		  *vec, t_vec_redir_sort_fn is_sorted);

/// @brief Get a pointer to the last element of the vec_redir
/// @param vec The vec_redir to get the element from
/// @param[out] out A pointer to the last element of the vec_redir
/// @return true if the operation failed, false otherwise
t_error vec_redir_back(t_vec_redir *vec, t_exec_redirect **out);

#endif
