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
	v->a[44100] = sym_simple_expansion;
	v->a[44101] = sym_expansion;
	v->a[44102] = state(252);
	v->a[44103] = 7;
	v->a[44104] = sym__arithmetic_expression;
	v->a[44105] = sym_arithmetic_literal;
	v->a[44106] = sym_arithmetic_binary_expression;
	v->a[44107] = sym_arithmetic_ternary_expression;
	v->a[44108] = sym_arithmetic_unary_expression;
	v->a[44109] = sym_arithmetic_postfix_expression;
	v->a[44110] = sym_arithmetic_parenthesized_expression;
	v->a[44111] = 12;
	v->a[44112] = actions(407);
	v->a[44113] = 1;
	v->a[44114] = sym_comment;
	v->a[44115] = actions(1540);
	v->a[44116] = 1;
	v->a[44117] = anon_sym_LPAREN;
	v->a[44118] = actions(1542);
	v->a[44119] = 1;
	small_parse_table_2206(v);
}

void	small_parse_table_2206(t_small_parse_table_array *v)
{
	v->a[44120] = anon_sym_BANG;
	v->a[44121] = actions(1548);
	v->a[44122] = 1;
	v->a[44123] = anon_sym_DOLLAR;
	v->a[44124] = actions(1550);
	v->a[44125] = 1;
	v->a[44126] = anon_sym_DQUOTE;
	v->a[44127] = actions(1554);
	v->a[44128] = 1;
	v->a[44129] = anon_sym_DOLLAR_LBRACE;
	v->a[44130] = actions(1556);
	v->a[44131] = 1;
	v->a[44132] = sym_variable_name;
	v->a[44133] = actions(1544);
	v->a[44134] = 2;
	v->a[44135] = anon_sym_PLUS_PLUS;
	v->a[44136] = anon_sym_DASH_DASH;
	v->a[44137] = actions(1546);
	v->a[44138] = 2;
	v->a[44139] = anon_sym_DASH2;
	small_parse_table_2207(v);
}

void	small_parse_table_2207(t_small_parse_table_array *v)
{
	v->a[44140] = anon_sym_PLUS2;
	v->a[44141] = actions(1552);
	v->a[44142] = 2;
	v->a[44143] = sym_number;
	v->a[44144] = aux_sym__simple_variable_name_token1;
	v->a[44145] = state(157);
	v->a[44146] = 3;
	v->a[44147] = sym_string;
	v->a[44148] = sym_simple_expansion;
	v->a[44149] = sym_expansion;
	v->a[44150] = state(251);
	v->a[44151] = 7;
	v->a[44152] = sym__arithmetic_expression;
	v->a[44153] = sym_arithmetic_literal;
	v->a[44154] = sym_arithmetic_binary_expression;
	v->a[44155] = sym_arithmetic_ternary_expression;
	v->a[44156] = sym_arithmetic_unary_expression;
	v->a[44157] = sym_arithmetic_postfix_expression;
	v->a[44158] = sym_arithmetic_parenthesized_expression;
	v->a[44159] = 3;
	small_parse_table_2208(v);
}

void	small_parse_table_2208(t_small_parse_table_array *v)
{
	v->a[44160] = actions(3);
	v->a[44161] = 1;
	v->a[44162] = sym_comment;
	v->a[44163] = actions(1023);
	v->a[44164] = 1;
	v->a[44165] = sym_variable_name;
	v->a[44166] = actions(1025);
	v->a[44167] = 21;
	v->a[44168] = anon_sym_PIPE;
	v->a[44169] = anon_sym_AMP_AMP;
	v->a[44170] = anon_sym_PIPE_PIPE;
	v->a[44171] = anon_sym_LT;
	v->a[44172] = anon_sym_GT;
	v->a[44173] = anon_sym_GT_GT;
	v->a[44174] = anon_sym_LT_AMP;
	v->a[44175] = anon_sym_GT_AMP;
	v->a[44176] = anon_sym_GT_PIPE;
	v->a[44177] = anon_sym_LT_GT;
	v->a[44178] = anon_sym_LT_LT;
	v->a[44179] = anon_sym_LT_LT_DASH;
	small_parse_table_2209(v);
}

void	small_parse_table_2209(t_small_parse_table_array *v)
{
	v->a[44180] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[44181] = anon_sym_DOLLAR;
	v->a[44182] = anon_sym_DQUOTE;
	v->a[44183] = sym_raw_string;
	v->a[44184] = sym_number;
	v->a[44185] = anon_sym_DOLLAR_LBRACE;
	v->a[44186] = anon_sym_DOLLAR_LPAREN;
	v->a[44187] = anon_sym_BQUOTE;
	v->a[44188] = sym_word;
	v->a[44189] = 12;
	v->a[44190] = actions(407);
	v->a[44191] = 1;
	v->a[44192] = sym_comment;
	v->a[44193] = actions(1540);
	v->a[44194] = 1;
	v->a[44195] = anon_sym_LPAREN;
	v->a[44196] = actions(1542);
	v->a[44197] = 1;
	v->a[44198] = anon_sym_BANG;
	v->a[44199] = actions(1548);
	small_parse_table_2210(v);
}

/* EOF small_parse_table_441.c */
