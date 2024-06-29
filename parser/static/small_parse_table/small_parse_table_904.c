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
	v->a[90400] = actions(3426);
	v->a[90401] = 1;
	v->a[90402] = anon_sym_BQUOTE;
	v->a[90403] = actions(3642);
	v->a[90404] = 1;
	v->a[90405] = anon_sym_DOLLAR;
	v->a[90406] = actions(3644);
	v->a[90407] = 1;
	v->a[90408] = anon_sym_DQUOTE;
	v->a[90409] = state(1871);
	v->a[90410] = 1;
	v->a[90411] = aux_sym_string_repeat1;
	v->a[90412] = state(1963);
	v->a[90413] = 4;
	v->a[90414] = sym_arithmetic_expansion;
	v->a[90415] = sym_simple_expansion;
	v->a[90416] = sym_expansion;
	v->a[90417] = sym_command_substitution;
	v->a[90418] = 10;
	v->a[90419] = actions(3);
	small_parse_table_4521(v);
}

void	small_parse_table_4521(t_small_parse_table_array *v)
{
	v->a[90420] = 1;
	v->a[90421] = sym_comment;
	v->a[90422] = actions(3414);
	v->a[90423] = 1;
	v->a[90424] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[90425] = actions(3420);
	v->a[90426] = 1;
	v->a[90427] = sym_string_content;
	v->a[90428] = actions(3422);
	v->a[90429] = 1;
	v->a[90430] = anon_sym_DOLLAR_LBRACE;
	v->a[90431] = actions(3424);
	v->a[90432] = 1;
	v->a[90433] = anon_sym_DOLLAR_LPAREN;
	v->a[90434] = actions(3426);
	v->a[90435] = 1;
	v->a[90436] = anon_sym_BQUOTE;
	v->a[90437] = actions(3646);
	v->a[90438] = 1;
	v->a[90439] = anon_sym_DOLLAR;
	small_parse_table_4522(v);
}

void	small_parse_table_4522(t_small_parse_table_array *v)
{
	v->a[90440] = actions(3648);
	v->a[90441] = 1;
	v->a[90442] = anon_sym_DQUOTE;
	v->a[90443] = state(1864);
	v->a[90444] = 1;
	v->a[90445] = aux_sym_string_repeat1;
	v->a[90446] = state(1963);
	v->a[90447] = 4;
	v->a[90448] = sym_arithmetic_expansion;
	v->a[90449] = sym_simple_expansion;
	v->a[90450] = sym_expansion;
	v->a[90451] = sym_command_substitution;
	v->a[90452] = 4;
	v->a[90453] = actions(3);
	v->a[90454] = 1;
	v->a[90455] = sym_comment;
	v->a[90456] = actions(925);
	v->a[90457] = 1;
	v->a[90458] = sym_variable_name;
	v->a[90459] = actions(923);
	small_parse_table_4523(v);
}

void	small_parse_table_4523(t_small_parse_table_array *v)
{
	v->a[90460] = 2;
	v->a[90461] = aux_sym__simple_variable_name_token1;
	v->a[90462] = aux_sym__multiline_variable_name_token1;
	v->a[90463] = actions(921);
	v->a[90464] = 9;
	v->a[90465] = anon_sym_BANG;
	v->a[90466] = anon_sym_DASH;
	v->a[90467] = anon_sym_STAR;
	v->a[90468] = anon_sym_QMARK;
	v->a[90469] = anon_sym_DOLLAR;
	v->a[90470] = anon_sym_POUND;
	v->a[90471] = anon_sym_AT;
	v->a[90472] = anon_sym_0;
	v->a[90473] = anon_sym__;
	v->a[90474] = 4;
	v->a[90475] = actions(3);
	v->a[90476] = 1;
	v->a[90477] = sym_comment;
	v->a[90478] = actions(3652);
	v->a[90479] = 1;
	small_parse_table_4524(v);
}

void	small_parse_table_4524(t_small_parse_table_array *v)
{
	v->a[90480] = anon_sym_esac;
	v->a[90481] = actions(3654);
	v->a[90482] = 1;
	v->a[90483] = sym_extglob_pattern;
	v->a[90484] = actions(3650);
	v->a[90485] = 10;
	v->a[90486] = anon_sym_LPAREN;
	v->a[90487] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[90488] = anon_sym_DOLLAR;
	v->a[90489] = anon_sym_DQUOTE;
	v->a[90490] = sym_raw_string;
	v->a[90491] = sym_number;
	v->a[90492] = anon_sym_DOLLAR_LBRACE;
	v->a[90493] = anon_sym_DOLLAR_LPAREN;
	v->a[90494] = anon_sym_BQUOTE;
	v->a[90495] = sym_word;
	v->a[90496] = 10;
	v->a[90497] = actions(3);
	v->a[90498] = 1;
	v->a[90499] = sym_comment;
	small_parse_table_4525(v);
}

/* EOF small_parse_table_904.c */
