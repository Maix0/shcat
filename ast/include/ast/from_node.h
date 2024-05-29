/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   from_node.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 13:14:10 by maiboyer          #+#    #+#             */
/*   Updated: 2024/05/29 00:54:00 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FROM_PROGRAM_C
#define FROM_PROGRAM_C

#include "forward.h"
#include "me/types.h"

#include "app/node.h"
#include "ast/ast.h"

t_ast_node *from_node(t_node *node);

/// @param node a pointer to an array of `t_node` of size `size`
/// @param size the size of the nodes
/// @note can be null in case of error
t_and_list *build_and_list(t_node *node, t_usize size);

/// @param node a pointer to an array of `t_node` of size `size`
/// @param size the size of the nodes
/// @note can be null in case of error
t_and_or_list *build_and_or_list(t_node *node, t_usize size);

/// @param node a pointer to an array of `t_node` of size `size`
/// @param size the size of the nodes
/// @note can be null in case of error
t_arithmetic_expansion *build_arithmetic_expansion(t_node *node, t_usize size);

/// @param node a pointer to an array of `t_node` of size `size`
/// @param size the size of the nodes
/// @note can be null in case of error
t_assignment_list *build_assignment_list(t_node *node, t_usize size);

/// @param node a pointer to an array of `t_node` of size `size`
/// @param size the size of the nodes
/// @note can be null in case of error
t_assignment *build_assignment(t_node *node, t_usize size);

/// @param node a pointer to an array of `t_node` of size `size`
/// @param size the size of the nodes
/// @note can be null in case of error
t_ast_string *build_ast_string(t_node *node, t_usize size);

/// @param node a pointer to an array of `t_node` of size `size`
/// @param size the size of the nodes
/// @note can be null in case of error
t_async_command *build_async_command(t_node *node, t_usize size);

/// @param node a pointer to an array of `t_node` of size `size`
/// @param size the size of the nodes
/// @note can be null in case of error
t_brace_command *build_brace_command(t_node *node, t_usize size);

/// @param node a pointer to an array of `t_node` of size `size`
/// @param size the size of the nodes
/// @note can be null in case of error
t_case_command *build_case_command(t_node *node, t_usize size);

/// @param node a pointer to an array of `t_node` of size `size`
/// @param size the size of the nodes
/// @note can be null in case of error
t_case_item *build_case_item(t_node *node, t_usize size);

/// @param node a pointer to an array of `t_node` of size `size`
/// @param size the size of the nodes
/// @note can be null in case of error
t_command_backticks *build_command_backticks(t_node *node, t_usize size);

/// @param node a pointer to an array of `t_node` of size `size`
/// @param size the size of the nodes
/// @note can be null in case of error
t_command_substitution *build_command_substitution(t_node *node, t_usize size);

/// @param node a pointer to an array of `t_node` of size `size`
/// @param size the size of the nodes
/// @note can be null in case of error
t_command *build_command(t_node *node, t_usize size);

/// @param node a pointer to an array of `t_node` of size `size`
/// @param size the size of the nodes
/// @note can be null in case of error
t_compound_list *build_compound_list(t_node *node, t_usize size);

/// @param node a pointer to an array of `t_node` of size `size`
/// @param size the size of the nodes
/// @note can be null in case of error
t_double_quote_string *build_double_quote_string(t_node *node, t_usize size);

/// @param node a pointer to an array of `t_node` of size `size`
/// @param size the size of the nodes
/// @note can be null in case of error
t_for_command *build_for_command(t_node *node, t_usize size);

/// @param node a pointer to an array of `t_node` of size `size`
/// @param size the size of the nodes
/// @note can be null in case of error
t_function_definition *build_function_definition(t_node *node, t_usize size);

/// @param node a pointer to an array of `t_node` of size `size`
/// @param size the size of the nodes
/// @note can be null in case of error
t_if_command *build_if_command(t_node *node, t_usize size);

/// @param node a pointer to an array of `t_node` of size `size`
/// @param size the size of the nodes
/// @note can be null in case of error
t_if_clause *build_if_clause(t_node *node, t_usize size);

/// @param node a pointer to an array of `t_node` of size `size`
/// @param size the size of the nodes
/// @note can be null in case of error
t_elif_clause *build_elif_clause(t_node *node, t_usize size);

/// @param node a pointer to an array of `t_node` of size `size`
/// @param size the size of the nodes
/// @note can be null in case of error
t_else_clause *build_else_clause(t_node *node, t_usize size);

/// @param node a pointer to an array of `t_node` of size `size`
/// @param size the size of the nodes
/// @note can be null in case of error
t_name *build_name(t_node *node, t_usize size);

/// @param node a pointer to an array of `t_node` of size `size`
/// @param size the size of the nodes
/// @note can be null in case of error
t_not *build_not(t_node *node, t_usize size);

/// @param node a pointer to an array of `t_node` of size `size`
/// @param size the size of the nodes
/// @note can be null in case of error
t_or_list *build_or_list(t_node *node, t_usize size);

/// @param node a pointer to an array of `t_node` of size `size`
/// @param size the size of the nodes
/// @note can be null in case of error
t_parameter_expansion *build_parameter_expansion(t_node *node, t_usize size);

/// @param node a pointer to an array of `t_node` of size `size`
/// @param size the size of the nodes
/// @note can be null in case of error
t_pipe_list *build_pipe_list(t_node *node, t_usize size);

/// @param node a pointer to an array of `t_node` of size `size`
/// @param size the size of the nodes
/// @note can be null in case of error
t_program *build_program(t_node *node, t_usize size);

/// @param node a pointer to an array of `t_node` of size `size`
/// @param size the size of the nodes
/// @note can be null in case of error
t_redirect_file *build_redirect_file(t_node *node, t_usize size);

/// @param node a pointer to an array of `t_node` of size `size`
/// @param size the size of the nodes
/// @note can be null in case of error
t_redirect_heredoc *build_redirect_heredoc(t_node *node, t_usize size);

/// @param node a pointer to an array of `t_node` of size `size`
/// @param size the size of the nodes
/// @note can be null in case of error
t_sequential_list *build_sequential_list(t_node *node, t_usize size);

/// @param node a pointer to an array of `t_node` of size `size`
/// @param size the size of the nodes
/// @note can be null in case of error
t_simple_command *build_simple_command(t_node *node, t_usize size);

/// @param node a pointer to an array of `t_node` of size `size`
/// @param size the size of the nodes
/// @note can be null in case of error
t_subshell_command *build_subshell_command(t_node *node, t_usize size);

/// @param node a pointer to an array of `t_node` of size `size`
/// @param size the size of the nodes
/// @note can be null in case of error
t_until_command *build_until_command(t_node *node, t_usize size);

/// @param node a pointer to an array of `t_node` of size `size`
/// @param size the size of the nodes
/// @note can be null in case of error
t_while_command *build_while_command(t_node *node, t_usize size);

/// @param node a pointer to an array of `t_node` of size `size`
/// @param size the size of the nodes
/// @note can be null in case of error
t_word *build_word(t_node *node, t_usize size);

/// @param node a pointer to an array of `t_node` of size `size`
/// @param size the size of the nodes
/// @note can be null in case of error
t_ast_node *build_comment(t_node *node, t_usize size);

#endif /* FROM_NODE_C */
