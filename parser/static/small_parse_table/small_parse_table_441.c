/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_441.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2205(t_small_parse_table_array *v)
{
	v->a[44100] = actions(3);
	v->a[44101] = 1;
	v->a[44102] = sym_comment;
	v->a[44103] = actions(1457);
	v->a[44104] = 1;
	v->a[44105] = sym_file_descriptor;
	v->a[44106] = actions(1460);
	v->a[44107] = 1;
	v->a[44108] = sym_variable_name;
	v->a[44109] = actions(1586);
	v->a[44110] = 1;
	v->a[44111] = anon_sym_RPAREN;
	v->a[44112] = actions(1454);
	v->a[44113] = 7;
	v->a[44114] = anon_sym_LT;
	v->a[44115] = anon_sym_GT;
	v->a[44116] = anon_sym_GT_GT;
	v->a[44117] = anon_sym_LT_AMP;
	v->a[44118] = anon_sym_GT_AMP;
	v->a[44119] = anon_sym_GT_PIPE;
	small_parse_table_2206(v);
}

void	small_parse_table_2206(t_small_parse_table_array *v)
{
	v->a[44120] = anon_sym_LT_GT;
	v->a[44121] = actions(1449);
	v->a[44122] = 8;
	v->a[44123] = anon_sym_PIPE;
	v->a[44124] = anon_sym_SEMI_SEMI;
	v->a[44125] = anon_sym_AMP_AMP;
	v->a[44126] = anon_sym_PIPE_PIPE;
	v->a[44127] = anon_sym_LT_LT;
	v->a[44128] = anon_sym_LT_LT_DASH;
	v->a[44129] = aux_sym_heredoc_redirect_token1;
	v->a[44130] = anon_sym_SEMI;
	v->a[44131] = actions(1447);
	v->a[44132] = 9;
	v->a[44133] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[44134] = anon_sym_DOLLAR;
	v->a[44135] = anon_sym_DQUOTE;
	v->a[44136] = sym_raw_string;
	v->a[44137] = sym_number;
	v->a[44138] = anon_sym_DOLLAR_LBRACE;
	v->a[44139] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2207(v);
}

void	small_parse_table_2207(t_small_parse_table_array *v)
{
	v->a[44140] = anon_sym_BQUOTE;
	v->a[44141] = sym_word;
	v->a[44142] = 16;
	v->a[44143] = actions(501);
	v->a[44144] = 1;
	v->a[44145] = sym_comment;
	v->a[44146] = actions(1469);
	v->a[44147] = 1;
	v->a[44148] = anon_sym_LPAREN;
	v->a[44149] = actions(1471);
	v->a[44150] = 1;
	v->a[44151] = anon_sym_BANG;
	v->a[44152] = actions(1479);
	v->a[44153] = 1;
	v->a[44154] = anon_sym_TILDE;
	v->a[44155] = actions(1481);
	v->a[44156] = 1;
	v->a[44157] = anon_sym_DOLLAR;
	v->a[44158] = actions(1483);
	v->a[44159] = 1;
	small_parse_table_2208(v);
}

void	small_parse_table_2208(t_small_parse_table_array *v)
{
	v->a[44160] = anon_sym_DQUOTE;
	v->a[44161] = actions(1487);
	v->a[44162] = 1;
	v->a[44163] = anon_sym_DOLLAR_LBRACE;
	v->a[44164] = actions(1489);
	v->a[44165] = 1;
	v->a[44166] = anon_sym_DOLLAR_LPAREN;
	v->a[44167] = actions(1491);
	v->a[44168] = 1;
	v->a[44169] = anon_sym_BQUOTE;
	v->a[44170] = actions(1493);
	v->a[44171] = 1;
	v->a[44172] = sym_variable_name;
	v->a[44173] = actions(1589);
	v->a[44174] = 1;
	v->a[44175] = anon_sym_RPAREN_RPAREN;
	v->a[44176] = actions(1475);
	v->a[44177] = 2;
	v->a[44178] = anon_sym_PLUS_PLUS;
	v->a[44179] = anon_sym_DASH_DASH;
	small_parse_table_2209(v);
}

void	small_parse_table_2209(t_small_parse_table_array *v)
{
	v->a[44180] = actions(1477);
	v->a[44181] = 2;
	v->a[44182] = anon_sym_DASH2;
	v->a[44183] = anon_sym_PLUS2;
	v->a[44184] = actions(1485);
	v->a[44185] = 2;
	v->a[44186] = sym_number;
	v->a[44187] = aux_sym__simple_variable_name_token1;
	v->a[44188] = state(194);
	v->a[44189] = 3;
	v->a[44190] = sym_string;
	v->a[44191] = sym_simple_expansion;
	v->a[44192] = sym_expansion;
	v->a[44193] = state(284);
	v->a[44194] = 8;
	v->a[44195] = sym__arithmetic_expression;
	v->a[44196] = sym_arithmetic_literal;
	v->a[44197] = sym_arithmetic_binary_expression;
	v->a[44198] = sym_arithmetic_ternary_expression;
	v->a[44199] = sym_arithmetic_unary_expression;
	small_parse_table_2210(v);
}

/* EOF small_parse_table_441.c */
