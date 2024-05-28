/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   from_node.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 13:18:44 by maiboyer          #+#    #+#             */
/*   Updated: 2024/05/29 00:51:19 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/types.h"

#include "app/node.h"
#include "ast/from_node.h"
#include "gmr/symbols.h"
#include <stdio.h>

t_ast_node *build_comment(t_node *node, t_usize size)
{
	t_ast_node *ptr;

	(void)(node);
	(void)(size);

	ptr = mem_alloc(sizeof(*ptr));
	ptr->type = TY_EMPTY;
	return (ptr);
}

t_ast_node *from_node(t_node *node)
{
	if (node == NULL)
		return (NULL);
	if (node->kind == sym_program)
		return ((t_ast_node *)build_program(node, 1));

	if (node->kind == sym_word)
		return ((t_ast_node *)build_word(node, 1));
	if (node->kind == sym_string)
		return ((t_ast_node *)build_word(node, 1));
	if (node->kind == sym_concatenation)
		return ((t_ast_node *)build_word(node, 1));
	if (node->kind == sym_variable_name)
		return ((t_ast_node *)build_word(node, 1));
	if (node->kind == sym_command_name)
		return ((t_ast_node *)build_word(node, 1));
	if (node->kind == sym_translated_string)
		return ((t_ast_node *)build_word(node, 1));

	if (node->kind == sym_string_content)
		return ((t_ast_node *)build_ast_string(node, 1));
	if (node->kind == sym_raw_string)
		return ((t_ast_node *)build_ast_string(node, 1));
	if (node->kind == sym_ansi_c_string)
		return ((t_ast_node *)build_ast_string(node, 1));

	if (node->kind == sym_variable_assignments)
		return (t_ast_node *)build_assignment_list(node, 1);
	if (node->kind == sym_variable_assignment)
		return (t_ast_node *)build_assignment_list(node, 1);

	if (node->kind == sym_command_substitution)
		return (t_ast_node *)build_parameter_expansion(node, 1);
	if (node->kind == sym_expansion)
		return (t_ast_node *)build_parameter_expansion(node, 1);
	if (node->kind == sym_simple_expansion)
		return (t_ast_node *)build_parameter_expansion(node, 1);

	if (node->kind == sym_arithmetic_expansion)
		return ((t_ast_node *)build_arithmetic_expansion(node, 1));

	if (node->kind == sym_comment)
		return ((t_ast_node *)build_comment(node, 1));

	if (node->kind == sym_negated_command)
		return ((t_ast_node *)build_not(node, 1));

	if (node->kind == sym_redirected_statement)
		return ((t_ast_node *)build_command(node, 1));
	if (node->kind == sym_command)
		return ((t_ast_node *)build_command(node, 1));

	if (node->kind == sym_file_redirect)
		return ((t_ast_node *)build_redirect_file(node, 1));

	if (node->kind == sym_heredoc_redirect)
		return ((t_ast_node *)build_redirect_heredoc(node, 1));

	if (node->kind == sym_list)
		return ((t_ast_node *)build_and_or_list(node, 1));

	if (node->kind == sym_pipeline)
		return ((t_ast_node *)build_pipe_list(node, 1));

	if (node->kind == sym_subshell)
		return ((t_ast_node *)build_subshell_command(node, 1));

	if (node->kind == sym_brace_expression)
		return ((t_ast_node *)build_brace_command(node, 1));

	printf("unknown node of kind '%s'\n", node->kind_str);

	return (NULL);
}
