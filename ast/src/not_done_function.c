/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   not_done_function.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 13:04:32 by maiboyer          #+#    #+#             */
/*   Updated: 2024/07/30 18:30:47 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "app/node.h"
#include "ast/ast.h"
#include "gmr/symbols.h"
#include "me/types.h"
#include <stdio.h>

t_error	_build_not_finished(t_parse_node self, t_const_str i, t_ast_node *out)
{
	(void)(self);
	(void)(out);
	(void)(i);
	printf("building undefined symbol '%s'\n", ts_node_type(self));
	return (ERROR);
}

t_error	build_sym_heredoc_body(t_parse_node self, t_const_str input, \
	t_ast_node *out) __attribute__((weak, alias("_build_not_finished")));
t_error	build_sym_heredoc_content(t_parse_node self, t_const_str input, \
	t_ast_node *out) __attribute__((weak, alias("_build_not_finished")));
t_error	build_sym_heredoc_end(t_parse_node self, t_const_str input, \
	t_ast_node *out) __attribute__((weak, alias("_build_not_finished")));
t_error	build_sym_heredoc_redirect(t_parse_node self, t_const_str input, \
	t_ast_node *out) __attribute__((weak, alias("_build_not_finished")));
t_error	build_sym_heredoc_start(t_parse_node self, t_const_str input, \
	t_ast_node *out) __attribute__((weak, alias("_build_not_finished")));
t_error	build_sym_simple_heredoc_body(t_parse_node self, t_const_str input, \
	t_ast_node *out) __attribute__((weak, alias("_build_not_finished")));
