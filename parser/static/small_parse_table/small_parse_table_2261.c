/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2261.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11305(t_small_parse_table_array *v)
{
	v->a[226100] = 1;
	v->a[226101] = anon_sym_DOLLAR_BQUOTE;
	v->a[226102] = actions(8208);
	v->a[226103] = 1;
	v->a[226104] = sym__brace_start;
	v->a[226105] = actions(8450);
	v->a[226106] = 1;
	v->a[226107] = sym__special_character;
	v->a[226108] = actions(10742);
	v->a[226109] = 1;
	v->a[226110] = sym_word;
	v->a[226111] = actions(10746);
	v->a[226112] = 1;
	v->a[226113] = sym_test_operator;
	v->a[226114] = state(1738);
	v->a[226115] = 1;
	v->a[226116] = aux_sym__literal_repeat1;
	v->a[226117] = state(1952);
	v->a[226118] = 1;
	v->a[226119] = sym_concatenation;
	small_parse_table_11306(v);
}

void	small_parse_table_11306(t_small_parse_table_array *v)
{
	v->a[226120] = actions(8174);
	v->a[226121] = 2;
	v->a[226122] = anon_sym_LPAREN_LPAREN;
	v->a[226123] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[226124] = actions(8200);
	v->a[226125] = 2;
	v->a[226126] = anon_sym_LT_LPAREN;
	v->a[226127] = anon_sym_GT_LPAREN;
	v->a[226128] = actions(10744);
	v->a[226129] = 2;
	v->a[226130] = sym_raw_string;
	v->a[226131] = sym_ansi_c_string;
	v->a[226132] = state(1596);
	v->a[226133] = 9;
	v->a[226134] = sym_arithmetic_expansion;
	v->a[226135] = sym_brace_expression;
	v->a[226136] = sym_string;
	v->a[226137] = sym_translated_string;
	v->a[226138] = sym_number;
	v->a[226139] = sym_simple_expansion;
	small_parse_table_11307(v);
}

void	small_parse_table_11307(t_small_parse_table_array *v)
{
	v->a[226140] = sym_expansion;
	v->a[226141] = sym_command_substitution;
	v->a[226142] = sym_process_substitution;
	v->a[226143] = 20;
	v->a[226144] = actions(71);
	v->a[226145] = 1;
	v->a[226146] = sym_comment;
	v->a[226147] = actions(8178);
	v->a[226148] = 1;
	v->a[226149] = anon_sym_DOLLAR_LBRACK;
	v->a[226150] = actions(8180);
	v->a[226151] = 1;
	v->a[226152] = anon_sym_DOLLAR;
	v->a[226153] = actions(8184);
	v->a[226154] = 1;
	v->a[226155] = anon_sym_DQUOTE;
	v->a[226156] = actions(8188);
	v->a[226157] = 1;
	v->a[226158] = aux_sym_number_token1;
	v->a[226159] = actions(8190);
	small_parse_table_11308(v);
}

void	small_parse_table_11308(t_small_parse_table_array *v)
{
	v->a[226160] = 1;
	v->a[226161] = aux_sym_number_token2;
	v->a[226162] = actions(8192);
	v->a[226163] = 1;
	v->a[226164] = anon_sym_DOLLAR_LBRACE;
	v->a[226165] = actions(8194);
	v->a[226166] = 1;
	v->a[226167] = anon_sym_DOLLAR_LPAREN;
	v->a[226168] = actions(8196);
	v->a[226169] = 1;
	v->a[226170] = anon_sym_BQUOTE;
	v->a[226171] = actions(8198);
	v->a[226172] = 1;
	v->a[226173] = anon_sym_DOLLAR_BQUOTE;
	v->a[226174] = actions(8208);
	v->a[226175] = 1;
	v->a[226176] = sym__brace_start;
	v->a[226177] = actions(8450);
	v->a[226178] = 1;
	v->a[226179] = sym__special_character;
	small_parse_table_11309(v);
}

void	small_parse_table_11309(t_small_parse_table_array *v)
{
	v->a[226180] = actions(10748);
	v->a[226181] = 1;
	v->a[226182] = sym_word;
	v->a[226183] = actions(10752);
	v->a[226184] = 1;
	v->a[226185] = sym_test_operator;
	v->a[226186] = state(1741);
	v->a[226187] = 1;
	v->a[226188] = aux_sym__literal_repeat1;
	v->a[226189] = state(1958);
	v->a[226190] = 1;
	v->a[226191] = sym_concatenation;
	v->a[226192] = actions(8174);
	v->a[226193] = 2;
	v->a[226194] = anon_sym_LPAREN_LPAREN;
	v->a[226195] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[226196] = actions(8200);
	v->a[226197] = 2;
	v->a[226198] = anon_sym_LT_LPAREN;
	v->a[226199] = anon_sym_GT_LPAREN;
	small_parse_table_11310(v);
}

/* EOF small_parse_table_2261.c */
