/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1081.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5405(t_small_parse_table_array *v)
{
	v->a[108100] = 26;
	v->a[108101] = actions(71);
	v->a[108102] = 1;
	v->a[108103] = sym_comment;
	v->a[108104] = actions(363);
	v->a[108105] = 1;
	v->a[108106] = anon_sym_DOLLAR_LBRACK;
	v->a[108107] = actions(367);
	v->a[108108] = 1;
	v->a[108109] = anon_sym_DOLLAR;
	v->a[108110] = actions(371);
	v->a[108111] = 1;
	v->a[108112] = anon_sym_DQUOTE;
	v->a[108113] = actions(375);
	v->a[108114] = 1;
	v->a[108115] = aux_sym_number_token1;
	v->a[108116] = actions(377);
	v->a[108117] = 1;
	v->a[108118] = aux_sym_number_token2;
	v->a[108119] = actions(379);
	small_parse_table_5406(v);
}

void	small_parse_table_5406(t_small_parse_table_array *v)
{
	v->a[108120] = 1;
	v->a[108121] = anon_sym_DOLLAR_LBRACE;
	v->a[108122] = actions(381);
	v->a[108123] = 1;
	v->a[108124] = anon_sym_DOLLAR_LPAREN;
	v->a[108125] = actions(385);
	v->a[108126] = 1;
	v->a[108127] = anon_sym_DOLLAR_BQUOTE;
	v->a[108128] = actions(391);
	v->a[108129] = 1;
	v->a[108130] = sym__brace_start;
	v->a[108131] = actions(1091);
	v->a[108132] = 1;
	v->a[108133] = sym_word;
	v->a[108134] = actions(1093);
	v->a[108135] = 1;
	v->a[108136] = anon_sym_LPAREN;
	v->a[108137] = actions(1095);
	v->a[108138] = 1;
	v->a[108139] = anon_sym_BANG;
	small_parse_table_5407(v);
}

void	small_parse_table_5407(t_small_parse_table_array *v)
{
	v->a[108140] = actions(1103);
	v->a[108141] = 1;
	v->a[108142] = anon_sym_TILDE;
	v->a[108143] = actions(1113);
	v->a[108144] = 1;
	v->a[108145] = sym_test_operator;
	v->a[108146] = actions(5809);
	v->a[108147] = 1;
	v->a[108148] = anon_sym_BQUOTE;
	v->a[108149] = actions(5916);
	v->a[108150] = 1;
	v->a[108151] = sym__special_character;
	v->a[108152] = state(2472);
	v->a[108153] = 1;
	v->a[108154] = aux_sym__literal_repeat1;
	v->a[108155] = state(2868);
	v->a[108156] = 1;
	v->a[108157] = sym__expression;
	v->a[108158] = actions(352);
	v->a[108159] = 2;
	small_parse_table_5408(v);
}

void	small_parse_table_5408(t_small_parse_table_array *v)
{
	v->a[108160] = anon_sym_LPAREN_LPAREN;
	v->a[108161] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[108162] = actions(387);
	v->a[108163] = 2;
	v->a[108164] = anon_sym_LT_LPAREN;
	v->a[108165] = anon_sym_GT_LPAREN;
	v->a[108166] = actions(1099);
	v->a[108167] = 2;
	v->a[108168] = anon_sym_PLUS_PLUS2;
	v->a[108169] = anon_sym_DASH_DASH2;
	v->a[108170] = actions(1101);
	v->a[108171] = 2;
	v->a[108172] = anon_sym_DASH2;
	v->a[108173] = anon_sym_PLUS2;
	v->a[108174] = actions(1109);
	v->a[108175] = 2;
	v->a[108176] = sym_raw_string;
	v->a[108177] = sym_ansi_c_string;
	v->a[108178] = state(2863);
	v->a[108179] = 6;
	small_parse_table_5409(v);
}

void	small_parse_table_5409(t_small_parse_table_array *v)
{
	v->a[108180] = sym_binary_expression;
	v->a[108181] = sym_ternary_expression;
	v->a[108182] = sym_unary_expression;
	v->a[108183] = sym_postfix_expression;
	v->a[108184] = sym_parenthesized_expression;
	v->a[108185] = sym_concatenation;
	v->a[108186] = state(2451);
	v->a[108187] = 9;
	v->a[108188] = sym_arithmetic_expansion;
	v->a[108189] = sym_brace_expression;
	v->a[108190] = sym_string;
	v->a[108191] = sym_translated_string;
	v->a[108192] = sym_number;
	v->a[108193] = sym_simple_expansion;
	v->a[108194] = sym_expansion;
	v->a[108195] = sym_command_substitution;
	v->a[108196] = sym_process_substitution;
	v->a[108197] = 8;
	v->a[108198] = actions(3);
	v->a[108199] = 1;
	small_parse_table_5410(v);
}

/* EOF small_parse_table_1081.c */
