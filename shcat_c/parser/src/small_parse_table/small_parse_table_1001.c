/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1001.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5005(t_small_parse_table_array *v)
{
	v->a[100100] = 1;
	v->a[100101] = sym__special_character;
	v->a[100102] = actions(1225);
	v->a[100103] = 1;
	v->a[100104] = sym_test_operator;
	v->a[100105] = actions(3060);
	v->a[100106] = 1;
	v->a[100107] = anon_sym_BQUOTE;
	v->a[100108] = state(2484);
	v->a[100109] = 1;
	v->a[100110] = aux_sym__literal_repeat1;
	v->a[100111] = state(3327);
	v->a[100112] = 1;
	v->a[100113] = sym__expression;
	v->a[100114] = actions(1129);
	v->a[100115] = 2;
	v->a[100116] = anon_sym_LPAREN_LPAREN;
	v->a[100117] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[100118] = actions(1165);
	v->a[100119] = 2;
	small_parse_table_5006(v);
}

void	small_parse_table_5006(t_small_parse_table_array *v)
{
	v->a[100120] = anon_sym_LT_LPAREN;
	v->a[100121] = anon_sym_GT_LPAREN;
	v->a[100122] = actions(1215);
	v->a[100123] = 2;
	v->a[100124] = anon_sym_PLUS_PLUS2;
	v->a[100125] = anon_sym_DASH_DASH2;
	v->a[100126] = actions(1217);
	v->a[100127] = 2;
	v->a[100128] = anon_sym_DASH2;
	v->a[100129] = anon_sym_PLUS2;
	v->a[100130] = actions(1223);
	v->a[100131] = 2;
	v->a[100132] = sym_raw_string;
	v->a[100133] = sym_ansi_c_string;
	v->a[100134] = state(2594);
	v->a[100135] = 6;
	v->a[100136] = sym_binary_expression;
	v->a[100137] = sym_ternary_expression;
	v->a[100138] = sym_unary_expression;
	v->a[100139] = sym_postfix_expression;
	small_parse_table_5007(v);
}

void	small_parse_table_5007(t_small_parse_table_array *v)
{
	v->a[100140] = sym_parenthesized_expression;
	v->a[100141] = sym_concatenation;
	v->a[100142] = state(2588);
	v->a[100143] = 9;
	v->a[100144] = sym_arithmetic_expansion;
	v->a[100145] = sym_brace_expression;
	v->a[100146] = sym_string;
	v->a[100147] = sym_translated_string;
	v->a[100148] = sym_number;
	v->a[100149] = sym_simple_expansion;
	v->a[100150] = sym_expansion;
	v->a[100151] = sym_command_substitution;
	v->a[100152] = sym_process_substitution;
	v->a[100153] = 26;
	v->a[100154] = actions(71);
	v->a[100155] = 1;
	v->a[100156] = sym_comment;
	v->a[100157] = actions(1131);
	v->a[100158] = 1;
	v->a[100159] = anon_sym_LPAREN;
	small_parse_table_5008(v);
}

void	small_parse_table_5008(t_small_parse_table_array *v)
{
	v->a[100160] = actions(1141);
	v->a[100161] = 1;
	v->a[100162] = anon_sym_DOLLAR_LBRACK;
	v->a[100163] = actions(1145);
	v->a[100164] = 1;
	v->a[100165] = anon_sym_DOLLAR;
	v->a[100166] = actions(1149);
	v->a[100167] = 1;
	v->a[100168] = anon_sym_DQUOTE;
	v->a[100169] = actions(1153);
	v->a[100170] = 1;
	v->a[100171] = aux_sym_number_token1;
	v->a[100172] = actions(1155);
	v->a[100173] = 1;
	v->a[100174] = aux_sym_number_token2;
	v->a[100175] = actions(1157);
	v->a[100176] = 1;
	v->a[100177] = anon_sym_DOLLAR_LBRACE;
	v->a[100178] = actions(1159);
	v->a[100179] = 1;
	small_parse_table_5009(v);
}

void	small_parse_table_5009(t_small_parse_table_array *v)
{
	v->a[100180] = anon_sym_DOLLAR_LPAREN;
	v->a[100181] = actions(1163);
	v->a[100182] = 1;
	v->a[100183] = anon_sym_DOLLAR_BQUOTE;
	v->a[100184] = actions(1169);
	v->a[100185] = 1;
	v->a[100186] = sym__brace_start;
	v->a[100187] = actions(1211);
	v->a[100188] = 1;
	v->a[100189] = sym_word;
	v->a[100190] = actions(1213);
	v->a[100191] = 1;
	v->a[100192] = anon_sym_BANG;
	v->a[100193] = actions(1219);
	v->a[100194] = 1;
	v->a[100195] = anon_sym_TILDE;
	v->a[100196] = actions(1221);
	v->a[100197] = 1;
	v->a[100198] = sym__special_character;
	v->a[100199] = actions(1225);
	small_parse_table_5010(v);
}

/* EOF small_parse_table_1001.c */
