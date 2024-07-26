/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ast_print_node.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 13:07:12 by rparodi           #+#    #+#             */
/*   Updated: 2024/07/26 13:10:06 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/function_declaration.h"

void	ast_print_node_variable_assignment(t_ast_node self)
{
	if (self == NULL)
		return ;
	if (self->kind != AST_VARIABLE_ASSIGNMENT)
		return ;
	if (self->data.variable_assignment.bang)
		printf("! ");
	printf("%s=", self->data.variable_assignment.name);
	if (self->data.variable_assignment.value != NULL)
		ast_print_node(self->data.variable_assignment.value);
	printf(" ");
}

void	ast_print_node_pipeline(t_ast_node self)
{
	t_usize	i;

	if (self == NULL)
		return ;
	if (self->kind != AST_PIPELINE)
		return ;
	if (self->data.pipeline.bang)
		printf("! ");
	if (self->data.pipeline.statements.len != 0)
	{
		i = 0;
		ast_print_node(self->data.pipeline.statements.buffer[i++]);
		while (i < self->data.pipeline.statements.len)
		{
			printf(" | ");
			ast_print_node(self->data.pipeline.statements.buffer[i++]);
		}
	}
	i = 0;
	while (i < self->data.pipeline.suffixes_redirections.len)
	{
		printf(" ");
		ast_print_node(self->data.pipeline.suffixes_redirections.buffer[i++]);
	}
	_print_term(self->data.pipeline.term);
}

void	ast_print_node_list(t_ast_node self)
{
	t_usize	i;

	if (self == NULL)
		return ;
	if (self->kind != AST_LIST)
		return ;
	ast_print_node(self->data.list.left);
	if (self->data.list.op == AST_LIST_OR)
		printf(" || ");
	if (self->data.list.op == AST_LIST_AND)
		printf(" && ");
	ast_print_node(self->data.list.right);
	i = 0;
	while (i < self->data.list.suffixes_redirections.len)
	{
		ast_print_node(self->data.list.suffixes_redirections.buffer[i++]);
		printf(" ");
	}
	_print_term(self->data.list.term);
}

void	ast_print_node_extglob(t_ast_node self)
{
	if (self == NULL)
		return ;
	if (self->kind != AST_EXTGLOB)
		return ;
	printf("%s", self->data.extglob.pattern);
}