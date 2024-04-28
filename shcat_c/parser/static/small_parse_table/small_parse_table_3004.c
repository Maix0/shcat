/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_3004.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_15020(t_small_parse_table_array *v)
{
	v->a[300400] = actions(13696);
	v->a[300401] = 1;
	v->a[300402] = anon_sym_DQUOTE;
	v->a[300403] = state(5855);
	v->a[300404] = 1;
	v->a[300405] = aux_sym_string_repeat1;
	v->a[300406] = actions(13058);
	v->a[300407] = 2;
	v->a[300408] = anon_sym_LPAREN_LPAREN;
	v->a[300409] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[300410] = state(6127);
	v->a[300411] = 4;
	v->a[300412] = sym_arithmetic_expansion;
	v->a[300413] = sym_simple_expansion;
	v->a[300414] = sym_expansion;
	v->a[300415] = sym_command_substitution;
	v->a[300416] = 12;
	v->a[300417] = actions(3);
	v->a[300418] = 1;
	v->a[300419] = sym_comment;
	small_parse_table_15021(v);
}

void	small_parse_table_15021(t_small_parse_table_array *v)
{
	v->a[300420] = actions(13060);
	v->a[300421] = 1;
	v->a[300422] = anon_sym_DOLLAR_LBRACK;
	v->a[300423] = actions(13066);
	v->a[300424] = 1;
	v->a[300425] = sym_string_content;
	v->a[300426] = actions(13068);
	v->a[300427] = 1;
	v->a[300428] = anon_sym_DOLLAR_LBRACE;
	v->a[300429] = actions(13070);
	v->a[300430] = 1;
	v->a[300431] = anon_sym_DOLLAR_LPAREN;
	v->a[300432] = actions(13072);
	v->a[300433] = 1;
	v->a[300434] = anon_sym_BQUOTE;
	v->a[300435] = actions(13074);
	v->a[300436] = 1;
	v->a[300437] = anon_sym_DOLLAR_BQUOTE;
	v->a[300438] = actions(13698);
	v->a[300439] = 1;
	small_parse_table_15022(v);
}

void	small_parse_table_15022(t_small_parse_table_array *v)
{
	v->a[300440] = anon_sym_DOLLAR;
	v->a[300441] = actions(13700);
	v->a[300442] = 1;
	v->a[300443] = anon_sym_DQUOTE;
	v->a[300444] = state(5768);
	v->a[300445] = 1;
	v->a[300446] = aux_sym_string_repeat1;
	v->a[300447] = actions(13058);
	v->a[300448] = 2;
	v->a[300449] = anon_sym_LPAREN_LPAREN;
	v->a[300450] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[300451] = state(6127);
	v->a[300452] = 4;
	v->a[300453] = sym_arithmetic_expansion;
	v->a[300454] = sym_simple_expansion;
	v->a[300455] = sym_expansion;
	v->a[300456] = sym_command_substitution;
	v->a[300457] = 12;
	v->a[300458] = actions(3);
	v->a[300459] = 1;
	small_parse_table_15023(v);
}

void	small_parse_table_15023(t_small_parse_table_array *v)
{
	v->a[300460] = sym_comment;
	v->a[300461] = actions(13060);
	v->a[300462] = 1;
	v->a[300463] = anon_sym_DOLLAR_LBRACK;
	v->a[300464] = actions(13066);
	v->a[300465] = 1;
	v->a[300466] = sym_string_content;
	v->a[300467] = actions(13068);
	v->a[300468] = 1;
	v->a[300469] = anon_sym_DOLLAR_LBRACE;
	v->a[300470] = actions(13070);
	v->a[300471] = 1;
	v->a[300472] = anon_sym_DOLLAR_LPAREN;
	v->a[300473] = actions(13072);
	v->a[300474] = 1;
	v->a[300475] = anon_sym_BQUOTE;
	v->a[300476] = actions(13074);
	v->a[300477] = 1;
	v->a[300478] = anon_sym_DOLLAR_BQUOTE;
	v->a[300479] = actions(13702);
	small_parse_table_15024(v);
}

void	small_parse_table_15024(t_small_parse_table_array *v)
{
	v->a[300480] = 1;
	v->a[300481] = anon_sym_DOLLAR;
	v->a[300482] = actions(13704);
	v->a[300483] = 1;
	v->a[300484] = anon_sym_DQUOTE;
	v->a[300485] = state(5860);
	v->a[300486] = 1;
	v->a[300487] = aux_sym_string_repeat1;
	v->a[300488] = actions(13058);
	v->a[300489] = 2;
	v->a[300490] = anon_sym_LPAREN_LPAREN;
	v->a[300491] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[300492] = state(6127);
	v->a[300493] = 4;
	v->a[300494] = sym_arithmetic_expansion;
	v->a[300495] = sym_simple_expansion;
	v->a[300496] = sym_expansion;
	v->a[300497] = sym_command_substitution;
	v->a[300498] = 12;
	v->a[300499] = actions(3);
	small_parse_table_15025(v);
}

/* EOF small_parse_table_3004.c */
