/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_str.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:46:53 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:52:13 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC_STR_H
# define VEC_STR_H

# include "me/types.h"

/// @brief A function that takes two t_str and compare them
typedef bool		(*t_vec_str_sort_fn)(t_str *, t_str *);
/// @brief A function that free an t_str
typedef void		(*t_free_str_item)(t_str);

/// @brief A dynamic array of t_str
typedef struct s_vec_str
{
	t_free_str_item	free_func;
	t_usize			len;
	t_usize			capacity;
	t_str			*buffer;
}					t_vec_str;

/// @brief Create a new vec_str with a given capacity
/// @param capacity The capacity of the new vec_str (in terms of elements)
/// @param free_function The function that will be used to free the elements of
/// 	the vec_str
t_vec_str			vec_str_new(t_usize capacity,
						t_free_str_item free_function);
/// @brief Push an element to the last position of the vec_str
/// @param vec The vec_str to push the element to
/// @param element The element to push
t_error				vec_str_push(t_vec_str *vec, t_str element);

/// @brief Push an element to the first position of the vec_str
/// @param vec The vec_str to push the element to
/// @param element The element to push
/// @note This operation is O(n)
t_error				vec_str_push_front(t_vec_str *vec, t_str element);

/// @brief Get the last element from the vec_str, and remove it from the vec_str
/// @param vec The vec_str to get the element from
/// @param[out] out The last element of the vec_str
/// @return true if the operation failed, false otherwise
t_error				vec_str_pop(t_vec_str *vec, t_str *value);

/// @brief Get the first element from the vec_str,
///		and remove it from the vec_str
/// @param vec The vec_str to get the element from
/// @param[out] out The first element of the vec_str
/// @return true if the operation failed, false otherwise
/// @note This operation is O(n)
t_error				vec_str_pop_front(t_vec_str *vec, t_str *value);

/// @brief Free the vector and all its elements
/// @param vec The vec_str to free
void				vec_str_free(t_vec_str vec);

/// @brief Make the vec_str at least the given capacity
/// @param vec The vec_str to reserve
/// @param wanted_capacity The minimum capacity to reserve
/// @return true if the operation failed, false otherwise
t_error				vec_str_reserve(t_vec_str *vec, t_usize wanted_capacity);

/// @brief Run the function and returns the index of the first element that 
/// 	returns true
/// @param vec The vec_str to search in
/// @param fn The function to run on each element
/// @param[out] index The index of the first element that returns true
t_error				vec_str_find(t_vec_str *vec, bool (*fn)(const t_str *),
						t_usize *index);

/// @brief Run the function and returns the index of the first element that 
/// 	returns true, but starting at index starting_index
/// @param vec The vec_str to search in
/// @param fn The function to run on each element
/// @param starting_index The index to start the search from
/// @param[out] index The index of the first element that returns true
t_error				vec_str_find_starting(t_vec_str *vec,
						bool (*fn)(const t_str *), t_usize starting_index,
						t_usize *index);

/// @brief Run the function on every element of the vec_str and returns if all 
/// 	elements returned true
/// @param vec The vec_str to search in
/// @param fn The function to run on each element
/// @param[out] result The result of the operation
/// @return true if the operation failed, false otherwise
/// @note If the vec_str is empty, result will be true
t_error				vec_str_all(t_vec_str *vec, bool (*fn)(const t_str *),
						bool *result);

/// @brief Run the function on every element of the vec_str and returns if any 
/// 	element returned true
/// @param vec The vec_str to search in
/// @param fn The function to run on each element
/// @param[out] result The result of the operation
/// @return true if the operation failed, false otherwise
/// @note If the vec_str is empty, result will be false
t_error				vec_str_any(t_vec_str *vec, bool (*fn)(const t_str *),
						bool *result);

/// @brief Run the function on every element of the vec_str
/// @param vec The vec_str to iterate over
/// @param fn The function to run on each element
/// @param state The state to pass to the function
void				vec_str_iter(t_vec_str *vec, void (*fn)(t_usize index,
							t_str *value, void *state), void *state);

/// @brief Reverse the order of the elements in the vec_str
/// @param vec The vec_str to reverse
void				vec_str_reverse(t_vec_str *vec);

/// @brief Sort the elements of the vec_str
/// @param vec The vec_str to sort
/// @param is_sorted The function to use to compare the elements
void				vec_str_sort(t_vec_str *vec, t_vec_str_sort_fn is_sorted);

/// @brief Get a pointer to the last element of the vec_str
/// @param vec The vec_str to get the element from
/// @param[out] out A pointer to the last element of the vec_str
/// @return true if the operation failed, false otherwise
t_error				vec_str_back(t_vec_str *vec, t_str **out);

#endif
