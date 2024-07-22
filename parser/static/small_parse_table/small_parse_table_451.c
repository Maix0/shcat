/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_451.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2255(t_small_parse_table_array *v)
{
	v->a[45100] = anon_sym_BQUOTE;
	v->a[45101] = sym_word;
	v->a[45102] = anon_sym_SEMI;
	v->a[45103] = 7;
	v->a[45104] = actions(3);
	v->a[45105] = 1;
	v->a[45106] = sym_comment;
	v->a[45107] = actions(1457);
	v->a[45108] = 1;
	v->a[45109] = sym_file_descriptor;
	v->a[45110] = actions(1460);
	v->a[45111] = 1;
	v->a[45112] = sym_variable_name;
	v->a[45113] = actions(1632);
	v->a[45114] = 1;
	v->a[45115] = anon_sym_RPAREN;
	v->a[45116] = actions(1454);
	v->a[45117] = 7;
	v->a[45118] = anon_sym_LT;
	v->a[45119] = anon_sym_GT;
	small_parse_table_2256(v);
}

void	small_parse_table_2256(t_small_parse_table_array *v)
{
	v->a[45120] = anon_sym_GT_GT;
	v->a[45121] = anon_sym_LT_AMP;
	v->a[45122] = anon_sym_GT_AMP;
	v->a[45123] = anon_sym_GT_PIPE;
	v->a[45124] = anon_sym_LT_GT;
	v->a[45125] = actions(1449);
	v->a[45126] = 8;
	v->a[45127] = anon_sym_PIPE;
	v->a[45128] = anon_sym_SEMI_SEMI;
	v->a[45129] = anon_sym_AMP_AMP;
	v->a[45130] = anon_sym_PIPE_PIPE;
	v->a[45131] = anon_sym_LT_LT;
	v->a[45132] = anon_sym_LT_LT_DASH;
	v->a[45133] = aux_sym_heredoc_redirect_token1;
	v->a[45134] = anon_sym_SEMI;
	v->a[45135] = actions(1447);
	v->a[45136] = 9;
	v->a[45137] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[45138] = anon_sym_DOLLAR;
	v->a[45139] = anon_sym_DQUOTE;
	small_parse_table_2257(v);
}

void	small_parse_table_2257(t_small_parse_table_array *v)
{
	v->a[45140] = sym_raw_string;
	v->a[45141] = sym_number;
	v->a[45142] = anon_sym_DOLLAR_LBRACE;
	v->a[45143] = anon_sym_DOLLAR_LPAREN;
	v->a[45144] = anon_sym_BQUOTE;
	v->a[45145] = sym_word;
	v->a[45146] = 16;
	v->a[45147] = actions(501);
	v->a[45148] = 1;
	v->a[45149] = sym_comment;
	v->a[45150] = actions(1469);
	v->a[45151] = 1;
	v->a[45152] = anon_sym_LPAREN;
	v->a[45153] = actions(1471);
	v->a[45154] = 1;
	v->a[45155] = anon_sym_BANG;
	v->a[45156] = actions(1479);
	v->a[45157] = 1;
	v->a[45158] = anon_sym_TILDE;
	v->a[45159] = actions(1481);
	small_parse_table_2258(v);
}

void	small_parse_table_2258(t_small_parse_table_array *v)
{
	v->a[45160] = 1;
	v->a[45161] = anon_sym_DOLLAR;
	v->a[45162] = actions(1483);
	v->a[45163] = 1;
	v->a[45164] = anon_sym_DQUOTE;
	v->a[45165] = actions(1487);
	v->a[45166] = 1;
	v->a[45167] = anon_sym_DOLLAR_LBRACE;
	v->a[45168] = actions(1489);
	v->a[45169] = 1;
	v->a[45170] = anon_sym_DOLLAR_LPAREN;
	v->a[45171] = actions(1491);
	v->a[45172] = 1;
	v->a[45173] = anon_sym_BQUOTE;
	v->a[45174] = actions(1493);
	v->a[45175] = 1;
	v->a[45176] = sym_variable_name;
	v->a[45177] = actions(1635);
	v->a[45178] = 1;
	v->a[45179] = anon_sym_RPAREN_RPAREN;
	small_parse_table_2259(v);
}

void	small_parse_table_2259(t_small_parse_table_array *v)
{
	v->a[45180] = actions(1475);
	v->a[45181] = 2;
	v->a[45182] = anon_sym_PLUS_PLUS;
	v->a[45183] = anon_sym_DASH_DASH;
	v->a[45184] = actions(1477);
	v->a[45185] = 2;
	v->a[45186] = anon_sym_DASH2;
	v->a[45187] = anon_sym_PLUS2;
	v->a[45188] = actions(1485);
	v->a[45189] = 2;
	v->a[45190] = sym_number;
	v->a[45191] = aux_sym__simple_variable_name_token1;
	v->a[45192] = state(194);
	v->a[45193] = 3;
	v->a[45194] = sym_string;
	v->a[45195] = sym_simple_expansion;
	v->a[45196] = sym_expansion;
	v->a[45197] = state(275);
	v->a[45198] = 8;
	v->a[45199] = sym__arithmetic_expression;
	small_parse_table_2260(v);
}

/* EOF small_parse_table_451.c */
