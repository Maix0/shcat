/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_202.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_1010(t_parse_table_array *v)
{
	v->a[701][anon_sym_DQUOTE] = actions(576);
	v->a[701][sym_raw_string] = actions(576);
	v->a[701][sym_number] = actions(576);
	v->a[701][anon_sym_DOLLAR_LBRACE] = actions(576);
	v->a[701][anon_sym_DOLLAR_LPAREN] = actions(576);
	v->a[701][anon_sym_BQUOTE] = actions(576);
	v->a[701][sym_comment] = actions(3);
	v->a[701][sym_variable_name] = actions(1278);
	v->a[702][sym_arithmetic_expansion] = state(403);
	v->a[702][sym_string] = state(403);
	v->a[702][sym_simple_expansion] = state(403);
	v->a[702][sym_expansion] = state(403);
	v->a[702][sym_command_substitution] = state(403);
	v->a[702][sym_word] = actions(1497);
	v->a[702][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(53);
	v->a[702][aux_sym_concatenation_token1] = actions(1497);
	v->a[702][anon_sym_DOLLAR] = actions(1499);
	v->a[702][anon_sym_DQUOTE] = actions(57);
	v->a[702][sym_raw_string] = actions(1497);
	v->a[702][sym_number] = actions(1497);
	return (parse_table_1011(v));
}

void	parse_table_1011(t_parse_table_array *v)
{
	v->a[702][anon_sym_DOLLAR_LBRACE] = actions(61);
	v->a[702][anon_sym_DOLLAR_LPAREN] = actions(63);
	v->a[702][anon_sym_BQUOTE] = actions(65);
	v->a[702][sym_comment] = actions(3);
	v->a[702][sym__comment_word] = actions(1497);
	v->a[702][sym__bare_dollar] = actions(1501);
	v->a[703][sym_arithmetic_expansion] = state(909);
	v->a[703][sym_string] = state(909);
	v->a[703][sym_simple_expansion] = state(909);
	v->a[703][sym_expansion] = state(909);
	v->a[703][sym_command_substitution] = state(909);
	v->a[703][sym_word] = actions(1503);
	v->a[703][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(1505);
	v->a[703][aux_sym_concatenation_token1] = actions(1503);
	v->a[703][anon_sym_DOLLAR] = actions(1507);
	v->a[703][anon_sym_DQUOTE] = actions(1509);
	v->a[703][sym_raw_string] = actions(1503);
	v->a[703][sym_number] = actions(1503);
	v->a[703][anon_sym_DOLLAR_LBRACE] = actions(1511);
	v->a[703][anon_sym_DOLLAR_LPAREN] = actions(1513);
	return (parse_table_1012(v));
}

void	parse_table_1012(t_parse_table_array *v)
{
	v->a[703][anon_sym_BQUOTE] = actions(1515);
	v->a[703][sym_comment] = actions(3);
	v->a[703][sym__comment_word] = actions(1503);
	v->a[703][sym__bare_dollar] = actions(1517);
	v->a[704][sym_arithmetic_expansion] = state(353);
	v->a[704][sym_string] = state(353);
	v->a[704][sym_simple_expansion] = state(353);
	v->a[704][sym_expansion] = state(353);
	v->a[704][sym_command_substitution] = state(353);
	v->a[704][sym_word] = actions(1477);
	v->a[704][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(1479);
	v->a[704][aux_sym_concatenation_token1] = actions(1477);
	v->a[704][anon_sym_DOLLAR] = actions(1519);
	v->a[704][anon_sym_DQUOTE] = actions(1483);
	v->a[704][sym_raw_string] = actions(1477);
	v->a[704][sym_number] = actions(1477);
	v->a[704][anon_sym_DOLLAR_LBRACE] = actions(1485);
	v->a[704][anon_sym_DOLLAR_LPAREN] = actions(1487);
	v->a[704][anon_sym_BQUOTE] = actions(1489);
	v->a[704][sym_comment] = actions(3);
	return (parse_table_1013(v));
}

void	parse_table_1013(t_parse_table_array *v)
{
	v->a[704][sym__comment_word] = actions(1477);
	v->a[704][sym__bare_dollar] = actions(1491);
	v->a[705][sym_arithmetic_expansion] = state(474);
	v->a[705][sym_string] = state(474);
	v->a[705][sym_simple_expansion] = state(474);
	v->a[705][sym_expansion] = state(474);
	v->a[705][sym_command_substitution] = state(474);
	v->a[705][sym_word] = actions(1521);
	v->a[705][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(704);
	v->a[705][aux_sym_concatenation_token1] = actions(1521);
	v->a[705][anon_sym_DOLLAR] = actions(1523);
	v->a[705][anon_sym_DQUOTE] = actions(708);
	v->a[705][sym_raw_string] = actions(1521);
	v->a[705][sym_number] = actions(1521);
	v->a[705][anon_sym_DOLLAR_LBRACE] = actions(710);
	v->a[705][anon_sym_DOLLAR_LPAREN] = actions(712);
	v->a[705][anon_sym_BQUOTE] = actions(714);
	v->a[705][sym_comment] = actions(3);
	v->a[705][sym__comment_word] = actions(1521);
	v->a[705][sym__bare_dollar] = actions(1525);
	return (parse_table_1014(v));
}

void	parse_table_1014(t_parse_table_array *v)
{
	v->a[706][sym_arithmetic_expansion] = state(609);
	v->a[706][sym_string] = state(609);
	v->a[706][sym_simple_expansion] = state(609);
	v->a[706][sym_expansion] = state(609);
	v->a[706][sym_command_substitution] = state(609);
	v->a[706][sym_word] = actions(1527);
	v->a[706][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(655);
	v->a[706][aux_sym_concatenation_token1] = actions(1527);
	v->a[706][anon_sym_DOLLAR] = actions(1529);
	v->a[706][anon_sym_DQUOTE] = actions(659);
	v->a[706][sym_raw_string] = actions(1527);
	v->a[706][sym_number] = actions(1527);
	v->a[706][anon_sym_DOLLAR_LBRACE] = actions(661);
	v->a[706][anon_sym_DOLLAR_LPAREN] = actions(663);
	v->a[706][anon_sym_BQUOTE] = actions(665);
	v->a[706][sym_comment] = actions(3);
	v->a[706][sym__comment_word] = actions(1527);
	v->a[706][sym__bare_dollar] = actions(1531);
	v->a[707][sym_word] = actions(1247);
	v->a[707][anon_sym_PIPE] = actions(1249);
	return (parse_table_1015(v));
}

/* EOF parse_table_202.c */
