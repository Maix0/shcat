/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_3060.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_15300(t_small_parse_table_array *v)
{
	v->a[306000] = anon_sym_STAR;
	v->a[306001] = anon_sym_BANG;
	v->a[306002] = anon_sym_QMARK;
	v->a[306003] = anon_sym_DOLLAR;
	v->a[306004] = anon_sym_POUND;
	v->a[306005] = anon_sym_AT2;
	v->a[306006] = anon_sym_0;
	v->a[306007] = anon_sym__;
	v->a[306008] = 6;
	v->a[306009] = actions(3);
	v->a[306010] = 1;
	v->a[306011] = sym_comment;
	v->a[306012] = actions(3679);
	v->a[306013] = 1;
	v->a[306014] = anon_sym_DQUOTE;
	v->a[306015] = actions(7352);
	v->a[306016] = 1;
	v->a[306017] = sym_variable_name;
	v->a[306018] = state(4859);
	v->a[306019] = 1;
	small_parse_table_15301(v);
}

void	small_parse_table_15301(t_small_parse_table_array *v)
{
	v->a[306020] = sym_string;
	v->a[306021] = actions(7350);
	v->a[306022] = 2;
	v->a[306023] = aux_sym__simple_variable_name_token1;
	v->a[306024] = aux_sym__multiline_variable_name_token1;
	v->a[306025] = actions(7348);
	v->a[306026] = 9;
	v->a[306027] = anon_sym_DASH;
	v->a[306028] = anon_sym_STAR;
	v->a[306029] = anon_sym_BANG;
	v->a[306030] = anon_sym_QMARK;
	v->a[306031] = anon_sym_DOLLAR;
	v->a[306032] = anon_sym_POUND;
	v->a[306033] = anon_sym_AT2;
	v->a[306034] = anon_sym_0;
	v->a[306035] = anon_sym__;
	v->a[306036] = 6;
	v->a[306037] = actions(3);
	v->a[306038] = 1;
	v->a[306039] = sym_comment;
	small_parse_table_15302(v);
}

void	small_parse_table_15302(t_small_parse_table_array *v)
{
	v->a[306040] = actions(13624);
	v->a[306041] = 1;
	v->a[306042] = anon_sym_DQUOTE;
	v->a[306043] = actions(13732);
	v->a[306044] = 1;
	v->a[306045] = sym_string_content;
	v->a[306046] = actions(13736);
	v->a[306047] = 1;
	v->a[306048] = sym_variable_name;
	v->a[306049] = actions(13734);
	v->a[306050] = 2;
	v->a[306051] = aux_sym__simple_variable_name_token1;
	v->a[306052] = aux_sym__multiline_variable_name_token1;
	v->a[306053] = actions(13730);
	v->a[306054] = 9;
	v->a[306055] = anon_sym_DASH;
	v->a[306056] = anon_sym_STAR;
	v->a[306057] = anon_sym_BANG;
	v->a[306058] = anon_sym_QMARK;
	v->a[306059] = anon_sym_DOLLAR;
	small_parse_table_15303(v);
}

void	small_parse_table_15303(t_small_parse_table_array *v)
{
	v->a[306060] = anon_sym_POUND;
	v->a[306061] = anon_sym_AT2;
	v->a[306062] = anon_sym_0;
	v->a[306063] = anon_sym__;
	v->a[306064] = 6;
	v->a[306065] = actions(3);
	v->a[306066] = 1;
	v->a[306067] = sym_comment;
	v->a[306068] = actions(13732);
	v->a[306069] = 1;
	v->a[306070] = sym_string_content;
	v->a[306071] = actions(13736);
	v->a[306072] = 1;
	v->a[306073] = sym_variable_name;
	v->a[306074] = actions(13884);
	v->a[306075] = 1;
	v->a[306076] = anon_sym_DQUOTE;
	v->a[306077] = actions(13734);
	v->a[306078] = 2;
	v->a[306079] = aux_sym__simple_variable_name_token1;
	small_parse_table_15304(v);
}

void	small_parse_table_15304(t_small_parse_table_array *v)
{
	v->a[306080] = aux_sym__multiline_variable_name_token1;
	v->a[306081] = actions(13730);
	v->a[306082] = 9;
	v->a[306083] = anon_sym_DASH;
	v->a[306084] = anon_sym_STAR;
	v->a[306085] = anon_sym_BANG;
	v->a[306086] = anon_sym_QMARK;
	v->a[306087] = anon_sym_DOLLAR;
	v->a[306088] = anon_sym_POUND;
	v->a[306089] = anon_sym_AT2;
	v->a[306090] = anon_sym_0;
	v->a[306091] = anon_sym__;
	v->a[306092] = 6;
	v->a[306093] = actions(3);
	v->a[306094] = 1;
	v->a[306095] = sym_comment;
	v->a[306096] = actions(13122);
	v->a[306097] = 1;
	v->a[306098] = anon_sym_DQUOTE;
	v->a[306099] = actions(13732);
	small_parse_table_15305(v);
}

/* EOF small_parse_table_3060.c */
