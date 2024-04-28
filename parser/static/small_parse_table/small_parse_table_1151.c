/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1151.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5755(t_small_parse_table_array *v)
{
	v->a[115100] = aux_sym_number_token1;
	v->a[115101] = actions(1155);
	v->a[115102] = 1;
	v->a[115103] = aux_sym_number_token2;
	v->a[115104] = actions(1157);
	v->a[115105] = 1;
	v->a[115106] = anon_sym_DOLLAR_LBRACE;
	v->a[115107] = actions(1159);
	v->a[115108] = 1;
	v->a[115109] = anon_sym_DOLLAR_LPAREN;
	v->a[115110] = actions(1163);
	v->a[115111] = 1;
	v->a[115112] = anon_sym_DOLLAR_BQUOTE;
	v->a[115113] = actions(1169);
	v->a[115114] = 1;
	v->a[115115] = sym__brace_start;
	v->a[115116] = actions(1187);
	v->a[115117] = 1;
	v->a[115118] = sym_word;
	v->a[115119] = actions(1189);
	small_parse_table_5756(v);
}

void	small_parse_table_5756(t_small_parse_table_array *v)
{
	v->a[115120] = 1;
	v->a[115121] = anon_sym_BANG;
	v->a[115122] = actions(1195);
	v->a[115123] = 1;
	v->a[115124] = anon_sym_TILDE;
	v->a[115125] = actions(1201);
	v->a[115126] = 1;
	v->a[115127] = sym_test_operator;
	v->a[115128] = actions(3060);
	v->a[115129] = 1;
	v->a[115130] = anon_sym_BQUOTE;
	v->a[115131] = actions(5779);
	v->a[115132] = 1;
	v->a[115133] = sym__special_character;
	v->a[115134] = state(2717);
	v->a[115135] = 1;
	v->a[115136] = aux_sym__literal_repeat1;
	v->a[115137] = state(3014);
	v->a[115138] = 1;
	v->a[115139] = sym__expression;
	small_parse_table_5757(v);
}

void	small_parse_table_5757(t_small_parse_table_array *v)
{
	v->a[115140] = actions(1129);
	v->a[115141] = 2;
	v->a[115142] = anon_sym_LPAREN_LPAREN;
	v->a[115143] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[115144] = actions(1165);
	v->a[115145] = 2;
	v->a[115146] = anon_sym_LT_LPAREN;
	v->a[115147] = anon_sym_GT_LPAREN;
	v->a[115148] = actions(1191);
	v->a[115149] = 2;
	v->a[115150] = anon_sym_PLUS_PLUS2;
	v->a[115151] = anon_sym_DASH_DASH2;
	v->a[115152] = actions(1193);
	v->a[115153] = 2;
	v->a[115154] = anon_sym_DASH2;
	v->a[115155] = anon_sym_PLUS2;
	v->a[115156] = actions(1199);
	v->a[115157] = 2;
	v->a[115158] = sym_raw_string;
	v->a[115159] = sym_ansi_c_string;
	small_parse_table_5758(v);
}

void	small_parse_table_5758(t_small_parse_table_array *v)
{
	v->a[115160] = state(2594);
	v->a[115161] = 6;
	v->a[115162] = sym_binary_expression;
	v->a[115163] = sym_ternary_expression;
	v->a[115164] = sym_unary_expression;
	v->a[115165] = sym_postfix_expression;
	v->a[115166] = sym_parenthesized_expression;
	v->a[115167] = sym_concatenation;
	v->a[115168] = state(2503);
	v->a[115169] = 9;
	v->a[115170] = sym_arithmetic_expansion;
	v->a[115171] = sym_brace_expression;
	v->a[115172] = sym_string;
	v->a[115173] = sym_translated_string;
	v->a[115174] = sym_number;
	v->a[115175] = sym_simple_expansion;
	v->a[115176] = sym_expansion;
	v->a[115177] = sym_command_substitution;
	v->a[115178] = sym_process_substitution;
	v->a[115179] = 26;
	small_parse_table_5759(v);
}

void	small_parse_table_5759(t_small_parse_table_array *v)
{
	v->a[115180] = actions(71);
	v->a[115181] = 1;
	v->a[115182] = sym_comment;
	v->a[115183] = actions(1131);
	v->a[115184] = 1;
	v->a[115185] = anon_sym_LPAREN;
	v->a[115186] = actions(1141);
	v->a[115187] = 1;
	v->a[115188] = anon_sym_DOLLAR_LBRACK;
	v->a[115189] = actions(1145);
	v->a[115190] = 1;
	v->a[115191] = anon_sym_DOLLAR;
	v->a[115192] = actions(1149);
	v->a[115193] = 1;
	v->a[115194] = anon_sym_DQUOTE;
	v->a[115195] = actions(1153);
	v->a[115196] = 1;
	v->a[115197] = aux_sym_number_token1;
	v->a[115198] = actions(1155);
	v->a[115199] = 1;
	small_parse_table_5760(v);
}

/* EOF small_parse_table_1151.c */
