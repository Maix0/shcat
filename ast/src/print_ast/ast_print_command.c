/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ast_print_command.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 20:38:29 by maiboyer          #+#    #+#             */
/*   Updated: 2024/07/26 13:21:44 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/function_declaration.h"

void	ast_print_node_command_substitution(t_ast_node self)
{
	t_usize	i;

	if (self == NULL)
		return ;
	if (self->kind != AST_COMMAND_SUBSTITUTION)
		return ;
	printf("$(");
	i = 0;
	while (i < self->data.command_substitution.body.len)
	{
		ast_print_node(self->data.command_substitution.body.buffer[i++]);
	}
	printf(")");
}

void	ast_print_node_command_helper(t_ast_node self)
{
	t_usize	i;

	i = 0;
	while (i < self->data.command.cmd_word.len)
	{
		ast_print_node(self->data.command.cmd_word.buffer[i++]);
		printf(" ");
	}
	i = 0;
	while (i < self->data.command.suffixes_redirections.len)
	{
		ast_print_node(self->data.command.suffixes_redirections.buffer[i++]);
		printf(" ");
	}
	_print_term(self->data.command.term);
}

void	ast_print_node_command(t_ast_node self)
{
	t_usize	i;

	if (self == NULL)
		return ;
	if (self->kind != AST_COMMAND)
		return ;
	if (self->data.command.bang)
		printf("! ");
	i = 0;
	while (i < self->data.command.prefixes.len)
	{
		ast_print_node(self->data.command.prefixes.buffer[i++]);
		printf(" ");
	}
}

void	ast_print_node_expansion_choose_op(t_ast_node self)
{
	if (self->data.expansion.kind == E_OP_NONE)
		(void)(false);
	if (self->data.expansion.kind == E_OP_ERROR)
		printf("?");
	if (self->data.expansion.kind == E_OP_DEFAULT)
		printf("-");
	if (self->data.expansion.kind == E_OP_ALTERNATE)
		printf("+");
	if (self->data.expansion.kind == E_OP_ASSIGN_DEFAULT)
		printf("=");
	if (self->data.expansion.kind == E_OP_ERROR_COLON)
		printf(":?");
	if (self->data.expansion.kind == E_OP_DEFAULT_COLON)
		printf(":-");
	if (self->data.expansion.kind == E_OP_ALTERNATE_COLON)
		printf(":+");
	if (self->data.expansion.kind == E_OP_ASSIGN_DEFAULT_COLON)
		printf(":=");
}

void	ast_print_node_expansion(t_ast_node self)
{
	t_usize	i;

	if (self == NULL)
		return ;
	if (self->kind != AST_EXPANSION)
		return ;
	printf("${");
	if (self->data.expansion.len_operator)
		printf("#");
	printf("%s", self->data.expansion.var_name);
	ast_print_node_expansion_choose_op(self);
	i = 0;
	while (i < self->data.expansion.args.len)
		ast_print_node(self->data.expansion.args.buffer[i++]);
	printf("}");
}
