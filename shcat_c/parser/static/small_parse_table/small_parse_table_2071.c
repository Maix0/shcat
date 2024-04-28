/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2071.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10355(t_small_parse_table_array *v)
{
	v->a[207100] = actions(9366);
	v->a[207101] = 1;
	v->a[207102] = anon_sym_BANG;
	v->a[207103] = actions(9372);
	v->a[207104] = 1;
	v->a[207105] = anon_sym_TILDE;
	v->a[207106] = actions(9374);
	v->a[207107] = 1;
	v->a[207108] = anon_sym_DOLLAR;
	v->a[207109] = actions(9376);
	v->a[207110] = 1;
	v->a[207111] = anon_sym_DQUOTE;
	v->a[207112] = actions(9378);
	v->a[207113] = 1;
	v->a[207114] = aux_sym_number_token1;
	v->a[207115] = actions(9380);
	v->a[207116] = 1;
	v->a[207117] = aux_sym_number_token2;
	v->a[207118] = actions(9382);
	v->a[207119] = 1;
	small_parse_table_10356(v);
}

void	small_parse_table_10356(t_small_parse_table_array *v)
{
	v->a[207120] = anon_sym_DOLLAR_LBRACE;
	v->a[207121] = actions(9384);
	v->a[207122] = 1;
	v->a[207123] = anon_sym_DOLLAR_LPAREN;
	v->a[207124] = actions(9386);
	v->a[207125] = 1;
	v->a[207126] = anon_sym_BQUOTE;
	v->a[207127] = actions(9388);
	v->a[207128] = 1;
	v->a[207129] = anon_sym_DOLLAR_BQUOTE;
	v->a[207130] = actions(9392);
	v->a[207131] = 1;
	v->a[207132] = sym_variable_name;
	v->a[207133] = actions(9628);
	v->a[207134] = 1;
	v->a[207135] = aux_sym__simple_variable_name_token1;
	v->a[207136] = state(3391);
	v->a[207137] = 1;
	v->a[207138] = sym__arithmetic_binary_expression;
	v->a[207139] = state(3396);
	small_parse_table_10357(v);
}

void	small_parse_table_10357(t_small_parse_table_array *v)
{
	v->a[207140] = 1;
	v->a[207141] = sym__arithmetic_ternary_expression;
	v->a[207142] = state(3398);
	v->a[207143] = 1;
	v->a[207144] = sym__arithmetic_unary_expression;
	v->a[207145] = state(3400);
	v->a[207146] = 1;
	v->a[207147] = sym__arithmetic_postfix_expression;
	v->a[207148] = actions(9368);
	v->a[207149] = 2;
	v->a[207150] = anon_sym_PLUS_PLUS2;
	v->a[207151] = anon_sym_DASH_DASH2;
	v->a[207152] = actions(9370);
	v->a[207153] = 2;
	v->a[207154] = anon_sym_DASH2;
	v->a[207155] = anon_sym_PLUS2;
	v->a[207156] = state(3340);
	v->a[207157] = 9;
	v->a[207158] = sym_subscript;
	v->a[207159] = sym__arithmetic_expression;
	small_parse_table_10358(v);
}

void	small_parse_table_10358(t_small_parse_table_array *v)
{
	v->a[207160] = sym__arithmetic_literal;
	v->a[207161] = sym__arithmetic_parenthesized_expression;
	v->a[207162] = sym_string;
	v->a[207163] = sym_number;
	v->a[207164] = sym_simple_expansion;
	v->a[207165] = sym_expansion;
	v->a[207166] = sym_command_substitution;
	v->a[207167] = 18;
	v->a[207168] = actions(3);
	v->a[207169] = 1;
	v->a[207170] = sym_comment;
	v->a[207171] = actions(363);
	v->a[207172] = 1;
	v->a[207173] = anon_sym_DOLLAR_LBRACK;
	v->a[207174] = actions(371);
	v->a[207175] = 1;
	v->a[207176] = anon_sym_DQUOTE;
	v->a[207177] = actions(375);
	v->a[207178] = 1;
	v->a[207179] = aux_sym_number_token1;
	small_parse_table_10359(v);
}

void	small_parse_table_10359(t_small_parse_table_array *v)
{
	v->a[207180] = actions(377);
	v->a[207181] = 1;
	v->a[207182] = aux_sym_number_token2;
	v->a[207183] = actions(379);
	v->a[207184] = 1;
	v->a[207185] = anon_sym_DOLLAR_LBRACE;
	v->a[207186] = actions(381);
	v->a[207187] = 1;
	v->a[207188] = anon_sym_DOLLAR_LPAREN;
	v->a[207189] = actions(385);
	v->a[207190] = 1;
	v->a[207191] = anon_sym_DOLLAR_BQUOTE;
	v->a[207192] = actions(391);
	v->a[207193] = 1;
	v->a[207194] = sym__brace_start;
	v->a[207195] = actions(5809);
	v->a[207196] = 1;
	v->a[207197] = anon_sym_BQUOTE;
	v->a[207198] = actions(8836);
	v->a[207199] = 1;
	small_parse_table_10360(v);
}

/* EOF small_parse_table_2071.c */
