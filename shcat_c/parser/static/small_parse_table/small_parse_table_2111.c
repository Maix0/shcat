/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2111.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10555(t_small_parse_table_array *v)
{
	v->a[211100] = sym_arithmetic_expansion;
	v->a[211101] = sym_brace_expression;
	v->a[211102] = sym_string;
	v->a[211103] = sym_translated_string;
	v->a[211104] = sym_number;
	v->a[211105] = sym_simple_expansion;
	v->a[211106] = sym_expansion;
	v->a[211107] = sym_command_substitution;
	v->a[211108] = sym_process_substitution;
	v->a[211109] = 21;
	v->a[211110] = actions(71);
	v->a[211111] = 1;
	v->a[211112] = sym_comment;
	v->a[211113] = actions(3064);
	v->a[211114] = 1;
	v->a[211115] = sym_variable_name;
	v->a[211116] = actions(9278);
	v->a[211117] = 1;
	v->a[211118] = anon_sym_LPAREN;
	v->a[211119] = actions(9280);
	small_parse_table_10556(v);
}

void	small_parse_table_10556(t_small_parse_table_array *v)
{
	v->a[211120] = 1;
	v->a[211121] = anon_sym_BANG;
	v->a[211122] = actions(9286);
	v->a[211123] = 1;
	v->a[211124] = anon_sym_TILDE;
	v->a[211125] = actions(9288);
	v->a[211126] = 1;
	v->a[211127] = anon_sym_DOLLAR;
	v->a[211128] = actions(9290);
	v->a[211129] = 1;
	v->a[211130] = anon_sym_DQUOTE;
	v->a[211131] = actions(9292);
	v->a[211132] = 1;
	v->a[211133] = aux_sym_number_token1;
	v->a[211134] = actions(9294);
	v->a[211135] = 1;
	v->a[211136] = aux_sym_number_token2;
	v->a[211137] = actions(9296);
	v->a[211138] = 1;
	v->a[211139] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_10557(v);
}

void	small_parse_table_10557(t_small_parse_table_array *v)
{
	v->a[211140] = actions(9298);
	v->a[211141] = 1;
	v->a[211142] = anon_sym_DOLLAR_LPAREN;
	v->a[211143] = actions(9300);
	v->a[211144] = 1;
	v->a[211145] = anon_sym_BQUOTE;
	v->a[211146] = actions(9302);
	v->a[211147] = 1;
	v->a[211148] = anon_sym_DOLLAR_BQUOTE;
	v->a[211149] = actions(10022);
	v->a[211150] = 1;
	v->a[211151] = aux_sym__simple_variable_name_token1;
	v->a[211152] = state(2801);
	v->a[211153] = 1;
	v->a[211154] = sym__arithmetic_binary_expression;
	v->a[211155] = state(2803);
	v->a[211156] = 1;
	v->a[211157] = sym__arithmetic_ternary_expression;
	v->a[211158] = state(2809);
	v->a[211159] = 1;
	small_parse_table_10558(v);
}

void	small_parse_table_10558(t_small_parse_table_array *v)
{
	v->a[211160] = sym__arithmetic_unary_expression;
	v->a[211161] = state(2825);
	v->a[211162] = 1;
	v->a[211163] = sym__arithmetic_postfix_expression;
	v->a[211164] = actions(9282);
	v->a[211165] = 2;
	v->a[211166] = anon_sym_PLUS_PLUS2;
	v->a[211167] = anon_sym_DASH_DASH2;
	v->a[211168] = actions(9284);
	v->a[211169] = 2;
	v->a[211170] = anon_sym_DASH2;
	v->a[211171] = anon_sym_PLUS2;
	v->a[211172] = state(2754);
	v->a[211173] = 9;
	v->a[211174] = sym_subscript;
	v->a[211175] = sym__arithmetic_expression;
	v->a[211176] = sym__arithmetic_literal;
	v->a[211177] = sym__arithmetic_parenthesized_expression;
	v->a[211178] = sym_string;
	v->a[211179] = sym_number;
	small_parse_table_10559(v);
}

void	small_parse_table_10559(t_small_parse_table_array *v)
{
	v->a[211180] = sym_simple_expansion;
	v->a[211181] = sym_expansion;
	v->a[211182] = sym_command_substitution;
	v->a[211183] = 21;
	v->a[211184] = actions(71);
	v->a[211185] = 1;
	v->a[211186] = sym_comment;
	v->a[211187] = actions(3064);
	v->a[211188] = 1;
	v->a[211189] = sym_variable_name;
	v->a[211190] = actions(9278);
	v->a[211191] = 1;
	v->a[211192] = anon_sym_LPAREN;
	v->a[211193] = actions(9280);
	v->a[211194] = 1;
	v->a[211195] = anon_sym_BANG;
	v->a[211196] = actions(9286);
	v->a[211197] = 1;
	v->a[211198] = anon_sym_TILDE;
	v->a[211199] = actions(9288);
	small_parse_table_10560(v);
}

/* EOF small_parse_table_2111.c */
