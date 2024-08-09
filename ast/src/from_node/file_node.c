/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_node.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 16:25:02 by rparodi           #+#    #+#             */
/*   Updated: 2024/08/09 16:26:09 by rparodi          ###   ########.fr       */
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
	t_ast_node	ret;
	t_ast_node	tmp;
	t_usize		i;

	(void)(out);
	(void)(input);
	(void)(self);
	if (out == NULL)
		return (ERROR);
	if (ts_node_symbol(self) != sym_file_redirect)
		return (ERROR);
	ret = ast_alloc(AST_FILE_REDIRECTION);
	i = 0;
	while (i < ts_node_child_count(self))
	{
		if (!ts_node_is_named(ts_node_child(self, i)) && (i++, true))
			continue ;
		if (ts_node_field_id_for_child(self, i) == field_op)
		{
			ret->data.file_redirection.op = \
			_get_redirection_op(ts_node_child(self, i));
		}
		if (ts_node_field_id_for_child(self, i) == field_dest)
		{
			if (ast_from_node(ts_node_child(self, i), input, &tmp))
				return (ast_free(ret), ERROR);
			ret->data.file_redirection.output = tmp;
		}
		i++;
	}
	return (*out = ret, NO_ERROR);
}

t_error	build_sym_number(\
	t_parse_node self, t_const_str input, t_ast_node *out)
{
	t_ast_node	ret;

	(void)(out);
	(void)(input);
	(void)(self);
	if (out == NULL)
		return (ERROR);
	if (ts_node_symbol(self) != sym_number)
		return (ERROR);
	ret = ast_alloc(AST_RAW_STRING);
	ret->data.raw_string.str = _extract_str(self, input);
	ret->data.raw_string.len = str_len(ret->data.raw_string.str);
	return (*out = ret, NO_ERROR);
}

t_error	build_sym_file_descriptor(\
	t_parse_node self, t_const_str input, t_ast_node *out)
{
	t_ast_node	ret;

	(void)(out);
	(void)(input);
	(void)(self);
	if (out == NULL)
		return (ERROR);
	if (ts_node_symbol(self) != sym_file_descriptor)
		return (ERROR);
	ret = ast_alloc(AST_RAW_STRING);
	ret->data.raw_string.str = _extract_str(self, input);
	ret->data.raw_string.len = str_len(ret->data.raw_string.str);
	return (*out = ret, NO_ERROR);
}

