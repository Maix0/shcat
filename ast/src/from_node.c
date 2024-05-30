/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   from_node.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 13:18:44 by maiboyer          #+#    #+#             */
/*   Updated: 2024/05/29 22:48:00 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/str/str.h"
#include "me/types.h"

#include "app/node.h"
#include "ast/from_node.h"
#include "gmr/symbols.h"
#include <stdio.h>

t_ast_node *alloc_node(t_ast_type ty)
{
	t_ast_node *ptr;

	ptr = mem_alloc(sizeof(*ptr));
	ptr->type = ty;
	return (ptr);
}

t_ast_node *build_comment(t_node *node, t_usize size)
{
	t_ast_node *ptr;

	(void)(node);
	(void)(size);

	ptr = alloc_node(TY_EMPTY);
	return (ptr);
}

t_and_list *build_and_list(t_node *node, t_usize size)
{
	t_and_list *ptr;
	t_usize		i;
	t_usize		j;

	(void)(size);
	if (node == NULL || node->kind != sym_list || size == 0 ||
		node->childs_count <= 1)
		me_abort("Invalid arguments to build ast!");
	ptr = (void *)alloc_node(TY_AND_LIST);
	ptr->cmds = mem_alloc_array(sizeof(t_ast_node *), node->childs_count);
	i = 0;
	j = 0;
	while (i < node->childs_count)
	{
		if ((node->childs[i].kind == anon_sym_AMP_AMP ||
			 node->childs[i].kind == anon_sym_PIPE_PIPE) &&
			(i++, true))
			continue;
		ptr->cmds[j++].cmd = (void *)from_node(&node->childs[i]);
		i++;
	}
	ptr->cmds_len = j;
	return (ptr);
}

t_or_list *build_or_list(t_node *node, t_usize size)
{
	t_or_list *ptr;
	t_usize	   i;
	t_usize	   j;

	(void)(size);
	if (node == NULL || node->kind != sym_list || size == 0 ||
		node->childs_count <= 1)
		me_abort("Invalid arguments to build ast!");
	ptr = (void *)alloc_node(TY_OR_LIST);
	ptr->cmds = mem_alloc_array(sizeof(t_ast_node *), node->childs_count);
	i = 0;
	j = 0;
	while (i < node->childs_count)
	{
		if ((node->childs[i].kind == anon_sym_AMP_AMP ||
			 node->childs[i].kind == anon_sym_PIPE_PIPE) &&
			(i++, true))
			continue;

		ptr->cmds[j++].cmd = (void *)from_node(&node->childs[i]);
		i++;
	}
	ptr->cmds_len = j;
	return (ptr);
}

t_ast_string *build_ast_string(t_node *node, t_usize size)
{
	t_ast_string *ptr;

	(void)(size);
	if (node == NULL ||
		(node->kind != sym_string_content && node->kind != sym_raw_string &&
		 node->kind == sym_ansi_c_string) ||
		size == 0)
		me_abort("Invalid arguments to build ast!");

	ptr = (void *)alloc_node(TY_AST_STRING);
	ptr->value = str_clone(node_getstr(node));
	return (ptr);
}

t_and_or_list *build_and_or_list(t_node *node, t_usize size)
{
	t_and_or_list *ptr;

	(void)(node);
	(void)(size);

	if (node == NULL || node->kind != sym_list || size == 0 ||
		node->childs_count <= 1)
		me_abort("Invalid arguments to build ast!");
	ptr = (void *)alloc_node(TY_AND_OR_LIST);
	if (node->childs[1].kind == anon_sym_PIPE_PIPE)
		ptr->cmds.or_list = build_or_list(node, 1);
	else if (node->childs[1].kind == anon_sym_AMP_AMP)
		ptr->cmds.and_list = build_and_list(node, 1);
	else
		return (mem_free(ptr), NULL);
	return (ptr);
}

t_pipe_list *build_pipe_list(t_node *node, t_usize size)
{
	t_pipe_list *ptr;
	t_usize		 i;
	t_usize		 j;

	(void)(size);
	if (node == NULL || node->kind != sym_pipeline || size == 0 ||
		node->childs_count <= 1)
		me_abort("Invalid arguments to build ast!");
	ptr = (void *)alloc_node(TY_PIPE_LIST);
	ptr->cmds = mem_alloc_array(sizeof(t_ast_node *), node->childs_count);
	i = 0;
	j = 0;
	while (i < node->childs_count)
	{
		if (node->childs[i].kind == anon_sym_PIPE)
			i++;
		ptr->cmds[j++] = from_node(&node->childs[i]);
		i++;
	}
	return (ptr);
}

t_double_quote_string *build_double_qoute_string(t_node *node, t_usize size)
{
	t_double_quote_string *ptr;
	t_usize				   i;
	t_usize				   j;

	(void)(size);
	if (node == NULL || node->kind != sym_string || size == 0)
		me_abort("Invalid arguments to build ast!");
	ptr = (void *)alloc_node(TY_DOUBLE_QUOTE_STRING);
	ptr->parts = mem_alloc_array(sizeof(*ptr->parts), node->childs_count);
	i = 0;
	j = 0;
	while (i < node->childs_count)
		ptr->parts[j++].expension->type = (void *)from_node(&node->childs[i++]);
	ptr->parts_len = j;
	return (ptr);
}

t_not *build_not(t_node *node, t_usize size)
{
	t_not *ptr;

	(void)(size);
	if (node == NULL || node->kind != sym_negated_command || size == 0)
		me_abort("Invalid arguments to build ast!");
	ptr = (void *)alloc_node(TY_NOT);
	ptr->cmd.type = (void *)from_node(&node->childs[1]);
	return (ptr);
}

t_command *build_command(t_node *node, t_usize size)
{
	t_command *ptr;

	(void)(size);
	if (node == NULL || size == 0 ||
		(node->kind != sym_redirected_statement && node->kind != sym_command &&
		 node->kind != sym_test_command &&
		 node->kind != sym_declaration_command &&
		 node->kind != sym_unset_command))
		me_abort("Invalid arguments to build ast!");
	ptr = (void *)alloc_node(TY_COMMAND);
	if (node->kind == sym_redirected_statement)
		ptr->inner.simple_command = NULL;

	return (ptr);
}
/*
 */

t_ast_node *from_node(t_node *node)
{
	if (node == NULL)
		return (NULL);
	if (node->kind == sym_program)
		return ((t_ast_node *)build_program(node, 1));

	if (node->kind == sym_string)
		return ((t_ast_node *)build_double_quote_string(node, 1));

	if (node->kind == sym_word)
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
	if (node->kind == sym_test_command)
		return ((t_ast_node *)build_command(node, 1));
	if (node->kind == sym_declaration_command)
		return ((t_ast_node *)build_command(node, 1));
	if (node->kind == sym_unset_command)
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

	if (node->kind == sym_compound_statement)
		return ((t_ast_node *)build_compound_list(node, 1));

	if (node->kind == sym_if_statement)
		return ((t_ast_node *)build_if_command(node, 1));

	if (node->kind == sym_else_clause)
		return ((t_ast_node *)build_else_clause(node, 1));

	if (node->kind == sym_elif_clause)
		return ((t_ast_node *)build_elif_clause(node, 1));

	if (node->kind == sym_case_statement)
		return ((t_ast_node *)build_case_command(node, 1));

	if (node->kind == sym_case_item)
		return ((t_ast_node *)build_case_item(node, 1));
	if (node->kind == sym_last_case_item)
		return ((t_ast_node *)build_case_item(node, 1));

	if (node->kind == sym_while_statement)
		return ((t_ast_node *)build_while_command(node, 1));

	if (node->kind == sym_for_statement)
		return ((t_ast_node *)build_for_command(node, 1));

	if (node->kind == sym_function_definition)
		return ((t_ast_node *)build_function_definition(node, 1));

	printf("unknown node of kind '%s'\n", node->kind_str);

	return (NULL);
}
