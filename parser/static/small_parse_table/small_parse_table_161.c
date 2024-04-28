/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_161.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_805(t_small_parse_table_array *v)
{
	v->a[16100] = actions(3058);
	v->a[16101] = 1;
	v->a[16102] = anon_sym_TILDE;
	v->a[16103] = actions(3060);
	v->a[16104] = 1;
	v->a[16105] = anon_sym_BQUOTE;
	v->a[16106] = actions(3064);
	v->a[16107] = 1;
	v->a[16108] = sym_variable_name;
	v->a[16109] = actions(3467);
	v->a[16110] = 1;
	v->a[16111] = aux_sym__simple_variable_name_token1;
	v->a[16112] = state(2387);
	v->a[16113] = 1;
	v->a[16114] = sym_command_substitution;
	v->a[16115] = state(2484);
	v->a[16116] = 1;
	v->a[16117] = aux_sym__literal_repeat1;
	v->a[16118] = state(2801);
	v->a[16119] = 1;
	small_parse_table_806(v);
}

void	small_parse_table_806(t_small_parse_table_array *v)
{
	v->a[16120] = sym__arithmetic_binary_expression;
	v->a[16121] = state(2803);
	v->a[16122] = 1;
	v->a[16123] = sym__arithmetic_ternary_expression;
	v->a[16124] = state(2809);
	v->a[16125] = 1;
	v->a[16126] = sym__arithmetic_unary_expression;
	v->a[16127] = state(2825);
	v->a[16128] = 1;
	v->a[16129] = sym__arithmetic_postfix_expression;
	v->a[16130] = state(3033);
	v->a[16131] = 1;
	v->a[16132] = sym__expression;
	v->a[16133] = actions(1129);
	v->a[16134] = 2;
	v->a[16135] = anon_sym_LPAREN_LPAREN;
	v->a[16136] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16137] = actions(1165);
	v->a[16138] = 2;
	v->a[16139] = anon_sym_LT_LPAREN;
	small_parse_table_807(v);
}

void	small_parse_table_807(t_small_parse_table_array *v)
{
	v->a[16140] = anon_sym_GT_LPAREN;
	v->a[16141] = actions(1183);
	v->a[16142] = 2;
	v->a[16143] = sym_raw_string;
	v->a[16144] = sym_ansi_c_string;
	v->a[16145] = actions(3054);
	v->a[16146] = 2;
	v->a[16147] = anon_sym_PLUS_PLUS2;
	v->a[16148] = anon_sym_DASH_DASH2;
	v->a[16149] = actions(3056);
	v->a[16150] = 2;
	v->a[16151] = anon_sym_DASH2;
	v->a[16152] = anon_sym_PLUS2;
	v->a[16153] = state(2397);
	v->a[16154] = 4;
	v->a[16155] = sym_string;
	v->a[16156] = sym_number;
	v->a[16157] = sym_simple_expansion;
	v->a[16158] = sym_expansion;
	v->a[16159] = state(2456);
	small_parse_table_808(v);
}

void	small_parse_table_808(t_small_parse_table_array *v)
{
	v->a[16160] = 4;
	v->a[16161] = sym_arithmetic_expansion;
	v->a[16162] = sym_brace_expression;
	v->a[16163] = sym_translated_string;
	v->a[16164] = sym_process_substitution;
	v->a[16165] = state(2777);
	v->a[16166] = 4;
	v->a[16167] = sym_subscript;
	v->a[16168] = sym__arithmetic_expression;
	v->a[16169] = sym__arithmetic_literal;
	v->a[16170] = sym__arithmetic_parenthesized_expression;
	v->a[16171] = state(2594);
	v->a[16172] = 6;
	v->a[16173] = sym_binary_expression;
	v->a[16174] = sym_ternary_expression;
	v->a[16175] = sym_unary_expression;
	v->a[16176] = sym_postfix_expression;
	v->a[16177] = sym_parenthesized_expression;
	v->a[16178] = sym_concatenation;
	v->a[16179] = 8;
	small_parse_table_809(v);
}

void	small_parse_table_809(t_small_parse_table_array *v)
{
	v->a[16180] = actions(3);
	v->a[16181] = 1;
	v->a[16182] = sym_comment;
	v->a[16183] = actions(1811);
	v->a[16184] = 1;
	v->a[16185] = anon_sym_DQUOTE;
	v->a[16186] = actions(1815);
	v->a[16187] = 1;
	v->a[16188] = sym_variable_name;
	v->a[16189] = state(1061);
	v->a[16190] = 1;
	v->a[16191] = sym_string;
	v->a[16192] = actions(1813);
	v->a[16193] = 2;
	v->a[16194] = aux_sym__simple_variable_name_token1;
	v->a[16195] = aux_sym__multiline_variable_name_token1;
	v->a[16196] = actions(1235);
	v->a[16197] = 4;
	v->a[16198] = sym_file_descriptor;
	v->a[16199] = sym_test_operator;
	small_parse_table_810(v);
}

/* EOF small_parse_table_161.c */
