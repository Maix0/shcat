/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_estr.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:46:53 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/09 17:53:00 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC_ESTR_H
#define VEC_ESTR_H

#include "exec/_tuple_expanded_str.h"
#include "me/types.h"

/// @brief A function that takes two t_expandable_str and compare them
typedef bool (*t_vec_estr_sort_fn)(t_expandable_str *, t_expandable_str *);
/// @brief A function that free an t_expandable_str
typedef void (*t_free_estr_item)(t_expandable_str);

/// @brief A dynamic array of t_expandable_str
typedef struct s_vec_estr t_vec_estr;

struct s_vec_estr
{
	t_free_estr_item free_func;
	t_usize					len;
	t_usize					capacity;
	t_expandable_str		   *buffer;
};

struct s_vec_estr_splice_arguments
{
	t_usize				 index;
	t_usize				 old_count;
	t_usize				 new_count;
	const t_expandable_str *elements;
};

/// @brief Create a new vec_estr with a given capacity
/// @param capacity The capacity of the new vec_estr (in terms of
/// elements)
/// @param free_function The function that will be used to free the elements of
/// the vec_estr
t_vec_estr vec_estr_new(t_usize				  capacity,
									  t_free_estr_item free_function);
/// @brief Push an element to the last position of the vec_estr
/// @param vec The vec_estr to push the element to
/// @param element The element to push
t_error vec_estr_push(t_vec_estr *vec, t_expandable_str element);

/// @brief Push an element to the first position of the vec_estr
/// @param vec The vec_estr to push the element to
/// @param element The element to push
/// @note This operation is O(n)
t_error vec_estr_push_front(t_vec_estr *vec,
								   t_expandable_str	  element);

/// @brief Get the last element from the vec_estr, and remove it from the
/// vec_estr
/// @param vec The vec_estr to get the element from
/// @param[out] out The last element of the vec_estr
/// @return true if the operation failed, false otherwise
t_error vec_estr_pop(t_vec_estr *vec, t_expandable_str *value);

/// @brief Get the first element from the vec_estr, and remove it from
/// the vec_estr
/// @param vec The vec_estr to get the element from
/// @param[out] out The first element of the vec_estr
/// @return true if the operation failed, false otherwise
/// @note This operation is O(n)
t_error vec_estr_pop_front(t_vec_estr *vec, t_expandable_str *value);

/// @brief Free the vector and all its elements
/// @param vec The vec_estr to free
void vec_estr_free(t_vec_estr vec);

/// @brief Make the vec_estr at least the given capacity
/// @param vec The vec_estr to reserve
/// @param wanted_capacity The minimum capacity to reserve
/// @return true if the operation failed, false otherwise
t_error vec_estr_reserve(t_vec_estr *vec,
								t_usize			   wanted_capacity);

/// @brief Run the function and returns the index of the first element that
/// returns true
/// @param vec The vec_estr to search in
/// @param fn The function to run on each element
/// @param[out] index The index of the first element that returns true
t_error vec_estr_find(t_vec_estr *vec,
							 bool (*fn)(const t_expandable_str *), t_usize *index);

/// @brief Run the function and returns the index of the first element that
/// returns true, but starting at index starting_index
/// @param vec The vec_estr to search in
/// @param fn The function to run on each element
/// @param starting_index The index to start the search from
/// @param[out] index The index of the first element that returns true
t_error vec_estr_find_starting(t_vec_estr *vec,
									  bool (*fn)(const t_expandable_str *),
									  t_usize starting_index, t_usize *index);

/// @brief Run the function on every element of the vec_estr and returns
/// if all elements returned true
/// @param vec The vec_estr to search in
/// @param fn The function to run on each element
/// @param[out] result The result of the operation
/// @return true if the operation failed, false otherwise
/// @note If the vec_estr is empty, result will be true
t_error vec_estr_all(t_vec_estr *vec,
							bool (*fn)(const t_expandable_str *), bool *result);

/// @brief Run the function on every element of the vec_estr and returns
/// if any element returned true
/// @param vec The vec_estr to search in
/// @param fn The function to run on each element
/// @param[out] result The result of the operation
/// @return true if the operation failed, false otherwise
/// @note If the vec_estr is empty, result will be false
t_error vec_estr_any(t_vec_estr *vec,
							bool (*fn)(const t_expandable_str *), bool *result);

/// @brief Run the function on every element of the vec_estr
/// @param vec The vec_estr to iterate over
/// @param fn The function to run on each element
/// @param state The state to pass to the function
void vec_estr_iter(t_vec_estr *vec,
						  void (*fn)(t_usize index, t_expandable_str *value,
									 void *state),
						  void *state);

/// @brief Reverse the order of the elements in the vec_estr
/// @param vec The vec_estr to reverse
void vec_estr_reverse(t_vec_estr *vec);

/// @brief Sort the elements of the vec_estr
/// @param vec The vec_estr to sort
/// @param is_sorted The function to use to compare the elements
void vec_estr_sort(t_vec_estr		   *vec,
						  t_vec_estr_sort_fn is_sorted);

/// @brief Get a pointer to the last element of the vec_estr
/// @param vec The vec_estr to get the element from
/// @param[out] out A pointer to the last element of the vec_estr
/// @return true if the operation failed, false otherwise
t_error vec_estr_back(t_vec_estr *vec, t_expandable_str **out);

/// @brief Get a pointer to the i'th element, or NULL otherwise
/// @param vec The vec_estr to get the element from
/// @return A pointer to the element or NULL
t_expandable_str *vec_estr_get(t_vec_estr *vec, t_usize i);

/// @brief Get a pointer to the last element, or NULL otherwise
/// @param vec The vec_estr to get the element from
/// @return A pointer to the last element or NULL
t_expandable_str *vec_estr_last(t_vec_estr *vec);

/// @brief Perform a simple bytewise copy into the other vector
/// @param vec The vec_estr to be copied from
/// @param dest The vec_estr to be copied to
void vec_estr_copy_into(t_vec_estr *vec, t_vec_estr *dest);

/// read code lol
void vec_estr_splice(t_vec_estr						 *self,
							struct s_vec_estr_splice_arguments args);

struct s_vec_estr_splice_arguments vec_estr_splice_args(
	t_usize index, t_usize old_count, t_usize new_count,
	const t_expandable_str *elements);

#endif
