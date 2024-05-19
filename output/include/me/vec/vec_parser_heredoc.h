/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_parser_heredoc.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:46:53 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/09 17:53:00 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC_PARSER_HEREDOC_H
#define VEC_PARSER_HEREDOC_H

#include "parser/types/types_heredoc.h"
#include "me/types.h"

/// @brief A function that takes two t_heredoc and compare them
typedef bool (*t_vec_parser_heredoc_sort_fn)(t_heredoc *, t_heredoc *);
/// @brief A function that free an t_heredoc
typedef void (*t_free_parser_heredoc_item)(t_heredoc);

/// @brief A dynamic array of t_heredoc
typedef struct s_vec_parser_heredoc
{
	t_free_parser_heredoc_item free_func;
	t_usize					len;
	t_usize					capacity;
	t_heredoc		   *buffer;
} t_vec_parser_heredoc;

/// @brief Create a new vec_parser_heredoc with a given capacity
/// @param capacity The capacity of the new vec_parser_heredoc (in terms of elements)
/// @param free_function The function that will be used to free the elements of the vec_parser_heredoc
t_vec_parser_heredoc vec_parser_heredoc_new(t_usize capacity, t_free_parser_heredoc_item free_function);
/// @brief Push an element to the last position of the vec_parser_heredoc
/// @param vec The vec_parser_heredoc to push the element to
/// @param element The element to push
t_error vec_parser_heredoc_push(t_vec_parser_heredoc *vec, t_heredoc element);

/// @brief Push an element to the first position of the vec_parser_heredoc
/// @param vec The vec_parser_heredoc to push the element to
/// @param element The element to push
/// @note This operation is O(n)
t_error vec_parser_heredoc_push_front(t_vec_parser_heredoc *vec, t_heredoc	  element);

/// @brief Get the last element from the vec_parser_heredoc, and remove it from the vec_parser_heredoc
/// @param vec The vec_parser_heredoc to get the element from
/// @param[out] out The last element of the vec_parser_heredoc
/// @return true if the operation failed, false otherwise
t_error vec_parser_heredoc_pop(t_vec_parser_heredoc *vec, t_heredoc *value);


/// @brief Get the first element from the vec_parser_heredoc, and remove it from the vec_parser_heredoc
/// @param vec The vec_parser_heredoc to get the element from
/// @param[out] out The first element of the vec_parser_heredoc
/// @return true if the operation failed, false otherwise
/// @note This operation is O(n)
t_error vec_parser_heredoc_pop_front(t_vec_parser_heredoc *vec, t_heredoc *value);

/// @brief Free the vector and all its elements
/// @param vec The vec_parser_heredoc to free
void	vec_parser_heredoc_free(t_vec_parser_heredoc vec);

/// @brief Make the vec_parser_heredoc at least the given capacity
/// @param vec The vec_parser_heredoc to reserve
/// @param wanted_capacity The minimum capacity to reserve
/// @return true if the operation failed, false otherwise
t_error vec_parser_heredoc_reserve(t_vec_parser_heredoc *vec, t_usize wanted_capacity);

/// @brief Run the function and returns the index of the first element that returns true
/// @param vec The vec_parser_heredoc to search in
/// @param fn The function to run on each element
/// @param[out] index The index of the first element that returns true
t_error vec_parser_heredoc_find(t_vec_parser_heredoc *vec, bool (*fn)(const t_heredoc *), t_usize *index);


/// @brief Run the function and returns the index of the first element that returns true, but starting at index starting_index
/// @param vec The vec_parser_heredoc to search in
/// @param fn The function to run on each element
/// @param starting_index The index to start the search from
/// @param[out] index The index of the first element that returns true
t_error vec_parser_heredoc_find_starting(t_vec_parser_heredoc *vec, bool (*fn)(const t_heredoc *), t_usize starting_index, t_usize *index);

/// @brief Run the function on every element of the vec_parser_heredoc and returns if all elements returned true
/// @param vec The vec_parser_heredoc to search in
/// @param fn The function to run on each element
/// @param[out] result The result of the operation
/// @return true if the operation failed, false otherwise
/// @note If the vec_parser_heredoc is empty, result will be true
t_error vec_parser_heredoc_all(t_vec_parser_heredoc *vec, bool (*fn)(const t_heredoc *), bool *result);

/// @brief Run the function on every element of the vec_parser_heredoc and returns if any element returned true
/// @param vec The vec_parser_heredoc to search in
/// @param fn The function to run on each element
/// @param[out] result The result of the operation
/// @return true if the operation failed, false otherwise
/// @note If the vec_parser_heredoc is empty, result will be false
t_error vec_parser_heredoc_any(t_vec_parser_heredoc *vec, bool (*fn)(const t_heredoc *), bool *result);

/// @brief Run the function on every element of the vec_parser_heredoc
/// @param vec The vec_parser_heredoc to iterate over
/// @param fn The function to run on each element
/// @param state The state to pass to the function
void	vec_parser_heredoc_iter(t_vec_parser_heredoc *vec, void (*fn)(t_usize index, t_heredoc *value, void *state), void *state);

/// @brief Reverse the order of the elements in the vec_parser_heredoc
/// @param vec The vec_parser_heredoc to reverse
void	vec_parser_heredoc_reverse(t_vec_parser_heredoc *vec);

/// @brief Sort the elements of the vec_parser_heredoc
/// @param vec The vec_parser_heredoc to sort
/// @param is_sorted The function to use to compare the elements
void	vec_parser_heredoc_sort(t_vec_parser_heredoc		  *vec, t_vec_parser_heredoc_sort_fn is_sorted);

/// @brief Get a pointer to the last element of the vec_parser_heredoc
/// @param vec The vec_parser_heredoc to get the element from
/// @param[out] out A pointer to the last element of the vec_parser_heredoc
/// @return true if the operation failed, false otherwise
t_error vec_parser_heredoc_back(t_vec_parser_heredoc *vec, t_heredoc **out);

#endif
