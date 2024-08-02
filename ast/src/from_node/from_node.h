/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   from_node.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 14:47:50 by rparodi           #+#    #+#             */
/*   Updated: 2024/08/02 15:47:55 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FROM_NODE_H
# define FROM_NODE_H

# include "ast/ast.h"
# include "gmr/field_identifiers.h"
# include "gmr/symbols.h"
# include "me/mem/mem.h"
# include "me/str/str.h"
# include "me/types.h"
# include "me/vec/vec_ast.h"
# include "parser/api.h"
# include <inttypes.h>
# include <stdio.h>

t_ast_node	ast_alloc(t_ast_node_kind kind);
t_error		build_sym_case_item(\
	t_parse_node self, t_const_str input, t_ast_node *out);
t_error		build_sym_case_statement(\
	t_parse_node self, t_const_str input, t_ast_node *out);
t_error		build_sym_command(\
	t_parse_node self, t_const_str input, t_ast_node *out);
t_error		build_sym_command_name(\
	t_parse_node self, t_const_str input, t_ast_node *out);
t_error		build_sym_comment(\
	t_parse_node self, t_const_str input, t_ast_node *out);
t_error		build_sym_compound_statement(\
	t_parse_node self, t_const_str input, t_ast_node *out);
t_error		build_sym_elif_clause(\
	t_parse_node self, t_const_str input, t_ast_node *out);
t_error		build_sym_else_clause(\
	t_parse_node self, t_const_str input, t_ast_node *out);
t_error		build_sym_extglob_pattern(\
	t_parse_node self, t_const_str input, t_ast_node *out);
t_error		build_sym_file_redirect(\
	t_parse_node self, t_const_str input, t_ast_node *out);
t_error		build_sym_for_statement(\
	t_parse_node self, t_const_str input, t_ast_node *out);
t_error		build_sym_function_definition(\
	t_parse_node self, t_const_str input, t_ast_node *out);
t_error		build_sym_if_statement(\
	t_parse_node self, t_const_str input, t_ast_node *out);
t_error		build_sym_list(\
	t_parse_node self, t_const_str input, t_ast_node *out);
t_error		build_sym_negated_command(\
	t_parse_node self, t_const_str input, t_ast_node *out);
t_error		build_sym_number(\
	t_parse_node self, t_const_str input, t_ast_node *out);
t_error		build_sym_pipeline(\
	t_parse_node self, t_const_str input, t_ast_node *out);
t_error		build_sym_program(\
	t_parse_node self, t_const_str input, t_ast_node *out);
t_error		build_sym_raw_string(\
	t_parse_node self, t_const_str input, t_ast_node *out);
t_error		build_sym_redirected_statement(\
	t_parse_node self, t_const_str input, t_ast_node *out);
t_error		build_sym_regex(\
	t_parse_node self, t_const_str input, t_ast_node *out);
t_error		build_sym_simple_expansion(\
	t_parse_node self, t_const_str input, t_ast_node *out);
t_error		build_sym_string_content(\
	t_parse_node self, t_const_str input, t_ast_node *out);
t_error		build_sym_subshell(\
	t_parse_node self, t_const_str input, t_ast_node *out);
t_error		build_sym_variable_assignment(\
	t_parse_node self, t_const_str input, t_ast_node *out);
t_error		build_sym_while_statement(\
	t_parse_node self, t_const_str input, t_ast_node *out);
t_error		build_sym_word(\
	t_parse_node self, t_const_str input, t_ast_node *out);
t_error		build_sym_expansion(\
	t_parse_node self, t_const_str input, t_ast_node *out);
t_error		build_sym_command_substitution(\
	t_parse_node self, t_const_str input, t_ast_node *out);

/* FUNCTION DONE BUT BY RAPH */
t_error		build_sym_arithmetic_binary_expression(\
	t_parse_node self, t_const_str input, t_ast_node *out);
t_error		build_sym_arithmetic_literal(\
	t_parse_node self, t_const_str input, t_ast_node *out);
t_error		build_sym_arithmetic_parenthesized_expression(\
	t_parse_node self, t_const_str input, t_ast_node *out);
t_error		build_sym_arithmetic_postfix_expression(\
	t_parse_node self, t_const_str input, t_ast_node *out);
t_error		build_sym_arithmetic_ternary_expression(\
	t_parse_node self, t_const_str input, t_ast_node *out);
t_error		build_sym_arithmetic_unary_expression(\
	t_parse_node self, t_const_str input, t_ast_node *out);
t_error		build_sym_arithmetic_expansion(\
	t_parse_node self, t_const_str input, t_ast_node *out);

// TODO: This is my homework,
// it'll need to be handled in a special way I feel...
t_error		build_sym_heredoc_redirect(\
	t_parse_node self, t_const_str input, t_ast_node *out);
t_error		build_sym_simple_heredoc_body(\
	t_parse_node self, t_const_str input, t_ast_node *out);
t_error		build_sym_heredoc_body(\
	t_parse_node self, t_const_str input, t_ast_node *out);
t_error		build_sym_heredoc_content(\
	t_parse_node self, t_const_str input, t_ast_node *out);
t_error		build_sym_heredoc_end(\
	t_parse_node self, t_const_str input, t_ast_node *out);
t_error		build_sym_heredoc_start(\
	t_parse_node self, t_const_str input, t_ast_node *out);

#endif
