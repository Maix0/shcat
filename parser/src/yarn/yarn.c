/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   yarn.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:04:13 by rparodi           #+#    #+#             */
/*   Updated: 2024/10/08 15:47:39 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ast/ast.h"
#include "me/types.h"
#include "me/vec/vec_token.h"
#include "parser/token.h"
#include <stdio.h>

int _get_precedance(t_token *token)
{
	if (!token)
		return (-1);
	else if (token->type == TOK_PIPE)
		return (2);
	else if (token->type == TOK_AND || token->type == TOK_OR)
		return (1);
	return (0);
}
t_str token_name(t_token *token);

/// la fonction doit prendre une t_token de type TOK_CMD qui contient que deux type de subtokens TOK_WORD ou TOK_REDIR
/// un TOK_WORD == un arguemnt
/// un TOK_REDIR == une redirection
/// les deux sont dans le bonne ordre.
/// il faut push les TOK_REDIR dans ast_node->data.command.prefix;
/// let TOK_WORD dans ast_node->data.command.arguements;
/// les noms peuvent etre different idk
/// a terme la fonction utilisera t_error et tt;
t_ast_node ast_from_cmd(t_token tok);

/// en fonction de op, qui peut etre: TOK_AND TOK_PIPE TOK_OR
/// choisir le bon ast_node a faire (t_ast_node->data.list + set operator ou t_asdt_node->data.pipeline)
/// pop deux element de output_queue. pour l'instant la fonction doit print une error si il n'y as pas asser d'element
/// utilise me_abort(MSG) pour faire un abort et print le msg + la stacktrace.
///
/// a terme la fonction utilisera t_error et tt;
t_ast_node ast_from_op(t_token tok, t_vec_ast *output_queue);

t_error yarn(t_vec_token ts, t_vec_ast *out)
{
	t_token		tok;
	t_token		op;
	t_vec_ast	output_queue;
	t_vec_token stack;

	output_queue = vec_ast_new(16, ast_free);
	stack = vec_token_new(16, token_free);
	while (!vec_token_pop_front(&ts, &tok))
	{
		if (tok.type == TOK_CMD)
			vec_ast_push(&output_queue, ast_from_cmd(tok));
		else if (tok.type == TOK_LPAREN)
			vec_token_push(&stack, tok);
		else if (tok.type == TOK_OR || tok.type == TOK_AND || tok.type == TOK_PIPE)
		{
			while (vec_token_last(&stack) != NULL && vec_token_last(&stack)->type != TOK_LPAREN && _get_precedance(vec_token_last(&stack)) > _get_precedance(&tok))
			{
				vec_token_pop(&stack, &op);
				vec_ast_push(&output_queue, ast_from_op(op, &output_queue));
			}
			vec_token_push(&stack, tok);
		}
		else if (tok.type == TOK_RPAREN)
		{
			token_free(tok);
			// ici il faut modifier pour push dans un ast_node->data.subshell
			// je m'occuperai de ca ce soir/after
			while (vec_token_last(&stack) != NULL && vec_token_last(&stack)->type != TOK_LPAREN)
			{
				vec_token_pop(&stack, &op);
				vec_ast_push(&output_queue, ast_from_op(op, &output_queue));
			}
			if (!(vec_token_last(&stack) != NULL && vec_token_last(&stack)->type == TOK_LPAREN))
				return (ERROR);
			vec_token_pop(&stack, &tok);
			token_free(tok);
		}
	}
	while (!vec_token_pop(&stack, &op))
	{
		if (op.type == TOK_LPAREN)
			return (token_free(tok), ERROR);
		vec_ast_push(&output_queue, ast_from_op(op, &output_queue));
	}
	vec_token_free(ts);
	vec_token_free(stack);
	return (*out = output_queue, NO_ERROR);
}
