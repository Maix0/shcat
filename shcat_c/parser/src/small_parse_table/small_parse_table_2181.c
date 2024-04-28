/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2181.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10905(t_small_parse_table_array *v)
{
	v->a[218100] = sym_string;
	v->a[218101] = sym_number;
	v->a[218102] = sym_simple_expansion;
	v->a[218103] = sym_expansion;
	v->a[218104] = sym_command_substitution;
	v->a[218105] = 21;
	v->a[218106] = actions(71);
	v->a[218107] = 1;
	v->a[218108] = sym_comment;
	v->a[218109] = actions(9364);
	v->a[218110] = 1;
	v->a[218111] = anon_sym_LPAREN;
	v->a[218112] = actions(9366);
	v->a[218113] = 1;
	v->a[218114] = anon_sym_BANG;
	v->a[218115] = actions(9372);
	v->a[218116] = 1;
	v->a[218117] = anon_sym_TILDE;
	v->a[218118] = actions(9374);
	v->a[218119] = 1;
	small_parse_table_10906(v);
}

void	small_parse_table_10906(t_small_parse_table_array *v)
{
	v->a[218120] = anon_sym_DOLLAR;
	v->a[218121] = actions(9376);
	v->a[218122] = 1;
	v->a[218123] = anon_sym_DQUOTE;
	v->a[218124] = actions(9378);
	v->a[218125] = 1;
	v->a[218126] = aux_sym_number_token1;
	v->a[218127] = actions(9380);
	v->a[218128] = 1;
	v->a[218129] = aux_sym_number_token2;
	v->a[218130] = actions(9382);
	v->a[218131] = 1;
	v->a[218132] = anon_sym_DOLLAR_LBRACE;
	v->a[218133] = actions(9384);
	v->a[218134] = 1;
	v->a[218135] = anon_sym_DOLLAR_LPAREN;
	v->a[218136] = actions(9386);
	v->a[218137] = 1;
	v->a[218138] = anon_sym_BQUOTE;
	v->a[218139] = actions(9388);
	small_parse_table_10907(v);
}

void	small_parse_table_10907(t_small_parse_table_array *v)
{
	v->a[218140] = 1;
	v->a[218141] = anon_sym_DOLLAR_BQUOTE;
	v->a[218142] = actions(9392);
	v->a[218143] = 1;
	v->a[218144] = sym_variable_name;
	v->a[218145] = actions(10396);
	v->a[218146] = 1;
	v->a[218147] = aux_sym__simple_variable_name_token1;
	v->a[218148] = state(3391);
	v->a[218149] = 1;
	v->a[218150] = sym__arithmetic_binary_expression;
	v->a[218151] = state(3396);
	v->a[218152] = 1;
	v->a[218153] = sym__arithmetic_ternary_expression;
	v->a[218154] = state(3398);
	v->a[218155] = 1;
	v->a[218156] = sym__arithmetic_unary_expression;
	v->a[218157] = state(3400);
	v->a[218158] = 1;
	v->a[218159] = sym__arithmetic_postfix_expression;
	small_parse_table_10908(v);
}

void	small_parse_table_10908(t_small_parse_table_array *v)
{
	v->a[218160] = actions(9368);
	v->a[218161] = 2;
	v->a[218162] = anon_sym_PLUS_PLUS2;
	v->a[218163] = anon_sym_DASH_DASH2;
	v->a[218164] = actions(9370);
	v->a[218165] = 2;
	v->a[218166] = anon_sym_DASH2;
	v->a[218167] = anon_sym_PLUS2;
	v->a[218168] = state(3321);
	v->a[218169] = 9;
	v->a[218170] = sym_subscript;
	v->a[218171] = sym__arithmetic_expression;
	v->a[218172] = sym__arithmetic_literal;
	v->a[218173] = sym__arithmetic_parenthesized_expression;
	v->a[218174] = sym_string;
	v->a[218175] = sym_number;
	v->a[218176] = sym_simple_expansion;
	v->a[218177] = sym_expansion;
	v->a[218178] = sym_command_substitution;
	v->a[218179] = 18;
	small_parse_table_10909(v);
}

void	small_parse_table_10909(t_small_parse_table_array *v)
{
	v->a[218180] = actions(3);
	v->a[218181] = 1;
	v->a[218182] = sym_comment;
	v->a[218183] = actions(1557);
	v->a[218184] = 1;
	v->a[218185] = aux_sym_number_token1;
	v->a[218186] = actions(1559);
	v->a[218187] = 1;
	v->a[218188] = aux_sym_number_token2;
	v->a[218189] = actions(1563);
	v->a[218190] = 1;
	v->a[218191] = anon_sym_DOLLAR_LPAREN;
	v->a[218192] = actions(1575);
	v->a[218193] = 1;
	v->a[218194] = sym__brace_start;
	v->a[218195] = actions(9198);
	v->a[218196] = 1;
	v->a[218197] = anon_sym_DOLLAR_LBRACK;
	v->a[218198] = actions(9202);
	v->a[218199] = 1;
	small_parse_table_10910(v);
}

/* EOF small_parse_table_2181.c */
