/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2221.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11105(t_small_parse_table_array *v)
{
	v->a[222100] = sym_variable_name;
	v->a[222101] = actions(10618);
	v->a[222102] = 1;
	v->a[222103] = aux_sym__simple_variable_name_token1;
	v->a[222104] = state(3391);
	v->a[222105] = 1;
	v->a[222106] = sym__arithmetic_binary_expression;
	v->a[222107] = state(3396);
	v->a[222108] = 1;
	v->a[222109] = sym__arithmetic_ternary_expression;
	v->a[222110] = state(3398);
	v->a[222111] = 1;
	v->a[222112] = sym__arithmetic_unary_expression;
	v->a[222113] = state(3400);
	v->a[222114] = 1;
	v->a[222115] = sym__arithmetic_postfix_expression;
	v->a[222116] = actions(9368);
	v->a[222117] = 2;
	v->a[222118] = anon_sym_PLUS_PLUS2;
	v->a[222119] = anon_sym_DASH_DASH2;
	small_parse_table_11106(v);
}

void	small_parse_table_11106(t_small_parse_table_array *v)
{
	v->a[222120] = actions(9370);
	v->a[222121] = 2;
	v->a[222122] = anon_sym_DASH2;
	v->a[222123] = anon_sym_PLUS2;
	v->a[222124] = state(3316);
	v->a[222125] = 9;
	v->a[222126] = sym_subscript;
	v->a[222127] = sym__arithmetic_expression;
	v->a[222128] = sym__arithmetic_literal;
	v->a[222129] = sym__arithmetic_parenthesized_expression;
	v->a[222130] = sym_string;
	v->a[222131] = sym_number;
	v->a[222132] = sym_simple_expansion;
	v->a[222133] = sym_expansion;
	v->a[222134] = sym_command_substitution;
	v->a[222135] = 21;
	v->a[222136] = actions(71);
	v->a[222137] = 1;
	v->a[222138] = sym_comment;
	v->a[222139] = actions(3064);
	small_parse_table_11107(v);
}

void	small_parse_table_11107(t_small_parse_table_array *v)
{
	v->a[222140] = 1;
	v->a[222141] = sym_variable_name;
	v->a[222142] = actions(9278);
	v->a[222143] = 1;
	v->a[222144] = anon_sym_LPAREN;
	v->a[222145] = actions(9280);
	v->a[222146] = 1;
	v->a[222147] = anon_sym_BANG;
	v->a[222148] = actions(9286);
	v->a[222149] = 1;
	v->a[222150] = anon_sym_TILDE;
	v->a[222151] = actions(9288);
	v->a[222152] = 1;
	v->a[222153] = anon_sym_DOLLAR;
	v->a[222154] = actions(9290);
	v->a[222155] = 1;
	v->a[222156] = anon_sym_DQUOTE;
	v->a[222157] = actions(9292);
	v->a[222158] = 1;
	v->a[222159] = aux_sym_number_token1;
	small_parse_table_11108(v);
}

void	small_parse_table_11108(t_small_parse_table_array *v)
{
	v->a[222160] = actions(9294);
	v->a[222161] = 1;
	v->a[222162] = aux_sym_number_token2;
	v->a[222163] = actions(9296);
	v->a[222164] = 1;
	v->a[222165] = anon_sym_DOLLAR_LBRACE;
	v->a[222166] = actions(9298);
	v->a[222167] = 1;
	v->a[222168] = anon_sym_DOLLAR_LPAREN;
	v->a[222169] = actions(9300);
	v->a[222170] = 1;
	v->a[222171] = anon_sym_BQUOTE;
	v->a[222172] = actions(9302);
	v->a[222173] = 1;
	v->a[222174] = anon_sym_DOLLAR_BQUOTE;
	v->a[222175] = actions(10620);
	v->a[222176] = 1;
	v->a[222177] = aux_sym__simple_variable_name_token1;
	v->a[222178] = state(2801);
	v->a[222179] = 1;
	small_parse_table_11109(v);
}

void	small_parse_table_11109(t_small_parse_table_array *v)
{
	v->a[222180] = sym__arithmetic_binary_expression;
	v->a[222181] = state(2803);
	v->a[222182] = 1;
	v->a[222183] = sym__arithmetic_ternary_expression;
	v->a[222184] = state(2809);
	v->a[222185] = 1;
	v->a[222186] = sym__arithmetic_unary_expression;
	v->a[222187] = state(2825);
	v->a[222188] = 1;
	v->a[222189] = sym__arithmetic_postfix_expression;
	v->a[222190] = actions(9282);
	v->a[222191] = 2;
	v->a[222192] = anon_sym_PLUS_PLUS2;
	v->a[222193] = anon_sym_DASH_DASH2;
	v->a[222194] = actions(9284);
	v->a[222195] = 2;
	v->a[222196] = anon_sym_DASH2;
	v->a[222197] = anon_sym_PLUS2;
	v->a[222198] = state(2764);
	v->a[222199] = 9;
	small_parse_table_11110(v);
}

/* EOF small_parse_table_2221.c */
