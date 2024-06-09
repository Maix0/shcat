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
	v->a[anon_sym_SEMI] = anon_sym_SEMI;
	v->a[sym_heredoc_start] = sym_heredoc_start;
	v->a[sym_simple_heredoc_body] = sym_heredoc_body;
	v->a[sym__heredoc_body_beginning] = sym__heredoc_body_beginning;
	v->a[sym_heredoc_content] = sym_heredoc_content;
	v->a[sym_heredoc_end] = sym_heredoc_end;
	v->a[sym_file_descriptor] = sym_file_descriptor;
	v->a[sym__empty_value] = sym__empty_value;
	v->a[sym__concat] = sym__concat;
	v->a[sym_variable_name] = sym_variable_name;
	v->a[sym_regex] = sym_regex;
	v->a[sym__expansion_word] = sym_word;
	v->a[sym_extglob_pattern] = sym_extglob_pattern;
	v->a[sym__bare_dollar] = anon_sym_DOLLAR;
	v->a[sym__immediate_double_hash] = sym__immediate_double_hash;
	v->a[sym___error_recovery] = sym___error_recovery;
	v->a[sym_program] = sym_program;
	v->a[sym__statements] = sym__statements;
	v->a[aux_sym__terminated_statement] = aux_sym__terminated_statement;
	v->a[sym__statement_not_pipeline] = sym__statement_not_pipeline;
	unique_symbols_map_6(v);
}

void	unique_symbols_map_6(t_unique_symbols_map_array *v)
{
	v->a[sym_redirected_statement] = sym_redirected_statement;
	v->a[sym_for_statement] = sym_for_statement;
	v->a[sym_while_statement] = sym_while_statement;
	v->a[sym_do_group] = sym_do_group;
	v->a[sym_if_statement] = sym_if_statement;
	v->a[sym_elif_clause] = sym_elif_clause;
	v->a[sym_else_clause] = sym_else_clause;
	v->a[sym_case_statement] = sym_case_statement;
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
	v->a[sym_variable_assignments] = sym_variable_assignments;
	unique_symbols_map_7(v);
}

void	unique_symbols_map_7(t_unique_symbols_map_array *v)
{
	v->a[sym_file_redirect] = sym_file_redirect;
	v->a[sym_heredoc_redirect] = sym_heredoc_redirect;
	v->a[sym__heredoc_pipeline] = sym_pipeline;
	v->a[sym__heredoc_expression] = sym__heredoc_expression;
	v->a[aux_sym__heredoc_command] = aux_sym__heredoc_command;
	v->a[sym__heredoc_body] = sym__heredoc_body;
	v->a[sym_heredoc_body] = sym_heredoc_body;
	v->a[sym__simple_heredoc_body] = sym__simple_heredoc_body;
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
	v->a[sym_number] = sym_number;
	v->a[sym_simple_expansion] = sym_simple_expansion;
	unique_symbols_map_8(v);
}

void	unique_symbols_map_8(t_unique_symbols_map_array *v)
{
	v->a[sym_expansion] = sym_expansion;
	v->a[sym__expansion_body] = sym__expansion_body;
	v->a[sym_expansion_expression] = sym_expansion_expression;
	v->a[sym_expansion_regex] = sym_expansion_regex;
	v->a[sym__concatenation_in_expansion] = sym_concatenation;
	v->a[sym_command_substitution] = sym_command_substitution;
	v->a[sym__extglob_blob] = sym__extglob_blob;
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
	v->a[aux_sym_variable_assignments_repeat1] \
	= aux_sym_variable_assignments_repeat1;
	v->a[aux_sym_heredoc_body_repeat1] = aux_sym_heredoc_body_repeat1;
	unique_symbols_map_9(v);
}

void	unique_symbols_map_9(t_unique_symbols_map_array *v)
{
	v->a[aux_sym_concatenation_repeat1] = aux_sym_concatenation_repeat1;
	v->a[aux_sym_string_repeat1] = aux_sym_string_repeat1;
	v->a[aux_sym_expansion_regex_repeat1] = aux_sym_expansion_regex_repeat1;
	v->a[aux_sym__concatenation_in_expansion_repeat1] \
	= aux_sym__concatenation_in_expansion_repeat1;
}

/* EOF unique_symbols_map_1.c */
