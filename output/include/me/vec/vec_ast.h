/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_ast.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:46:53 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:51:35 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC_AST_H
# define VEC_AST_H

# include "ast/_forward_def.h"
# include "me/types.h"

/// @brief A function that takes two t_ast_node and compare them
typedef bool						(*t_vec_ast_sort_fn)(t_ast_node *lhs,
							t_ast_node *rhs);
/// @brief A function that free an t_ast_node
typedef void						(*t_free_ast_item)(t_ast_node elem);

/// @brief A dynamic array of t_ast_node
typedef struct s_vec_ast			t_vec_ast;

struct								s_vec_ast
{
	t_free_ast_item					free_func;
	t_usize							len;
	t_usize							capacity;
	t_ast_node						*buffer;
};

struct								s_vec_ast_splice_arguments
{
	t_usize							index;
	t_usize							old_count;
	t_usize							new_count;
	const t_ast_node				*elements;
};

/// @brief Create a new vec_ast with a given capacity
/// @param capacity The capacity of the new vec_ast (in terms of
/// elements)
/// @param free_function The function that will be used to free the elements of
/// the vec_ast
t_vec_ast							vec_ast_new(t_usize capacity,
										t_free_ast_item free_function);
/// @brief Push an element to the last position of the vec_ast
/// @param vec The vec_ast to push the element to
/// @param element The element to push
t_error								vec_ast_push(t_vec_ast *vec,
										t_ast_node element);

/// @brief Push an element to the first position of the vec_ast
/// @param vec The vec_ast to push the element to
/// @param element The element to push
/// @note This operation is O(n)
t_error								vec_ast_push_front(t_vec_ast *vec,
										t_ast_node element);

/// @brief Get the last element from the vec_ast, and remove it from the
/// vec_ast
/// @param vec The vec_ast to get the element from
/// @param[out] out The last element of the vec_ast
/// @return true if the operation failed, false otherwise
t_error								vec_ast_pop(t_vec_ast *vec,
										t_ast_node *value);

/// @brief Get the first element from the vec_ast, and remove it from
/// the vec_ast
/// @param vec The vec_ast to get the element from
/// @param[out] out The first element of the vec_ast
/// @return true if the operation failed, false otherwise
/// @note This operation is O(n)
t_error								vec_ast_pop_front(t_vec_ast *vec,
										t_ast_node *value);

/// @brief Free the vector and all its elements
/// @param vec The vec_ast to free
void								vec_ast_free(t_vec_ast vec);

/// @brief Make the vec_ast at least the given capacity
/// @param vec The vec_ast to reserve
/// @param wanted_capacity The minimum capacity to reserve
/// @return true if the operation failed, false otherwise
t_error								vec_ast_reserve(t_vec_ast *vec,
										t_usize wanted_capacity);

/// @brief Run the function and returns the index of the first element that
/// returns true
/// @param vec The vec_ast to search in
/// @param fn The function to run on each element
/// @param[out] index The index of the first element that returns true
t_error								vec_ast_find(t_vec_ast *vec,
										bool (*fn)(const t_ast_node *),
										t_usize *index);

/// @brief Run the function and returns the index of the first element that
/// returns true, but starting at index starting_index
/// @param vec The vec_ast to search in
/// @param fn The function to run on each element
/// @param starting_index The index to start the search from
/// @param[out] index The index of the first element that returns true
t_error								vec_ast_find_starting(t_vec_ast *vec,
										bool (*fn)(const t_ast_node *),
										t_usize starting_index, t_usize *index);

/// @brief Run the function on every element of the vec_ast and returns
/// if all elements returned true
/// @param vec The vec_ast to search in
/// @param fn The function to run on each element
/// @param[out] result The result of the operation
/// @return true if the operation failed, false otherwise
/// @note If the vec_ast is empty, result will be true
t_error								vec_ast_all(t_vec_ast *vec,
										bool (*fn)(const t_ast_node *),
										bool *result);

/// @brief Run the function on every element of the vec_ast and returns
/// if any element returned true
/// @param vec The vec_ast to search in
/// @param fn The function to run on each element
/// @param[out] result The result of the operation
/// @return true if the operation failed, false otherwise
/// @note If the vec_ast is empty, result will be false
t_error								vec_ast_any(t_vec_ast *vec,
										bool (*fn)(const t_ast_node *),
										bool *result);

/// @brief Run the function on every element of the vec_ast
/// @param vec The vec_ast to iterate over
/// @param fn The function to run on each element
/// @param state The state to pass to the function
void								vec_ast_iter(t_vec_ast *vec,
										void (*fn)(t_usize index,
											t_ast_node *value, void *state),
										void *state);

/// @brief Reverse the order of the elements in the vec_ast
/// @param vec The vec_ast to reverse
void								vec_ast_reverse(t_vec_ast *vec);

/// @brief Sort the elements of the vec_ast
/// @param vec The vec_ast to sort
/// @param is_sorted The function to use to compare the elements
void								vec_ast_sort(t_vec_ast *vec,
										t_vec_ast_sort_fn is_sorted);

/// @brief Get a pointer to the last element of the vec_ast
/// @param vec The vec_ast to get the element from
/// @param[out] out A pointer to the last element of the vec_ast
/// @return true if the operation failed, false otherwise
t_error								vec_ast_back(t_vec_ast *vec,
										t_ast_node **out);

/// @brief Get a pointer to the i'th element, or NULL otherwise
/// @param vec The vec_ast to get the element from
/// @return A pointer to the element or NULL
t_ast_node							*vec_ast_get(t_vec_ast *vec, t_usize i);

/// @brief Get a pointer to the last element, or NULL otherwise
/// @param vec The vec_ast to get the element from
/// @return A pointer to the last element or NULL
t_ast_node							*vec_ast_last(t_vec_ast *vec);

/// @brief Perform a simple bytewise copy into the other vector
/// @param vec The vec_ast to be copied from
/// @param dest The vec_ast to be copied to
void								vec_ast_copy_into(t_vec_ast *vec,
										t_vec_ast *dest);

/// read code lol
void								vec_ast_splice(t_vec_ast *self,
										struct s_vec_ast_splice_arguments args);

struct s_vec_ast_splice_arguments	vec_ast_splice_args(t_usize index,
										t_usize old_count, t_usize new_count,
										const t_ast_node *elements);

#endif
