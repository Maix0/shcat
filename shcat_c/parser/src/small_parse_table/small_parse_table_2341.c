/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2341.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11705(t_small_parse_table_array *v)
{
	v->a[234100] = state(1859);
	v->a[234101] = 9;
	v->a[234102] = sym_arithmetic_expansion;
	v->a[234103] = sym_brace_expression;
	v->a[234104] = sym_string;
	v->a[234105] = sym_translated_string;
	v->a[234106] = sym_number;
	v->a[234107] = sym_simple_expansion;
	v->a[234108] = sym_expansion;
	v->a[234109] = sym_command_substitution;
	v->a[234110] = sym_process_substitution;
	v->a[234111] = 21;
	v->a[234112] = actions(71);
	v->a[234113] = 1;
	v->a[234114] = sym_comment;
	v->a[234115] = actions(9364);
	v->a[234116] = 1;
	v->a[234117] = anon_sym_LPAREN;
	v->a[234118] = actions(9366);
	v->a[234119] = 1;
	small_parse_table_11706(v);
}

void	small_parse_table_11706(t_small_parse_table_array *v)
{
	v->a[234120] = anon_sym_BANG;
	v->a[234121] = actions(9372);
	v->a[234122] = 1;
	v->a[234123] = anon_sym_TILDE;
	v->a[234124] = actions(9374);
	v->a[234125] = 1;
	v->a[234126] = anon_sym_DOLLAR;
	v->a[234127] = actions(9376);
	v->a[234128] = 1;
	v->a[234129] = anon_sym_DQUOTE;
	v->a[234130] = actions(9378);
	v->a[234131] = 1;
	v->a[234132] = aux_sym_number_token1;
	v->a[234133] = actions(9380);
	v->a[234134] = 1;
	v->a[234135] = aux_sym_number_token2;
	v->a[234136] = actions(9382);
	v->a[234137] = 1;
	v->a[234138] = anon_sym_DOLLAR_LBRACE;
	v->a[234139] = actions(9384);
	small_parse_table_11707(v);
}

void	small_parse_table_11707(t_small_parse_table_array *v)
{
	v->a[234140] = 1;
	v->a[234141] = anon_sym_DOLLAR_LPAREN;
	v->a[234142] = actions(9386);
	v->a[234143] = 1;
	v->a[234144] = anon_sym_BQUOTE;
	v->a[234145] = actions(9388);
	v->a[234146] = 1;
	v->a[234147] = anon_sym_DOLLAR_BQUOTE;
	v->a[234148] = actions(9392);
	v->a[234149] = 1;
	v->a[234150] = sym_variable_name;
	v->a[234151] = actions(11054);
	v->a[234152] = 1;
	v->a[234153] = aux_sym__simple_variable_name_token1;
	v->a[234154] = state(3391);
	v->a[234155] = 1;
	v->a[234156] = sym__arithmetic_binary_expression;
	v->a[234157] = state(3396);
	v->a[234158] = 1;
	v->a[234159] = sym__arithmetic_ternary_expression;
	small_parse_table_11708(v);
}

void	small_parse_table_11708(t_small_parse_table_array *v)
{
	v->a[234160] = state(3398);
	v->a[234161] = 1;
	v->a[234162] = sym__arithmetic_unary_expression;
	v->a[234163] = state(3400);
	v->a[234164] = 1;
	v->a[234165] = sym__arithmetic_postfix_expression;
	v->a[234166] = actions(9368);
	v->a[234167] = 2;
	v->a[234168] = anon_sym_PLUS_PLUS2;
	v->a[234169] = anon_sym_DASH_DASH2;
	v->a[234170] = actions(9370);
	v->a[234171] = 2;
	v->a[234172] = anon_sym_DASH2;
	v->a[234173] = anon_sym_PLUS2;
	v->a[234174] = state(3430);
	v->a[234175] = 9;
	v->a[234176] = sym_subscript;
	v->a[234177] = sym__arithmetic_expression;
	v->a[234178] = sym__arithmetic_literal;
	v->a[234179] = sym__arithmetic_parenthesized_expression;
	small_parse_table_11709(v);
}

void	small_parse_table_11709(t_small_parse_table_array *v)
{
	v->a[234180] = sym_string;
	v->a[234181] = sym_number;
	v->a[234182] = sym_simple_expansion;
	v->a[234183] = sym_expansion;
	v->a[234184] = sym_command_substitution;
	v->a[234185] = 21;
	v->a[234186] = actions(71);
	v->a[234187] = 1;
	v->a[234188] = sym_comment;
	v->a[234189] = actions(9364);
	v->a[234190] = 1;
	v->a[234191] = anon_sym_LPAREN;
	v->a[234192] = actions(9366);
	v->a[234193] = 1;
	v->a[234194] = anon_sym_BANG;
	v->a[234195] = actions(9372);
	v->a[234196] = 1;
	v->a[234197] = anon_sym_TILDE;
	v->a[234198] = actions(9374);
	v->a[234199] = 1;
	small_parse_table_11710(v);
}

/* EOF small_parse_table_2341.c */
