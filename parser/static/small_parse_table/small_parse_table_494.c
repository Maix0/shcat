/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_494.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2470(t_small_parse_table_array *v)
{
	v->a[49400] = 1;
	v->a[49401] = anon_sym_DOLLAR_LPAREN;
	v->a[49402] = actions(2305);
	v->a[49403] = 1;
	v->a[49404] = anon_sym_BQUOTE;
	v->a[49405] = actions(2382);
	v->a[49406] = 1;
	v->a[49407] = anon_sym_DOLLAR;
	v->a[49408] = actions(2384);
	v->a[49409] = 1;
	v->a[49410] = anon_sym_DQUOTE;
	v->a[49411] = state(1132);
	v->a[49412] = 1;
	v->a[49413] = aux_sym_string_repeat1;
	v->a[49414] = state(1394);
	v->a[49415] = 4;
	v->a[49416] = sym_arithmetic_expansion;
	v->a[49417] = sym_simple_expansion;
	v->a[49418] = sym_expansion;
	v->a[49419] = sym_command_substitution;
	small_parse_table_2471(v);
}

void	small_parse_table_2471(t_small_parse_table_array *v)
{
	v->a[49420] = 10;
	v->a[49421] = actions(3);
	v->a[49422] = 1;
	v->a[49423] = sym_comment;
	v->a[49424] = actions(2293);
	v->a[49425] = 1;
	v->a[49426] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49427] = actions(2299);
	v->a[49428] = 1;
	v->a[49429] = sym_string_content;
	v->a[49430] = actions(2301);
	v->a[49431] = 1;
	v->a[49432] = anon_sym_DOLLAR_LBRACE;
	v->a[49433] = actions(2303);
	v->a[49434] = 1;
	v->a[49435] = anon_sym_DOLLAR_LPAREN;
	v->a[49436] = actions(2305);
	v->a[49437] = 1;
	v->a[49438] = anon_sym_BQUOTE;
	v->a[49439] = actions(2386);
	small_parse_table_2472(v);
}

void	small_parse_table_2472(t_small_parse_table_array *v)
{
	v->a[49440] = 1;
	v->a[49441] = anon_sym_DOLLAR;
	v->a[49442] = actions(2388);
	v->a[49443] = 1;
	v->a[49444] = anon_sym_DQUOTE;
	v->a[49445] = state(1123);
	v->a[49446] = 1;
	v->a[49447] = aux_sym_string_repeat1;
	v->a[49448] = state(1394);
	v->a[49449] = 4;
	v->a[49450] = sym_arithmetic_expansion;
	v->a[49451] = sym_simple_expansion;
	v->a[49452] = sym_expansion;
	v->a[49453] = sym_command_substitution;
	v->a[49454] = 8;
	v->a[49455] = actions(3);
	v->a[49456] = 1;
	v->a[49457] = sym_comment;
	v->a[49458] = actions(2277);
	v->a[49459] = 1;
	small_parse_table_2473(v);
}

void	small_parse_table_2473(t_small_parse_table_array *v)
{
	v->a[49460] = anon_sym_POUND;
	v->a[49461] = actions(2279);
	v->a[49462] = 1;
	v->a[49463] = aux_sym__simple_variable_name_token1;
	v->a[49464] = actions(2281);
	v->a[49465] = 1;
	v->a[49466] = anon_sym_0;
	v->a[49467] = actions(2283);
	v->a[49468] = 1;
	v->a[49469] = sym_variable_name;
	v->a[49470] = actions(2390);
	v->a[49471] = 1;
	v->a[49472] = anon_sym_RBRACE;
	v->a[49473] = state(1679);
	v->a[49474] = 1;
	v->a[49475] = sym__expansion_body;
	v->a[49476] = actions(2275);
	v->a[49477] = 6;
	v->a[49478] = anon_sym_BANG;
	v->a[49479] = anon_sym_DASH;
	small_parse_table_2474(v);
}

void	small_parse_table_2474(t_small_parse_table_array *v)
{
	v->a[49480] = anon_sym_STAR;
	v->a[49481] = anon_sym_QMARK;
	v->a[49482] = anon_sym_DOLLAR;
	v->a[49483] = anon_sym_AT;
	v->a[49484] = 10;
	v->a[49485] = actions(3);
	v->a[49486] = 1;
	v->a[49487] = sym_comment;
	v->a[49488] = actions(2293);
	v->a[49489] = 1;
	v->a[49490] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49491] = actions(2299);
	v->a[49492] = 1;
	v->a[49493] = sym_string_content;
	v->a[49494] = actions(2301);
	v->a[49495] = 1;
	v->a[49496] = anon_sym_DOLLAR_LBRACE;
	v->a[49497] = actions(2303);
	v->a[49498] = 1;
	v->a[49499] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2475(v);
}

/* EOF small_parse_table_494.c */
