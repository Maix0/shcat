/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2383.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11915(t_small_parse_table_array *v)
{
	v->a[238300] = 1;
	v->a[238301] = sym__arithmetic_postfix_expression;
	v->a[238302] = actions(9282);
	v->a[238303] = 2;
	v->a[238304] = anon_sym_PLUS_PLUS2;
	v->a[238305] = anon_sym_DASH_DASH2;
	v->a[238306] = actions(9284);
	v->a[238307] = 2;
	v->a[238308] = anon_sym_DASH2;
	v->a[238309] = anon_sym_PLUS2;
	v->a[238310] = state(2804);
	v->a[238311] = 9;
	v->a[238312] = sym_subscript;
	v->a[238313] = sym__arithmetic_expression;
	v->a[238314] = sym__arithmetic_literal;
	v->a[238315] = sym__arithmetic_parenthesized_expression;
	v->a[238316] = sym_string;
	v->a[238317] = sym_number;
	v->a[238318] = sym_simple_expansion;
	v->a[238319] = sym_expansion;
	small_parse_table_11916(v);
}

void	small_parse_table_11916(t_small_parse_table_array *v)
{
	v->a[238320] = sym_command_substitution;
	v->a[238321] = 21;
	v->a[238322] = actions(71);
	v->a[238323] = 1;
	v->a[238324] = sym_comment;
	v->a[238325] = actions(9364);
	v->a[238326] = 1;
	v->a[238327] = anon_sym_LPAREN;
	v->a[238328] = actions(9366);
	v->a[238329] = 1;
	v->a[238330] = anon_sym_BANG;
	v->a[238331] = actions(9372);
	v->a[238332] = 1;
	v->a[238333] = anon_sym_TILDE;
	v->a[238334] = actions(9374);
	v->a[238335] = 1;
	v->a[238336] = anon_sym_DOLLAR;
	v->a[238337] = actions(9376);
	v->a[238338] = 1;
	v->a[238339] = anon_sym_DQUOTE;
	small_parse_table_11917(v);
}

void	small_parse_table_11917(t_small_parse_table_array *v)
{
	v->a[238340] = actions(9378);
	v->a[238341] = 1;
	v->a[238342] = aux_sym_number_token1;
	v->a[238343] = actions(9380);
	v->a[238344] = 1;
	v->a[238345] = aux_sym_number_token2;
	v->a[238346] = actions(9382);
	v->a[238347] = 1;
	v->a[238348] = anon_sym_DOLLAR_LBRACE;
	v->a[238349] = actions(9384);
	v->a[238350] = 1;
	v->a[238351] = anon_sym_DOLLAR_LPAREN;
	v->a[238352] = actions(9386);
	v->a[238353] = 1;
	v->a[238354] = anon_sym_BQUOTE;
	v->a[238355] = actions(9388);
	v->a[238356] = 1;
	v->a[238357] = anon_sym_DOLLAR_BQUOTE;
	v->a[238358] = actions(9392);
	v->a[238359] = 1;
	small_parse_table_11918(v);
}

void	small_parse_table_11918(t_small_parse_table_array *v)
{
	v->a[238360] = sym_variable_name;
	v->a[238361] = actions(11210);
	v->a[238362] = 1;
	v->a[238363] = aux_sym__simple_variable_name_token1;
	v->a[238364] = state(3391);
	v->a[238365] = 1;
	v->a[238366] = sym__arithmetic_binary_expression;
	v->a[238367] = state(3396);
	v->a[238368] = 1;
	v->a[238369] = sym__arithmetic_ternary_expression;
	v->a[238370] = state(3398);
	v->a[238371] = 1;
	v->a[238372] = sym__arithmetic_unary_expression;
	v->a[238373] = state(3400);
	v->a[238374] = 1;
	v->a[238375] = sym__arithmetic_postfix_expression;
	v->a[238376] = actions(9368);
	v->a[238377] = 2;
	v->a[238378] = anon_sym_PLUS_PLUS2;
	v->a[238379] = anon_sym_DASH_DASH2;
	small_parse_table_11919(v);
}

void	small_parse_table_11919(t_small_parse_table_array *v)
{
	v->a[238380] = actions(9370);
	v->a[238381] = 2;
	v->a[238382] = anon_sym_DASH2;
	v->a[238383] = anon_sym_PLUS2;
	v->a[238384] = state(3212);
	v->a[238385] = 9;
	v->a[238386] = sym_subscript;
	v->a[238387] = sym__arithmetic_expression;
	v->a[238388] = sym__arithmetic_literal;
	v->a[238389] = sym__arithmetic_parenthesized_expression;
	v->a[238390] = sym_string;
	v->a[238391] = sym_number;
	v->a[238392] = sym_simple_expansion;
	v->a[238393] = sym_expansion;
	v->a[238394] = sym_command_substitution;
	v->a[238395] = 21;
	v->a[238396] = actions(71);
	v->a[238397] = 1;
	v->a[238398] = sym_comment;
	v->a[238399] = actions(3064);
	small_parse_table_11920(v);
}

/* EOF small_parse_table_2383.c */
