/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   yarn.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:04:13 by rparodi           #+#    #+#             */
/*   Updated: 2024/10/08 14:20:10 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/printf/printf.h"
#include "me/types.h"
#include "me/vec/vec_token.h"
#include "parser/token.h"

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

t_error yarn(t_vec_token *list, t_vec_token *output)
{
	t_token		tmp;
	t_token		tmp2;
	t_vec_token	output_queue;
	t_vec_token	operator_stack;

	output_queue = vec_token_new(16, token_free);;
	operator_stack = vec_token_new(16, token_free);;
	while (!vec_token_pop_front(list, &tmp))
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
			while (vec_token_last(&operator_stack) != NULL && vec_token_last(&operator_stack)->type != TOK_LPAREN)
			{
				vec_token_pop(&operator_stack, &tmp2);
				vec_token_push(&output_queue, tmp2);
			}
			if (!(vec_token_last(&operator_stack) != NULL && vec_token_last(&operator_stack)->type == TOK_LPAREN))
				return (ERROR);
			vec_token_pop(&operator_stack, NULL);
		}
	}
	while (!vec_token_pop(&operator_stack, &tmp))
	{
		if (tmp.type == TOK_LPAREN)
			return (ERROR);
		vec_token_push(&output_queue, tmp);
	}
	return (*output = output_queue, NO_ERROR);
}
