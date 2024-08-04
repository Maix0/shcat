/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_220.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_1100(t_parse_table_array *v)
{
	v->a[803][sym_concatenation] = state(594);
	v->a[803][sym_string] = state(857);
	v->a[803][sym_simple_expansion] = state(857);
	v->a[803][sym_expansion] = state(857);
	v->a[803][sym_command_substitution] = state(857);
	v->a[803][aux_sym_for_statement_repeat1] = state(594);
	v->a[803][sym_word] = actions(1346);
	v->a[803][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(655);
	v->a[803][anon_sym_DOLLAR] = actions(657);
	v->a[803][anon_sym_DQUOTE] = actions(659);
	v->a[803][sym_raw_string] = actions(1346);
	v->a[803][sym_number] = actions(1346);
	v->a[803][anon_sym_DOLLAR_LBRACE] = actions(661);
	v->a[803][anon_sym_DOLLAR_LPAREN] = actions(663);
	v->a[803][anon_sym_BQUOTE] = actions(665);
	v->a[803][sym_comment] = actions(3);
	v->a[804][sym_arithmetic_expansion] = state(589);
	v->a[804][sym_concatenation] = state(285);
	v->a[804][sym_string] = state(589);
	v->a[804][sym_simple_expansion] = state(589);
	return (parse_table_1101(v));
}

void	parse_table_1101(t_parse_table_array *v)
{
	v->a[804][sym_expansion] = state(589);
	v->a[804][sym_command_substitution] = state(589);
	v->a[804][aux_sym_for_statement_repeat1] = state(285);
	v->a[804][sym_word] = actions(1860);
	v->a[804][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(1597);
	v->a[804][anon_sym_DOLLAR] = actions(1599);
	v->a[804][anon_sym_DQUOTE] = actions(1601);
	v->a[804][sym_raw_string] = actions(1860);
	v->a[804][sym_number] = actions(1860);
	v->a[804][anon_sym_DOLLAR_LBRACE] = actions(1603);
	v->a[804][anon_sym_DOLLAR_LPAREN] = actions(1605);
	v->a[804][anon_sym_BQUOTE] = actions(1607);
	v->a[804][sym_comment] = actions(3);
	v->a[805][sym_arithmetic_expansion] = state(530);
	v->a[805][sym_concatenation] = state(249);
	v->a[805][sym_string] = state(530);
	v->a[805][sym_simple_expansion] = state(530);
	v->a[805][sym_expansion] = state(530);
	v->a[805][sym_command_substitution] = state(530);
	v->a[805][aux_sym_for_statement_repeat1] = state(249);
	return (parse_table_1102(v));
}

void	parse_table_1102(t_parse_table_array *v)
{
	v->a[805][sym_word] = actions(1862);
	v->a[805][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(1479);
	v->a[805][anon_sym_DOLLAR] = actions(1481);
	v->a[805][anon_sym_DQUOTE] = actions(1483);
	v->a[805][sym_raw_string] = actions(1862);
	v->a[805][sym_number] = actions(1862);
	v->a[805][anon_sym_DOLLAR_LBRACE] = actions(1485);
	v->a[805][anon_sym_DOLLAR_LPAREN] = actions(1487);
	v->a[805][anon_sym_BQUOTE] = actions(1489);
	v->a[805][sym_comment] = actions(3);
	v->a[806][sym_arithmetic_expansion] = state(684);
	v->a[806][sym_concatenation] = state(509);
	v->a[806][sym_string] = state(684);
	v->a[806][sym_simple_expansion] = state(684);
	v->a[806][sym_expansion] = state(684);
	v->a[806][sym_command_substitution] = state(684);
	v->a[806][aux_sym_for_statement_repeat1] = state(509);
	v->a[806][sym_word] = actions(1245);
	v->a[806][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(655);
	v->a[806][anon_sym_DOLLAR] = actions(657);
	return (parse_table_1103(v));
}

void	parse_table_1103(t_parse_table_array *v)
{
	v->a[806][anon_sym_DQUOTE] = actions(659);
	v->a[806][sym_raw_string] = actions(1245);
	v->a[806][sym_number] = actions(1245);
	v->a[806][anon_sym_DOLLAR_LBRACE] = actions(661);
	v->a[806][anon_sym_DOLLAR_LPAREN] = actions(663);
	v->a[806][anon_sym_BQUOTE] = actions(665);
	v->a[806][sym_comment] = actions(3);
	v->a[807][sym_arithmetic_expansion] = state(493);
	v->a[807][sym_concatenation] = state(207);
	v->a[807][sym_string] = state(493);
	v->a[807][sym_simple_expansion] = state(493);
	v->a[807][sym_expansion] = state(493);
	v->a[807][sym_command_substitution] = state(493);
	v->a[807][aux_sym_for_statement_repeat1] = state(207);
	v->a[807][sym_word] = actions(760);
	v->a[807][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(704);
	v->a[807][anon_sym_DOLLAR] = actions(706);
	v->a[807][anon_sym_DQUOTE] = actions(708);
	v->a[807][sym_raw_string] = actions(760);
	v->a[807][sym_number] = actions(760);
	return (parse_table_1104(v));
}

void	parse_table_1104(t_parse_table_array *v)
{
	v->a[807][anon_sym_DOLLAR_LBRACE] = actions(710);
	v->a[807][anon_sym_DOLLAR_LPAREN] = actions(712);
	v->a[807][anon_sym_BQUOTE] = actions(714);
	v->a[807][sym_comment] = actions(3);
	v->a[808][ts_builtin_sym_end] = actions(1087);
	v->a[808][anon_sym_PIPE] = actions(1089);
	v->a[808][anon_sym_RPAREN] = actions(1089);
	v->a[808][anon_sym_SEMI_SEMI] = actions(1089);
	v->a[808][anon_sym_AMP_AMP] = actions(1089);
	v->a[808][anon_sym_PIPE_PIPE] = actions(1089);
	v->a[808][anon_sym_LT] = actions(1089);
	v->a[808][anon_sym_GT] = actions(1089);
	v->a[808][anon_sym_GT_GT] = actions(1089);
	v->a[808][anon_sym_LT_LT] = actions(1089);
	v->a[808][aux_sym_heredoc_redirect_token1] = actions(1087);
	v->a[808][aux_sym_concatenation_token1] = actions(1089);
	v->a[808][anon_sym_BQUOTE] = actions(1089);
	v->a[808][sym_comment] = actions(3);
	v->a[808][anon_sym_SEMI] = actions(1089);
	v->a[808][sym__concat] = actions(1087);
	return (parse_table_1105(v));
}

/* EOF parse_table_220.c */
