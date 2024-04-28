/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2940.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14700(t_small_parse_table_array *v)
{
	v->a[294000] = anon_sym__;
	v->a[294001] = actions(13036);
	v->a[294002] = 6;
	v->a[294003] = anon_sym_DASH;
	v->a[294004] = anon_sym_STAR;
	v->a[294005] = anon_sym_BANG;
	v->a[294006] = anon_sym_QMARK;
	v->a[294007] = anon_sym_POUND;
	v->a[294008] = anon_sym_AT2;
	v->a[294009] = 7;
	v->a[294010] = actions(3);
	v->a[294011] = 1;
	v->a[294012] = sym_comment;
	v->a[294013] = actions(6492);
	v->a[294014] = 1;
	v->a[294015] = anon_sym_DQUOTE;
	v->a[294016] = actions(13048);
	v->a[294017] = 1;
	v->a[294018] = sym_variable_name;
	v->a[294019] = state(6513);
	small_parse_table_14701(v);
}

void	small_parse_table_14701(t_small_parse_table_array *v)
{
	v->a[294020] = 1;
	v->a[294021] = sym_string;
	v->a[294022] = actions(1239);
	v->a[294023] = 2;
	v->a[294024] = anon_sym_PIPE;
	v->a[294025] = anon_sym_RPAREN;
	v->a[294026] = actions(13046);
	v->a[294027] = 2;
	v->a[294028] = aux_sym__simple_variable_name_token1;
	v->a[294029] = aux_sym__multiline_variable_name_token1;
	v->a[294030] = actions(13044);
	v->a[294031] = 9;
	v->a[294032] = anon_sym_DASH;
	v->a[294033] = anon_sym_STAR;
	v->a[294034] = anon_sym_BANG;
	v->a[294035] = anon_sym_QMARK;
	v->a[294036] = anon_sym_DOLLAR;
	v->a[294037] = anon_sym_POUND;
	v->a[294038] = anon_sym_AT2;
	v->a[294039] = anon_sym_0;
	small_parse_table_14702(v);
}

void	small_parse_table_14702(t_small_parse_table_array *v)
{
	v->a[294040] = anon_sym__;
	v->a[294041] = 7;
	v->a[294042] = actions(3);
	v->a[294043] = 1;
	v->a[294044] = sym_comment;
	v->a[294045] = actions(6492);
	v->a[294046] = 1;
	v->a[294047] = anon_sym_DQUOTE;
	v->a[294048] = actions(13048);
	v->a[294049] = 1;
	v->a[294050] = sym_variable_name;
	v->a[294051] = state(6513);
	v->a[294052] = 1;
	v->a[294053] = sym_string;
	v->a[294054] = actions(1227);
	v->a[294055] = 2;
	v->a[294056] = anon_sym_PIPE;
	v->a[294057] = anon_sym_RPAREN;
	v->a[294058] = actions(13046);
	v->a[294059] = 2;
	small_parse_table_14703(v);
}

void	small_parse_table_14703(t_small_parse_table_array *v)
{
	v->a[294060] = aux_sym__simple_variable_name_token1;
	v->a[294061] = aux_sym__multiline_variable_name_token1;
	v->a[294062] = actions(13044);
	v->a[294063] = 9;
	v->a[294064] = anon_sym_DASH;
	v->a[294065] = anon_sym_STAR;
	v->a[294066] = anon_sym_BANG;
	v->a[294067] = anon_sym_QMARK;
	v->a[294068] = anon_sym_DOLLAR;
	v->a[294069] = anon_sym_POUND;
	v->a[294070] = anon_sym_AT2;
	v->a[294071] = anon_sym_0;
	v->a[294072] = anon_sym__;
	v->a[294073] = 9;
	v->a[294074] = actions(3);
	v->a[294075] = 1;
	v->a[294076] = sym_comment;
	v->a[294077] = actions(11764);
	v->a[294078] = 1;
	v->a[294079] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_14704(v);
}

void	small_parse_table_14704(t_small_parse_table_array *v)
{
	v->a[294080] = actions(11766);
	v->a[294081] = 1;
	v->a[294082] = anon_sym_BQUOTE;
	v->a[294083] = actions(11768);
	v->a[294084] = 1;
	v->a[294085] = anon_sym_DOLLAR_BQUOTE;
	v->a[294086] = actions(13054);
	v->a[294087] = 1;
	v->a[294088] = aux_sym__simple_variable_name_token1;
	v->a[294089] = actions(13056);
	v->a[294090] = 1;
	v->a[294091] = sym_variable_name;
	v->a[294092] = state(6448);
	v->a[294093] = 2;
	v->a[294094] = sym_subscript;
	v->a[294095] = sym_command_substitution;
	v->a[294096] = actions(13052);
	v->a[294097] = 3;
	v->a[294098] = anon_sym_DOLLAR;
	v->a[294099] = anon_sym_0;
	small_parse_table_14705(v);
}

/* EOF small_parse_table_2940.c */
