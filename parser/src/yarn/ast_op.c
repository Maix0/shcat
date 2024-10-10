/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ast_op.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 12:44:53 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/10 15:19:20 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ast/ast.h"
#include "me/types.h"
#include "parser/token.h"
#include "me/vec/vec_ast.h"
#include "me/vec/vec_token.h"

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
t_ast_node ast_from_op(t_token tok, t_vec_ast *output_queue)
{
	t_ast_node	tmp;

	if (tok.type != TOK_AND && tok.type != TOK_OR && tok.type != TOK_PIPE)
		me_abort("ast_from_op not the good token type gived !\n");
	if (tok.type == TOK_AND)
	{
		tmp = ast_alloc(AST_LIST);
		tmp->data.list.op = AST_LIST_AND;
		vec_ast_pop(output_queue, &tmp->data.list.right);
		vec_ast_pop(output_queue, &tmp->data.list.left);
	}
	if (tok.type == TOK_OR)
	{
		tmp = ast_alloc(AST_LIST);
		tmp->data.list.op = AST_LIST_OR;
		vec_ast_pop(output_queue, &tmp->data.list.right);
		vec_ast_pop(output_queue, &tmp->data.list.left);
	}
	if (tok.type == TOK_PIPE)
	{
		tmp = ast_alloc(AST_PIPELINE);
	}
}
