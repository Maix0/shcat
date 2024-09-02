/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_subtree.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:46:53 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/09 17:53:00 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC_SUBTREE_H
#define VEC_SUBTREE_H

#include "parser/inner/subtree_inner.h"
#include "me/types.h"

/// @brief A function that takes two t_subtree and compare them
typedef bool (*t_vec_subtree_sort_fn)(t_subtree *, t_subtree *);
/// @brief A function that free an t_subtree
typedef void (*t_free_subtree_item)(t_subtree);

/// @brief A dynamic array of t_subtree
typedef struct s_vec_subtree t_vec_subtree;

struct s_vec_subtree
{
	t_free_subtree_item free_func;
	t_usize					len;
	t_usize					capacity;
	t_subtree		   *buffer;
};

struct s_vec_subtree_splice_arguments
{
	t_usize				 index;
	t_usize				 old_count;
	t_usize				 new_count;
	const t_subtree *elements;
};

/// @brief Create a new vec_subtree with a given capacity
/// @param capacity The capacity of the new vec_subtree (in terms of
/// elements)
/// @param free_function The function that will be used to free the elements of
/// the vec_subtree
t_vec_subtree vec_subtree_new(t_usize				  capacity,
									  t_free_subtree_item free_function);
/// @brief Push an element to the last position of the vec_subtree
/// @param vec The vec_subtree to push the element to
/// @param element The element to push
t_error vec_subtree_push(t_vec_subtree *vec, t_subtree element);

/// @brief Push an element to the first position of the vec_subtree
/// @param vec The vec_subtree to push the element to
/// @param element The element to push
/// @note This operation is O(n)
t_error vec_subtree_push_front(t_vec_subtree *vec,
								   t_subtree	  element);

/// @brief Get the last element from the vec_subtree, and remove it from the
/// vec_subtree
/// @param vec The vec_subtree to get the element from
/// @param[out] out The last element of the vec_subtree
/// @return true if the operation failed, false otherwise
t_error vec_subtree_pop(t_vec_subtree *vec, t_subtree *value);

/// @brief Get the first element from the vec_subtree, and remove it from
/// the vec_subtree
/// @param vec The vec_subtree to get the element from
/// @param[out] out The first element of the vec_subtree
/// @return true if the operation failed, false otherwise
/// @note This operation is O(n)
t_error vec_subtree_pop_front(t_vec_subtree *vec, t_subtree *value);

/// @brief Free the vector and all its elements
/// @param vec The vec_subtree to free
void vec_subtree_free(t_vec_subtree vec);

/// @brief Make the vec_subtree at least the given capacity
/// @param vec The vec_subtree to reserve
/// @param wanted_capacity The minimum capacity to reserve
/// @return true if the operation failed, false otherwise
t_error vec_subtree_reserve(t_vec_subtree *vec,
								t_usize			   wanted_capacity);

/// @brief Run the function and returns the index of the first element that
/// returns true
/// @param vec The vec_subtree to search in
/// @param fn The function to run on each element
/// @param[out] index The index of the first element that returns true
t_error vec_subtree_find(t_vec_subtree *vec,
							 bool (*fn)(const t_subtree *), t_usize *index);

/// @brief Run the function and returns the index of the first element that
/// returns true, but starting at index starting_index
/// @param vec The vec_subtree to search in
/// @param fn The function to run on each element
/// @param starting_index The index to start the search from
/// @param[out] index The index of the first element that returns true
t_error vec_subtree_find_starting(t_vec_subtree *vec,
									  bool (*fn)(const t_subtree *),
									  t_usize starting_index, t_usize *index);

/// @brief Run the function on every element of the vec_subtree and returns
/// if all elements returned true
/// @param vec The vec_subtree to search in
/// @param fn The function to run on each element
/// @param[out] result The result of the operation
/// @return true if the operation failed, false otherwise
/// @note If the vec_subtree is empty, result will be true
t_error vec_subtree_all(t_vec_subtree *vec,
							bool (*fn)(const t_subtree *), bool *result);

/// @brief Run the function on every element of the vec_subtree and returns
/// if any element returned true
/// @param vec The vec_subtree to search in
/// @param fn The function to run on each element
/// @param[out] result The result of the operation
/// @return true if the operation failed, false otherwise
/// @note If the vec_subtree is empty, result will be false
t_error vec_subtree_any(t_vec_subtree *vec,
							bool (*fn)(const t_subtree *), bool *result);

/// @brief Run the function on every element of the vec_subtree
/// @param vec The vec_subtree to iterate over
/// @param fn The function to run on each element
/// @param state The state to pass to the function
void vec_subtree_iter(t_vec_subtree *vec,
						  void (*fn)(t_usize index, t_subtree *value,
									 void *state),
						  void *state);

/// @brief Reverse the order of the elements in the vec_subtree
/// @param vec The vec_subtree to reverse
void vec_subtree_reverse(t_vec_subtree *vec);

/// @brief Sort the elements of the vec_subtree
/// @param vec The vec_subtree to sort
/// @param is_sorted The function to use to compare the elements
void vec_subtree_sort(t_vec_subtree		   *vec,
						  t_vec_subtree_sort_fn is_sorted);

/// @brief Get a pointer to the last element of the vec_subtree
/// @param vec The vec_subtree to get the element from
/// @param[out] out A pointer to the last element of the vec_subtree
/// @return true if the operation failed, false otherwise
t_error vec_subtree_back(t_vec_subtree *vec, t_subtree **out);

/// @brief Get a pointer to the i'th element, or NULL otherwise
/// @param vec The vec_subtree to get the element from
/// @return A pointer to the element or NULL
t_subtree *vec_subtree_get(t_vec_subtree *vec, t_usize i);

/// @brief Get a pointer to the last element, or NULL otherwise
/// @param vec The vec_subtree to get the element from
/// @return A pointer to the last element or NULL
t_subtree *vec_subtree_last(t_vec_subtree *vec);

/// @brief Perform a simple bytewise copy into the other vector
/// @param vec The vec_subtree to be copied from
/// @param dest The vec_subtree to be copied to
void vec_subtree_copy_into(t_vec_subtree *vec, t_vec_subtree *dest);

/// read code lol
void vec_subtree_splice(t_vec_subtree						 *self,
							struct s_vec_subtree_splice_arguments args);

struct s_vec_subtree_splice_arguments vec_subtree_splice_args(
	t_usize index, t_usize old_count, t_usize new_count,
	const t_subtree *elements);

#endif
