/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2211.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11055(t_small_parse_table_array *v)
{
	v->a[221100] = 1;
	v->a[221101] = anon_sym_DOLLAR_LBRACE;
	v->a[221102] = actions(9950);
	v->a[221103] = 1;
	v->a[221104] = anon_sym_BQUOTE;
	v->a[221105] = actions(9952);
	v->a[221106] = 1;
	v->a[221107] = anon_sym_DOLLAR_BQUOTE;
	v->a[221108] = actions(10382);
	v->a[221109] = 1;
	v->a[221110] = sym_word;
	v->a[221111] = actions(10388);
	v->a[221112] = 1;
	v->a[221113] = sym__comment_word;
	v->a[221114] = actions(10582);
	v->a[221115] = 1;
	v->a[221116] = anon_sym_DOLLAR;
	v->a[221117] = actions(9938);
	v->a[221118] = 2;
	v->a[221119] = anon_sym_LPAREN_LPAREN;
	small_parse_table_11056(v);
}

void	small_parse_table_11056(t_small_parse_table_array *v)
{
	v->a[221120] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[221121] = actions(9954);
	v->a[221122] = 2;
	v->a[221123] = anon_sym_LT_LPAREN;
	v->a[221124] = anon_sym_GT_LPAREN;
	v->a[221125] = actions(10384);
	v->a[221126] = 2;
	v->a[221127] = sym_test_operator;
	v->a[221128] = sym__special_character;
	v->a[221129] = actions(10386);
	v->a[221130] = 3;
	v->a[221131] = sym__bare_dollar;
	v->a[221132] = sym_raw_string;
	v->a[221133] = sym_ansi_c_string;
	v->a[221134] = state(4404);
	v->a[221135] = 9;
	v->a[221136] = sym_arithmetic_expansion;
	v->a[221137] = sym_brace_expression;
	v->a[221138] = sym_string;
	v->a[221139] = sym_translated_string;
	small_parse_table_11057(v);
}

void	small_parse_table_11057(t_small_parse_table_array *v)
{
	v->a[221140] = sym_number;
	v->a[221141] = sym_simple_expansion;
	v->a[221142] = sym_expansion;
	v->a[221143] = sym_command_substitution;
	v->a[221144] = sym_process_substitution;
	v->a[221145] = 21;
	v->a[221146] = actions(71);
	v->a[221147] = 1;
	v->a[221148] = sym_comment;
	v->a[221149] = actions(3602);
	v->a[221150] = 1;
	v->a[221151] = sym_variable_name;
	v->a[221152] = actions(9898);
	v->a[221153] = 1;
	v->a[221154] = anon_sym_LPAREN;
	v->a[221155] = actions(9900);
	v->a[221156] = 1;
	v->a[221157] = anon_sym_BANG;
	v->a[221158] = actions(9906);
	v->a[221159] = 1;
	small_parse_table_11058(v);
}

void	small_parse_table_11058(t_small_parse_table_array *v)
{
	v->a[221160] = anon_sym_TILDE;
	v->a[221161] = actions(9908);
	v->a[221162] = 1;
	v->a[221163] = anon_sym_DOLLAR;
	v->a[221164] = actions(9910);
	v->a[221165] = 1;
	v->a[221166] = anon_sym_DQUOTE;
	v->a[221167] = actions(9912);
	v->a[221168] = 1;
	v->a[221169] = aux_sym_number_token1;
	v->a[221170] = actions(9914);
	v->a[221171] = 1;
	v->a[221172] = aux_sym_number_token2;
	v->a[221173] = actions(9916);
	v->a[221174] = 1;
	v->a[221175] = anon_sym_DOLLAR_LBRACE;
	v->a[221176] = actions(9918);
	v->a[221177] = 1;
	v->a[221178] = anon_sym_DOLLAR_LPAREN;
	v->a[221179] = actions(9920);
	small_parse_table_11059(v);
}

void	small_parse_table_11059(t_small_parse_table_array *v)
{
	v->a[221180] = 1;
	v->a[221181] = anon_sym_BQUOTE;
	v->a[221182] = actions(9922);
	v->a[221183] = 1;
	v->a[221184] = anon_sym_DOLLAR_BQUOTE;
	v->a[221185] = actions(10584);
	v->a[221186] = 1;
	v->a[221187] = aux_sym__simple_variable_name_token1;
	v->a[221188] = state(3359);
	v->a[221189] = 1;
	v->a[221190] = sym__arithmetic_postfix_expression;
	v->a[221191] = state(3361);
	v->a[221192] = 1;
	v->a[221193] = sym__arithmetic_unary_expression;
	v->a[221194] = state(3367);
	v->a[221195] = 1;
	v->a[221196] = sym__arithmetic_ternary_expression;
	v->a[221197] = state(3375);
	v->a[221198] = 1;
	v->a[221199] = sym__arithmetic_binary_expression;
	small_parse_table_11060(v);
}

/* EOF small_parse_table_2211.c */
