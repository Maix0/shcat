/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unique_symbols_map.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../types/type_unique_symbols_map.h"
#include "../headers/symbols.h"
#include "../headers/external_scanner_symbol_identifiers.h"
#include "../headers/field_identifiers.h"

#include "../headers/constants.h"

static const \
t_unique_symbols_map_array	g_t_unique_symbols_map_array = {.a = {
[ts_builtin_sym_end] = ts_builtin_sym_end,
[sym_word] = sym_word,
[anon_sym_for] = anon_sym_for,
[anon_sym_in] = anon_sym_in,
[anon_sym_while] = anon_sym_while,
[anon_sym_until] = anon_sym_until,
[anon_sym_do] = anon_sym_do,
[anon_sym_done] = anon_sym_done,
[anon_sym_if] = anon_sym_if,
[anon_sym_then] = anon_sym_then,
[anon_sym_fi] = anon_sym_fi,
[anon_sym_elif] = anon_sym_elif,
[anon_sym_else] = anon_sym_else,
[anon_sym_case] = anon_sym_case,
[anon_sym_esac] = anon_sym_esac,
[anon_sym_LPAREN] = anon_sym_LPAREN,
[anon_sym_PIPE] = anon_sym_PIPE,
[anon_sym_RPAREN] = anon_sym_RPAREN,
[anon_sym_LF] = anon_sym_LF,
[anon_sym_SEMI_SEMI] = anon_sym_SEMI_SEMI,
[anon_sym_LBRACE] = anon_sym_LBRACE,
[anon_sym_RBRACE] = anon_sym_RBRACE,
[anon_sym_AMP_AMP] = sym__immediate_double_hash,
[anon_sym_PIPE_PIPE] = sym__immediate_double_hash,
[anon_sym_BANG] = anon_sym_BANG,
[anon_sym_EQ] = anon_sym_EQ,
[anon_sym_LT] = sym__immediate_double_hash,
[anon_sym_GT] = sym__immediate_double_hash,
[anon_sym_GT_GT] = sym__immediate_double_hash,
[anon_sym_LT_LT] = sym__immediate_double_hash,
[aux_sym_heredoc_redirect_token1] = aux_sym_heredoc_redirect_token1,
[anon_sym_DOLLAR_LPAREN_LPAREN] = anon_sym_DOLLAR_LPAREN_LPAREN,
[anon_sym_RPAREN_RPAREN] = anon_sym_RPAREN_RPAREN,
[anon_sym_PLUS] = sym__immediate_double_hash,
[anon_sym_DASH] = sym__immediate_double_hash,
[anon_sym_STAR] = sym__immediate_double_hash,
[anon_sym_SLASH] = sym__immediate_double_hash,
[anon_sym_PERCENT] = sym__immediate_double_hash,
[anon_sym_QMARK] = anon_sym_QMARK,
[anon_sym_COLON] = anon_sym_COLON,
[anon_sym_DASH2] = sym__immediate_double_hash,
[anon_sym_PLUS2] = sym__immediate_double_hash,
[anon_sym_PLUS_PLUS] = sym__immediate_double_hash,
[anon_sym_DASH_DASH] = sym__immediate_double_hash,
[aux_sym_concatenation_token1] = aux_sym_concatenation_token1,
[anon_sym_DOLLAR] = anon_sym_DOLLAR,
[anon_sym_DQUOTE] = anon_sym_DQUOTE,
[sym_string_content] = sym_string_content,
[sym_raw_string] = sym_raw_string,
[sym_number] = sym_number,
[anon_sym_POUND] = sym__immediate_double_hash,
[anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
[anon_sym_COLON_DASH] = sym__immediate_double_hash,
[anon_sym_DASH3] = sym__immediate_double_hash,
[anon_sym_COLON_EQ] = sym__immediate_double_hash,
[anon_sym_EQ2] = sym__immediate_double_hash,
[anon_sym_COLON_QMARK] = sym__immediate_double_hash,
[anon_sym_QMARK2] = sym__immediate_double_hash,
[anon_sym_COLON_PLUS] = sym__immediate_double_hash,
[anon_sym_PLUS3] = sym__immediate_double_hash,
[anon_sym_PERCENT_PERCENT] = sym__immediate_double_hash,
[aux_sym__expansion_regex_token1] = sym_regex,
[anon_sym_DOLLAR_LPAREN] = anon_sym_DOLLAR_LPAREN,
[anon_sym_BQUOTE] = anon_sym_BQUOTE,
[sym_comment] = sym_comment,
[sym__comment_word] = sym_word,
[aux_sym__simple_variable_name_token1] = sym_variable_name,
[aux_sym__multiline_variable_name_token1] = sym_variable_name,
[anon_sym_AT] = anon_sym_AT,
[anon_sym_0] = anon_sym_AT,
[aux_sym__word_no_brace_token1] = aux_sym__word_no_brace_token1,
[anon_sym_SEMI] = anon_sym_SEMI,
[anon_sym_LT_LT_DASH] = anon_sym_LT_LT_DASH,
[sym_heredoc_start] = sym_heredoc_start,
[sym_simple_heredoc_body] = sym_heredoc_body,
[sym__heredoc_body_beginning] = sym__heredoc_body_beginning,
[sym_heredoc_content] = sym_heredoc_content,
[sym_heredoc_end] = sym_heredoc_end,
[sym_file_descriptor] = sym_file_descriptor,
[sym__empty_value] = sym__empty_value,
[sym__concat] = sym__concat,
[sym_variable_name] = sym_variable_name,
[sym_regex] = sym_regex,
[sym__expansion_word] = sym_word,
[sym_extglob_pattern] = sym_extglob_pattern,
[sym__bare_dollar] = sym_word,
[sym__immediate_double_hash] = sym__immediate_double_hash,
[sym___error_recovery] = sym___error_recovery,
[sym_program] = sym_program,
[sym__statements] = sym__statements,
[aux_sym__terminated_statement] = aux_sym__terminated_statement,
[sym__statement_not_pipeline] = sym__statement_not_pipeline,
[sym_redirected_statement] = sym_redirected_statement,
[sym_for_statement] = sym_for_statement,
[sym_while_statement] = sym_while_statement,
[sym_do_group] = sym_do_group,
[sym_if_statement] = sym_if_statement,
[sym_elif_clause] = sym_elif_clause,
[sym_else_clause] = sym_else_clause,
[sym_case_statement] = sym_case_statement,
[sym__case_item_last] = sym_case_item,
[sym_case_item] = sym_case_item,
[sym_function_definition] = sym_function_definition,
[sym_compound_statement] = sym_compound_statement,
[sym_subshell] = sym_subshell,
[sym_pipeline] = sym_pipeline,
[sym_list] = sym_list,
[sym_negated_command] = sym_negated_command,
[sym_command] = sym_command,
[sym_command_name] = sym_command_name,
[sym_variable_assignment] = sym_variable_assignment,
[sym__variable_assignments] = sym__variable_assignments,
[sym_file_redirect] = sym_file_redirect,
[sym_heredoc_redirect] = sym_heredoc_redirect,
[sym__heredoc_pipeline] = sym_pipeline,
[sym__heredoc_expression] = sym__heredoc_expression,
[aux_sym__heredoc_command] = aux_sym__heredoc_command,
[sym__heredoc_body] = sym__heredoc_body,
[sym_heredoc_body] = sym_heredoc_body,
[sym__simple_heredoc_body] = sym__simple_heredoc_body,
[sym_arithmetic_expansion] = sym_arithmetic_expansion,
[sym__arithmetic_expression] = sym__arithmetic_expression,
[sym_arithmetic_literal] = sym_arithmetic_literal,
[sym_arithmetic_binary_expression] = sym_arithmetic_binary_expression,
[sym_arithmetic_ternary_expression] = sym_arithmetic_ternary_expression,
[sym_arithmetic_unary_expression] = sym_arithmetic_unary_expression,
[sym_arithmetic_postfix_expression] = sym_arithmetic_postfix_expression,
[sym_arithmetic_parenthesized_expression] = sym_arithmetic_parenthesized_expression,
[sym_concatenation] = sym_concatenation,
[sym_string] = sym_string,
[sym_simple_expansion] = sym_simple_expansion,
[sym_expansion] = sym_expansion,
[sym__expansion_body] = sym__expansion_body,
[sym__expansion_expression] = sym__expansion_expression,
[sym__expansion_regex] = sym__expansion_regex,
[sym__concatenation_in_expansion] = sym_concatenation,
[sym_command_substitution] = sym_command_substitution,
[sym__extglob_blob] = sym__extglob_blob,
[sym__word_no_brace] = sym__word_no_brace,
[sym_terminator] = sym_terminator,
[aux_sym__statements_repeat1] = aux_sym__statements_repeat1,
[aux_sym_redirected_statement_repeat1] = aux_sym_redirected_statement_repeat1,
[aux_sym_redirected_statement_repeat2] = aux_sym_redirected_statement_repeat2,
[aux_sym_for_statement_repeat1] = aux_sym_for_statement_repeat1,
[aux_sym_if_statement_repeat1] = aux_sym_if_statement_repeat1,
[aux_sym_case_statement_repeat1] = aux_sym_case_statement_repeat1,
[aux_sym__case_item_last_repeat1] = aux_sym__case_item_last_repeat1,
[aux_sym__case_item_last_repeat2] = aux_sym__case_item_last_repeat2,
[aux_sym_pipeline_repeat1] = aux_sym_pipeline_repeat1,
[aux_sym_command_repeat1] = aux_sym_command_repeat1,
[aux_sym_command_repeat2] = aux_sym_command_repeat2,
[aux_sym__variable_assignments_repeat1] = aux_sym__variable_assignments_repeat1,
[aux_sym_heredoc_body_repeat1] = aux_sym_heredoc_body_repeat1,
[aux_sym_concatenation_repeat1] = aux_sym_concatenation_repeat1,
[aux_sym_string_repeat1] = aux_sym_string_repeat1,
[aux_sym__expansion_regex_repeat1] = aux_sym__expansion_regex_repeat1,
[aux_sym__concatenation_in_expansion_repeat1] = aux_sym__concatenation_in_expansion_repeat1,
}};

const t_unique_symbols_map_array	*create_unique_symbols_map(void)
{
	return (&g_t_unique_symbols_map_array);
}