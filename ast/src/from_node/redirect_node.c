/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   redirect_node.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 18:45:21 by rparodi           #+#    #+#             */
/*   Updated: 2024/09/13 14:37:44 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ast/_from_node.h"
#include "ast/ast.h"
#include "gmr/field_identifiers.h"
#include "gmr/field_identifiers.h"
#include "gmr/symbols.h"
#include "gmr/symbols.h"
#include "me/str/str.h"
#include "me/types.h"
#include "me/vec/vec_ast.h"
#include "parser/api.h"
#include <stdio.h>

t_error	build_sym_file_redirect(\
	t_parse_node self, t_const_str input, t_ast_node *out)
{
	t_ast_node	n[2];
	t_usize		i;

	if (out == NULL || ts_node_symbol(self) != sym_file_redirect)
		return (ERROR);
	n[0] = ast_alloc(AST_FILE_REDIRECTION);
	i = 0;
	while (i < ts_node_child_count(self))
	{
		if (!ts_node_is_named(ts_node_child(self, i)) && (i++, true))
			continue ;
		if (ts_node_field_id_for_child(self, i) == field_op)
		{
			n[0]->data.file_redirection.op = \
			_get_redirection_op(ts_node_child(self, i));
		}
		if (ts_node_field_id_for_child(self, i) == field_dest)
		{
			if (ast_from_node(ts_node_child(self, i), input, &n[1]))
				return (ast_free(n[0]), ERROR);
			n[0]->data.file_redirection.output = n[1];
		}
		i++;
	}
	return (*out = n[0], NO_ERROR);
}

t_error	build_sym_redirected_statement(\
	t_parse_node self, t_const_str input, t_ast_node *out)
{
	t_ast_node	n[3];
	t_usize		i;

	if (out == NULL || ts_node_symbol(self) != sym_redirected_statement)
		return (ERROR);
	i = 0;
	n[1] = ast_alloc(AST_COMMAND);
	n[0] = n[1];
	while (i < ts_node_child_count(self))
	{
		if (!ts_node_is_named(ts_node_child(self, i)) && (i++, true))
			continue ;
		if (!(ts_node_symbol(ts_node_child(self, i)) == sym_file_redirect || \
			ts_node_symbol(ts_node_child(self, i)) == sym_heredoc_redirect))
		{
			if (ast_from_node(ts_node_child(self, i++), input, &n[1]))
				return (ast_free(n[0]), ERROR);
			continue ;
		}
		if (ast_from_node(ts_node_child(self, i++), input, &n[2]))
			return ((void)((n[1] != n[0]) \
			&& (ast_free(n[0]), true)), ast_free(n[1]), ERROR);
		_append_redirection(n[1], n[2]);
	}
	return ((void)(n[1] != n[0] && (ast_free(n[0]), true)), *out = n[1], 0);
}
