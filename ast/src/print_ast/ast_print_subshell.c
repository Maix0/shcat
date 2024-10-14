/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ast_print_subshell.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 13:27:30 by rparodi           #+#    #+#             */
/*   Updated: 2024/10/14 14:22:39 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ast/_print_ast.h"

void	ast_print_node_subshell(t_ast_node self)
{
	t_usize	i;

	if (self == NULL)
		return ;
	if (self->kind != AST_SUBSHELL)
		return ;
	i = 0;
	if (self->data.subshell.bang)
		printf("! ");
	printf("( ");
	while (i < self->data.subshell.body.len)
	{
		ast_print(self->data.subshell.body.buffer[i++]);
		printf(" ");
	}
	printf(")");
	i = 0;
	while (i < self->data.subshell.suffixes_redirections.len)
	{
		printf(" ");
		ast_print(self->data.subshell.suffixes_redirections.buffer[i++]);
	}
	printf(" ");
	_print_term(self->data.subshell.term);
}

void	ast_print_node_program(t_ast_node self)
{
	t_usize	i;

	if (self == NULL)
		return ;
	if (self->kind != AST_PROGRAM)
		return ;
	i = 0;
	while (i < self->data.program.body.len)
	{
		ast_print(self->data.program.body.buffer[i++]);
		printf(" ");
	}
}

void	ast_print_node_compound_statement(t_ast_node self)
{
	t_usize	i;

	if (self == NULL)
		return ;
	if (self->kind != AST_COMPOUND_STATEMENT)
		return ;
	i = 0;
	if (self->data.compound_statement.bang)
		printf("! ");
	printf("{ ");
	while (i < self->data.compound_statement.body.len)
	{
		ast_print(self->data.compound_statement.body.buffer[i++]);
		printf(" ");
	}
	printf("}");
	i = 0;
	while (i < self->data.compound_statement.suffixes_redirections.len)
	{
		printf(" ");
		ast_print \
		(self->data.compound_statement.suffixes_redirections.buffer[i++]);
	}
	printf(" ");
	_print_term(self->data.compound_statement.term);
}

void	ast_print_node_word(t_ast_node self)
{
	t_usize	i;
	t_str	quote_type;

	if (self == NULL)
		return ;
	if (self->kind != AST_WORD)
		return ;
	quote_type = "";
	if (self->data.word.kind == AST_WORD_SINGLE_QUOTE)
		quote_type = "\'";
	if (self->data.word.kind == AST_WORD_DOUBLE_QUOTE)
		quote_type = "\"";
	i = 0;
	printf("<=");
	printf("%s", quote_type);
	while (i < self->data.word.inner.len)
	{
		ast_print(self->data.word.inner.buffer[i++]);
	}
	printf("%s", quote_type);
	printf("=>");
}
