/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_table_210.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_table.h"

void	parse_table_1050(t_parse_table_array *v)
{
	v->a[746][sym_arithmetic_expansion] = state(286);
	v->a[746][sym_concatenation] = state(560);
	v->a[746][sym_string] = state(286);
	v->a[746][sym_simple_expansion] = state(286);
	v->a[746][sym_expansion] = state(286);
	v->a[746][sym_command_substitution] = state(286);
	v->a[746][sym_word] = actions(1760);
	v->a[746][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(1479);
	v->a[746][anon_sym_DOLLAR] = actions(1481);
	v->a[746][anon_sym_DQUOTE] = actions(1483);
	v->a[746][sym_raw_string] = actions(1760);
	v->a[746][sym_number] = actions(1760);
	v->a[746][anon_sym_DOLLAR_LBRACE] = actions(1485);
	v->a[746][anon_sym_DOLLAR_LPAREN] = actions(1487);
	v->a[746][anon_sym_BQUOTE] = actions(1489);
	v->a[746][sym_comment] = actions(3);
	v->a[746][sym__comment_word] = actions(1617);
	v->a[746][sym__empty_value] = actions(1619);
	v->a[747][sym_arithmetic_expansion] = state(778);
	v->a[747][sym_string] = state(778);
	return (parse_table_1051(v));
}

void	parse_table_1051(t_parse_table_array *v)
{
	v->a[747][sym_simple_expansion] = state(778);
	v->a[747][sym_expansion] = state(778);
	v->a[747][sym_command_substitution] = state(778);
	v->a[747][sym_word] = actions(1533);
	v->a[747][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(1535);
	v->a[747][aux_sym_concatenation_token1] = actions(1533);
	v->a[747][anon_sym_DOLLAR] = actions(1762);
	v->a[747][anon_sym_DQUOTE] = actions(1539);
	v->a[747][sym_raw_string] = actions(1533);
	v->a[747][sym_number] = actions(1533);
	v->a[747][anon_sym_DOLLAR_LBRACE] = actions(1541);
	v->a[747][anon_sym_DOLLAR_LPAREN] = actions(1543);
	v->a[747][anon_sym_BQUOTE] = actions(1545);
	v->a[747][sym_comment] = actions(3);
	v->a[747][sym__comment_word] = actions(1533);
	v->a[747][sym__bare_dollar] = actions(1547);
	v->a[748][sym_arithmetic_expansion] = state(779);
	v->a[748][sym_concatenation] = state(1005);
	v->a[748][sym_string] = state(779);
	v->a[748][sym_simple_expansion] = state(779);
	return (parse_table_1052(v));
}

void	parse_table_1052(t_parse_table_array *v)
{
	v->a[748][sym_expansion] = state(779);
	v->a[748][sym_command_substitution] = state(779);
	v->a[748][sym_word] = actions(1764);
	v->a[748][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(1643);
	v->a[748][anon_sym_DOLLAR] = actions(1645);
	v->a[748][anon_sym_DQUOTE] = actions(1647);
	v->a[748][sym_raw_string] = actions(1764);
	v->a[748][sym_number] = actions(1764);
	v->a[748][anon_sym_DOLLAR_LBRACE] = actions(1649);
	v->a[748][anon_sym_DOLLAR_LPAREN] = actions(1651);
	v->a[748][anon_sym_BQUOTE] = actions(1653);
	v->a[748][sym_comment] = actions(3);
	v->a[748][sym__comment_word] = actions(1766);
	v->a[748][sym__empty_value] = actions(1768);
	v->a[749][sym_arithmetic_expansion] = state(474);
	v->a[749][sym_string] = state(474);
	v->a[749][sym_simple_expansion] = state(474);
	v->a[749][sym_expansion] = state(474);
	v->a[749][sym_command_substitution] = state(474);
	v->a[749][sym_word] = actions(1521);
	return (parse_table_1053(v));
}

void	parse_table_1053(t_parse_table_array *v)
{
	v->a[749][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(704);
	v->a[749][aux_sym_concatenation_token1] = actions(1521);
	v->a[749][anon_sym_DOLLAR] = actions(1770);
	v->a[749][anon_sym_DQUOTE] = actions(708);
	v->a[749][sym_raw_string] = actions(1521);
	v->a[749][sym_number] = actions(1521);
	v->a[749][anon_sym_DOLLAR_LBRACE] = actions(710);
	v->a[749][anon_sym_DOLLAR_LPAREN] = actions(712);
	v->a[749][anon_sym_BQUOTE] = actions(714);
	v->a[749][sym_comment] = actions(3);
	v->a[749][sym__comment_word] = actions(1521);
	v->a[749][sym__bare_dollar] = actions(1525);
	v->a[750][sym_arithmetic_expansion] = state(1505);
	v->a[750][sym_concatenation] = state(1567);
	v->a[750][sym_string] = state(1505);
	v->a[750][sym_simple_expansion] = state(1505);
	v->a[750][sym_expansion] = state(1505);
	v->a[750][sym_command_substitution] = state(1505);
	v->a[750][sym__extglob_blob] = state(1567);
	v->a[750][sym_word] = actions(1772);
	return (parse_table_1054(v));
}

void	parse_table_1054(t_parse_table_array *v)
{
	v->a[750][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(782);
	v->a[750][anon_sym_DOLLAR] = actions(784);
	v->a[750][anon_sym_DQUOTE] = actions(786);
	v->a[750][sym_raw_string] = actions(1772);
	v->a[750][sym_number] = actions(1772);
	v->a[750][anon_sym_DOLLAR_LBRACE] = actions(788);
	v->a[750][anon_sym_DOLLAR_LPAREN] = actions(790);
	v->a[750][anon_sym_BQUOTE] = actions(792);
	v->a[750][sym_comment] = actions(3);
	v->a[750][sym_extglob_pattern] = actions(794);
	v->a[751][sym_arithmetic_expansion] = state(400);
	v->a[751][sym_string] = state(400);
	v->a[751][sym_simple_expansion] = state(400);
	v->a[751][sym_expansion] = state(400);
	v->a[751][sym_command_substitution] = state(400);
	v->a[751][sym_word] = actions(1774);
	v->a[751][anon_sym_DOLLAR_LPAREN_LPAREN] = actions(25);
	v->a[751][aux_sym_concatenation_token1] = actions(1774);
	v->a[751][anon_sym_DOLLAR] = actions(27);
	v->a[751][anon_sym_DQUOTE] = actions(29);
	return (parse_table_1055(v));
}

/* EOF parse_table_210.c */
