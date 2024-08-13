/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_pid.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:46:53 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/09 17:53:00 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC_PID_H
#define VEC_PID_H

#include "me/os/os.h"
#include "me/types.h"

/// @brief A function that takes two t_pid and compare them
typedef bool (*t_vec_pid_sort_fn)(t_pid *, t_pid *);
/// @brief A function that free an t_pid
typedef void (*t_free_pid_item)(t_pid);

/// @brief A dynamic array of t_pid
typedef struct s_vec_pid
{
	t_free_pid_item free_func;
	t_usize					len;
	t_usize					capacity;
	t_pid		   *buffer;
} t_vec_pid;

/// @brief Create a new vec_pid with a given capacity
/// @param capacity The capacity of the new vec_pid (in terms of elements)
/// @param free_function The function that will be used to free the elements of the vec_pid
t_vec_pid vec_pid_new(t_usize capacity, t_free_pid_item free_function);
/// @brief Push an element to the last position of the vec_pid
/// @param vec The vec_pid to push the element to
/// @param element The element to push
t_error vec_pid_push(t_vec_pid *vec, t_pid element);

/// @brief Push an element to the first position of the vec_pid
/// @param vec The vec_pid to push the element to
/// @param element The element to push
/// @note This operation is O(n)
t_error vec_pid_push_front(t_vec_pid *vec, t_pid	  element);

/// @brief Get the last element from the vec_pid, and remove it from the vec_pid
/// @param vec The vec_pid to get the element from
/// @param[out] out The last element of the vec_pid
/// @return true if the operation failed, false otherwise
t_error vec_pid_pop(t_vec_pid *vec, t_pid *value);


/// @brief Get the first element from the vec_pid, and remove it from the vec_pid
/// @param vec The vec_pid to get the element from
/// @param[out] out The first element of the vec_pid
/// @return true if the operation failed, false otherwise
/// @note This operation is O(n)
t_error vec_pid_pop_front(t_vec_pid *vec, t_pid *value);

/// @brief Free the vector and all its elements
/// @param vec The vec_pid to free
void	vec_pid_free(t_vec_pid vec);

/// @brief Make the vec_pid at least the given capacity
/// @param vec The vec_pid to reserve
/// @param wanted_capacity The minimum capacity to reserve
/// @return true if the operation failed, false otherwise
t_error vec_pid_reserve(t_vec_pid *vec, t_usize wanted_capacity);

/// @brief Run the function and returns the index of the first element that returns true
/// @param vec The vec_pid to search in
/// @param fn The function to run on each element
/// @param[out] index The index of the first element that returns true
t_error vec_pid_find(t_vec_pid *vec, bool (*fn)(const t_pid *), t_usize *index);


/// @brief Run the function and returns the index of the first element that returns true, but starting at index starting_index
/// @param vec The vec_pid to search in
/// @param fn The function to run on each element
/// @param starting_index The index to start the search from
/// @param[out] index The index of the first element that returns true
t_error vec_pid_find_starting(t_vec_pid *vec, bool (*fn)(const t_pid *), t_usize starting_index, t_usize *index);

/// @brief Run the function on every element of the vec_pid and returns if all elements returned true
/// @param vec The vec_pid to search in
/// @param fn The function to run on each element
/// @param[out] result The result of the operation
/// @return true if the operation failed, false otherwise
/// @note If the vec_pid is empty, result will be true
t_error vec_pid_all(t_vec_pid *vec, bool (*fn)(const t_pid *), bool *result);

/// @brief Run the function on every element of the vec_pid and returns if any element returned true
/// @param vec The vec_pid to search in
/// @param fn The function to run on each element
/// @param[out] result The result of the operation
/// @return true if the operation failed, false otherwise
/// @note If the vec_pid is empty, result will be false
t_error vec_pid_any(t_vec_pid *vec, bool (*fn)(const t_pid *), bool *result);

/// @brief Run the function on every element of the vec_pid
/// @param vec The vec_pid to iterate over
/// @param fn The function to run on each element
/// @param state The state to pass to the function
void	vec_pid_iter(t_vec_pid *vec, void (*fn)(t_usize index, t_pid *value, void *state), void *state);

/// @brief Reverse the order of the elements in the vec_pid
/// @param vec The vec_pid to reverse
void	vec_pid_reverse(t_vec_pid *vec);

/// @brief Sort the elements of the vec_pid
/// @param vec The vec_pid to sort
/// @param is_sorted The function to use to compare the elements
void	vec_pid_sort(t_vec_pid		  *vec, t_vec_pid_sort_fn is_sorted);

/// @brief Get a pointer to the last element of the vec_pid
/// @param vec The vec_pid to get the element from
/// @param[out] out A pointer to the last element of the vec_pid
/// @return true if the operation failed, false otherwise
t_error vec_pid_back(t_vec_pid *vec, t_pid **out);

#endif
