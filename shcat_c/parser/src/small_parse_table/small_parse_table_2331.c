/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2331.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11655(t_small_parse_table_array *v)
{
	v->a[233100] = sym_raw_string;
	v->a[233101] = sym_ansi_c_string;
	v->a[233102] = state(1859);
	v->a[233103] = 9;
	v->a[233104] = sym_arithmetic_expansion;
	v->a[233105] = sym_brace_expression;
	v->a[233106] = sym_string;
	v->a[233107] = sym_translated_string;
	v->a[233108] = sym_number;
	v->a[233109] = sym_simple_expansion;
	v->a[233110] = sym_expansion;
	v->a[233111] = sym_command_substitution;
	v->a[233112] = sym_process_substitution;
	v->a[233113] = 18;
	v->a[233114] = actions(3);
	v->a[233115] = 1;
	v->a[233116] = sym_comment;
	v->a[233117] = actions(4820);
	v->a[233118] = 1;
	v->a[233119] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_11656(v);
}

void	small_parse_table_11656(t_small_parse_table_array *v)
{
	v->a[233120] = actions(4826);
	v->a[233121] = 1;
	v->a[233122] = anon_sym_DQUOTE;
	v->a[233123] = actions(4830);
	v->a[233124] = 1;
	v->a[233125] = aux_sym_number_token1;
	v->a[233126] = actions(4832);
	v->a[233127] = 1;
	v->a[233128] = aux_sym_number_token2;
	v->a[233129] = actions(4834);
	v->a[233130] = 1;
	v->a[233131] = anon_sym_DOLLAR_LBRACE;
	v->a[233132] = actions(4836);
	v->a[233133] = 1;
	v->a[233134] = anon_sym_DOLLAR_LPAREN;
	v->a[233135] = actions(4838);
	v->a[233136] = 1;
	v->a[233137] = anon_sym_BQUOTE;
	v->a[233138] = actions(4840);
	v->a[233139] = 1;
	small_parse_table_11657(v);
}

void	small_parse_table_11657(t_small_parse_table_array *v)
{
	v->a[233140] = anon_sym_DOLLAR_BQUOTE;
	v->a[233141] = actions(4848);
	v->a[233142] = 1;
	v->a[233143] = sym__brace_start;
	v->a[233144] = actions(9534);
	v->a[233145] = 1;
	v->a[233146] = sym_word;
	v->a[233147] = actions(9540);
	v->a[233148] = 1;
	v->a[233149] = sym__comment_word;
	v->a[233150] = actions(11024);
	v->a[233151] = 1;
	v->a[233152] = anon_sym_DOLLAR;
	v->a[233153] = actions(4818);
	v->a[233154] = 2;
	v->a[233155] = anon_sym_LPAREN_LPAREN;
	v->a[233156] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[233157] = actions(4842);
	v->a[233158] = 2;
	v->a[233159] = anon_sym_LT_LPAREN;
	small_parse_table_11658(v);
}

void	small_parse_table_11658(t_small_parse_table_array *v)
{
	v->a[233160] = anon_sym_GT_LPAREN;
	v->a[233161] = actions(9536);
	v->a[233162] = 2;
	v->a[233163] = sym_test_operator;
	v->a[233164] = sym__special_character;
	v->a[233165] = actions(9538);
	v->a[233166] = 3;
	v->a[233167] = sym__bare_dollar;
	v->a[233168] = sym_raw_string;
	v->a[233169] = sym_ansi_c_string;
	v->a[233170] = state(2707);
	v->a[233171] = 9;
	v->a[233172] = sym_arithmetic_expansion;
	v->a[233173] = sym_brace_expression;
	v->a[233174] = sym_string;
	v->a[233175] = sym_translated_string;
	v->a[233176] = sym_number;
	v->a[233177] = sym_simple_expansion;
	v->a[233178] = sym_expansion;
	v->a[233179] = sym_command_substitution;
	small_parse_table_11659(v);
}

void	small_parse_table_11659(t_small_parse_table_array *v)
{
	v->a[233180] = sym_process_substitution;
	v->a[233181] = 18;
	v->a[233182] = actions(3);
	v->a[233183] = 1;
	v->a[233184] = sym_comment;
	v->a[233185] = actions(1460);
	v->a[233186] = 1;
	v->a[233187] = aux_sym_number_token1;
	v->a[233188] = actions(1462);
	v->a[233189] = 1;
	v->a[233190] = aux_sym_number_token2;
	v->a[233191] = actions(1466);
	v->a[233192] = 1;
	v->a[233193] = anon_sym_DOLLAR_LPAREN;
	v->a[233194] = actions(1478);
	v->a[233195] = 1;
	v->a[233196] = sym__brace_start;
	v->a[233197] = actions(8878);
	v->a[233198] = 1;
	v->a[233199] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_11660(v);
}

/* EOF small_parse_table_2331.c */
