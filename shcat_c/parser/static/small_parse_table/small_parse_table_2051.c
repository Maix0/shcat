/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2051.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10255(t_small_parse_table_array *v)
{
	v->a[205100] = sym__arithmetic_literal;
	v->a[205101] = sym__arithmetic_parenthesized_expression;
	v->a[205102] = sym_string;
	v->a[205103] = sym_number;
	v->a[205104] = sym_simple_expansion;
	v->a[205105] = sym_expansion;
	v->a[205106] = sym_command_substitution;
	v->a[205107] = 21;
	v->a[205108] = actions(71);
	v->a[205109] = 1;
	v->a[205110] = sym_comment;
	v->a[205111] = actions(3064);
	v->a[205112] = 1;
	v->a[205113] = sym_variable_name;
	v->a[205114] = actions(9278);
	v->a[205115] = 1;
	v->a[205116] = anon_sym_LPAREN;
	v->a[205117] = actions(9280);
	v->a[205118] = 1;
	v->a[205119] = anon_sym_BANG;
	small_parse_table_10256(v);
}

void	small_parse_table_10256(t_small_parse_table_array *v)
{
	v->a[205120] = actions(9286);
	v->a[205121] = 1;
	v->a[205122] = anon_sym_TILDE;
	v->a[205123] = actions(9288);
	v->a[205124] = 1;
	v->a[205125] = anon_sym_DOLLAR;
	v->a[205126] = actions(9290);
	v->a[205127] = 1;
	v->a[205128] = anon_sym_DQUOTE;
	v->a[205129] = actions(9292);
	v->a[205130] = 1;
	v->a[205131] = aux_sym_number_token1;
	v->a[205132] = actions(9294);
	v->a[205133] = 1;
	v->a[205134] = aux_sym_number_token2;
	v->a[205135] = actions(9296);
	v->a[205136] = 1;
	v->a[205137] = anon_sym_DOLLAR_LBRACE;
	v->a[205138] = actions(9298);
	v->a[205139] = 1;
	small_parse_table_10257(v);
}

void	small_parse_table_10257(t_small_parse_table_array *v)
{
	v->a[205140] = anon_sym_DOLLAR_LPAREN;
	v->a[205141] = actions(9300);
	v->a[205142] = 1;
	v->a[205143] = anon_sym_BQUOTE;
	v->a[205144] = actions(9302);
	v->a[205145] = 1;
	v->a[205146] = anon_sym_DOLLAR_BQUOTE;
	v->a[205147] = actions(9500);
	v->a[205148] = 1;
	v->a[205149] = aux_sym__simple_variable_name_token1;
	v->a[205150] = state(2801);
	v->a[205151] = 1;
	v->a[205152] = sym__arithmetic_binary_expression;
	v->a[205153] = state(2803);
	v->a[205154] = 1;
	v->a[205155] = sym__arithmetic_ternary_expression;
	v->a[205156] = state(2809);
	v->a[205157] = 1;
	v->a[205158] = sym__arithmetic_unary_expression;
	v->a[205159] = state(2825);
	small_parse_table_10258(v);
}

void	small_parse_table_10258(t_small_parse_table_array *v)
{
	v->a[205160] = 1;
	v->a[205161] = sym__arithmetic_postfix_expression;
	v->a[205162] = actions(9282);
	v->a[205163] = 2;
	v->a[205164] = anon_sym_PLUS_PLUS2;
	v->a[205165] = anon_sym_DASH_DASH2;
	v->a[205166] = actions(9284);
	v->a[205167] = 2;
	v->a[205168] = anon_sym_DASH2;
	v->a[205169] = anon_sym_PLUS2;
	v->a[205170] = state(2890);
	v->a[205171] = 9;
	v->a[205172] = sym_subscript;
	v->a[205173] = sym__arithmetic_expression;
	v->a[205174] = sym__arithmetic_literal;
	v->a[205175] = sym__arithmetic_parenthesized_expression;
	v->a[205176] = sym_string;
	v->a[205177] = sym_number;
	v->a[205178] = sym_simple_expansion;
	v->a[205179] = sym_expansion;
	small_parse_table_10259(v);
}

void	small_parse_table_10259(t_small_parse_table_array *v)
{
	v->a[205180] = sym_command_substitution;
	v->a[205181] = 18;
	v->a[205182] = actions(3);
	v->a[205183] = 1;
	v->a[205184] = sym_comment;
	v->a[205185] = actions(4151);
	v->a[205186] = 1;
	v->a[205187] = anon_sym_DOLLAR_LBRACK;
	v->a[205188] = actions(4153);
	v->a[205189] = 1;
	v->a[205190] = anon_sym_DOLLAR;
	v->a[205191] = actions(4157);
	v->a[205192] = 1;
	v->a[205193] = anon_sym_DQUOTE;
	v->a[205194] = actions(4161);
	v->a[205195] = 1;
	v->a[205196] = aux_sym_number_token1;
	v->a[205197] = actions(4163);
	v->a[205198] = 1;
	v->a[205199] = aux_sym_number_token2;
	small_parse_table_10260(v);
}

/* EOF small_parse_table_2051.c */
