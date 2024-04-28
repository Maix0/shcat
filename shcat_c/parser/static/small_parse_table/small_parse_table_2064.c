/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2064.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10320(t_small_parse_table_array *v)
{
	v->a[206400] = 1;
	v->a[206401] = anon_sym_DOLLAR;
	v->a[206402] = actions(9290);
	v->a[206403] = 1;
	v->a[206404] = anon_sym_DQUOTE;
	v->a[206405] = actions(9292);
	v->a[206406] = 1;
	v->a[206407] = aux_sym_number_token1;
	v->a[206408] = actions(9294);
	v->a[206409] = 1;
	v->a[206410] = aux_sym_number_token2;
	v->a[206411] = actions(9296);
	v->a[206412] = 1;
	v->a[206413] = anon_sym_DOLLAR_LBRACE;
	v->a[206414] = actions(9298);
	v->a[206415] = 1;
	v->a[206416] = anon_sym_DOLLAR_LPAREN;
	v->a[206417] = actions(9300);
	v->a[206418] = 1;
	v->a[206419] = anon_sym_BQUOTE;
	small_parse_table_10321(v);
}

void	small_parse_table_10321(t_small_parse_table_array *v)
{
	v->a[206420] = actions(9302);
	v->a[206421] = 1;
	v->a[206422] = anon_sym_DOLLAR_BQUOTE;
	v->a[206423] = actions(9594);
	v->a[206424] = 1;
	v->a[206425] = aux_sym__simple_variable_name_token1;
	v->a[206426] = state(2801);
	v->a[206427] = 1;
	v->a[206428] = sym__arithmetic_binary_expression;
	v->a[206429] = state(2803);
	v->a[206430] = 1;
	v->a[206431] = sym__arithmetic_ternary_expression;
	v->a[206432] = state(2809);
	v->a[206433] = 1;
	v->a[206434] = sym__arithmetic_unary_expression;
	v->a[206435] = state(2825);
	v->a[206436] = 1;
	v->a[206437] = sym__arithmetic_postfix_expression;
	v->a[206438] = actions(9282);
	v->a[206439] = 2;
	small_parse_table_10322(v);
}

void	small_parse_table_10322(t_small_parse_table_array *v)
{
	v->a[206440] = anon_sym_PLUS_PLUS2;
	v->a[206441] = anon_sym_DASH_DASH2;
	v->a[206442] = actions(9284);
	v->a[206443] = 2;
	v->a[206444] = anon_sym_DASH2;
	v->a[206445] = anon_sym_PLUS2;
	v->a[206446] = state(2748);
	v->a[206447] = 9;
	v->a[206448] = sym_subscript;
	v->a[206449] = sym__arithmetic_expression;
	v->a[206450] = sym__arithmetic_literal;
	v->a[206451] = sym__arithmetic_parenthesized_expression;
	v->a[206452] = sym_string;
	v->a[206453] = sym_number;
	v->a[206454] = sym_simple_expansion;
	v->a[206455] = sym_expansion;
	v->a[206456] = sym_command_substitution;
	v->a[206457] = 18;
	v->a[206458] = actions(3);
	v->a[206459] = 1;
	small_parse_table_10323(v);
}

void	small_parse_table_10323(t_small_parse_table_array *v)
{
	v->a[206460] = sym_comment;
	v->a[206461] = actions(1557);
	v->a[206462] = 1;
	v->a[206463] = aux_sym_number_token1;
	v->a[206464] = actions(1559);
	v->a[206465] = 1;
	v->a[206466] = aux_sym_number_token2;
	v->a[206467] = actions(1563);
	v->a[206468] = 1;
	v->a[206469] = anon_sym_DOLLAR_LPAREN;
	v->a[206470] = actions(1575);
	v->a[206471] = 1;
	v->a[206472] = sym__brace_start;
	v->a[206473] = actions(9198);
	v->a[206474] = 1;
	v->a[206475] = anon_sym_DOLLAR_LBRACK;
	v->a[206476] = actions(9202);
	v->a[206477] = 1;
	v->a[206478] = anon_sym_DQUOTE;
	v->a[206479] = actions(9206);
	small_parse_table_10324(v);
}

void	small_parse_table_10324(t_small_parse_table_array *v)
{
	v->a[206480] = 1;
	v->a[206481] = anon_sym_DOLLAR_LBRACE;
	v->a[206482] = actions(9208);
	v->a[206483] = 1;
	v->a[206484] = anon_sym_BQUOTE;
	v->a[206485] = actions(9210);
	v->a[206486] = 1;
	v->a[206487] = anon_sym_DOLLAR_BQUOTE;
	v->a[206488] = actions(9268);
	v->a[206489] = 1;
	v->a[206490] = sym_word;
	v->a[206491] = actions(9276);
	v->a[206492] = 1;
	v->a[206493] = sym__comment_word;
	v->a[206494] = actions(9596);
	v->a[206495] = 1;
	v->a[206496] = anon_sym_DOLLAR;
	v->a[206497] = actions(9196);
	v->a[206498] = 2;
	v->a[206499] = anon_sym_LPAREN_LPAREN;
	small_parse_table_10325(v);
}

/* EOF small_parse_table_2064.c */
