/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_0.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_0(t_parse_table_array *v)
{
	v->a[0][ts_builtin_sym_end] = actions(1);
	v->a[0][sym_word] = actions(1);
	v->a[0][anon_sym_for] = actions(1);
	v->a[0][anon_sym_in] = actions(1);
	v->a[0][anon_sym_while] = actions(1);
	v->a[0][anon_sym_until] = actions(1);
	v->a[0][anon_sym_do] = actions(1);
	v->a[0][anon_sym_done] = actions(1);
	v->a[0][anon_sym_if] = actions(1);
	v->a[0][anon_sym_then] = actions(1);
	v->a[0][anon_sym_fi] = actions(1);
	v->a[0][anon_sym_elif] = actions(1);
	v->a[0][anon_sym_else] = actions(1);
	v->a[0][anon_sym_case] = actions(1);
	v->a[0][anon_sym_esac] = actions(1);
	v->a[0][anon_sym_LPAREN] = actions(1);
	v->a[0][anon_sym_PIPE] = actions(1);
	v->a[0][anon_sym_RPAREN] = actions(1);
	v->a[0][anon_sym_SEMI_SEMI] = actions(1);
	v->a[0][anon_sym_LBRACE] = actions(1);
	parse_table_1(v);
}

void	parse_table_1(t_parse_table_array *v)
{
	v->a[0][anon_sym_RBRACE] = actions(1);
	v->a[0][anon_sym_AMP_AMP] = actions(1);
	v->a[0][anon_sym_PIPE_PIPE] = actions(1);
	v->a[0][anon_sym_BANG] = actions(1);
	v->a[0][anon_sym_EQ] = actions(1);
	v->a[0][anon_sym_LT] = actions(1);
	v->a[0][anon_sym_GT] = actions(1);
	v->a[0][anon_sym_GT_GT] = actions(1);
	v->a[0][anon_sym_LT_LT] = actions(1);
	v->a[0][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(1);
	v->a[0][anon_sym_PLUS] = actions(1);
	v->a[0][anon_sym_DASH] = actions(1);
	v->a[0][anon_sym_STAR] = actions(1);
	v->a[0][anon_sym_SLASH] = actions(1);
	v->a[0][anon_sym_PERCENT] = actions(1);
	v->a[0][anon_sym_QMARK] = actions(1);
	v->a[0][anon_sym_COLON] = actions(1);
	v->a[0][anon_sym_DASH2] = actions(1);
	v->a[0][anon_sym_PLUS2] = actions(1);
	v->a[0][aux_sym_concatenation_token1] = actions(1);
	parse_table_2(v);
}

void	parse_table_2(t_parse_table_array *v)
{
	v->a[0][anon_sym_DOLLAR] = actions(1);
	v->a[0][anon_sym_DQUOTE] = actions(1);
	v->a[0][sym_raw_string] = actions(1);
	v->a[0][sym_number] = actions(1);
	v->a[0][anon_sym_POUND] = actions(1);
	v->a[0][anon_sym_DOLLAR_LBRACE] = actions(1);
	v->a[0][anon_sym_DASH3] = actions(1);
	v->a[0][anon_sym_COLON_EQ] = actions(1);
	v->a[0][anon_sym_EQ2] = actions(1);
	v->a[0][anon_sym_COLON_QMARK] = actions(1);
	v->a[0][anon_sym_QMARK2] = actions(1);
	v->a[0][anon_sym_PLUS3] = actions(1);
	v->a[0][anon_sym_PERCENT_PERCENT] = actions(1);
	v->a[0][anon_sym_DOLLAR_LPAREN] = actions(1);
	v->a[0][anon_sym_BQUOTE] = actions(1);
	v->a[0][sym_comment] = actions(3);
	v->a[0][anon_sym_AT] = actions(1);
	v->a[0][anon_sym_0] = actions(1);
	v->a[0][anon_sym_SEMI] = actions(1);
	v->a[0][anon_sym_LT_LT_DASH] = actions(1);
	parse_table_3(v);
}

void	parse_table_3(t_parse_table_array *v)
{
	v->a[0][sym_heredoc_start] = actions(1);
	v->a[0][sym_simple_heredoc_body] = actions(1);
	v->a[0][sym__heredoc_body_beginning] = actions(1);
	v->a[0][sym_heredoc_content] = actions(1);
	v->a[0][sym_heredoc_end] = actions(1);
	v->a[0][sym_file_descriptor] = actions(1);
	v->a[0][sym__empty_value] = actions(1);
	v->a[0][sym__concat] = actions(1);
	v->a[0][sym_variable_name] = actions(1);
	v->a[0][sym_regex] = actions(1);
	v->a[0][sym__expansion_word] = actions(1);
	v->a[0][sym_extglob_pattern] = actions(1);
	v->a[0][sym__bare_dollar] = actions(1);
	v->a[0][sym__immediate_double_hash] = actions(1);
	v->a[0][sym___error_recovery] = actions(1);
	v->a[1][sym_program] = state(1731);
	v->a[1][sym__statements] = state(1730);
	v->a[1][sym__statement_not_pipeline] = state(1558);
	v->a[1][sym_redirected_statement] = state(853);
	v->a[1][sym_for_statement] = state(853);
	parse_table_4(v);
}

void	parse_table_4(t_parse_table_array *v)
{
	v->a[1][sym_while_statement] = state(853);
	v->a[1][sym_if_statement] = state(853);
	v->a[1][sym_case_statement] = state(853);
	v->a[1][sym_function_definition] = state(853);
	v->a[1][sym_compound_statement] = state(853);
	v->a[1][sym_subshell] = state(853);
	v->a[1][sym_pipeline] = state(960);
	v->a[1][sym_list] = state(853);
	v->a[1][sym_negated_command] = state(853);
	v->a[1][sym_command] = state(853);
	v->a[1][sym_command_name] = state(166);
	v->a[1][sym_variable_assignment] = state(192);
	v->a[1][sym__variable_assignments] = state(853);
	v->a[1][sym_file_redirect] = state(556);
	v->a[1][sym_arithmetic_expansion] = state(280);
	v->a[1][sym_concatenation] = state(549);
	v->a[1][sym_string] = state(280);
	v->a[1][sym_simple_expansion] = state(280);
	v->a[1][sym_expansion] = state(280);
	v->a[1][sym_command_substitution] = state(280);
	parse_table_5(v);
}

/* EOF parse_table_0.c */
