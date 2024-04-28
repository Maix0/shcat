/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1011.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5055(t_small_parse_table_array *v)
{
	v->a[101100] = sym_expansion;
	v->a[101101] = sym_command_substitution;
	v->a[101102] = sym_process_substitution;
	v->a[101103] = 26;
	v->a[101104] = actions(71);
	v->a[101105] = 1;
	v->a[101106] = sym_comment;
	v->a[101107] = actions(363);
	v->a[101108] = 1;
	v->a[101109] = anon_sym_DOLLAR_LBRACK;
	v->a[101110] = actions(367);
	v->a[101111] = 1;
	v->a[101112] = anon_sym_DOLLAR;
	v->a[101113] = actions(371);
	v->a[101114] = 1;
	v->a[101115] = anon_sym_DQUOTE;
	v->a[101116] = actions(375);
	v->a[101117] = 1;
	v->a[101118] = aux_sym_number_token1;
	v->a[101119] = actions(377);
	small_parse_table_5056(v);
}

void	small_parse_table_5056(t_small_parse_table_array *v)
{
	v->a[101120] = 1;
	v->a[101121] = aux_sym_number_token2;
	v->a[101122] = actions(379);
	v->a[101123] = 1;
	v->a[101124] = anon_sym_DOLLAR_LBRACE;
	v->a[101125] = actions(381);
	v->a[101126] = 1;
	v->a[101127] = anon_sym_DOLLAR_LPAREN;
	v->a[101128] = actions(385);
	v->a[101129] = 1;
	v->a[101130] = anon_sym_DOLLAR_BQUOTE;
	v->a[101131] = actions(391);
	v->a[101132] = 1;
	v->a[101133] = sym__brace_start;
	v->a[101134] = actions(1091);
	v->a[101135] = 1;
	v->a[101136] = sym_word;
	v->a[101137] = actions(1093);
	v->a[101138] = 1;
	v->a[101139] = anon_sym_LPAREN;
	small_parse_table_5057(v);
}

void	small_parse_table_5057(t_small_parse_table_array *v)
{
	v->a[101140] = actions(1095);
	v->a[101141] = 1;
	v->a[101142] = anon_sym_BANG;
	v->a[101143] = actions(1103);
	v->a[101144] = 1;
	v->a[101145] = anon_sym_TILDE;
	v->a[101146] = actions(1113);
	v->a[101147] = 1;
	v->a[101148] = sym_test_operator;
	v->a[101149] = actions(5809);
	v->a[101150] = 1;
	v->a[101151] = anon_sym_BQUOTE;
	v->a[101152] = actions(5916);
	v->a[101153] = 1;
	v->a[101154] = sym__special_character;
	v->a[101155] = state(2472);
	v->a[101156] = 1;
	v->a[101157] = aux_sym__literal_repeat1;
	v->a[101158] = state(2802);
	v->a[101159] = 1;
	small_parse_table_5058(v);
}

void	small_parse_table_5058(t_small_parse_table_array *v)
{
	v->a[101160] = sym__expression;
	v->a[101161] = actions(352);
	v->a[101162] = 2;
	v->a[101163] = anon_sym_LPAREN_LPAREN;
	v->a[101164] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[101165] = actions(387);
	v->a[101166] = 2;
	v->a[101167] = anon_sym_LT_LPAREN;
	v->a[101168] = anon_sym_GT_LPAREN;
	v->a[101169] = actions(1099);
	v->a[101170] = 2;
	v->a[101171] = anon_sym_PLUS_PLUS2;
	v->a[101172] = anon_sym_DASH_DASH2;
	v->a[101173] = actions(1101);
	v->a[101174] = 2;
	v->a[101175] = anon_sym_DASH2;
	v->a[101176] = anon_sym_PLUS2;
	v->a[101177] = actions(1109);
	v->a[101178] = 2;
	v->a[101179] = sym_raw_string;
	small_parse_table_5059(v);
}

void	small_parse_table_5059(t_small_parse_table_array *v)
{
	v->a[101180] = sym_ansi_c_string;
	v->a[101181] = state(2863);
	v->a[101182] = 6;
	v->a[101183] = sym_binary_expression;
	v->a[101184] = sym_ternary_expression;
	v->a[101185] = sym_unary_expression;
	v->a[101186] = sym_postfix_expression;
	v->a[101187] = sym_parenthesized_expression;
	v->a[101188] = sym_concatenation;
	v->a[101189] = state(2451);
	v->a[101190] = 9;
	v->a[101191] = sym_arithmetic_expansion;
	v->a[101192] = sym_brace_expression;
	v->a[101193] = sym_string;
	v->a[101194] = sym_translated_string;
	v->a[101195] = sym_number;
	v->a[101196] = sym_simple_expansion;
	v->a[101197] = sym_expansion;
	v->a[101198] = sym_command_substitution;
	v->a[101199] = sym_process_substitution;
	small_parse_table_5060(v);
}

/* EOF small_parse_table_1011.c */
