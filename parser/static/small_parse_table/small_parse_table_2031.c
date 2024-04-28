/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2031.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10155(t_small_parse_table_array *v)
{
	v->a[203100] = actions(71);
	v->a[203101] = 1;
	v->a[203102] = sym_comment;
	v->a[203103] = actions(5315);
	v->a[203104] = 1;
	v->a[203105] = anon_sym_DOLLAR_LBRACK;
	v->a[203106] = actions(5317);
	v->a[203107] = 1;
	v->a[203108] = anon_sym_DOLLAR;
	v->a[203109] = actions(5321);
	v->a[203110] = 1;
	v->a[203111] = anon_sym_DQUOTE;
	v->a[203112] = actions(5325);
	v->a[203113] = 1;
	v->a[203114] = aux_sym_number_token1;
	v->a[203115] = actions(5327);
	v->a[203116] = 1;
	v->a[203117] = aux_sym_number_token2;
	v->a[203118] = actions(5329);
	v->a[203119] = 1;
	small_parse_table_10156(v);
}

void	small_parse_table_10156(t_small_parse_table_array *v)
{
	v->a[203120] = anon_sym_DOLLAR_LBRACE;
	v->a[203121] = actions(5331);
	v->a[203122] = 1;
	v->a[203123] = anon_sym_DOLLAR_LPAREN;
	v->a[203124] = actions(5333);
	v->a[203125] = 1;
	v->a[203126] = anon_sym_BQUOTE;
	v->a[203127] = actions(5335);
	v->a[203128] = 1;
	v->a[203129] = anon_sym_DOLLAR_BQUOTE;
	v->a[203130] = actions(5341);
	v->a[203131] = 1;
	v->a[203132] = sym__brace_start;
	v->a[203133] = actions(9348);
	v->a[203134] = 1;
	v->a[203135] = sym_word;
	v->a[203136] = actions(9350);
	v->a[203137] = 1;
	v->a[203138] = sym__special_character;
	v->a[203139] = actions(9354);
	small_parse_table_10157(v);
}

void	small_parse_table_10157(t_small_parse_table_array *v)
{
	v->a[203140] = 1;
	v->a[203141] = sym_test_operator;
	v->a[203142] = state(5498);
	v->a[203143] = 1;
	v->a[203144] = aux_sym__literal_repeat1;
	v->a[203145] = state(5555);
	v->a[203146] = 1;
	v->a[203147] = sym_concatenation;
	v->a[203148] = actions(5313);
	v->a[203149] = 2;
	v->a[203150] = anon_sym_LPAREN_LPAREN;
	v->a[203151] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[203152] = actions(5337);
	v->a[203153] = 2;
	v->a[203154] = anon_sym_LT_LPAREN;
	v->a[203155] = anon_sym_GT_LPAREN;
	v->a[203156] = actions(9352);
	v->a[203157] = 2;
	v->a[203158] = sym_raw_string;
	v->a[203159] = sym_ansi_c_string;
	small_parse_table_10158(v);
}

void	small_parse_table_10158(t_small_parse_table_array *v)
{
	v->a[203160] = state(5347);
	v->a[203161] = 9;
	v->a[203162] = sym_arithmetic_expansion;
	v->a[203163] = sym_brace_expression;
	v->a[203164] = sym_string;
	v->a[203165] = sym_translated_string;
	v->a[203166] = sym_number;
	v->a[203167] = sym_simple_expansion;
	v->a[203168] = sym_expansion;
	v->a[203169] = sym_command_substitution;
	v->a[203170] = sym_process_substitution;
	v->a[203171] = 18;
	v->a[203172] = actions(3);
	v->a[203173] = 1;
	v->a[203174] = sym_comment;
	v->a[203175] = actions(7996);
	v->a[203176] = 1;
	v->a[203177] = anon_sym_DOLLAR_LBRACK;
	v->a[203178] = actions(7998);
	v->a[203179] = 1;
	small_parse_table_10159(v);
}

void	small_parse_table_10159(t_small_parse_table_array *v)
{
	v->a[203180] = anon_sym_DOLLAR;
	v->a[203181] = actions(8002);
	v->a[203182] = 1;
	v->a[203183] = anon_sym_DQUOTE;
	v->a[203184] = actions(8006);
	v->a[203185] = 1;
	v->a[203186] = aux_sym_number_token1;
	v->a[203187] = actions(8008);
	v->a[203188] = 1;
	v->a[203189] = aux_sym_number_token2;
	v->a[203190] = actions(8010);
	v->a[203191] = 1;
	v->a[203192] = anon_sym_DOLLAR_LBRACE;
	v->a[203193] = actions(8012);
	v->a[203194] = 1;
	v->a[203195] = anon_sym_DOLLAR_LPAREN;
	v->a[203196] = actions(8014);
	v->a[203197] = 1;
	v->a[203198] = anon_sym_BQUOTE;
	v->a[203199] = actions(8016);
	small_parse_table_10160(v);
}

/* EOF small_parse_table_2031.c */
