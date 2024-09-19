/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _here_doc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 16:37:28 by rparodi           #+#    #+#             */
/*   Updated: 2024/09/19 16:46:39 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ast/_from_node.h"
#include "ast/ast.h"
#include "gmr/symbols.h"
#include "gmr/field_identifiers.h"
#include "me/str/str.h"
#include "me/types.h"
#include "parser/api.h"
#include <stdio.h>

t_error	build_sym_heredoc_redirect(t_node self, t_const_str input, \
	t_ast_node *out)
{
	t_ast_node	ret;
	t_usize		i;

	if (ts_node_symbol(self) != sym_heredoc_redirect || \
		input == NULL || out == NULL)
		return (ERROR);
	ret = ast_alloc(AST_HEREDOC_REDIRECTION);
	i = 0;
	while (i < ts_node_child_count(self))
	{
		if (ts_node_field_id_for_child(self, i) == field_op)
			ret->data.heredoc_redirection.op = \
				_get_redirection_op(ts_node_child(self, i));
		else if (ts_node_field_id_for_child(self, i) == field_del)
			ret->data.heredoc_redirection.delimiter = \
				_extract_str(ts_node_child(self, i), input);
		i++;
	}
	return (*out = ret, NO_ERROR);
}
