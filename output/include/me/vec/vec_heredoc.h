/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_heredoc.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:46:53 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/09 17:53:00 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC_HEREDOC_H
#define VEC_HEREDOC_H

#include "parser/inner/heredoc.h"
#include "me/types.h"

/// @brief A function that takes two t_heredoc and compare them
typedef bool (*t_vec_heredoc_sort_fn)(t_heredoc *, t_heredoc *);
/// @brief A function that free an t_heredoc
typedef void (*t_free_heredoc_item)(t_heredoc);

/// @brief A dynamic array of t_heredoc
typedef struct s_vec_heredoc t_vec_heredoc;

struct s_vec_heredoc
{
	t_free_heredoc_item free_func;
	t_usize					len;
	t_usize					capacity;
	t_heredoc		   *buffer;
};

struct s_vec_heredoc_splice_arguments
{
	t_usize				 index;
	t_usize				 old_count;
	t_usize				 new_count;
	const t_heredoc *elements;
};

/// @brief Create a new vec_heredoc with a given capacity
/// @param capacity The capacity of the new vec_heredoc (in terms of
/// elements)
/// @param free_function The function that will be used to free the elements of
/// the vec_heredoc
t_vec_heredoc vec_heredoc_new(t_usize				  capacity,
									  t_free_heredoc_item free_function);
/// @brief Push an element to the last position of the vec_heredoc
/// @param vec The vec_heredoc to push the element to
/// @param element The element to push
t_error vec_heredoc_push(t_vec_heredoc *vec, t_heredoc element);

/// @brief Push an element to the first position of the vec_heredoc
/// @param vec The vec_heredoc to push the element to
/// @param element The element to push
/// @note This operation is O(n)
t_error vec_heredoc_push_front(t_vec_heredoc *vec,
								   t_heredoc	  element);

/// @brief Get the last element from the vec_heredoc, and remove it from the
/// vec_heredoc
/// @param vec The vec_heredoc to get the element from
/// @param[out] out The last element of the vec_heredoc
/// @return true if the operation failed, false otherwise
t_error vec_heredoc_pop(t_vec_heredoc *vec, t_heredoc *value);

/// @brief Get the first element from the vec_heredoc, and remove it from
/// the vec_heredoc
/// @param vec The vec_heredoc to get the element from
/// @param[out] out The first element of the vec_heredoc
/// @return true if the operation failed, false otherwise
/// @note This operation is O(n)
t_error vec_heredoc_pop_front(t_vec_heredoc *vec, t_heredoc *value);

/// @brief Free the vector and all its elements
/// @param vec The vec_heredoc to free
void vec_heredoc_free(t_vec_heredoc vec);

/// @brief Make the vec_heredoc at least the given capacity
/// @param vec The vec_heredoc to reserve
/// @param wanted_capacity The minimum capacity to reserve
/// @return true if the operation failed, false otherwise
t_error vec_heredoc_reserve(t_vec_heredoc *vec,
								t_usize			   wanted_capacity);

/// @brief Run the function and returns the index of the first element that
/// returns true
/// @param vec The vec_heredoc to search in
/// @param fn The function to run on each element
/// @param[out] index The index of the first element that returns true
t_error vec_heredoc_find(t_vec_heredoc *vec,
							 bool (*fn)(const t_heredoc *), t_usize *index);

/// @brief Run the function and returns the index of the first element that
/// returns true, but starting at index starting_index
/// @param vec The vec_heredoc to search in
/// @param fn The function to run on each element
/// @param starting_index The index to start the search from
/// @param[out] index The index of the first element that returns true
t_error vec_heredoc_find_starting(t_vec_heredoc *vec,
									  bool (*fn)(const t_heredoc *),
									  t_usize starting_index, t_usize *index);

/// @brief Run the function on every element of the vec_heredoc and returns
/// if all elements returned true
/// @param vec The vec_heredoc to search in
/// @param fn The function to run on each element
/// @param[out] result The result of the operation
/// @return true if the operation failed, false otherwise
/// @note If the vec_heredoc is empty, result will be true
t_error vec_heredoc_all(t_vec_heredoc *vec,
							bool (*fn)(const t_heredoc *), bool *result);

/// @brief Run the function on every element of the vec_heredoc and returns
/// if any element returned true
/// @param vec The vec_heredoc to search in
/// @param fn The function to run on each element
/// @param[out] result The result of the operation
/// @return true if the operation failed, false otherwise
/// @note If the vec_heredoc is empty, result will be false
t_error vec_heredoc_any(t_vec_heredoc *vec,
							bool (*fn)(const t_heredoc *), bool *result);

/// @brief Run the function on every element of the vec_heredoc
/// @param vec The vec_heredoc to iterate over
/// @param fn The function to run on each element
/// @param state The state to pass to the function
void vec_heredoc_iter(t_vec_heredoc *vec,
						  void (*fn)(t_usize index, t_heredoc *value,
									 void *state),
						  void *state);

/// @brief Reverse the order of the elements in the vec_heredoc
/// @param vec The vec_heredoc to reverse
void vec_heredoc_reverse(t_vec_heredoc *vec);

/// @brief Sort the elements of the vec_heredoc
/// @param vec The vec_heredoc to sort
/// @param is_sorted The function to use to compare the elements
void vec_heredoc_sort(t_vec_heredoc		   *vec,
						  t_vec_heredoc_sort_fn is_sorted);

/// @brief Get a pointer to the last element of the vec_heredoc
/// @param vec The vec_heredoc to get the element from
/// @param[out] out A pointer to the last element of the vec_heredoc
/// @return true if the operation failed, false otherwise
t_error vec_heredoc_back(t_vec_heredoc *vec, t_heredoc **out);

/// @brief Get a pointer to the i'th element, or NULL otherwise
/// @param vec The vec_heredoc to get the element from
/// @return A pointer to the element or NULL
t_heredoc *vec_heredoc_get(t_vec_heredoc *vec, t_usize i);

/// @brief Get a pointer to the last element, or NULL otherwise
/// @param vec The vec_heredoc to get the element from
/// @return A pointer to the last element or NULL
t_heredoc *vec_heredoc_last(t_vec_heredoc *vec);

/// @brief Perform a simple bytewise copy into the other vector
/// @param vec The vec_heredoc to be copied from
/// @param dest The vec_heredoc to be copied to
void vec_heredoc_copy_into(t_vec_heredoc *vec, t_vec_heredoc *dest);

/// read code lol
void vec_heredoc_splice(t_vec_heredoc						 *self,
							struct s_vec_heredoc_splice_arguments args);

struct s_vec_heredoc_splice_arguments vec_heredoc_splice_args(
	t_usize index, t_usize old_count, t_usize new_count,
	const t_heredoc *elements);

#endif
