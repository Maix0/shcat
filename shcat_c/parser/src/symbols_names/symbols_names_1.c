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
	v->a[aux_sym_concatenation_token1] = "``";
	v->a[anon_sym_DOLLAR] = "$";
	v->a[sym__special_character] = "_special_character";
	v->a[anon_sym_DQUOTE] = "\\\"";
	v->a[sym_string_content] = "string_content";
	v->a[sym_raw_string] = "raw_string";
	v->a[sym_ansi_c_string] = "ansi_c_string";
	v->a[aux_sym_number_token1] = "number_token1";
	v->a[aux_sym_number_token2] = "number_token2";
	v->a[anon_sym_POUND] = "#";
	v->a[anon_sym_DOLLAR_LBRACE] = "${";
	v->a[anon_sym_RBRACE3] = "}";
	v->a[anon_sym_BANG2] = "!";
	v->a[anon_sym_AT] = "@";
	v->a[anon_sym_STAR2] = "*";
	v->a[anon_sym_POUND2] = "#";
	v->a[anon_sym_EQ2] = "=";
	v->a[anon_sym_COLON_EQ] = ":=";
	v->a[anon_sym_DASH3] = "-";
	v->a[anon_sym_COLON_DASH] = ":-";
	symbols_names_6(v);
}

void	symbols_names_6(t_symbols_names_array *v)
{
	v->a[anon_sym_PLUS3] = "+";
	v->a[anon_sym_COLON_PLUS] = ":+";
	v->a[anon_sym_QMARK2] = "\\\?";
	v->a[anon_sym_COLON_QMARK] = ":\\\?";
	v->a[anon_sym_PERCENT_PERCENT] = "%%";
	v->a[aux_sym__expansion_regex_token1] = "regex";
	v->a[anon_sym_SLASH_SLASH] = "//";
	v->a[anon_sym_SLASH_POUND] = "/#";
	v->a[anon_sym_SLASH_PERCENT] = "/%";
	v->a[anon_sym_COMMA_COMMA] = ",,";
	v->a[anon_sym_CARET_CARET] = "^^";
	v->a[anon_sym_U] = "U";
	v->a[anon_sym_u] = "u";
	v->a[anon_sym_L] = "L";
	v->a[anon_sym_Q] = "Q";
	v->a[anon_sym_E] = "E";
	v->a[anon_sym_P] = "P";
	v->a[anon_sym_A] = "A";
	v->a[anon_sym_K] = "K";
	v->a[anon_sym_a] = "a";
	symbols_names_7(v);
}

void	symbols_names_7(t_symbols_names_array *v)
{
	v->a[anon_sym_k] = "k";
	v->a[anon_sym_DOLLAR_LPAREN] = "$(";
	v->a[anon_sym_BQUOTE] = "`";
	v->a[anon_sym_DOLLAR_BQUOTE] = "$`";
	v->a[anon_sym_LT_LPAREN] = "<(";
	v->a[anon_sym_GT_LPAREN] = ">(";
	v->a[sym_comment] = "comment";
	v->a[sym__comment_word] = "word";
	v->a[aux_sym__simple_variable_name_token1] = "variable_name";
	v->a[aux_sym__multiline_variable_name_token1] = "variable_name";
	v->a[anon_sym_AT2] = "special_variable_name";
	v->a[anon_sym_0] = "special_variable_name";
	v->a[anon_sym__] = "special_variable_name";
	v->a[sym_heredoc_start] = "heredoc_start";
	v->a[sym_simple_heredoc_body] = "heredoc_body";
	v->a[sym__heredoc_body_beginning] = "_heredoc_body_beginning";
	v->a[sym_heredoc_content] = "heredoc_content";
	v->a[sym_heredoc_end] = "heredoc_end";
	v->a[sym_file_descriptor] = "file_descriptor";
	v->a[sym__empty_value] = "_empty_value";
	symbols_names_8(v);
}

void	symbols_names_8(t_symbols_names_array *v)
{
	v->a[sym__concat] = "_concat";
	v->a[sym_variable_name] = "variable_name";
	v->a[sym_test_operator] = "test_operator";
	v->a[sym_regex] = "regex";
	v->a[sym__regex_no_slash] = "regex";
	v->a[sym__regex_no_space] = "regex";
	v->a[sym__expansion_word] = "word";
	v->a[sym_extglob_pattern] = "extglob_pattern";
	v->a[sym__bare_dollar] = "$";
	v->a[sym__brace_start] = "{";
	v->a[sym__immediate_double_hash] = "##";
	v->a[sym__external_expansion_sym_hash] = "#";
	v->a[sym__external_expansion_sym_bang] = "!";
	v->a[sym__external_expansion_sym_equal] = "=";
	v->a[sym___error_recovery] = "__error_recovery";
	v->a[sym_program] = "program";
	v->a[sym__statements] = "_statements";
	v->a[aux_sym__terminated_statement] = "_terminated_statement";
	v->a[sym__statement_not_pipeline] = "_statement_not_pipeline";
	v->a[sym_redirected_statement] = "redirected_statement";
	symbols_names_9(v);
}

void	symbols_names_9(t_symbols_names_array *v)
{
	v->a[sym_for_statement] = "for_statement";
	v->a[sym_c_style_for_statement] = "c_style_for_statement";
	v->a[sym__for_body] = "_for_body";
	v->a[sym__c_expression] = "_c_expression";
	v->a[sym__c_expression_not_assignment] = "_c_expression_not_assignment";
	v->a[sym__c_variable_assignment] = "variable_assignment";
	v->a[sym__c_unary_expression] = "unary_expression";
	v->a[sym__c_binary_expression] = "binary_expression";
	v->a[sym__c_postfix_expression] = "postfix_expression";
	v->a[sym__c_parenthesized_expression] = "parenthesized_expression";
	v->a[sym_while_statement] = "while_statement";
	v->a[sym_do_group] = "do_group";
	v->a[sym_if_statement] = "if_statement";
	v->a[sym_elif_clause] = "elif_clause";
	v->a[sym_else_clause] = "else_clause";
	v->a[sym_case_statement] = "case_statement";
	v->a[sym_case_item] = "case_item";
	v->a[sym_last_case_item] = "case_item";
	v->a[sym_function_definition] = "function_definition";
	v->a[sym_compound_statement] = "compound_statement";
	symbols_names_10(v);
}

/* EOF symbols_names_1.c */
