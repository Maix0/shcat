/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_parser_range.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:46:53 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/09 17:53:00 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC_PARSER_RANGE_H
#define VEC_PARSER_RANGE_H

#include "parser/types/types_parser_range.h"
#include "me/types.h"

/// @brief A function that takes two t_parser_range and compare them
typedef bool (*t_vec_parser_range_sort_fn)(t_parser_range *, t_parser_range *);
/// @brief A function that free an t_parser_range
typedef void (*t_free_parser_range_item)(t_parser_range);

/// @brief A dynamic array of t_parser_range
typedef struct s_vec_parser_range
{
	t_free_parser_range_item free_func;
	t_usize					len;
	t_usize					capacity;
	t_parser_range		   *buffer;
} t_vec_parser_range;

/// @brief Create a new vec_parser_range with a given capacity
/// @param capacity The capacity of the new vec_parser_range (in terms of elements)
/// @param free_function The function that will be used to free the elements of the vec_parser_range
t_vec_parser_range vec_parser_range_new(t_usize capacity, t_free_parser_range_item free_function);
/// @brief Push an element to the last position of the vec_parser_range
/// @param vec The vec_parser_range to push the element to
/// @param element The element to push
t_error vec_parser_range_push(t_vec_parser_range *vec, t_parser_range element);

/// @brief Push an element to the first position of the vec_parser_range
/// @param vec The vec_parser_range to push the element to
/// @param element The element to push
/// @note This operation is O(n)
t_error vec_parser_range_push_front(t_vec_parser_range *vec, t_parser_range	  element);

/// @brief Get the last element from the vec_parser_range, and remove it from the vec_parser_range
/// @param vec The vec_parser_range to get the element from
/// @param[out] out The last element of the vec_parser_range
/// @return true if the operation failed, false otherwise
t_error vec_parser_range_pop(t_vec_parser_range *vec, t_parser_range *value);


/// @brief Get the first element from the vec_parser_range, and remove it from the vec_parser_range
/// @param vec The vec_parser_range to get the element from
/// @param[out] out The first element of the vec_parser_range
/// @return true if the operation failed, false otherwise
/// @note This operation is O(n)
t_error vec_parser_range_pop_front(t_vec_parser_range *vec, t_parser_range *value);

/// @brief Free the vector and all its elements
/// @param vec The vec_parser_range to free
void	vec_parser_range_free(t_vec_parser_range vec);

/// @brief Make the vec_parser_range at least the given capacity
/// @param vec The vec_parser_range to reserve
/// @param wanted_capacity The minimum capacity to reserve
/// @return true if the operation failed, false otherwise
t_error vec_parser_range_reserve(t_vec_parser_range *vec, t_usize wanted_capacity);

/// @brief Run the function and returns the index of the first element that returns true
/// @param vec The vec_parser_range to search in
/// @param fn The function to run on each element
/// @param[out] index The index of the first element that returns true
t_error vec_parser_range_find(t_vec_parser_range *vec, bool (*fn)(const t_parser_range *), t_usize *index);


/// @brief Run the function and returns the index of the first element that returns true, but starting at index starting_index
/// @param vec The vec_parser_range to search in
/// @param fn The function to run on each element
/// @param starting_index The index to start the search from
/// @param[out] index The index of the first element that returns true
t_error vec_parser_range_find_starting(t_vec_parser_range *vec, bool (*fn)(const t_parser_range *), t_usize starting_index, t_usize *index);

/// @brief Run the function on every element of the vec_parser_range and returns if all elements returned true
/// @param vec The vec_parser_range to search in
/// @param fn The function to run on each element
/// @param[out] result The result of the operation
/// @return true if the operation failed, false otherwise
/// @note If the vec_parser_range is empty, result will be true
t_error vec_parser_range_all(t_vec_parser_range *vec, bool (*fn)(const t_parser_range *), bool *result);

/// @brief Run the function on every element of the vec_parser_range and returns if any element returned true
/// @param vec The vec_parser_range to search in
/// @param fn The function to run on each element
/// @param[out] result The result of the operation
/// @return true if the operation failed, false otherwise
/// @note If the vec_parser_range is empty, result will be false
t_error vec_parser_range_any(t_vec_parser_range *vec, bool (*fn)(const t_parser_range *), bool *result);

/// @brief Run the function on every element of the vec_parser_range
/// @param vec The vec_parser_range to iterate over
/// @param fn The function to run on each element
/// @param state The state to pass to the function
void	vec_parser_range_iter(t_vec_parser_range *vec, void (*fn)(t_usize index, t_parser_range *value, void *state), void *state);

/// @brief Reverse the order of the elements in the vec_parser_range
/// @param vec The vec_parser_range to reverse
void	vec_parser_range_reverse(t_vec_parser_range *vec);

/// @brief Sort the elements of the vec_parser_range
/// @param vec The vec_parser_range to sort
/// @param is_sorted The function to use to compare the elements
void	vec_parser_range_sort(t_vec_parser_range		  *vec, t_vec_parser_range_sort_fn is_sorted);

/// @brief Get a pointer to the last element of the vec_parser_range
/// @param vec The vec_parser_range to get the element from
/// @param[out] out A pointer to the last element of the vec_parser_range
/// @return true if the operation failed, false otherwise
t_error vec_parser_range_back(t_vec_parser_range *vec, t_parser_range **out);

#endif
