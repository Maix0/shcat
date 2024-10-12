/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_token.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:46:53 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 15:43:58 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC_TOKEN_H
# define VEC_TOKEN_H

# include "./include_token_workaround.h"
# ifndef TOKEN_H
#  include "parser/token.h"
# endif
/// @brief A function that takes two t_token and compare them
typedef bool				(*t_vec_token_sort_fn)(t_token *lhs, t_token *rhs);

/// @brief Create a new vec_token with a given capacity
/// @param capacity The capacity of the new vec_token (in terms of
/// elements)
/// @param free_function The function that will be used to free the elements of
/// the vec_token
t_vec_token					vec_token_new(t_usize capacity,
								t_free_token_item free_function);
/// @brief Push an element to the last position of the vec_token
/// @param vec The vec_token to push the element to
/// @param element The element to push
t_error						vec_token_push(t_vec_token *vec, t_token element);

/// @brief Push an element to the first position of the vec_token
/// @param vec The vec_token to push the element to
/// @param element The element to push
/// @note This operation is O(n)
t_error						vec_token_push_front(t_vec_token *vec,
								t_token element);

/// @brief Get the last element from the vec_token, and remove it from the
/// vec_token
/// @param vec The vec_token to get the element from
/// @param[out] out The last element of the vec_token
/// @return true if the operation failed, false otherwise
t_error						vec_token_pop(t_vec_token *vec, t_token *value);

/// @brief Get the first element from the vec_token, and remove it from
/// the vec_token
/// @param vec The vec_token to get the element from
/// @param[out] out The first element of the vec_token
/// @return true if the operation failed, false otherwise
/// @note This operation is O(n)
t_error						vec_token_pop_front(t_vec_token *vec,
								t_token *value);

/// @brief Free the vector and all its elements
/// @param vec The vec_token to free
void						vec_token_free(t_vec_token vec);

/// @brief Make the vec_token at least the given capacity
/// @param vec The vec_token to reserve
/// @param wanted_capacity The minimum capacity to reserve
/// @return true if the operation failed, false otherwise
t_error						vec_token_reserve(t_vec_token *vec,
								t_usize wanted_capacity);

/// @brief Run the function and returns the index of the first element that
/// returns true
/// @param vec The vec_token to search in
/// @param fn The function to run on each element
/// @param[out] index The index of the first element that returns true
t_error						vec_token_find(t_vec_token *vec,
								bool (*fn)(const t_token *), t_usize *index);

/// @brief Run the function and returns the index of the first element that
/// returns true, but starting at index starting_index
/// @param vec The vec_token to search in
/// @param fn The function to run on each element
/// @param starting_index The index to start the search from
/// @param[out] index The index of the first element that returns true
t_error						vec_token_find_starting(t_vec_token *vec,
								bool (*fn)(const t_token *),
								t_usize starting_index, t_usize *index);

/// @brief Run the function on every element of the vec_token and returns
/// if all elements returned true
/// @param vec The vec_token to search in
/// @param fn The function to run on each element
/// @param[out] result The result of the operation
/// @return true if the operation failed, false otherwise
/// @note If the vec_token is empty, result will be true
t_error						vec_token_all(t_vec_token *vec,
								bool (*fn)(const t_token *), bool *result);

/// @brief Run the function on every element of the vec_token and returns
/// if any element returned true
/// @param vec The vec_token to search in
/// @param fn The function to run on each element
/// @param[out] result The result of the operation
/// @return true if the operation failed, false otherwise
/// @note If the vec_token is empty, result will be false
t_error						vec_token_any(t_vec_token *vec,
								bool (*fn)(const t_token *), bool *result);

/// @brief Run the function on every element of the vec_token
/// @param vec The vec_token to iterate over
/// @param fn The function to run on each element
/// @param state The state to pass to the function
void						vec_token_iter(t_vec_token *vec,
								void (*fn)(t_usize index, t_token *value,
									void *state), void *state);

/// @brief Reverse the order of the elements in the vec_token
/// @param vec The vec_token to reverse
void						vec_token_reverse(t_vec_token *vec);

/// @brief Sort the elements of the vec_token
/// @param vec The vec_token to sort
/// @param is_sorted The function to use to compare the elements
void						vec_token_sort(t_vec_token *vec,
								t_vec_token_sort_fn is_sorted);

/// @brief Get a pointer to the last element of the vec_token
/// @param vec The vec_token to get the element from
/// @param[out] out A pointer to the last element of the vec_token
/// @return true if the operation failed, false otherwise
t_error						vec_token_back(t_vec_token *vec, t_token **out);

/// @brief Get a pointer to the i'th element, or NULL otherwise
/// @param vec The vec_token to get the element from
/// @return A pointer to the element or NULL
t_token						*vec_token_get(t_vec_token *vec, t_usize i);

/// @brief Get a pointer to the last element, or NULL otherwise
/// @param vec The vec_token to get the element from
/// @return A pointer to the last element or NULL
t_token						*vec_token_last(t_vec_token *vec);

/// @brief Perform a simple bytewise copy into the other vector
/// @param vec The vec_token to be copied from
/// @param dest The vec_token to be copied to
void						vec_token_copy_into(t_vec_token *vec,
								t_vec_token *dest);

#endif
