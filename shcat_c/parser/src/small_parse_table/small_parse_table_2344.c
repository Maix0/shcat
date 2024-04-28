/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2344.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11720(t_small_parse_table_array *v)
{
	v->a[234400] = sym__arithmetic_literal;
	v->a[234401] = sym__arithmetic_parenthesized_expression;
	v->a[234402] = sym_string;
	v->a[234403] = sym_number;
	v->a[234404] = sym_simple_expansion;
	v->a[234405] = sym_expansion;
	v->a[234406] = sym_command_substitution;
	v->a[234407] = 21;
	v->a[234408] = actions(71);
	v->a[234409] = 1;
	v->a[234410] = sym_comment;
	v->a[234411] = actions(9364);
	v->a[234412] = 1;
	v->a[234413] = anon_sym_LPAREN;
	v->a[234414] = actions(9366);
	v->a[234415] = 1;
	v->a[234416] = anon_sym_BANG;
	v->a[234417] = actions(9372);
	v->a[234418] = 1;
	v->a[234419] = anon_sym_TILDE;
	small_parse_table_11721(v);
}

void	small_parse_table_11721(t_small_parse_table_array *v)
{
	v->a[234420] = actions(9374);
	v->a[234421] = 1;
	v->a[234422] = anon_sym_DOLLAR;
	v->a[234423] = actions(9376);
	v->a[234424] = 1;
	v->a[234425] = anon_sym_DQUOTE;
	v->a[234426] = actions(9378);
	v->a[234427] = 1;
	v->a[234428] = aux_sym_number_token1;
	v->a[234429] = actions(9380);
	v->a[234430] = 1;
	v->a[234431] = aux_sym_number_token2;
	v->a[234432] = actions(9382);
	v->a[234433] = 1;
	v->a[234434] = anon_sym_DOLLAR_LBRACE;
	v->a[234435] = actions(9384);
	v->a[234436] = 1;
	v->a[234437] = anon_sym_DOLLAR_LPAREN;
	v->a[234438] = actions(9386);
	v->a[234439] = 1;
	small_parse_table_11722(v);
}

void	small_parse_table_11722(t_small_parse_table_array *v)
{
	v->a[234440] = anon_sym_BQUOTE;
	v->a[234441] = actions(9388);
	v->a[234442] = 1;
	v->a[234443] = anon_sym_DOLLAR_BQUOTE;
	v->a[234444] = actions(9392);
	v->a[234445] = 1;
	v->a[234446] = sym_variable_name;
	v->a[234447] = actions(11062);
	v->a[234448] = 1;
	v->a[234449] = aux_sym__simple_variable_name_token1;
	v->a[234450] = state(3391);
	v->a[234451] = 1;
	v->a[234452] = sym__arithmetic_binary_expression;
	v->a[234453] = state(3396);
	v->a[234454] = 1;
	v->a[234455] = sym__arithmetic_ternary_expression;
	v->a[234456] = state(3398);
	v->a[234457] = 1;
	v->a[234458] = sym__arithmetic_unary_expression;
	v->a[234459] = state(3400);
	small_parse_table_11723(v);
}

void	small_parse_table_11723(t_small_parse_table_array *v)
{
	v->a[234460] = 1;
	v->a[234461] = sym__arithmetic_postfix_expression;
	v->a[234462] = actions(9368);
	v->a[234463] = 2;
	v->a[234464] = anon_sym_PLUS_PLUS2;
	v->a[234465] = anon_sym_DASH_DASH2;
	v->a[234466] = actions(9370);
	v->a[234467] = 2;
	v->a[234468] = anon_sym_DASH2;
	v->a[234469] = anon_sym_PLUS2;
	v->a[234470] = state(3425);
	v->a[234471] = 9;
	v->a[234472] = sym_subscript;
	v->a[234473] = sym__arithmetic_expression;
	v->a[234474] = sym__arithmetic_literal;
	v->a[234475] = sym__arithmetic_parenthesized_expression;
	v->a[234476] = sym_string;
	v->a[234477] = sym_number;
	v->a[234478] = sym_simple_expansion;
	v->a[234479] = sym_expansion;
	small_parse_table_11724(v);
}

void	small_parse_table_11724(t_small_parse_table_array *v)
{
	v->a[234480] = sym_command_substitution;
	v->a[234481] = 21;
	v->a[234482] = actions(71);
	v->a[234483] = 1;
	v->a[234484] = sym_comment;
	v->a[234485] = actions(9364);
	v->a[234486] = 1;
	v->a[234487] = anon_sym_LPAREN;
	v->a[234488] = actions(9366);
	v->a[234489] = 1;
	v->a[234490] = anon_sym_BANG;
	v->a[234491] = actions(9372);
	v->a[234492] = 1;
	v->a[234493] = anon_sym_TILDE;
	v->a[234494] = actions(9374);
	v->a[234495] = 1;
	v->a[234496] = anon_sym_DOLLAR;
	v->a[234497] = actions(9376);
	v->a[234498] = 1;
	v->a[234499] = anon_sym_DQUOTE;
	small_parse_table_11725(v);
}

/* EOF small_parse_table_2344.c */
