/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_221.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_1105(t_parse_table_array *v)
{
	v->a[808][sym_variable_name] = actions(1087);
	v->a[809][sym_arithmetic_expansion] = state(258);
	v->a[809][sym_concatenation] = state(169);
	v->a[809][sym_string] = state(258);
	v->a[809][sym_simple_expansion] = state(258);
	v->a[809][sym_expansion] = state(258);
	v->a[809][sym_command_substitution] = state(258);
	v->a[809][aux_sym_for_statement_repeat1] = state(169);
	v->a[809][sym_word] = actions(1864);
	v->a[809][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(1553);
	v->a[809][anon_sym_DOLLAR] = actions(1555);
	v->a[809][anon_sym_DQUOTE] = actions(1557);
	v->a[809][sym_raw_string] = actions(1864);
	v->a[809][sym_number] = actions(1864);
	v->a[809][anon_sym_DOLLAR_LBRACE] = actions(1559);
	v->a[809][anon_sym_DOLLAR_LPAREN] = actions(1561);
	v->a[809][anon_sym_BQUOTE] = actions(1563);
	v->a[809][sym_comment] = actions(3);
	v->a[810][sym_arithmetic_expansion] = state(493);
	v->a[810][sym_concatenation] = state(224);
	return (parse_table_1106(v));
}

void	parse_table_1106(t_parse_table_array *v)
{
	v->a[810][sym_string] = state(493);
	v->a[810][sym_simple_expansion] = state(493);
	v->a[810][sym_expansion] = state(493);
	v->a[810][sym_command_substitution] = state(493);
	v->a[810][aux_sym_for_statement_repeat1] = state(224);
	v->a[810][sym_word] = actions(760);
	v->a[810][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(704);
	v->a[810][anon_sym_DOLLAR] = actions(706);
	v->a[810][anon_sym_DQUOTE] = actions(708);
	v->a[810][sym_raw_string] = actions(760);
	v->a[810][sym_number] = actions(760);
	v->a[810][anon_sym_DOLLAR_LBRACE] = actions(710);
	v->a[810][anon_sym_DOLLAR_LPAREN] = actions(712);
	v->a[810][anon_sym_BQUOTE] = actions(714);
	v->a[810][sym_comment] = actions(3);
	v->a[811][ts_builtin_sym_end] = actions(1083);
	v->a[811][anon_sym_PIPE] = actions(1085);
	v->a[811][anon_sym_RPAREN] = actions(1085);
	v->a[811][anon_sym_SEMI_SEMI] = actions(1085);
	v->a[811][anon_sym_AMP_AMP] = actions(1085);
	return (parse_table_1107(v));
}

void	parse_table_1107(t_parse_table_array *v)
{
	v->a[811][anon_sym_PIPE_PIPE] = actions(1085);
	v->a[811][anon_sym_LT] = actions(1085);
	v->a[811][anon_sym_GT] = actions(1085);
	v->a[811][anon_sym_GT_GT] = actions(1085);
	v->a[811][anon_sym_LT_LT] = actions(1085);
	v->a[811][aux_sym_heredoc_redirect_token1] = actions(1083);
	v->a[811][aux_sym_concatenation_token1] = actions(1085);
	v->a[811][anon_sym_BQUOTE] = actions(1085);
	v->a[811][sym_comment] = actions(3);
	v->a[811][anon_sym_SEMI] = actions(1085);
	v->a[811][sym__concat] = actions(1083);
	v->a[811][sym_variable_name] = actions(1083);
	v->a[812][aux_sym_concatenation_repeat1] = state(787);
	v->a[812][sym_word] = actions(923);
	v->a[812][anon_sym_LT] = actions(923);
	v->a[812][anon_sym_GT] = actions(923);
	v->a[812][anon_sym_GT_GT] = actions(923);
	v->a[812][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(923);
	v->a[812][aux_sym_concatenation_token1] = actions(1826);
	v->a[812][anon_sym_DOLLAR] = actions(923);
	return (parse_table_1108(v));
}

void	parse_table_1108(t_parse_table_array *v)
{
	v->a[812][anon_sym_DQUOTE] = actions(923);
	v->a[812][sym_raw_string] = actions(923);
	v->a[812][sym_number] = actions(923);
	v->a[812][anon_sym_DOLLAR_LBRACE] = actions(923);
	v->a[812][anon_sym_DOLLAR_LPAREN] = actions(923);
	v->a[812][anon_sym_BQUOTE] = actions(923);
	v->a[812][sym_comment] = actions(3);
	v->a[812][sym__concat] = actions(1866);
	v->a[812][sym_variable_name] = actions(921);
	v->a[813][sym_file_redirect] = state(916);
	v->a[813][sym_heredoc_redirect] = state(916);
	v->a[813][sym_terminator] = state(380);
	v->a[813][aux_sym_redirected_statement_repeat1] = state(916);
	v->a[813][anon_sym_PIPE] = actions(580);
	v->a[813][anon_sym_RPAREN] = actions(591);
	v->a[813][anon_sym_SEMI_SEMI] = actions(593);
	v->a[813][anon_sym_AMP_AMP] = actions(595);
	v->a[813][anon_sym_PIPE_PIPE] = actions(595);
	v->a[813][anon_sym_LT] = actions(1868);
	v->a[813][anon_sym_GT] = actions(1868);
	return (parse_table_1109(v));
}

void	parse_table_1109(t_parse_table_array *v)
{
	v->a[813][anon_sym_GT_GT] = actions(1868);
	v->a[813][anon_sym_LT_LT] = actions(597);
	v->a[813][aux_sym_heredoc_redirect_token1] = actions(1870);
	v->a[813][sym_comment] = actions(3);
	v->a[813][anon_sym_SEMI] = actions(593);
	v->a[814][sym_file_redirect] = state(922);
	v->a[814][sym_heredoc_redirect] = state(922);
	v->a[814][sym_terminator] = state(449);
	v->a[814][aux_sym_redirected_statement_repeat1] = state(922);
	v->a[814][ts_builtin_sym_end] = actions(716);
	v->a[814][anon_sym_PIPE] = actions(580);
	v->a[814][anon_sym_SEMI_SEMI] = actions(693);
	v->a[814][anon_sym_AMP_AMP] = actions(695);
	v->a[814][anon_sym_PIPE_PIPE] = actions(695);
	v->a[814][anon_sym_LT] = actions(1872);
	v->a[814][anon_sym_GT] = actions(1872);
	v->a[814][anon_sym_GT_GT] = actions(1872);
	v->a[814][anon_sym_LT_LT] = actions(597);
	v->a[814][aux_sym_heredoc_redirect_token1] = actions(1874);
	v->a[814][sym_comment] = actions(3);
	return (parse_table_1110(v));
}

/* EOF parse_table_221.c */
