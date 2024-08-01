/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unique_symbols_map_1.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./unique_symbols_map.h"

void	unique_symbols_map_5(t_unique_symbols_map_array *v)
{
	v->a[sym__case_item_last] = sym_case_item;
	v->a[sym_case_item] = sym_case_item;
	v->a[sym_function_definition] = sym_function_definition;
	v->a[sym_compound_statement] = sym_compound_statement;
	v->a[sym_subshell] = sym_subshell;
	v->a[sym_pipeline] = sym_pipeline;
	v->a[sym_list] = sym_list;
	v->a[sym_negated_command] = sym_negated_command;
	v->a[sym_command] = sym_command;
	v->a[sym_command_name] = sym_command_name;
	v->a[sym_variable_assignment] = sym_variable_assignment;
	v->a[sym__variable_assignments] = sym__variable_assignments;
	v->a[sym_file_redirect] = sym_file_redirect;
	v->a[sym_heredoc_redirect] = sym_heredoc_redirect;
	v->a[sym__heredoc_pipeline] = sym_pipeline;
	v->a[sym__heredoc_expression] = sym__heredoc_expression;
	v->a[aux_sym__heredoc_command] = aux_sym__heredoc_command;
	v->a[sym__heredoc_body] = sym__heredoc_body;
	v->a[sym_heredoc_body] = sym_heredoc_body;
	v->a[sym__simple_heredoc_body] = sym__simple_heredoc_body;
	unique_symbols_map_6(v);
}

void	unique_symbols_map_6(t_unique_symbols_map_array *v)
{
	v->a[sym_arithmetic_expansion] = sym_arithmetic_expansion;
	v->a[sym__arithmetic_expression] = sym__arithmetic_expression;
	v->a[sym_arithmetic_literal] = sym_arithmetic_literal;
	v->a[sym_arithmetic_binary_expression] = sym_arithmetic_binary_expression;
	v->a[sym_arithmetic_ternary_expression] \
	= sym_arithmetic_ternary_expression;
	v->a[sym_arithmetic_unary_expression] = sym_arithmetic_unary_expression;
	v->a[sym_arithmetic_postfix_expression] \
	= sym_arithmetic_postfix_expression;
	v->a[sym_arithmetic_parenthesized_expression] \
	= sym_arithmetic_parenthesized_expression;
	v->a[sym_concatenation] = sym_concatenation;
	v->a[sym_string] = sym_string;
	v->a[sym_simple_expansion] = sym_simple_expansion;
	v->a[sym_expansion] = sym_expansion;
	v->a[sym__expansion_body] = sym__expansion_body;
	v->a[sym__expansion_expression] = sym__expansion_expression;
	v->a[sym__expansion_regex] = sym__expansion_regex;
	v->a[sym__concatenation_in_expansion] = sym_concatenation;
	v->a[sym_command_substitution] = sym_command_substitution;
	v->a[sym__extglob_blob] = sym__extglob_blob;
	v->a[sym__word_no_brace] = sym__word_no_brace;
	v->a[sym_terminator] = sym_terminator;
	unique_symbols_map_7(v);
}

void	unique_symbols_map_7(t_unique_symbols_map_array *v)
{
	v->a[aux_sym__statements_repeat1] = aux_sym__statements_repeat1;
	v->a[aux_sym_redirected_statement_repeat1] \
	= aux_sym_redirected_statement_repeat1;
	v->a[aux_sym_redirected_statement_repeat2] \
	= aux_sym_redirected_statement_repeat2;
	v->a[aux_sym_for_statement_repeat1] = aux_sym_for_statement_repeat1;
	v->a[aux_sym_if_statement_repeat1] = aux_sym_if_statement_repeat1;
	v->a[aux_sym_case_statement_repeat1] = aux_sym_case_statement_repeat1;
	v->a[aux_sym__case_item_last_repeat1] = aux_sym__case_item_last_repeat1;
	v->a[aux_sym__case_item_last_repeat2] = aux_sym__case_item_last_repeat2;
	v->a[aux_sym_pipeline_repeat1] = aux_sym_pipeline_repeat1;
	v->a[aux_sym_command_repeat1] = aux_sym_command_repeat1;
	v->a[aux_sym_command_repeat2] = aux_sym_command_repeat2;
	v->a[aux_sym__variable_assignments_repeat1] \
	= aux_sym__variable_assignments_repeat1;
	v->a[aux_sym_heredoc_body_repeat1] = aux_sym_heredoc_body_repeat1;
	v->a[aux_sym_concatenation_repeat1] = aux_sym_concatenation_repeat1;
	v->a[aux_sym_string_repeat1] = aux_sym_string_repeat1;
	v->a[aux_sym__expansion_regex_repeat1] = aux_sym__expansion_regex_repeat1;
	v->a[aux_sym__concatenation_in_expansion_repeat1] \
	= aux_sym__concatenation_in_expansion_repeat1;
}

/* EOF unique_symbols_map_1.c */
