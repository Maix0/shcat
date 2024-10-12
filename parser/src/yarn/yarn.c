/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   yarn.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:04:13 by rparodi           #+#    #+#             */
/*   Updated: 2024/10/12 16:11:10 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ast/ast.h"
#include "me/printf/printf.h"
#include "me/printf/printf.h"
#include "me/types.h"
#include "me/vec/vec_token.h"
#include "parser/token.h"
#include <stdio.h>

int		_get_prec(t_token *token);
t_str	token_name(t_token *token);
t_error	ast_from_cmd(t_token tok, t_vec_ast *output_queue);
t_error	ast_from_op(t_token tok, t_vec_ast *output_queue);

t_error	_yarn_parenthesis(\
		t_token tok, t_vec_token *stack, t_vec_ast *output_queue)
{
	t_token		op;
	t_ast_node	snode;
	t_ast_node	tmp;

	token_free(tok);
	while (vec_token_last(stack) != NULL && \
		vec_token_last(stack)->type != TOK_LPAREN)
	{
		vec_token_pop(stack, &op);
		if (ast_from_op(op, output_queue))
			return (token_free(op), ERROR);
	}
	if (!(vec_token_last(stack) != NULL && \
		vec_token_last(stack)->type == TOK_LPAREN))
		return (ERROR);
	vec_token_pop(stack, &tok);
	token_free(tok);
	snode = ast_alloc(AST_SUBSHELL);
	vec_ast_pop(output_queue, &tmp);
	vec_ast_push(&snode->data.subshell.body, tmp);
	vec_ast_push(output_queue, snode);
	return (NO_ERROR);
}

t_error	_yarn_operator(t_token tok, t_vec_token *stack, t_vec_ast *output_queue)
{
	t_token	op;

	while (vec_token_last(stack) != NULL && vec_token_last(stack)->type \
	!= TOK_LPAREN && _get_prec(vec_token_last(stack)) > _get_prec(&tok))
	{
		vec_token_pop(stack, &op);
		if (ast_from_op(op, output_queue))
			return (token_free(tok), token_free(op), ERROR);
	}
	vec_token_push(stack, tok);
	return (NO_ERROR);
}

t_error	_yarn_final(t_vec_token stack, t_vec_ast output_q, t_vec_ast *out)
{
	t_token	op;

	while (!vec_token_pop(&stack, &op))
	{
		if (op.type == TOK_LPAREN)
			return (token_free(op), ERROR);
		if (ast_from_op(op, &output_q))
			return (vec_token_free(stack), vec_ast_free(output_q), \
				token_free(op), ERROR);
	}
	vec_token_free(stack);
	return (*out = output_q, NO_ERROR);
}

t_error	_yarn_loop(t_token tok, t_vec_token *stack, t_vec_ast *output_q)
{
	if (tok.type == TOK_CMD)
	{
		if (ast_from_cmd(tok, output_q))
			return (ERROR);
	}
	else if (tok.type == TOK_OR \
		|| tok.type == TOK_AND || tok.type == TOK_PIPE)
	{
		if (_yarn_operator(tok, stack, output_q))
			return (ERROR);
	}
	else if (tok.type == TOK_RPAREN)
	{
		if (_yarn_parenthesis(tok, stack, output_q))
			return (ERROR);
	}
	else if (tok.type == TOK_LPAREN)
		vec_token_push(stack, tok);
	else
		return (me_eprintf("Syntax Error\n"), ERROR);
	return (NO_ERROR);
}

t_error	yarn(t_vec_token ts, t_vec_ast *out)
{
	t_token		tok;
	t_vec_ast	output_q;
	t_vec_token	stack;

	output_q = vec_ast_new(16, ast_free);
	stack = vec_token_new(16, token_free);
	while (!vec_token_pop_front(&ts, &tok))
	{
		if (_yarn_loop(tok, &stack, &output_q))
			return (vec_token_free(stack), vec_ast_free(output_q), ERROR);
	}
	vec_token_free(ts);
	return (_yarn_final(stack, output_q, out));
}
