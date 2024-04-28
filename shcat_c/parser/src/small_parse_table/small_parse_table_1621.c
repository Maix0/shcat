/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1621.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_8105(t_small_parse_table_array *v)
{
	v->a[162100] = actions(7198);
	v->a[162101] = 1;
	v->a[162102] = anon_sym_STAR_STAR;
	v->a[162103] = actions(6793);
	v->a[162104] = 2;
	v->a[162105] = anon_sym_PLUS_PLUS;
	v->a[162106] = anon_sym_DASH_DASH;
	v->a[162107] = actions(7192);
	v->a[162108] = 2;
	v->a[162109] = anon_sym_LT_LT;
	v->a[162110] = anon_sym_GT_GT;
	v->a[162111] = actions(7194);
	v->a[162112] = 2;
	v->a[162113] = anon_sym_PLUS;
	v->a[162114] = anon_sym_DASH;
	v->a[162115] = actions(7196);
	v->a[162116] = 3;
	v->a[162117] = anon_sym_STAR;
	v->a[162118] = anon_sym_SLASH;
	v->a[162119] = anon_sym_PERCENT;
	small_parse_table_8106(v);
}

void	small_parse_table_8106(t_small_parse_table_array *v)
{
	v->a[162120] = actions(6807);
	v->a[162121] = 6;
	v->a[162122] = anon_sym_EQ;
	v->a[162123] = anon_sym_PIPE;
	v->a[162124] = anon_sym_CARET;
	v->a[162125] = anon_sym_AMP;
	v->a[162126] = anon_sym_LT;
	v->a[162127] = anon_sym_GT;
	v->a[162128] = actions(6805);
	v->a[162129] = 21;
	v->a[162130] = sym_test_operator;
	v->a[162131] = anon_sym_PLUS_EQ;
	v->a[162132] = anon_sym_DASH_EQ;
	v->a[162133] = anon_sym_STAR_EQ;
	v->a[162134] = anon_sym_SLASH_EQ;
	v->a[162135] = anon_sym_PERCENT_EQ;
	v->a[162136] = anon_sym_STAR_STAR_EQ;
	v->a[162137] = anon_sym_LT_LT_EQ;
	v->a[162138] = anon_sym_GT_GT_EQ;
	v->a[162139] = anon_sym_AMP_EQ;
	small_parse_table_8107(v);
}

void	small_parse_table_8107(t_small_parse_table_array *v)
{
	v->a[162140] = anon_sym_CARET_EQ;
	v->a[162141] = anon_sym_PIPE_EQ;
	v->a[162142] = anon_sym_PIPE_PIPE;
	v->a[162143] = anon_sym_AMP_AMP;
	v->a[162144] = anon_sym_EQ_EQ;
	v->a[162145] = anon_sym_BANG_EQ;
	v->a[162146] = anon_sym_LT_EQ;
	v->a[162147] = anon_sym_GT_EQ;
	v->a[162148] = anon_sym_EQ_TILDE;
	v->a[162149] = anon_sym_QMARK;
	v->a[162150] = anon_sym_COLON;
	v->a[162151] = 3;
	v->a[162152] = actions(71);
	v->a[162153] = 1;
	v->a[162154] = sym_comment;
	v->a[162155] = actions(1261);
	v->a[162156] = 12;
	v->a[162157] = anon_sym_PIPE;
	v->a[162158] = anon_sym_LT;
	v->a[162159] = anon_sym_GT;
	small_parse_table_8108(v);
}

void	small_parse_table_8108(t_small_parse_table_array *v)
{
	v->a[162160] = anon_sym_LT_LT;
	v->a[162161] = anon_sym_AMP_GT;
	v->a[162162] = anon_sym_LT_AMP;
	v->a[162163] = anon_sym_GT_AMP;
	v->a[162164] = anon_sym_DOLLAR;
	v->a[162165] = aux_sym_number_token1;
	v->a[162166] = aux_sym_number_token2;
	v->a[162167] = anon_sym_DOLLAR_LPAREN;
	v->a[162168] = sym_word;
	v->a[162169] = actions(1263);
	v->a[162170] = 25;
	v->a[162171] = sym_file_descriptor;
	v->a[162172] = sym_test_operator;
	v->a[162173] = sym__brace_start;
	v->a[162174] = anon_sym_LPAREN_LPAREN;
	v->a[162175] = anon_sym_PIPE_PIPE;
	v->a[162176] = anon_sym_AMP_AMP;
	v->a[162177] = anon_sym_GT_GT;
	v->a[162178] = anon_sym_PIPE_AMP;
	v->a[162179] = anon_sym_AMP_GT_GT;
	small_parse_table_8109(v);
}

void	small_parse_table_8109(t_small_parse_table_array *v)
{
	v->a[162180] = anon_sym_GT_PIPE;
	v->a[162181] = anon_sym_LT_AMP_DASH;
	v->a[162182] = anon_sym_GT_AMP_DASH;
	v->a[162183] = anon_sym_LT_LT_DASH;
	v->a[162184] = anon_sym_LT_LT_LT;
	v->a[162185] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[162186] = anon_sym_DOLLAR_LBRACK;
	v->a[162187] = sym__special_character;
	v->a[162188] = anon_sym_DQUOTE;
	v->a[162189] = sym_raw_string;
	v->a[162190] = sym_ansi_c_string;
	v->a[162191] = anon_sym_DOLLAR_LBRACE;
	v->a[162192] = anon_sym_BQUOTE;
	v->a[162193] = anon_sym_DOLLAR_BQUOTE;
	v->a[162194] = anon_sym_LT_LPAREN;
	v->a[162195] = anon_sym_GT_LPAREN;
	v->a[162196] = 3;
	v->a[162197] = actions(3);
	v->a[162198] = 1;
	v->a[162199] = sym_comment;
	small_parse_table_8110(v);
}

/* EOF small_parse_table_1621.c */
