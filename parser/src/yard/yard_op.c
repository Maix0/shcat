/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   yard_op.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 12:44:53 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 17:51:59 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ast/ast.h"
#include "me/types.h"
#include "me/vec/vec_ast.h"
#include "me/vec/vec_token.h"
#include "parser/token.h"

static enum e_ast_list_kind	_ast_list_get_op(enum e_token ty)
{
	if (ty == TOK_AND)
		return (AST_LIST_AND);
	else if (ty == TOK_OR)
		return (AST_LIST_OR);
	me_abort("invalid token type for ast_list operator");
	return (-1);
}

static inline t_error	_tok_pipeline(\
					t_vec_ast *output_queue, t_ast_node rhs, t_ast_node lhs)
{
	t_ast_node	ret;

	if (rhs->kind == AST_PIPELINE)
	{
		vec_ast_push_front(&rhs->data.pipeline.statements, lhs);
		vec_ast_push(output_queue, rhs);
	}
	else if (lhs->kind == AST_PIPELINE)
	{
		vec_ast_push(&lhs->data.pipeline.statements, rhs);
		vec_ast_push(output_queue, lhs);
	}
	else
	{
		ret = ast_alloc(AST_PIPELINE);
		vec_ast_push(&ret->data.pipeline.statements, lhs);
		vec_ast_push(&ret->data.pipeline.statements, rhs);
		vec_ast_push(output_queue, ret);
	}
	return (NO_ERROR);
}

/// en fonction de op, qui peut etre: TOK_AND TOK_PIPE TOK_OR
/// choisir le bon ast_node a faire (t_ast_node->data.list + set operator ou
/// t_asdt_node->data.pipeline)
/// pop deux element de output_queue. pour l'instant la fonction doit print une
/// error si il n'y as pas asser d'element
/// utilise me_abort(MSG) pour faire un abort et print le msg + la stacktrace.
///
/// a terme la fonction utilisera t_error et tt;
///
/// struct s_ast_list if (tok.type == TOK_AND || tok.type == TOK_OR)
/// struct s_ast_pipeline if (tok.type == TOK_PIPE)
/// `ast/include/ast/_raw_structs.h`
///
///
/// in the end we should change to using `t_error` and pushing the ast_node
/// directly to output_queue in the function,
/// will change that later tho :)
t_error	ast_from_op(t_token tok, t_vec_ast *output_queue)
{
	t_ast_node	ret;
	t_ast_node	lhs;
	t_ast_node	rhs;

	if (!(tok.type == TOK_AND || tok.type == TOK_OR || tok.type == TOK_PIPE))
		return (ERROR);
	if (output_queue == NULL || output_queue->len < 2)
		return (ERROR);
	vec_ast_pop(output_queue, &rhs);
	vec_ast_pop(output_queue, &lhs);
	if (tok.type == TOK_AND || tok.type == TOK_OR)
	{
		ret = ast_alloc(AST_LIST);
		ret->data.list.op = _ast_list_get_op(tok.type);
		ret->data.list.left = lhs;
		ret->data.list.right = rhs;
		vec_ast_push(output_queue, ret);
	}
	else if (tok.type == TOK_PIPE && _tok_pipeline(output_queue, rhs, lhs))
		return (ERROR);
	token_free(tok);
	return (NO_ERROR);
}
