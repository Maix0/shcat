/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2291.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11455(t_small_parse_table_array *v)
{
	v->a[229100] = 3;
	v->a[229101] = sym__bare_dollar;
	v->a[229102] = sym_raw_string;
	v->a[229103] = sym_ansi_c_string;
	v->a[229104] = state(1440);
	v->a[229105] = 9;
	v->a[229106] = sym_arithmetic_expansion;
	v->a[229107] = sym_brace_expression;
	v->a[229108] = sym_string;
	v->a[229109] = sym_translated_string;
	v->a[229110] = sym_number;
	v->a[229111] = sym_simple_expansion;
	v->a[229112] = sym_expansion;
	v->a[229113] = sym_command_substitution;
	v->a[229114] = sym_process_substitution;
	v->a[229115] = 21;
	v->a[229116] = actions(71);
	v->a[229117] = 1;
	v->a[229118] = sym_comment;
	v->a[229119] = actions(3064);
	small_parse_table_11456(v);
}

void	small_parse_table_11456(t_small_parse_table_array *v)
{
	v->a[229120] = 1;
	v->a[229121] = sym_variable_name;
	v->a[229122] = actions(9278);
	v->a[229123] = 1;
	v->a[229124] = anon_sym_LPAREN;
	v->a[229125] = actions(9280);
	v->a[229126] = 1;
	v->a[229127] = anon_sym_BANG;
	v->a[229128] = actions(9286);
	v->a[229129] = 1;
	v->a[229130] = anon_sym_TILDE;
	v->a[229131] = actions(9288);
	v->a[229132] = 1;
	v->a[229133] = anon_sym_DOLLAR;
	v->a[229134] = actions(9290);
	v->a[229135] = 1;
	v->a[229136] = anon_sym_DQUOTE;
	v->a[229137] = actions(9292);
	v->a[229138] = 1;
	v->a[229139] = aux_sym_number_token1;
	small_parse_table_11457(v);
}

void	small_parse_table_11457(t_small_parse_table_array *v)
{
	v->a[229140] = actions(9294);
	v->a[229141] = 1;
	v->a[229142] = aux_sym_number_token2;
	v->a[229143] = actions(9296);
	v->a[229144] = 1;
	v->a[229145] = anon_sym_DOLLAR_LBRACE;
	v->a[229146] = actions(9298);
	v->a[229147] = 1;
	v->a[229148] = anon_sym_DOLLAR_LPAREN;
	v->a[229149] = actions(9300);
	v->a[229150] = 1;
	v->a[229151] = anon_sym_BQUOTE;
	v->a[229152] = actions(9302);
	v->a[229153] = 1;
	v->a[229154] = anon_sym_DOLLAR_BQUOTE;
	v->a[229155] = actions(10864);
	v->a[229156] = 1;
	v->a[229157] = aux_sym__simple_variable_name_token1;
	v->a[229158] = state(2801);
	v->a[229159] = 1;
	small_parse_table_11458(v);
}

void	small_parse_table_11458(t_small_parse_table_array *v)
{
	v->a[229160] = sym__arithmetic_binary_expression;
	v->a[229161] = state(2803);
	v->a[229162] = 1;
	v->a[229163] = sym__arithmetic_ternary_expression;
	v->a[229164] = state(2809);
	v->a[229165] = 1;
	v->a[229166] = sym__arithmetic_unary_expression;
	v->a[229167] = state(2825);
	v->a[229168] = 1;
	v->a[229169] = sym__arithmetic_postfix_expression;
	v->a[229170] = actions(9282);
	v->a[229171] = 2;
	v->a[229172] = anon_sym_PLUS_PLUS2;
	v->a[229173] = anon_sym_DASH_DASH2;
	v->a[229174] = actions(9284);
	v->a[229175] = 2;
	v->a[229176] = anon_sym_DASH2;
	v->a[229177] = anon_sym_PLUS2;
	v->a[229178] = state(2922);
	v->a[229179] = 9;
	small_parse_table_11459(v);
}

void	small_parse_table_11459(t_small_parse_table_array *v)
{
	v->a[229180] = sym_subscript;
	v->a[229181] = sym__arithmetic_expression;
	v->a[229182] = sym__arithmetic_literal;
	v->a[229183] = sym__arithmetic_parenthesized_expression;
	v->a[229184] = sym_string;
	v->a[229185] = sym_number;
	v->a[229186] = sym_simple_expansion;
	v->a[229187] = sym_expansion;
	v->a[229188] = sym_command_substitution;
	v->a[229189] = 21;
	v->a[229190] = actions(71);
	v->a[229191] = 1;
	v->a[229192] = sym_comment;
	v->a[229193] = actions(3064);
	v->a[229194] = 1;
	v->a[229195] = sym_variable_name;
	v->a[229196] = actions(9278);
	v->a[229197] = 1;
	v->a[229198] = anon_sym_LPAREN;
	v->a[229199] = actions(9280);
	small_parse_table_11460(v);
}

/* EOF small_parse_table_2291.c */
