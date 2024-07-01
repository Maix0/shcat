/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_521.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2605(t_small_parse_table_array *v)
{
	v->a[52100] = 3;
	v->a[52101] = sym_file_descriptor;
	v->a[52102] = sym__concat;
	v->a[52103] = sym__bare_dollar;
	v->a[52104] = actions(1189);
	v->a[52105] = 24;
	v->a[52106] = anon_sym_LPAREN;
	v->a[52107] = anon_sym_PIPE;
	v->a[52108] = anon_sym_AMP_AMP;
	v->a[52109] = anon_sym_PIPE_PIPE;
	v->a[52110] = anon_sym_LT;
	v->a[52111] = anon_sym_GT;
	v->a[52112] = anon_sym_GT_GT;
	v->a[52113] = anon_sym_LT_AMP;
	v->a[52114] = anon_sym_GT_AMP;
	v->a[52115] = anon_sym_GT_PIPE;
	v->a[52116] = anon_sym_LT_AMP_DASH;
	v->a[52117] = anon_sym_GT_AMP_DASH;
	v->a[52118] = anon_sym_LT_LT;
	v->a[52119] = anon_sym_LT_LT_DASH;
	small_parse_table_2606(v);
}

void	small_parse_table_2606(t_small_parse_table_array *v)
{
	v->a[52120] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[52121] = aux_sym_concatenation_token1;
	v->a[52122] = anon_sym_DOLLAR;
	v->a[52123] = anon_sym_DQUOTE;
	v->a[52124] = sym_raw_string;
	v->a[52125] = sym_number;
	v->a[52126] = anon_sym_DOLLAR_LBRACE;
	v->a[52127] = anon_sym_DOLLAR_LPAREN;
	v->a[52128] = anon_sym_BQUOTE;
	v->a[52129] = sym_word;
	v->a[52130] = 16;
	v->a[52131] = actions(870);
	v->a[52132] = 1;
	v->a[52133] = sym_comment;
	v->a[52134] = actions(1744);
	v->a[52135] = 1;
	v->a[52136] = anon_sym_LPAREN;
	v->a[52137] = actions(1746);
	v->a[52138] = 1;
	v->a[52139] = anon_sym_BANG;
	small_parse_table_2607(v);
}

void	small_parse_table_2607(t_small_parse_table_array *v)
{
	v->a[52140] = actions(1754);
	v->a[52141] = 1;
	v->a[52142] = anon_sym_TILDE;
	v->a[52143] = actions(1756);
	v->a[52144] = 1;
	v->a[52145] = anon_sym_DOLLAR;
	v->a[52146] = actions(1758);
	v->a[52147] = 1;
	v->a[52148] = anon_sym_DQUOTE;
	v->a[52149] = actions(1762);
	v->a[52150] = 1;
	v->a[52151] = anon_sym_DOLLAR_LBRACE;
	v->a[52152] = actions(1764);
	v->a[52153] = 1;
	v->a[52154] = anon_sym_DOLLAR_LPAREN;
	v->a[52155] = actions(1766);
	v->a[52156] = 1;
	v->a[52157] = anon_sym_BQUOTE;
	v->a[52158] = actions(1768);
	v->a[52159] = 1;
	small_parse_table_2608(v);
}

void	small_parse_table_2608(t_small_parse_table_array *v)
{
	v->a[52160] = sym_variable_name;
	v->a[52161] = actions(1836);
	v->a[52162] = 1;
	v->a[52163] = anon_sym_RPAREN_RPAREN;
	v->a[52164] = actions(1750);
	v->a[52165] = 2;
	v->a[52166] = anon_sym_PLUS_PLUS;
	v->a[52167] = anon_sym_DASH_DASH;
	v->a[52168] = actions(1752);
	v->a[52169] = 2;
	v->a[52170] = anon_sym_DASH2;
	v->a[52171] = anon_sym_PLUS2;
	v->a[52172] = actions(1760);
	v->a[52173] = 2;
	v->a[52174] = sym_number;
	v->a[52175] = aux_sym__simple_variable_name_token1;
	v->a[52176] = state(271);
	v->a[52177] = 3;
	v->a[52178] = sym_string;
	v->a[52179] = sym_simple_expansion;
	small_parse_table_2609(v);
}

void	small_parse_table_2609(t_small_parse_table_array *v)
{
	v->a[52180] = sym_expansion;
	v->a[52181] = state(388);
	v->a[52182] = 8;
	v->a[52183] = sym__arithmetic_expression;
	v->a[52184] = sym_arithmetic_literal;
	v->a[52185] = sym_arithmetic_binary_expression;
	v->a[52186] = sym_arithmetic_ternary_expression;
	v->a[52187] = sym_arithmetic_unary_expression;
	v->a[52188] = sym_arithmetic_postfix_expression;
	v->a[52189] = sym_arithmetic_parenthesized_expression;
	v->a[52190] = sym_command_substitution;
	v->a[52191] = 3;
	v->a[52192] = actions(3);
	v->a[52193] = 1;
	v->a[52194] = sym_comment;
	v->a[52195] = actions(1005);
	v->a[52196] = 3;
	v->a[52197] = sym_file_descriptor;
	v->a[52198] = sym__concat;
	v->a[52199] = sym__bare_dollar;
	small_parse_table_2610(v);
}

/* EOF small_parse_table_521.c */
