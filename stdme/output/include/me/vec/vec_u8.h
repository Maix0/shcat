/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_u8.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:46:53 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:52:13 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC_U8_H
# define VEC_U8_H

# include "me/types.h"

/// @brief A function that takes two t_u8 and compare them
typedef bool		(*t_vec_u8_sort_fn)(t_u8 *, t_u8 *);
/// @brief A function that free an t_u8
typedef void		(*t_free_u8_item)(t_u8);

/// @brief A dynamic array of t_u8
typedef struct s_vec_u8
{
	t_free_u8_item	free_func;
	t_usize			len;
	t_usize			capacity;
	t_u8			*buffer;
}					t_vec_u8;

/// @brief Create a new vec_u8 with a given capacity
/// @param capacity The capacity of the new vec_u8 (in terms of elements)
/// @param free_function The function that will be used to free the elements of 
/// 	the vec_u8
t_vec_u8			vec_u8_new(t_usize capacity, t_free_u8_item free_function);
/// @brief Push an element to the last position of the vec_u8
/// @param vec The vec_u8 to push the element to
/// @param element The element to push
t_error				vec_u8_push(t_vec_u8 *vec, t_u8 element);

/// @brief Push an element to the first position of the vec_u8
/// @param vec The vec_u8 to push the element to
/// @param element The element to push
/// @note This operation is O(n)
t_error				vec_u8_push_front(t_vec_u8 *vec, t_u8 element);

/// @brief Get the last element from the vec_u8, and remove it from the vec_u8
/// @param vec The vec_u8 to get the element from
/// @param[out] out The last element of the vec_u8
/// @return true if the operation failed, false otherwise
t_error				vec_u8_pop(t_vec_u8 *vec, t_u8 *value);

/// @brief Get the first element from the vec_u8, and remove it from the vec_u8
/// @param vec The vec_u8 to get the element from
/// @param[out] out The first element of the vec_u8
/// @return true if the operation failed, false otherwise
/// @note This operation is O(n)
t_error				vec_u8_pop_front(t_vec_u8 *vec, t_u8 *value);

/// @brief Free the vector and all its elements
/// @param vec The vec_u8 to free
void				vec_u8_free(t_vec_u8 vec);

/// @brief Make the vec_u8 at least the given capacity
/// @param vec The vec_u8 to reserve
/// @param wanted_capacity The minimum capacity to reserve
/// @return true if the operation failed, false otherwise
t_error				vec_u8_reserve(t_vec_u8 *vec, t_usize wanted_capacity);

/// @brief Run the function and returns the index of the first element that 
/// 	returns true
/// @param vec The vec_u8 to search in
/// @param fn The function to run on each element
/// @param[out] index The index of the first element that returns true
t_error				vec_u8_find(t_vec_u8 *vec, bool (*fn)(const t_u8 *),
						t_usize *index);

/// @brief Run the function and returns the index of the first element that 
/// 	returns true, but starting at index starting_index
/// @param vec The vec_u8 to search in
/// @param fn The function to run on each element
/// @param starting_index The index to start the search from
/// @param[out] index The index of the first element that returns true
t_error				vec_u8_find_starting(t_vec_u8 *vec,
						bool (*fn)(const t_u8 *), t_usize starting_index,
						t_usize *index);

/// @brief Run the function on every element of the vec_u8 and returns if all 
/// 	elements returned true
/// @param vec The vec_u8 to search in
/// @param fn The function to run on each element
/// @param[out] result The result of the operation
/// @return true if the operation failed, false otherwise
/// @note If the vec_u8 is empty, result will be true
t_error				vec_u8_all(t_vec_u8 *vec, bool (*fn)(const t_u8 *),
						bool *result);

/// @brief Run the function on every element of the vec_u8 and returns if any 
/// 	element returned true
/// @param vec The vec_u8 to search in
/// @param fn The function to run on each element
/// @param[out] result The result of the operation
/// @return true if the operation failed, false otherwise
/// @note If the vec_u8 is empty, result will be false
t_error				vec_u8_any(t_vec_u8 *vec, bool (*fn)(const t_u8 *),
						bool *result);

/// @brief Run the function on every element of the vec_u8
/// @param vec The vec_u8 to iterate over
/// @param fn The function to run on each element
/// @param state The state to pass to the function
void				vec_u8_iter(t_vec_u8 *vec, void (*fn)(t_usize index,
							t_u8 *value, void *state), void *state);

/// @brief Reverse the order of the elements in the vec_u8
/// @param vec The vec_u8 to reverse
void				vec_u8_reverse(t_vec_u8 *vec);

/// @brief Sort the elements of the vec_u8
/// @param vec The vec_u8 to sort
/// @param is_sorted The function to use to compare the elements
void				vec_u8_sort(t_vec_u8 *vec, t_vec_u8_sort_fn is_sorted);

/// @brief Get a pointer to the last element of the vec_u8
/// @param vec The vec_u8 to get the element from
/// @param[out] out A pointer to the last element of the vec_u8
/// @return true if the operation failed, false otherwise
t_error				vec_u8_back(t_vec_u8 *vec, t_u8 **out);

#endif
