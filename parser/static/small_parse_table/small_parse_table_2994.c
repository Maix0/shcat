/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2994.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14970(t_small_parse_table_array *v)
{
	v->a[299400] = sym_string_content;
	v->a[299401] = actions(13068);
	v->a[299402] = 1;
	v->a[299403] = anon_sym_DOLLAR_LBRACE;
	v->a[299404] = actions(13070);
	v->a[299405] = 1;
	v->a[299406] = anon_sym_DOLLAR_LPAREN;
	v->a[299407] = actions(13072);
	v->a[299408] = 1;
	v->a[299409] = anon_sym_BQUOTE;
	v->a[299410] = actions(13074);
	v->a[299411] = 1;
	v->a[299412] = anon_sym_DOLLAR_BQUOTE;
	v->a[299413] = actions(13598);
	v->a[299414] = 1;
	v->a[299415] = anon_sym_DOLLAR;
	v->a[299416] = actions(13600);
	v->a[299417] = 1;
	v->a[299418] = anon_sym_DQUOTE;
	v->a[299419] = state(5831);
	small_parse_table_14971(v);
}

void	small_parse_table_14971(t_small_parse_table_array *v)
{
	v->a[299420] = 1;
	v->a[299421] = aux_sym_string_repeat1;
	v->a[299422] = actions(13058);
	v->a[299423] = 2;
	v->a[299424] = anon_sym_LPAREN_LPAREN;
	v->a[299425] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[299426] = state(6127);
	v->a[299427] = 4;
	v->a[299428] = sym_arithmetic_expansion;
	v->a[299429] = sym_simple_expansion;
	v->a[299430] = sym_expansion;
	v->a[299431] = sym_command_substitution;
	v->a[299432] = 12;
	v->a[299433] = actions(3);
	v->a[299434] = 1;
	v->a[299435] = sym_comment;
	v->a[299436] = actions(13060);
	v->a[299437] = 1;
	v->a[299438] = anon_sym_DOLLAR_LBRACK;
	v->a[299439] = actions(13066);
	small_parse_table_14972(v);
}

void	small_parse_table_14972(t_small_parse_table_array *v)
{
	v->a[299440] = 1;
	v->a[299441] = sym_string_content;
	v->a[299442] = actions(13068);
	v->a[299443] = 1;
	v->a[299444] = anon_sym_DOLLAR_LBRACE;
	v->a[299445] = actions(13070);
	v->a[299446] = 1;
	v->a[299447] = anon_sym_DOLLAR_LPAREN;
	v->a[299448] = actions(13072);
	v->a[299449] = 1;
	v->a[299450] = anon_sym_BQUOTE;
	v->a[299451] = actions(13074);
	v->a[299452] = 1;
	v->a[299453] = anon_sym_DOLLAR_BQUOTE;
	v->a[299454] = actions(13602);
	v->a[299455] = 1;
	v->a[299456] = anon_sym_DOLLAR;
	v->a[299457] = actions(13604);
	v->a[299458] = 1;
	v->a[299459] = anon_sym_DQUOTE;
	small_parse_table_14973(v);
}

void	small_parse_table_14973(t_small_parse_table_array *v)
{
	v->a[299460] = state(5839);
	v->a[299461] = 1;
	v->a[299462] = aux_sym_string_repeat1;
	v->a[299463] = actions(13058);
	v->a[299464] = 2;
	v->a[299465] = anon_sym_LPAREN_LPAREN;
	v->a[299466] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[299467] = state(6127);
	v->a[299468] = 4;
	v->a[299469] = sym_arithmetic_expansion;
	v->a[299470] = sym_simple_expansion;
	v->a[299471] = sym_expansion;
	v->a[299472] = sym_command_substitution;
	v->a[299473] = 12;
	v->a[299474] = actions(3);
	v->a[299475] = 1;
	v->a[299476] = sym_comment;
	v->a[299477] = actions(13060);
	v->a[299478] = 1;
	v->a[299479] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_14974(v);
}

void	small_parse_table_14974(t_small_parse_table_array *v)
{
	v->a[299480] = actions(13066);
	v->a[299481] = 1;
	v->a[299482] = sym_string_content;
	v->a[299483] = actions(13068);
	v->a[299484] = 1;
	v->a[299485] = anon_sym_DOLLAR_LBRACE;
	v->a[299486] = actions(13070);
	v->a[299487] = 1;
	v->a[299488] = anon_sym_DOLLAR_LPAREN;
	v->a[299489] = actions(13072);
	v->a[299490] = 1;
	v->a[299491] = anon_sym_BQUOTE;
	v->a[299492] = actions(13074);
	v->a[299493] = 1;
	v->a[299494] = anon_sym_DOLLAR_BQUOTE;
	v->a[299495] = actions(13606);
	v->a[299496] = 1;
	v->a[299497] = anon_sym_DOLLAR;
	v->a[299498] = actions(13608);
	v->a[299499] = 1;
	small_parse_table_14975(v);
}

/* EOF small_parse_table_2994.c */
