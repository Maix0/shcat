/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_461.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2305(t_small_parse_table_array *v)
{
	v->a[46100] = actions(1447);
	v->a[46101] = 9;
	v->a[46102] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[46103] = anon_sym_DOLLAR;
	v->a[46104] = anon_sym_DQUOTE;
	v->a[46105] = sym_raw_string;
	v->a[46106] = sym_number;
	v->a[46107] = anon_sym_DOLLAR_LBRACE;
	v->a[46108] = anon_sym_DOLLAR_LPAREN;
	v->a[46109] = anon_sym_BQUOTE;
	v->a[46110] = sym_word;
	v->a[46111] = 7;
	v->a[46112] = actions(3);
	v->a[46113] = 1;
	v->a[46114] = sym_comment;
	v->a[46115] = actions(1457);
	v->a[46116] = 1;
	v->a[46117] = sym_file_descriptor;
	v->a[46118] = actions(1460);
	v->a[46119] = 1;
	small_parse_table_2306(v);
}

void	small_parse_table_2306(t_small_parse_table_array *v)
{
	v->a[46120] = sym_variable_name;
	v->a[46121] = actions(1670);
	v->a[46122] = 1;
	v->a[46123] = anon_sym_RPAREN;
	v->a[46124] = actions(1454);
	v->a[46125] = 7;
	v->a[46126] = anon_sym_LT;
	v->a[46127] = anon_sym_GT;
	v->a[46128] = anon_sym_GT_GT;
	v->a[46129] = anon_sym_LT_AMP;
	v->a[46130] = anon_sym_GT_AMP;
	v->a[46131] = anon_sym_GT_PIPE;
	v->a[46132] = anon_sym_LT_GT;
	v->a[46133] = actions(1449);
	v->a[46134] = 8;
	v->a[46135] = anon_sym_PIPE;
	v->a[46136] = anon_sym_SEMI_SEMI;
	v->a[46137] = anon_sym_AMP_AMP;
	v->a[46138] = anon_sym_PIPE_PIPE;
	v->a[46139] = anon_sym_LT_LT;
	small_parse_table_2307(v);
}

void	small_parse_table_2307(t_small_parse_table_array *v)
{
	v->a[46140] = anon_sym_LT_LT_DASH;
	v->a[46141] = aux_sym_heredoc_redirect_token1;
	v->a[46142] = anon_sym_SEMI;
	v->a[46143] = actions(1447);
	v->a[46144] = 9;
	v->a[46145] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[46146] = anon_sym_DOLLAR;
	v->a[46147] = anon_sym_DQUOTE;
	v->a[46148] = sym_raw_string;
	v->a[46149] = sym_number;
	v->a[46150] = anon_sym_DOLLAR_LBRACE;
	v->a[46151] = anon_sym_DOLLAR_LPAREN;
	v->a[46152] = anon_sym_BQUOTE;
	v->a[46153] = sym_word;
	v->a[46154] = 16;
	v->a[46155] = actions(501);
	v->a[46156] = 1;
	v->a[46157] = sym_comment;
	v->a[46158] = actions(1469);
	v->a[46159] = 1;
	small_parse_table_2308(v);
}

void	small_parse_table_2308(t_small_parse_table_array *v)
{
	v->a[46160] = anon_sym_LPAREN;
	v->a[46161] = actions(1471);
	v->a[46162] = 1;
	v->a[46163] = anon_sym_BANG;
	v->a[46164] = actions(1479);
	v->a[46165] = 1;
	v->a[46166] = anon_sym_TILDE;
	v->a[46167] = actions(1481);
	v->a[46168] = 1;
	v->a[46169] = anon_sym_DOLLAR;
	v->a[46170] = actions(1483);
	v->a[46171] = 1;
	v->a[46172] = anon_sym_DQUOTE;
	v->a[46173] = actions(1487);
	v->a[46174] = 1;
	v->a[46175] = anon_sym_DOLLAR_LBRACE;
	v->a[46176] = actions(1489);
	v->a[46177] = 1;
	v->a[46178] = anon_sym_DOLLAR_LPAREN;
	v->a[46179] = actions(1491);
	small_parse_table_2309(v);
}

void	small_parse_table_2309(t_small_parse_table_array *v)
{
	v->a[46180] = 1;
	v->a[46181] = anon_sym_BQUOTE;
	v->a[46182] = actions(1493);
	v->a[46183] = 1;
	v->a[46184] = sym_variable_name;
	v->a[46185] = actions(1673);
	v->a[46186] = 1;
	v->a[46187] = anon_sym_RPAREN_RPAREN;
	v->a[46188] = actions(1475);
	v->a[46189] = 2;
	v->a[46190] = anon_sym_PLUS_PLUS;
	v->a[46191] = anon_sym_DASH_DASH;
	v->a[46192] = actions(1477);
	v->a[46193] = 2;
	v->a[46194] = anon_sym_DASH2;
	v->a[46195] = anon_sym_PLUS2;
	v->a[46196] = actions(1485);
	v->a[46197] = 2;
	v->a[46198] = sym_number;
	v->a[46199] = aux_sym__simple_variable_name_token1;
	small_parse_table_2310(v);
}

/* EOF small_parse_table_461.c */
