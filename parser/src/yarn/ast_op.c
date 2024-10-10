/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ast_op.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 12:44:53 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/10 16:22:39 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ast/ast.h"
#include "me/types.h"
#include "me/vec/vec_ast.h"
#include "me/vec/vec_token.h"
#include "parser/token.h"

/// en fonction de op, qui peut etre: TOK_AND TOK_PIPE TOK_OR
/// choisir le bon ast_node a faire (t_ast_node->data.list + set operator ou t_asdt_node->data.pipeline)
/// pop deux element de output_queue. pour l'instant la fonction doit print une error si il n'y as pas asser d'element
/// utilise me_abort(MSG) pour faire un abort et print le msg + la stacktrace.
///
/// a terme la fonction utilisera t_error et tt;
///
/// struct s_ast_list if (tok.type == TOK_AND || tok.type == TOK_OR)
/// struct s_ast_pipeline if (tok.type == TOK_PIPE)
/// `ast/include/ast/_raw_structs.h`
///
///
/// in the end we should change to using `t_error` and pushing the ast_node directly to output_queue in the function,
/// will change that later tho :)
t_ast_node ast_from_op(t_token tok, t_vec_ast *output_queue)
{
	t_ast_node ret;
	t_ast_node tmp;

	// this needs have a protection in case output_queue is smaller than 2 elements
	// otherwise it is good :)
	// you could also make it so TOK_AND and TOK_OR share the same code to win some lines
	ret = NULL;
	if (tok.type == TOK_AND)
	{
		ret = ast_alloc(AST_LIST);
		ret->data.list.op = AST_LIST_AND;
		vec_ast_pop(output_queue, &ret->data.list.right);
		vec_ast_pop(output_queue, &ret->data.list.left);
	}
	else if (tok.type == TOK_OR)
	{
		ret = ast_alloc(AST_LIST);
		ret->data.list.op = AST_LIST_OR;
		vec_ast_pop(output_queue, &ret->data.list.right);
		vec_ast_pop(output_queue, &ret->data.list.left);
	}
	else if (tok.type == TOK_PIPE)
	{
		// Here there is some kind of optimization that could be done in the future: if one node is already a AST_PIPELINE, just pus the other node into the right place in it and return the non created AST_PIPELINE node !
		ret = ast_alloc(AST_PIPELINE);
		vec_ast_pop(output_queue, &tmp);
		vec_ast_push(&ret->data.pipeline.statements, tmp);
		vec_ast_pop(output_queue, &tmp);
		vec_ast_push(&ret->data.pipeline.statements, tmp);
	}
	else
		me_abort("ast_from_op not the good token type gived !\n");
	return (ret);
}
