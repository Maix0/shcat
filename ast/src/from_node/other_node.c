/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   other_node.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 15:03:03 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/13 15:26:05 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ast/ast.h"
#include "gmr/symbols.h"
#include "gmr/field_identifiers.h"
#include "parser/api.h"
#include "ast/_from_node.h"

static void	_set_op_list(\
	t_node self, t_ast_node **output, t_ast_node ret, t_usize i)
{
	t_symbol	temp;

	temp = ts_node_grammar_symbol(ts_node_child(self, i));
	if (temp == anon_sym_PIPE_PIPE)
		ret->data.list.op = AST_LIST_OR;
	if (temp == anon_sym_AMP_AMP)
		ret->data.list.op = AST_LIST_AND;
	*output = &ret->data.list.right;
}

t_error	build_sym_list(t_node self, t_const_str input, t_ast_node *out)
{
	t_ast_node	ret;
	t_ast_node	*output;
	t_usize		i;

	if (out == NULL || ts_node_symbol(self) == sym_list)
		return (ERROR);
	ret = ast_alloc(AST_LIST);
	i = 0;
	output = &ret->data.list.left;
	while (i < ts_node_child_count(self))
	{
		if (ts_node_field_id_for_child(self, i) == field_cmd)
		{
			if (ast_from_node(ts_node_child(self, i), input, output))
				return (ast_free(ret), ERROR);
		}
		else if (ts_node_field_id_for_child(self, i) == field_op)
			_set_op_list(self, &output, ret, i);
		i++;
	}
	return (*out = ret, NO_ERROR);
}

t_error	build_sym_subshell(\
	t_node self, t_const_str input, t_ast_node *out)
{
	t_ast_node				ret;
	t_ast_node				tmp;
	t_usize					i;

	if (out == NULL || ts_node_symbol(self) != sym_subshell)
		return (ERROR);
	ret = ast_alloc(AST_SUBSHELL);
	i = 0;
	while (i < ts_node_child_count(self))
	{
		if (!ts_node_is_named(ts_node_child(self, i)) && (i++, true))
			continue ;
		if (ast_from_node(ts_node_child(self, i), input, &tmp))
			return (ast_free(ret), ERROR);
		vec_ast_push(&ret->data.subshell.body, tmp);
		i++;
	}
	return (*out = ret, NO_ERROR);
}
