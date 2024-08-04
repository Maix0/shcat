/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_216.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_1080(t_parse_table_array *v)
{
	v->a[779][sym_raw_string] = actions(919);
	v->a[779][sym_number] = actions(919);
	v->a[779][anon_sym_DOLLAR_LBRACE] = actions(919);
	v->a[779][anon_sym_DOLLAR_LPAREN] = actions(919);
	v->a[779][anon_sym_BQUOTE] = actions(919);
	v->a[779][sym_comment] = actions(3);
	v->a[779][sym__concat] = actions(1828);
	v->a[779][sym_variable_name] = actions(917);
	v->a[780][sym_string] = state(1516);
	v->a[780][sym_simple_expansion] = state(1533);
	v->a[780][sym_expansion] = state(1516);
	v->a[780][sym__concatenation_in_expansion] = state(1594);
	v->a[780][sym_command_substitution] = state(1533);
	v->a[780][sym__word_no_brace] = state(1521);
	v->a[780][anon_sym_RBRACE] = actions(1830);
	v->a[780][anon_sym_DOLLAR] = actions(784);
	v->a[780][anon_sym_DQUOTE] = actions(786);
	v->a[780][sym_raw_string] = actions(1832);
	v->a[780][anon_sym_DOLLAR_LBRACE] = actions(788);
	v->a[780][anon_sym_DOLLAR_LPAREN] = actions(790);
	return (parse_table_1081(v));
}

void	parse_table_1081(t_parse_table_array *v)
{
	v->a[780][anon_sym_BQUOTE] = actions(792);
	v->a[780][sym_comment] = actions(3);
	v->a[780][aux_sym__word_no_brace_token1] = actions(1834);
	v->a[780][sym_variable_name] = actions(1836);
	v->a[780][sym__expansion_word] = actions(1838);
	v->a[781][ts_builtin_sym_end] = actions(1050);
	v->a[781][anon_sym_PIPE] = actions(1052);
	v->a[781][anon_sym_RPAREN] = actions(1052);
	v->a[781][anon_sym_SEMI_SEMI] = actions(1052);
	v->a[781][anon_sym_AMP_AMP] = actions(1052);
	v->a[781][anon_sym_PIPE_PIPE] = actions(1052);
	v->a[781][anon_sym_LT] = actions(1052);
	v->a[781][anon_sym_GT] = actions(1052);
	v->a[781][anon_sym_GT_GT] = actions(1052);
	v->a[781][anon_sym_LT_LT] = actions(1052);
	v->a[781][aux_sym_heredoc_redirect_token1] = actions(1050);
	v->a[781][aux_sym_concatenation_token1] = actions(1052);
	v->a[781][anon_sym_BQUOTE] = actions(1052);
	v->a[781][sym_comment] = actions(3);
	v->a[781][anon_sym_SEMI] = actions(1052);
	return (parse_table_1082(v));
}

void	parse_table_1082(t_parse_table_array *v)
{
	v->a[781][sym__concat] = actions(1050);
	v->a[781][sym_variable_name] = actions(1050);
	v->a[782][aux_sym_concatenation_repeat1] = state(812);
	v->a[782][sym_word] = actions(880);
	v->a[782][anon_sym_LT] = actions(880);
	v->a[782][anon_sym_GT] = actions(880);
	v->a[782][anon_sym_GT_GT] = actions(880);
	v->a[782][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(880);
	v->a[782][aux_sym_concatenation_token1] = actions(1826);
	v->a[782][anon_sym_DOLLAR] = actions(880);
	v->a[782][anon_sym_DQUOTE] = actions(880);
	v->a[782][sym_raw_string] = actions(880);
	v->a[782][sym_number] = actions(880);
	v->a[782][anon_sym_DOLLAR_LBRACE] = actions(880);
	v->a[782][anon_sym_DOLLAR_LPAREN] = actions(880);
	v->a[782][anon_sym_BQUOTE] = actions(880);
	v->a[782][sym_comment] = actions(3);
	v->a[782][sym__concat] = actions(1828);
	v->a[782][sym_variable_name] = actions(878);
	v->a[783][ts_builtin_sym_end] = actions(1054);
	return (parse_table_1083(v));
}

void	parse_table_1083(t_parse_table_array *v)
{
	v->a[783][anon_sym_PIPE] = actions(1056);
	v->a[783][anon_sym_RPAREN] = actions(1056);
	v->a[783][anon_sym_SEMI_SEMI] = actions(1056);
	v->a[783][anon_sym_AMP_AMP] = actions(1056);
	v->a[783][anon_sym_PIPE_PIPE] = actions(1056);
	v->a[783][anon_sym_LT] = actions(1056);
	v->a[783][anon_sym_GT] = actions(1056);
	v->a[783][anon_sym_GT_GT] = actions(1056);
	v->a[783][anon_sym_LT_LT] = actions(1056);
	v->a[783][aux_sym_heredoc_redirect_token1] = actions(1054);
	v->a[783][aux_sym_concatenation_token1] = actions(1056);
	v->a[783][anon_sym_BQUOTE] = actions(1056);
	v->a[783][sym_comment] = actions(3);
	v->a[783][anon_sym_SEMI] = actions(1056);
	v->a[783][sym__concat] = actions(1054);
	v->a[783][sym_variable_name] = actions(1054);
	v->a[784][ts_builtin_sym_end] = actions(1050);
	v->a[784][anon_sym_PIPE] = actions(1052);
	v->a[784][anon_sym_RPAREN] = actions(1052);
	v->a[784][anon_sym_SEMI_SEMI] = actions(1052);
	return (parse_table_1084(v));
}

void	parse_table_1084(t_parse_table_array *v)
{
	v->a[784][anon_sym_AMP_AMP] = actions(1052);
	v->a[784][anon_sym_PIPE_PIPE] = actions(1052);
	v->a[784][anon_sym_LT] = actions(1052);
	v->a[784][anon_sym_GT] = actions(1052);
	v->a[784][anon_sym_GT_GT] = actions(1052);
	v->a[784][anon_sym_LT_LT] = actions(1052);
	v->a[784][aux_sym_heredoc_redirect_token1] = actions(1050);
	v->a[784][aux_sym_concatenation_token1] = actions(1052);
	v->a[784][anon_sym_BQUOTE] = actions(1052);
	v->a[784][sym_comment] = actions(3);
	v->a[784][anon_sym_SEMI] = actions(1052);
	v->a[784][sym__concat] = actions(1050);
	v->a[784][sym_variable_name] = actions(1050);
	v->a[785][sym_arithmetic_expansion] = state(409);
	v->a[785][sym_concatenation] = state(202);
	v->a[785][sym_string] = state(409);
	v->a[785][sym_simple_expansion] = state(409);
	v->a[785][sym_expansion] = state(409);
	v->a[785][sym_command_substitution] = state(409);
	v->a[785][aux_sym_for_statement_repeat1] = state(202);
	return (parse_table_1085(v));
}

/* EOF parse_table_216.c */
