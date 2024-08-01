/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_375.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1875(t_small_parse_table_array *v)
{
	v->a[37500] = 5;
	v->a[37501] = sym_arithmetic_expansion;
	v->a[37502] = sym_string;
	v->a[37503] = sym_simple_expansion;
	v->a[37504] = sym_expansion;
	v->a[37505] = sym_command_substitution;
	v->a[37506] = 10;
	v->a[37507] = actions(3);
	v->a[37508] = 1;
	v->a[37509] = sym_comment;
	v->a[37510] = actions(723);
	v->a[37511] = 1;
	v->a[37512] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[37513] = actions(727);
	v->a[37514] = 1;
	v->a[37515] = anon_sym_DQUOTE;
	v->a[37516] = actions(729);
	v->a[37517] = 1;
	v->a[37518] = anon_sym_DOLLAR_LBRACE;
	v->a[37519] = actions(731);
	small_parse_table_1876(v);
}

void	small_parse_table_1876(t_small_parse_table_array *v)
{
	v->a[37520] = 1;
	v->a[37521] = anon_sym_DOLLAR_LPAREN;
	v->a[37522] = actions(733);
	v->a[37523] = 1;
	v->a[37524] = anon_sym_BQUOTE;
	v->a[37525] = actions(1683);
	v->a[37526] = 1;
	v->a[37527] = sym__bare_dollar;
	v->a[37528] = actions(1685);
	v->a[37529] = 1;
	v->a[37530] = anon_sym_DOLLAR;
	v->a[37531] = actions(1681);
	v->a[37532] = 5;
	v->a[37533] = aux_sym_concatenation_token1;
	v->a[37534] = sym_raw_string;
	v->a[37535] = sym_number;
	v->a[37536] = sym__comment_word;
	v->a[37537] = sym_word;
	v->a[37538] = state(491);
	v->a[37539] = 5;
	small_parse_table_1877(v);
}

void	small_parse_table_1877(t_small_parse_table_array *v)
{
	v->a[37540] = sym_arithmetic_expansion;
	v->a[37541] = sym_string;
	v->a[37542] = sym_simple_expansion;
	v->a[37543] = sym_expansion;
	v->a[37544] = sym_command_substitution;
	v->a[37545] = 12;
	v->a[37546] = actions(3);
	v->a[37547] = 1;
	v->a[37548] = sym_comment;
	v->a[37549] = actions(1505);
	v->a[37550] = 1;
	v->a[37551] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[37552] = actions(1509);
	v->a[37553] = 1;
	v->a[37554] = anon_sym_DQUOTE;
	v->a[37555] = actions(1511);
	v->a[37556] = 1;
	v->a[37557] = anon_sym_DOLLAR_LBRACE;
	v->a[37558] = actions(1513);
	v->a[37559] = 1;
	small_parse_table_1878(v);
}

void	small_parse_table_1878(t_small_parse_table_array *v)
{
	v->a[37560] = anon_sym_DOLLAR_LPAREN;
	v->a[37561] = actions(1515);
	v->a[37562] = 1;
	v->a[37563] = anon_sym_BQUOTE;
	v->a[37564] = actions(1689);
	v->a[37565] = 1;
	v->a[37566] = anon_sym_DOLLAR;
	v->a[37567] = actions(1691);
	v->a[37568] = 1;
	v->a[37569] = sym__comment_word;
	v->a[37570] = actions(1693);
	v->a[37571] = 1;
	v->a[37572] = sym__empty_value;
	v->a[37573] = state(1188);
	v->a[37574] = 1;
	v->a[37575] = sym_concatenation;
	v->a[37576] = actions(1687);
	v->a[37577] = 3;
	v->a[37578] = sym_raw_string;
	v->a[37579] = sym_number;
	small_parse_table_1879(v);
}

void	small_parse_table_1879(t_small_parse_table_array *v)
{
	v->a[37580] = sym_word;
	v->a[37581] = state(836);
	v->a[37582] = 5;
	v->a[37583] = sym_arithmetic_expansion;
	v->a[37584] = sym_string;
	v->a[37585] = sym_simple_expansion;
	v->a[37586] = sym_expansion;
	v->a[37587] = sym_command_substitution;
	v->a[37588] = 10;
	v->a[37589] = actions(3);
	v->a[37590] = 1;
	v->a[37591] = sym_comment;
	v->a[37592] = actions(655);
	v->a[37593] = 1;
	v->a[37594] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[37595] = actions(657);
	v->a[37596] = 1;
	v->a[37597] = anon_sym_DOLLAR;
	v->a[37598] = actions(659);
	v->a[37599] = 1;
	small_parse_table_1880(v);
}

/* EOF small_parse_table_375.c */
