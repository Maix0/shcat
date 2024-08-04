/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_212.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_1060(t_parse_table_array *v)
{
	v->a[757][sym_simple_expansion] = state(827);
	v->a[757][sym_expansion] = state(827);
	v->a[757][sym_command_substitution] = state(827);
	v->a[757][sym_word] = actions(1641);
	v->a[757][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(1643);
	v->a[757][aux_sym_concatenation_token1] = actions(1641);
	v->a[757][anon_sym_DOLLAR] = actions(1788);
	v->a[757][anon_sym_DQUOTE] = actions(1647);
	v->a[757][sym_raw_string] = actions(1641);
	v->a[757][sym_number] = actions(1641);
	v->a[757][anon_sym_DOLLAR_LBRACE] = actions(1649);
	v->a[757][anon_sym_DOLLAR_LPAREN] = actions(1651);
	v->a[757][anon_sym_BQUOTE] = actions(1653);
	v->a[757][sym_comment] = actions(3);
	v->a[757][sym__comment_word] = actions(1641);
	v->a[757][sym__bare_dollar] = actions(1655);
	v->a[758][sym_arithmetic_expansion] = state(353);
	v->a[758][sym_string] = state(353);
	v->a[758][sym_simple_expansion] = state(353);
	v->a[758][sym_expansion] = state(353);
	return (parse_table_1061(v));
}

void	parse_table_1061(t_parse_table_array *v)
{
	v->a[758][sym_command_substitution] = state(353);
	v->a[758][sym_word] = actions(1477);
	v->a[758][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(1479);
	v->a[758][aux_sym_concatenation_token1] = actions(1477);
	v->a[758][anon_sym_DOLLAR] = actions(1790);
	v->a[758][anon_sym_DQUOTE] = actions(1483);
	v->a[758][sym_raw_string] = actions(1477);
	v->a[758][sym_number] = actions(1477);
	v->a[758][anon_sym_DOLLAR_LBRACE] = actions(1485);
	v->a[758][anon_sym_DOLLAR_LPAREN] = actions(1487);
	v->a[758][anon_sym_BQUOTE] = actions(1489);
	v->a[758][sym_comment] = actions(3);
	v->a[758][sym__comment_word] = actions(1477);
	v->a[758][sym__bare_dollar] = actions(1491);
	v->a[759][sym_arithmetic_expansion] = state(642);
	v->a[759][sym_string] = state(642);
	v->a[759][sym_simple_expansion] = state(642);
	v->a[759][sym_expansion] = state(642);
	v->a[759][sym_command_substitution] = state(642);
	v->a[759][sym_word] = actions(1711);
	return (parse_table_1062(v));
}

void	parse_table_1062(t_parse_table_array *v)
{
	v->a[759][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(315);
	v->a[759][aux_sym_concatenation_token1] = actions(1711);
	v->a[759][anon_sym_DOLLAR] = actions(1792);
	v->a[759][anon_sym_DQUOTE] = actions(319);
	v->a[759][sym_raw_string] = actions(1711);
	v->a[759][sym_number] = actions(1711);
	v->a[759][anon_sym_DOLLAR_LBRACE] = actions(323);
	v->a[759][anon_sym_DOLLAR_LPAREN] = actions(325);
	v->a[759][anon_sym_BQUOTE] = actions(327);
	v->a[759][sym_comment] = actions(3);
	v->a[759][sym__comment_word] = actions(1711);
	v->a[759][sym__bare_dollar] = actions(1713);
	v->a[760][sym_arithmetic_expansion] = state(1519);
	v->a[760][sym_string] = state(1519);
	v->a[760][sym_simple_expansion] = state(1519);
	v->a[760][sym_expansion] = state(1519);
	v->a[760][sym_command_substitution] = state(1519);
	v->a[760][sym_word] = actions(1703);
	v->a[760][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(782);
	v->a[760][aux_sym_concatenation_token1] = actions(1703);
	return (parse_table_1063(v));
}

void	parse_table_1063(t_parse_table_array *v)
{
	v->a[760][anon_sym_DOLLAR] = actions(1794);
	v->a[760][anon_sym_DQUOTE] = actions(786);
	v->a[760][sym_raw_string] = actions(1703);
	v->a[760][sym_number] = actions(1703);
	v->a[760][anon_sym_DOLLAR_LBRACE] = actions(788);
	v->a[760][anon_sym_DOLLAR_LPAREN] = actions(790);
	v->a[760][anon_sym_BQUOTE] = actions(792);
	v->a[760][sym_comment] = actions(3);
	v->a[760][sym__comment_word] = actions(1703);
	v->a[760][sym__bare_dollar] = actions(1705);
	v->a[761][sym_arithmetic_expansion] = state(403);
	v->a[761][sym_string] = state(403);
	v->a[761][sym_simple_expansion] = state(403);
	v->a[761][sym_expansion] = state(403);
	v->a[761][sym_command_substitution] = state(403);
	v->a[761][sym_word] = actions(1497);
	v->a[761][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(53);
	v->a[761][aux_sym_concatenation_token1] = actions(1497);
	v->a[761][anon_sym_DOLLAR] = actions(1796);
	v->a[761][anon_sym_DQUOTE] = actions(57);
	return (parse_table_1064(v));
}

void	parse_table_1064(t_parse_table_array *v)
{
	v->a[761][sym_raw_string] = actions(1497);
	v->a[761][sym_number] = actions(1497);
	v->a[761][anon_sym_DOLLAR_LBRACE] = actions(61);
	v->a[761][anon_sym_DOLLAR_LPAREN] = actions(63);
	v->a[761][anon_sym_BQUOTE] = actions(65);
	v->a[761][sym_comment] = actions(3);
	v->a[761][sym__comment_word] = actions(1497);
	v->a[761][sym__bare_dollar] = actions(1501);
	v->a[762][sym_word] = actions(919);
	v->a[762][anon_sym_PIPE] = actions(919);
	v->a[762][anon_sym_AMP_AMP] = actions(919);
	v->a[762][anon_sym_PIPE_PIPE] = actions(919);
	v->a[762][anon_sym_LT] = actions(919);
	v->a[762][anon_sym_GT] = actions(919);
	v->a[762][anon_sym_GT_GT] = actions(919);
	v->a[762][anon_sym_LT_LT] = actions(919);
	v->a[762][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(919);
	v->a[762][anon_sym_DOLLAR] = actions(919);
	v->a[762][anon_sym_DQUOTE] = actions(919);
	v->a[762][sym_raw_string] = actions(919);
	return (parse_table_1065(v));
}

/* EOF parse_table_212.c */
