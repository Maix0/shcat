/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_501.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2505(t_small_parse_table_array *v)
{
	v->a[50100] = anon_sym_DOLLAR_LBRACE;
	v->a[50101] = actions(2303);
	v->a[50102] = 1;
	v->a[50103] = anon_sym_DOLLAR_LPAREN;
	v->a[50104] = actions(2305);
	v->a[50105] = 1;
	v->a[50106] = anon_sym_BQUOTE;
	v->a[50107] = actions(2457);
	v->a[50108] = 1;
	v->a[50109] = anon_sym_DOLLAR;
	v->a[50110] = actions(2459);
	v->a[50111] = 1;
	v->a[50112] = anon_sym_DQUOTE;
	v->a[50113] = state(1176);
	v->a[50114] = 1;
	v->a[50115] = aux_sym_string_repeat1;
	v->a[50116] = state(1394);
	v->a[50117] = 4;
	v->a[50118] = sym_arithmetic_expansion;
	v->a[50119] = sym_simple_expansion;
	small_parse_table_2506(v);
}

void	small_parse_table_2506(t_small_parse_table_array *v)
{
	v->a[50120] = sym_expansion;
	v->a[50121] = sym_command_substitution;
	v->a[50122] = 8;
	v->a[50123] = actions(3);
	v->a[50124] = 1;
	v->a[50125] = sym_comment;
	v->a[50126] = actions(2277);
	v->a[50127] = 1;
	v->a[50128] = anon_sym_POUND;
	v->a[50129] = actions(2279);
	v->a[50130] = 1;
	v->a[50131] = aux_sym__simple_variable_name_token1;
	v->a[50132] = actions(2281);
	v->a[50133] = 1;
	v->a[50134] = anon_sym_0;
	v->a[50135] = actions(2283);
	v->a[50136] = 1;
	v->a[50137] = sym_variable_name;
	v->a[50138] = actions(2461);
	v->a[50139] = 1;
	small_parse_table_2507(v);
}

void	small_parse_table_2507(t_small_parse_table_array *v)
{
	v->a[50140] = anon_sym_RBRACE;
	v->a[50141] = state(1751);
	v->a[50142] = 1;
	v->a[50143] = sym__expansion_body;
	v->a[50144] = actions(2275);
	v->a[50145] = 6;
	v->a[50146] = anon_sym_BANG;
	v->a[50147] = anon_sym_DASH;
	v->a[50148] = anon_sym_STAR;
	v->a[50149] = anon_sym_QMARK;
	v->a[50150] = anon_sym_DOLLAR;
	v->a[50151] = anon_sym_AT;
	v->a[50152] = 8;
	v->a[50153] = actions(3);
	v->a[50154] = 1;
	v->a[50155] = sym_comment;
	v->a[50156] = actions(2277);
	v->a[50157] = 1;
	v->a[50158] = anon_sym_POUND;
	v->a[50159] = actions(2279);
	small_parse_table_2508(v);
}

void	small_parse_table_2508(t_small_parse_table_array *v)
{
	v->a[50160] = 1;
	v->a[50161] = aux_sym__simple_variable_name_token1;
	v->a[50162] = actions(2281);
	v->a[50163] = 1;
	v->a[50164] = anon_sym_0;
	v->a[50165] = actions(2283);
	v->a[50166] = 1;
	v->a[50167] = sym_variable_name;
	v->a[50168] = actions(2463);
	v->a[50169] = 1;
	v->a[50170] = anon_sym_RBRACE;
	v->a[50171] = state(1619);
	v->a[50172] = 1;
	v->a[50173] = sym__expansion_body;
	v->a[50174] = actions(2275);
	v->a[50175] = 6;
	v->a[50176] = anon_sym_BANG;
	v->a[50177] = anon_sym_DASH;
	v->a[50178] = anon_sym_STAR;
	v->a[50179] = anon_sym_QMARK;
	small_parse_table_2509(v);
}

void	small_parse_table_2509(t_small_parse_table_array *v)
{
	v->a[50180] = anon_sym_DOLLAR;
	v->a[50181] = anon_sym_AT;
	v->a[50182] = 10;
	v->a[50183] = actions(3);
	v->a[50184] = 1;
	v->a[50185] = sym_comment;
	v->a[50186] = actions(2293);
	v->a[50187] = 1;
	v->a[50188] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50189] = actions(2299);
	v->a[50190] = 1;
	v->a[50191] = sym_string_content;
	v->a[50192] = actions(2301);
	v->a[50193] = 1;
	v->a[50194] = anon_sym_DOLLAR_LBRACE;
	v->a[50195] = actions(2303);
	v->a[50196] = 1;
	v->a[50197] = anon_sym_DOLLAR_LPAREN;
	v->a[50198] = actions(2305);
	v->a[50199] = 1;
	small_parse_table_2510(v);
}

/* EOF small_parse_table_501.c */
