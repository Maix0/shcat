/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_3064.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_15320(t_small_parse_table_array *v)
{
	v->a[306400] = 6;
	v->a[306401] = actions(3);
	v->a[306402] = 1;
	v->a[306403] = sym_comment;
	v->a[306404] = actions(13628);
	v->a[306405] = 1;
	v->a[306406] = anon_sym_DQUOTE;
	v->a[306407] = actions(13732);
	v->a[306408] = 1;
	v->a[306409] = sym_string_content;
	v->a[306410] = actions(13736);
	v->a[306411] = 1;
	v->a[306412] = sym_variable_name;
	v->a[306413] = actions(13734);
	v->a[306414] = 2;
	v->a[306415] = aux_sym__simple_variable_name_token1;
	v->a[306416] = aux_sym__multiline_variable_name_token1;
	v->a[306417] = actions(13730);
	v->a[306418] = 9;
	v->a[306419] = anon_sym_DASH;
	small_parse_table_15321(v);
}

void	small_parse_table_15321(t_small_parse_table_array *v)
{
	v->a[306420] = anon_sym_STAR;
	v->a[306421] = anon_sym_BANG;
	v->a[306422] = anon_sym_QMARK;
	v->a[306423] = anon_sym_DOLLAR;
	v->a[306424] = anon_sym_POUND;
	v->a[306425] = anon_sym_AT2;
	v->a[306426] = anon_sym_0;
	v->a[306427] = anon_sym__;
	v->a[306428] = 6;
	v->a[306429] = actions(3);
	v->a[306430] = 1;
	v->a[306431] = sym_comment;
	v->a[306432] = actions(13576);
	v->a[306433] = 1;
	v->a[306434] = anon_sym_DQUOTE;
	v->a[306435] = actions(13732);
	v->a[306436] = 1;
	v->a[306437] = sym_string_content;
	v->a[306438] = actions(13736);
	v->a[306439] = 1;
	small_parse_table_15322(v);
}

void	small_parse_table_15322(t_small_parse_table_array *v)
{
	v->a[306440] = sym_variable_name;
	v->a[306441] = actions(13734);
	v->a[306442] = 2;
	v->a[306443] = aux_sym__simple_variable_name_token1;
	v->a[306444] = aux_sym__multiline_variable_name_token1;
	v->a[306445] = actions(13730);
	v->a[306446] = 9;
	v->a[306447] = anon_sym_DASH;
	v->a[306448] = anon_sym_STAR;
	v->a[306449] = anon_sym_BANG;
	v->a[306450] = anon_sym_QMARK;
	v->a[306451] = anon_sym_DOLLAR;
	v->a[306452] = anon_sym_POUND;
	v->a[306453] = anon_sym_AT2;
	v->a[306454] = anon_sym_0;
	v->a[306455] = anon_sym__;
	v->a[306456] = 6;
	v->a[306457] = actions(3);
	v->a[306458] = 1;
	v->a[306459] = sym_comment;
	small_parse_table_15323(v);
}

void	small_parse_table_15323(t_small_parse_table_array *v)
{
	v->a[306460] = actions(13588);
	v->a[306461] = 1;
	v->a[306462] = anon_sym_DQUOTE;
	v->a[306463] = actions(13732);
	v->a[306464] = 1;
	v->a[306465] = sym_string_content;
	v->a[306466] = actions(13736);
	v->a[306467] = 1;
	v->a[306468] = sym_variable_name;
	v->a[306469] = actions(13734);
	v->a[306470] = 2;
	v->a[306471] = aux_sym__simple_variable_name_token1;
	v->a[306472] = aux_sym__multiline_variable_name_token1;
	v->a[306473] = actions(13730);
	v->a[306474] = 9;
	v->a[306475] = anon_sym_DASH;
	v->a[306476] = anon_sym_STAR;
	v->a[306477] = anon_sym_BANG;
	v->a[306478] = anon_sym_QMARK;
	v->a[306479] = anon_sym_DOLLAR;
	small_parse_table_15324(v);
}

void	small_parse_table_15324(t_small_parse_table_array *v)
{
	v->a[306480] = anon_sym_POUND;
	v->a[306481] = anon_sym_AT2;
	v->a[306482] = anon_sym_0;
	v->a[306483] = anon_sym__;
	v->a[306484] = 6;
	v->a[306485] = actions(3);
	v->a[306486] = 1;
	v->a[306487] = sym_comment;
	v->a[306488] = actions(1458);
	v->a[306489] = 1;
	v->a[306490] = anon_sym_DQUOTE;
	v->a[306491] = actions(1973);
	v->a[306492] = 1;
	v->a[306493] = sym_variable_name;
	v->a[306494] = state(1130);
	v->a[306495] = 1;
	v->a[306496] = sym_string;
	v->a[306497] = actions(1971);
	v->a[306498] = 2;
	v->a[306499] = aux_sym__simple_variable_name_token1;
	small_parse_table_15325(v);
}

/* EOF small_parse_table_3064.c */
