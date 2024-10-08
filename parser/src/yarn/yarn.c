/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   yarn.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:04:13 by rparodi           #+#    #+#             */
/*   Updated: 2024/10/08 15:04:28 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/types.h"
#include "me/vec/vec_token.h"
#include "parser/token.h"
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

t_error yarn(t_vec_token ts, t_vec_token *out)
{
	t_token		tmp;
	t_token		tmp2;
	t_vec_token	output_queue;
	t_vec_token	operator_stack;

	output_queue = vec_token_new(16, token_free);;
	operator_stack = vec_token_new(16, token_free);;
	while (!vec_token_pop_front(&ts, &tmp))
	{
		if (tmp.type == TOK_CMD)
			vec_token_push(&output_queue, tmp);
		else if (tmp.type == TOK_OR || tmp.type == TOK_AND || tmp.type == TOK_PIPE)
		{
			while (vec_token_last(&operator_stack) != NULL && vec_token_last(&operator_stack)->type != TOK_LPAREN && _get_precedance(vec_token_last(&operator_stack)) > _get_precedance(&tmp))
			{
				vec_token_pop(&operator_stack, &tmp2);
				vec_token_push(&output_queue, tmp2);
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
				vec_token_pop(&operator_stack, &tmp2);
				vec_token_push(&output_queue, tmp2);
			}
			if (!(vec_token_last(&operator_stack) != NULL && vec_token_last(&operator_stack)->type == TOK_LPAREN))
				return (ERROR);
			vec_token_pop(&operator_stack, &tmp);
			token_free(tmp);
		}
	}
	while (!vec_token_pop(&operator_stack, &tmp))
	{
		if (tmp.type == TOK_LPAREN)
			return (token_free(tmp), ERROR);
		vec_token_push(&output_queue, tmp);
	}
	vec_token_free(ts);
	vec_token_free(operator_stack);
	return (*out = output_queue, NO_ERROR);
}
