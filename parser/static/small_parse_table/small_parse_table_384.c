/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_384.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1920(t_small_parse_table_array *v)
{
	v->a[38400] = anon_sym_DOLLAR_LPAREN;
	v->a[38401] = actions(1489);
	v->a[38402] = 1;
	v->a[38403] = anon_sym_BQUOTE;
	v->a[38404] = actions(1617);
	v->a[38405] = 1;
	v->a[38406] = sym__comment_word;
	v->a[38407] = actions(1619);
	v->a[38408] = 1;
	v->a[38409] = sym__empty_value;
	v->a[38410] = state(560);
	v->a[38411] = 1;
	v->a[38412] = sym_concatenation;
	v->a[38413] = actions(1760);
	v->a[38414] = 3;
	v->a[38415] = sym_raw_string;
	v->a[38416] = sym_number;
	v->a[38417] = sym_word;
	v->a[38418] = state(286);
	v->a[38419] = 5;
	small_parse_table_1921(v);
}

void	small_parse_table_1921(t_small_parse_table_array *v)
{
	v->a[38420] = sym_arithmetic_expansion;
	v->a[38421] = sym_string;
	v->a[38422] = sym_simple_expansion;
	v->a[38423] = sym_expansion;
	v->a[38424] = sym_command_substitution;
	v->a[38425] = 10;
	v->a[38426] = actions(3);
	v->a[38427] = 1;
	v->a[38428] = sym_comment;
	v->a[38429] = actions(1535);
	v->a[38430] = 1;
	v->a[38431] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38432] = actions(1539);
	v->a[38433] = 1;
	v->a[38434] = anon_sym_DQUOTE;
	v->a[38435] = actions(1541);
	v->a[38436] = 1;
	v->a[38437] = anon_sym_DOLLAR_LBRACE;
	v->a[38438] = actions(1543);
	v->a[38439] = 1;
	small_parse_table_1922(v);
}

void	small_parse_table_1922(t_small_parse_table_array *v)
{
	v->a[38440] = anon_sym_DOLLAR_LPAREN;
	v->a[38441] = actions(1545);
	v->a[38442] = 1;
	v->a[38443] = anon_sym_BQUOTE;
	v->a[38444] = actions(1547);
	v->a[38445] = 1;
	v->a[38446] = sym__bare_dollar;
	v->a[38447] = actions(1762);
	v->a[38448] = 1;
	v->a[38449] = anon_sym_DOLLAR;
	v->a[38450] = actions(1533);
	v->a[38451] = 5;
	v->a[38452] = aux_sym_concatenation_token1;
	v->a[38453] = sym_raw_string;
	v->a[38454] = sym_number;
	v->a[38455] = sym__comment_word;
	v->a[38456] = sym_word;
	v->a[38457] = state(778);
	v->a[38458] = 5;
	v->a[38459] = sym_arithmetic_expansion;
	small_parse_table_1923(v);
}

void	small_parse_table_1923(t_small_parse_table_array *v)
{
	v->a[38460] = sym_string;
	v->a[38461] = sym_simple_expansion;
	v->a[38462] = sym_expansion;
	v->a[38463] = sym_command_substitution;
	v->a[38464] = 12;
	v->a[38465] = actions(3);
	v->a[38466] = 1;
	v->a[38467] = sym_comment;
	v->a[38468] = actions(1643);
	v->a[38469] = 1;
	v->a[38470] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38471] = actions(1645);
	v->a[38472] = 1;
	v->a[38473] = anon_sym_DOLLAR;
	v->a[38474] = actions(1647);
	v->a[38475] = 1;
	v->a[38476] = anon_sym_DQUOTE;
	v->a[38477] = actions(1649);
	v->a[38478] = 1;
	v->a[38479] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1924(v);
}

void	small_parse_table_1924(t_small_parse_table_array *v)
{
	v->a[38480] = actions(1651);
	v->a[38481] = 1;
	v->a[38482] = anon_sym_DOLLAR_LPAREN;
	v->a[38483] = actions(1653);
	v->a[38484] = 1;
	v->a[38485] = anon_sym_BQUOTE;
	v->a[38486] = actions(1766);
	v->a[38487] = 1;
	v->a[38488] = sym__comment_word;
	v->a[38489] = actions(1768);
	v->a[38490] = 1;
	v->a[38491] = sym__empty_value;
	v->a[38492] = state(1005);
	v->a[38493] = 1;
	v->a[38494] = sym_concatenation;
	v->a[38495] = actions(1764);
	v->a[38496] = 3;
	v->a[38497] = sym_raw_string;
	v->a[38498] = sym_number;
	v->a[38499] = sym_word;
	small_parse_table_1925(v);
}

/* EOF small_parse_table_384.c */
