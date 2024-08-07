/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _from_node.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 16:54:31 by maiboyer          #+#    #+#             */
/*   Updated: 2024/08/06 19:02:40 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FROM_NODE_H
# define _FROM_NODE_H

# include "ast/ast.h"
# include "me/types.h"
# include "parser/api.h"

void						_add_negation(t_ast_node *node);
void						_append_redirection(t_ast_node node,
								t_ast_node redirection);
t_ast_expansion_operator	_extract_exp_op(t_parse_node self);
t_str						_extract_str(t_parse_node self, t_const_str input);
t_ast_redirection_kind		_get_redirection_op(t_parse_node self);
t_ast_arithmetic_operator	_parse_operator(t_parse_node self);
t_ast_terminator_kind		_select_term(t_parse_node node);
t_vec_ast					*_vec_command(t_ast_command *val, t_usize i);
t_error						ast_from_node(t_parse_node node, t_const_str input,
								t_ast_node *out);
void						ast_set_term(t_ast_node *node,
								t_ast_terminator_kind term);
t_error						build_sym__case_item_last(t_parse_node self,
								t_const_str input, t_ast_node *out);
t_error						build_sym_arithmetic_binary_expression(\
					t_parse_node self, t_const_str input, t_ast_node *out);
t_error						build_sym_arithmetic_expansion(t_parse_node self,
								t_const_str input, t_ast_node *out);
t_error						build_sym_arithmetic_literal(t_parse_node self,
								t_const_str input, t_ast_node *out);
t_error						build_sym_arithmetic_parenthesized_expression(\
					t_parse_node self, t_const_str input, t_ast_node *out);
t_error						build_sym_arithmetic_postfix_expression(\
					t_parse_node self, t_const_str input, t_ast_node *out);
t_error						build_sym_arithmetic_ternary_expression(\
					t_parse_node self, t_const_str input, t_ast_node *out);
t_error						build_sym_arithmetic_unary_expression(\
					t_parse_node self, t_const_str input, t_ast_node *out);
t_error						build_sym_case_item(t_parse_node self,
								t_const_str input, t_ast_node *out);
t_error						build_sym_case_statement(t_parse_node self,
								t_const_str input, t_ast_node *out);
t_error						build_sym_command(t_parse_node self,
								t_const_str input, t_ast_node *out);
t_error						build_sym_command_name(t_parse_node self,
								t_const_str input, t_ast_node *out);
t_error						build_sym_command_substitution(t_parse_node self,
								t_const_str input, t_ast_node *out);
t_error						build_sym_comment(t_parse_node self,
								t_const_str input, t_ast_node *out);
t_error						build_sym_compound_statement(t_parse_node self,
								t_const_str input, t_ast_node *out);
t_error						build_sym_concatenation(t_parse_node self,
								t_const_str input, t_ast_node *out);
t_error						build_sym_do_group(t_parse_node self,
								t_const_str input, t_ast_node *out);
t_error						build_sym_elif_clause(t_parse_node self,
								t_const_str input, t_ast_node *out);
t_error						build_sym_else_clause(t_parse_node self,
								t_const_str input, t_ast_node *out);
t_error						build_sym_expansion(t_parse_node self,
								t_const_str input, t_ast_node *out);
t_error						build_sym_extglob_pattern(t_parse_node self,
								t_const_str input, t_ast_node *out);
t_error						build_sym_file_descriptor(t_parse_node self,
								t_const_str input, t_ast_node *out);
t_error						build_sym_file_redirect(t_parse_node self,
								t_const_str input, t_ast_node *out);
t_error						build_sym_for_statement(t_parse_node self,
								t_const_str input, t_ast_node *out);
t_error						build_sym_function_definition(t_parse_node self,
								t_const_str input, t_ast_node *out);
t_error						build_sym_if_statement(t_parse_node self,
								t_const_str input, t_ast_node *out);
t_error						build_sym_heredoc_redirect(\
					t_parse_node self, t_const_str input, t_ast_node *out);
t_error						build_sym_simple_heredoc_body(\
					t_parse_node self, t_const_str input, t_ast_node *out);
t_error						build_sym_heredoc_body(\
					t_parse_node self, t_const_str input, t_ast_node *out);
t_error						build_sym_heredoc_content(\
					t_parse_node self, t_const_str input, t_ast_node *out);
t_error						build_sym_heredoc_end(\
					t_parse_node self, t_const_str input, t_ast_node *out);
t_error						build_sym_heredoc_start(\
					t_parse_node self, t_const_str input, t_ast_node *out);
t_error						build_sym_list(t_parse_node self, t_const_str input,
								t_ast_node *out);
t_error						build_sym_negated_command(t_parse_node self,
								t_const_str input, t_ast_node *out);
t_error						build_sym_number(t_parse_node self,
								t_const_str input, t_ast_node *out);
t_error						build_sym_pipeline(t_parse_node self,
								t_const_str input, t_ast_node *out);
t_error						build_sym_program(t_parse_node self,
								t_const_str input, t_ast_node *out);
t_error						build_sym_raw_string(t_parse_node self,
								t_const_str input, t_ast_node *out);
t_error						build_sym_redirected_statement(t_parse_node self,
								t_const_str input, t_ast_node *out);
t_error						build_sym_regex(t_parse_node self,
								t_const_str input, t_ast_node *out);
t_error						build_sym_simple_expansion(t_parse_node self,
								t_const_str input, t_ast_node *out);
t_error						build_sym_string(t_parse_node self,
								t_const_str input, t_ast_node *out);
t_error						build_sym_string_content(t_parse_node self,
								t_const_str input, t_ast_node *out);
t_error						build_sym_subshell(t_parse_node self,
								t_const_str input, t_ast_node *out);
t_error						build_sym_variable_assignment(t_parse_node self,
								t_const_str input, t_ast_node *out);
t_error						build_sym_while_statement(t_parse_node self,
								t_const_str input, t_ast_node *out);
t_error						build_sym_word(t_parse_node self, t_const_str input,
								t_ast_node *out);
t_vec_ast					*_append_scripting(t_ast_node node);

#endif /* _FROM_NODE_H */
