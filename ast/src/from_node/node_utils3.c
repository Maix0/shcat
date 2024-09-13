/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_utils3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 14:54:21 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/13 14:57:34 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ast/_from_node.h"
#include "ast/ast.h"
#include "gmr/field_identifiers.h"
#include "me/types.h"
#include "me/vec/vec_ast.h"
#include "parser/api.h"

void	_build_sym_expansion_inner(\
	t_parse_node self, t_const_str input, t_ast_node ret, t_usize i)
{
	if (ts_node_field_id_for_child(self, i) == field_len)
		ret->data.expansion.len_operator = true;
	if (ts_node_field_id_for_child(self, i) == field_name)
		ret->data.expansion.var_name = \
		_extract_str(ts_node_child(self, i), input);
	if (ts_node_field_id_for_child(self, i) == field_op)
		ret->data.expansion.kind = _extract_exp_op(ts_node_child(self, i));
}

void	_build_sym_command_substitution_inner(\
	t_parse_node self, t_const_str input, t_ast_node ret, t_usize i)
{
	(void)(input);
	if (ret->data.command_substitution.body.len != 0)
		ast_set_term(&ret->data.command_substitution.body.buffer[\
		ret->data.command_substitution.body.len - 1], \
		_select_term(ts_node_child(self, i)));
}
