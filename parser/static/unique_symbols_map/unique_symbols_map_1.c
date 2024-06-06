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
	v->a[anon_sym_EQ2] = anon_sym_EQ;
	v->a[anon_sym_COLON_QMARK] = anon_sym_COLON_QMARK;
	v->a[anon_sym_QMARK2] = anon_sym_QMARK;
	v->a[anon_sym_COLON_PLUS] = anon_sym_COLON_PLUS;
	v->a[anon_sym_PLUS3] = anon_sym_PLUS;
	v->a[anon_sym_PERCENT_PERCENT] = anon_sym_PERCENT_PERCENT;
	v->a[aux_sym__expansion_regex_token1] = sym_regex;
	v->a[anon_sym_DOLLAR_LPAREN] = anon_sym_DOLLAR_LPAREN;
	v->a[anon_sym_BQUOTE] = anon_sym_BQUOTE;
	v->a[anon_sym_DOLLAR_BQUOTE] = anon_sym_DOLLAR_BQUOTE;
	v->a[sym_comment] = sym_comment;
	v->a[sym__comment_word] = sym_word;
	v->a[aux_sym__simple_variable_name_token1] = sym_variable_name;
	v->a[aux_sym__multiline_variable_name_token1] = sym_variable_name;
	v->a[anon_sym_AT] = anon_sym_AT;
	v->a[anon_sym_0] = anon_sym_AT;
	v->a[anon_sym__] = anon_sym_AT;
	v->a[anon_sym_SEMI] = anon_sym_SEMI;
	v->a[anon_sym_RBRACK] = anon_sym_RBRACK;
	v->a[sym_heredoc_start] = sym_heredoc_start;
	unique_symbols_map_6(v);
}

void	unique_symbols_map_6(t_unique_symbols_map_array *v)
{
	v->a[sym_simple_heredoc_body] = sym_heredoc_body;
	v->a[sym__heredoc_body_beginning] = sym__heredoc_body_beginning;
	v->a[sym_heredoc_content] = sym_heredoc_content;
	v->a[sym_heredoc_end] = sym_heredoc_end;
	v->a[sym_file_descriptor] = sym_file_descriptor;
	v->a[sym__empty_value] = sym__empty_value;
	v->a[sym__concat] = sym__concat;
	v->a[sym_variable_name] = sym_variable_name;
	v->a[sym_test_operator] = sym_word;
	v->a[sym_regex] = sym_regex;
	v->a[sym__regex_no_slash] = sym__regex_no_slash;
	v->a[sym__regex_no_space] = sym__regex_no_space;
	v->a[sym__expansion_word] = sym_word;
	v->a[sym_extglob_pattern] = sym_extglob_pattern;
	v->a[sym__bare_dollar] = anon_sym_DOLLAR;
	v->a[sym__brace_start] = anon_sym_LBRACE;
	v->a[sym__immediate_double_hash] = sym__immediate_double_hash;
	v->a[sym___error_recovery] = sym___error_recovery;
	v->a[sym_program] = sym_program;
	v->a[sym__statements] = sym__statements;
	unique_symbols_map_7(v);
}

void	unique_symbols_map_7(t_unique_symbols_map_array *v)
{
	v->a[aux_sym__terminated_statement] = aux_sym__terminated_statement;
	v->a[sym__statement_not_pipeline] = sym__statement_not_pipeline;
	v->a[sym_redirected_statement] = sym_redirected_statement;
	v->a[sym_for_statement] = sym_for_statement;
	v->a[sym_while_statement] = sym_while_statement;
	v->a[sym_do_group] = sym_do_group;
	v->a[sym_if_statement] = sym_if_statement;
	v->a[sym_elif_clause] = sym_elif_clause;
	v->a[sym_else_clause] = sym_else_clause;
	v->a[sym_case_statement] = sym_case_statement;
	v->a[sym_case_item] = sym_case_item;
	v->a[sym_last_case_item] = sym_case_item;
	v->a[sym_function_definition] = sym_function_definition;
	v->a[sym_compound_statement] = sym_compound_statement;
	v->a[sym_subshell] = sym_subshell;
	v->a[sym_pipeline] = sym_pipeline;
	v->a[sym_list] = sym_list;
	v->a[sym_negated_command] = sym_negated_command;
	v->a[sym_declaration_command] = sym_declaration_command;
	v->a[sym_unset_command] = sym_unset_command;
	unique_symbols_map_8(v);
}

void	unique_symbols_map_8(t_unique_symbols_map_array *v)
{
	v->a[sym_command] = sym_command;
	v->a[sym_command_name] = sym_command_name;
	v->a[sym_variable_assignment] = sym_variable_assignment;
	v->a[sym_variable_assignments] = sym_variable_assignments;
	v->a[sym_file_redirect] = sym_file_redirect;
	v->a[sym_heredoc_redirect] = sym_heredoc_redirect;
	v->a[sym__heredoc_pipeline] = sym_pipeline;
	v->a[sym__heredoc_expression] = sym__heredoc_expression;
	v->a[aux_sym__heredoc_command] = aux_sym__heredoc_command;
	v->a[sym__heredoc_body] = sym__heredoc_body;
	v->a[sym_heredoc_body] = sym_heredoc_body;
	v->a[sym__simple_heredoc_body] = sym__simple_heredoc_body;
	v->a[sym_arithmetic_expansion] = sym_arithmetic_expansion;
	v->a[sym_brace_expression] = sym_brace_expression;
	v->a[sym__arithmetic_expression] = sym__arithmetic_expression;
	v->a[sym__arithmetic_literal] = sym__arithmetic_literal;
	v->a[sym__arithmetic_binary_expression] \
	= sym__arithmetic_binary_expression;
	v->a[sym__arithmetic_ternary_expression] \
	= sym__arithmetic_ternary_expression;
	v->a[sym__arithmetic_unary_expression] = sym__arithmetic_unary_expression;
	v->a[sym__arithmetic_postfix_expression] \
	= sym__arithmetic_postfix_expression;
	unique_symbols_map_9(v);
}

void	unique_symbols_map_9(t_unique_symbols_map_array *v)
{
	v->a[sym__arithmetic_parenthesized_expression] \
	= sym__arithmetic_parenthesized_expression;
	v->a[sym_concatenation] = sym_concatenation;
	v->a[sym_string] = sym_string;
	v->a[sym_number] = sym_number;
	v->a[sym_simple_expansion] = sym_simple_expansion;
	v->a[sym_expansion] = sym_expansion;
	v->a[sym__expansion_body] = sym__expansion_body;
	v->a[sym__expansion_expression] = sym__expansion_expression;
	v->a[sym__expansion_regex] = sym__expansion_regex;
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
	v->a[aux_sym_case_item_repeat1] = aux_sym_case_item_repeat1;
	v->a[aux_sym_pipeline_repeat1] = aux_sym_pipeline_repeat1;
	unique_symbols_map_10(v);
}

/* EOF unique_symbols_map_1.c */
