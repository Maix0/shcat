/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_904.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4520(t_small_parse_table_array *v)
{
	v->a[90400] = anon_sym_GT_AMP;
	v->a[90401] = 10;
	v->a[90402] = actions(3);
	v->a[90403] = 1;
	v->a[90404] = sym_comment;
	v->a[90405] = actions(3712);
	v->a[90406] = 1;
	v->a[90407] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[90408] = actions(3716);
	v->a[90409] = 1;
	v->a[90410] = sym_string_content;
	v->a[90411] = actions(3718);
	v->a[90412] = 1;
	v->a[90413] = anon_sym_DOLLAR_LBRACE;
	v->a[90414] = actions(3720);
	v->a[90415] = 1;
	v->a[90416] = anon_sym_DOLLAR_LPAREN;
	v->a[90417] = actions(3722);
	v->a[90418] = 1;
	v->a[90419] = anon_sym_BQUOTE;
	small_parse_table_4521(v);
}

void	small_parse_table_4521(t_small_parse_table_array *v)
{
	v->a[90420] = actions(3976);
	v->a[90421] = 1;
	v->a[90422] = anon_sym_DOLLAR;
	v->a[90423] = actions(3978);
	v->a[90424] = 1;
	v->a[90425] = anon_sym_DQUOTE;
	v->a[90426] = state(1817);
	v->a[90427] = 1;
	v->a[90428] = aux_sym_string_repeat1;
	v->a[90429] = state(1869);
	v->a[90430] = 4;
	v->a[90431] = sym_arithmetic_expansion;
	v->a[90432] = sym_simple_expansion;
	v->a[90433] = sym_expansion;
	v->a[90434] = sym_command_substitution;
	v->a[90435] = 4;
	v->a[90436] = actions(3);
	v->a[90437] = 1;
	v->a[90438] = sym_comment;
	v->a[90439] = actions(974);
	small_parse_table_4522(v);
}

void	small_parse_table_4522(t_small_parse_table_array *v)
{
	v->a[90440] = 1;
	v->a[90441] = sym_variable_name;
	v->a[90442] = actions(972);
	v->a[90443] = 2;
	v->a[90444] = aux_sym__simple_variable_name_token1;
	v->a[90445] = aux_sym__multiline_variable_name_token1;
	v->a[90446] = actions(970);
	v->a[90447] = 9;
	v->a[90448] = anon_sym_BANG;
	v->a[90449] = anon_sym_DASH;
	v->a[90450] = anon_sym_STAR;
	v->a[90451] = anon_sym_QMARK;
	v->a[90452] = anon_sym_DOLLAR;
	v->a[90453] = anon_sym_POUND;
	v->a[90454] = anon_sym_AT;
	v->a[90455] = anon_sym_0;
	v->a[90456] = anon_sym__;
	v->a[90457] = 4;
	v->a[90458] = actions(3);
	v->a[90459] = 1;
	small_parse_table_4523(v);
}

void	small_parse_table_4523(t_small_parse_table_array *v)
{
	v->a[90460] = sym_comment;
	v->a[90461] = actions(1054);
	v->a[90462] = 1;
	v->a[90463] = sym_variable_name;
	v->a[90464] = actions(1052);
	v->a[90465] = 2;
	v->a[90466] = aux_sym__simple_variable_name_token1;
	v->a[90467] = aux_sym__multiline_variable_name_token1;
	v->a[90468] = actions(1050);
	v->a[90469] = 9;
	v->a[90470] = anon_sym_BANG;
	v->a[90471] = anon_sym_DASH;
	v->a[90472] = anon_sym_STAR;
	v->a[90473] = anon_sym_QMARK;
	v->a[90474] = anon_sym_DOLLAR;
	v->a[90475] = anon_sym_POUND;
	v->a[90476] = anon_sym_AT;
	v->a[90477] = anon_sym_0;
	v->a[90478] = anon_sym__;
	v->a[90479] = 10;
	small_parse_table_4524(v);
}

void	small_parse_table_4524(t_small_parse_table_array *v)
{
	v->a[90480] = actions(3);
	v->a[90481] = 1;
	v->a[90482] = sym_comment;
	v->a[90483] = actions(3712);
	v->a[90484] = 1;
	v->a[90485] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[90486] = actions(3716);
	v->a[90487] = 1;
	v->a[90488] = sym_string_content;
	v->a[90489] = actions(3718);
	v->a[90490] = 1;
	v->a[90491] = anon_sym_DOLLAR_LBRACE;
	v->a[90492] = actions(3720);
	v->a[90493] = 1;
	v->a[90494] = anon_sym_DOLLAR_LPAREN;
	v->a[90495] = actions(3722);
	v->a[90496] = 1;
	v->a[90497] = anon_sym_BQUOTE;
	v->a[90498] = actions(3980);
	v->a[90499] = 1;
	small_parse_table_4525(v);
}

/* EOF small_parse_table_904.c */
