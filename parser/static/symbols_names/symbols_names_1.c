/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   symbols_names_1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./symbols_names.h"

void	symbols_names_5(t_symbols_names_array *v)
{
	v->a[sym__case_item_last] = "case_item";
	v->a[sym_case_item] = "case_item";
	v->a[sym_function_definition] = "function_definition";
	v->a[sym_compound_statement] = "compound_statement";
	v->a[sym_subshell] = "subshell";
	v->a[sym_pipeline] = "pipeline";
	v->a[sym_list] = "list";
	v->a[sym_negated_command] = "negated_command";
	v->a[sym_command] = "command";
	v->a[sym_command_name] = "command_name";
	v->a[sym_variable_assignment] = "variable_assignment";
	v->a[sym__variable_assignments] = "_variable_assignments";
	v->a[sym_file_redirect] = "file_redirect";
	v->a[sym_heredoc_redirect] = "heredoc_redirect";
	v->a[sym__heredoc_pipeline] = "pipeline";
	v->a[sym__heredoc_expression] = "_heredoc_expression";
	v->a[aux_sym__heredoc_command] = "_heredoc_command";
	v->a[sym__heredoc_body] = "_heredoc_body";
	v->a[sym_heredoc_body] = "heredoc_body";
	v->a[sym__simple_heredoc_body] = "_simple_heredoc_body";
	symbols_names_6(v);
}

void	symbols_names_6(t_symbols_names_array *v)
{
	v->a[sym_arithmetic_expansion] = "arithmetic_expansion";
	v->a[sym__arithmetic_expression] = "_arithmetic_expression";
	v->a[sym_arithmetic_literal] = "arithmetic_literal";
	v->a[sym_arithmetic_binary_expression] = "arithmetic_binary_expression";
	v->a[sym_arithmetic_ternary_expression] = "arithmetic_ternary_expression";
	v->a[sym_arithmetic_unary_expression] = "arithmetic_unary_expression";
	v->a[sym_arithmetic_postfix_expression] = "arithmetic_postfix_expression";
	v->a[sym_arithmetic_parenthesized_expression] \
	= "arithmetic_parenthesized_expression";
	v->a[sym_concatenation] = "concatenation";
	v->a[sym_string] = "string";
	v->a[sym_simple_expansion] = "simple_expansion";
	v->a[sym_expansion] = "expansion";
	v->a[sym__expansion_body] = "_expansion_body";
	v->a[sym__expansion_expression] = "_expansion_expression";
	v->a[sym__expansion_regex] = "_expansion_regex";
	v->a[sym__concatenation_in_expansion] = "concatenation";
	v->a[sym_command_substitution] = "command_substitution";
	v->a[sym__extglob_blob] = "_extglob_blob";
	v->a[sym__word_no_brace] = "word2";
	v->a[sym_terminator] = "terminator";
	symbols_names_7(v);
}

void	symbols_names_7(t_symbols_names_array *v)
{
	v->a[aux_sym__statements_repeat1] = "_statements_repeat1";
	v->a[aux_sym_redirected_statement_repeat1] \
	= "redirected_statement_repeat1";
	v->a[aux_sym_redirected_statement_repeat2] \
	= "redirected_statement_repeat2";
	v->a[aux_sym_for_statement_repeat1] = "for_statement_repeat1";
	v->a[aux_sym_if_statement_repeat1] = "if_statement_repeat1";
	v->a[aux_sym_case_statement_repeat1] = "case_statement_repeat1";
	v->a[aux_sym__case_item_last_repeat1] = "_case_item_last_repeat1";
	v->a[aux_sym__case_item_last_repeat2] = "_case_item_last_repeat2";
	v->a[aux_sym_pipeline_repeat1] = "pipeline_repeat1";
	v->a[aux_sym_command_repeat1] = "command_repeat1";
	v->a[aux_sym_command_repeat2] = "command_repeat2";
	v->a[aux_sym__variable_assignments_repeat1] \
	= "_variable_assignments_repeat1";
	v->a[aux_sym_heredoc_body_repeat1] = "heredoc_body_repeat1";
	v->a[aux_sym_concatenation_repeat1] = "concatenation_repeat1";
	v->a[aux_sym_string_repeat1] = "string_repeat1";
	v->a[aux_sym__expansion_regex_repeat1] = "_expansion_regex_repeat1";
	v->a[aux_sym__concatenation_in_expansion_repeat1] \
	= "_concatenation_in_expansion_repeat1";
}

/* EOF symbols_names_1.c */
