/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   yarn.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:04:13 by rparodi           #+#    #+#             */
/*   Updated: 2024/10/08 15:32:12 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/types.h"
#include "me/vec/vec_token.h"
#include "parser/token.h"
#include "ast/ast.h"
#include <stdio.h>

int	_get_precedance(t_token *token)
{
	if (!token)
		return (-1);
	else if (token->type == TOK_PIPE)
		return (2);
	else if (token->type == TOK_AND || token->type == TOK_OR)
		return (1);
	return (0);
}
t_str	token_name(t_token *token);

t_ast_node ast_from_cmd(t_token tok);
t_ast_node ast_from_op(t_token tok, t_vec_ast *out);

t_error yarn(t_vec_token ts, t_vec_ast *out)
{
	t_token		tmp;
	t_token		op;
	t_vec_ast	output_queue;
	t_vec_token	operator_stack;

	output_queue = vec_ast_new(16, ast_free);;
	operator_stack = vec_token_new(16, token_free);;
	while (!vec_token_pop_front(&ts, &tmp))
	{
		if (tmp.type == TOK_CMD)
			vec_ast_push(&output_queue, ast_from_cmd(tmp));
		else if (tmp.type == TOK_OR || tmp.type == TOK_AND || tmp.type == TOK_PIPE)
		{
			while (vec_token_last(&operator_stack) != NULL && vec_token_last(&operator_stack)->type != TOK_LPAREN && _get_precedance(vec_token_last(&operator_stack)) > _get_precedance(&tmp))
			{
				vec_token_pop(&operator_stack, &op);
				vec_ast_push(&output_queue, ast_from_op(op, &output_queue));
			}
			vec_token_push(&operator_stack, tmp);
		}
		else if (tmp.type == TOK_LPAREN)
			vec_token_push(&operator_stack, tmp);
		else if (tmp.type == TOK_RPAREN)
		{
			token_free(tmp);
			while (vec_token_last(&operator_stack) != NULL && vec_token_last(&operator_stack)->type != TOK_LPAREN)
			{
				vec_token_pop(&operator_stack, &op);
				vec_ast_push(&output_queue, ast_from_op(op, &output_queue));
			}
			if (!(vec_token_last(&operator_stack) != NULL && vec_token_last(&operator_stack)->type == TOK_LPAREN))
				return (ERROR);
			vec_token_pop(&operator_stack, &tmp);
			token_free(tmp);
		}
	}
	while (!vec_token_pop(&operator_stack, &op))
	{
		if (op.type == TOK_LPAREN)
			return (token_free(tmp), ERROR);
		vec_ast_push(&output_queue, ast_from_op(op, &output_queue));
	}
	vec_token_free(ts);
	vec_token_free(operator_stack);
	return (*out = output_queue, NO_ERROR);
}
