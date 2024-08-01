/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_394.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1970(t_small_parse_table_array *v)
{
	v->a[39400] = sym_expansion;
	v->a[39401] = sym_command_substitution;
	v->a[39402] = 3;
	v->a[39403] = actions(3);
	v->a[39404] = 1;
	v->a[39405] = sym_comment;
	v->a[39406] = actions(841);
	v->a[39407] = 1;
	v->a[39408] = sym__bare_dollar;
	v->a[39409] = actions(833);
	v->a[39410] = 16;
	v->a[39411] = anon_sym_PIPE;
	v->a[39412] = anon_sym_AMP_AMP;
	v->a[39413] = anon_sym_PIPE_PIPE;
	v->a[39414] = anon_sym_LT;
	v->a[39415] = anon_sym_GT;
	v->a[39416] = anon_sym_GT_GT;
	v->a[39417] = anon_sym_LT_LT;
	v->a[39418] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39419] = anon_sym_DOLLAR;
	small_parse_table_1971(v);
}

void	small_parse_table_1971(t_small_parse_table_array *v)
{
	v->a[39420] = anon_sym_DQUOTE;
	v->a[39421] = sym_raw_string;
	v->a[39422] = sym_number;
	v->a[39423] = anon_sym_DOLLAR_LBRACE;
	v->a[39424] = anon_sym_DOLLAR_LPAREN;
	v->a[39425] = anon_sym_BQUOTE;
	v->a[39426] = sym_word;
	v->a[39427] = 12;
	v->a[39428] = actions(3);
	v->a[39429] = 1;
	v->a[39430] = sym_comment;
	v->a[39431] = actions(1535);
	v->a[39432] = 1;
	v->a[39433] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39434] = actions(1539);
	v->a[39435] = 1;
	v->a[39436] = anon_sym_DQUOTE;
	v->a[39437] = actions(1541);
	v->a[39438] = 1;
	v->a[39439] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1972(v);
}

void	small_parse_table_1972(t_small_parse_table_array *v)
{
	v->a[39440] = actions(1543);
	v->a[39441] = 1;
	v->a[39442] = anon_sym_DOLLAR_LPAREN;
	v->a[39443] = actions(1545);
	v->a[39444] = 1;
	v->a[39445] = anon_sym_BQUOTE;
	v->a[39446] = actions(1585);
	v->a[39447] = 1;
	v->a[39448] = anon_sym_DOLLAR;
	v->a[39449] = actions(1587);
	v->a[39450] = 1;
	v->a[39451] = sym__comment_word;
	v->a[39452] = actions(1589);
	v->a[39453] = 1;
	v->a[39454] = sym__empty_value;
	v->a[39455] = state(950);
	v->a[39456] = 1;
	v->a[39457] = sym_concatenation;
	v->a[39458] = actions(1820);
	v->a[39459] = 3;
	small_parse_table_1973(v);
}

void	small_parse_table_1973(t_small_parse_table_array *v)
{
	v->a[39460] = sym_raw_string;
	v->a[39461] = sym_number;
	v->a[39462] = sym_word;
	v->a[39463] = state(1171);
	v->a[39464] = 5;
	v->a[39465] = sym_arithmetic_expansion;
	v->a[39466] = sym_string;
	v->a[39467] = sym_simple_expansion;
	v->a[39468] = sym_expansion;
	v->a[39469] = sym_command_substitution;
	v->a[39470] = 10;
	v->a[39471] = actions(3);
	v->a[39472] = 1;
	v->a[39473] = sym_comment;
	v->a[39474] = actions(25);
	v->a[39475] = 1;
	v->a[39476] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39477] = actions(29);
	v->a[39478] = 1;
	v->a[39479] = anon_sym_DQUOTE;
	small_parse_table_1974(v);
}

void	small_parse_table_1974(t_small_parse_table_array *v)
{
	v->a[39480] = actions(33);
	v->a[39481] = 1;
	v->a[39482] = anon_sym_DOLLAR_LBRACE;
	v->a[39483] = actions(35);
	v->a[39484] = 1;
	v->a[39485] = anon_sym_DOLLAR_LPAREN;
	v->a[39486] = actions(37);
	v->a[39487] = 1;
	v->a[39488] = anon_sym_BQUOTE;
	v->a[39489] = actions(1776);
	v->a[39490] = 1;
	v->a[39491] = sym__bare_dollar;
	v->a[39492] = actions(1822);
	v->a[39493] = 1;
	v->a[39494] = anon_sym_DOLLAR;
	v->a[39495] = actions(1774);
	v->a[39496] = 5;
	v->a[39497] = aux_sym_concatenation_token1;
	v->a[39498] = sym_raw_string;
	v->a[39499] = sym_number;
	small_parse_table_1975(v);
}

/* EOF small_parse_table_394.c */
