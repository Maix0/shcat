/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2334.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11670(t_small_parse_table_array *v)
{
	v->a[233400] = sym_comment;
	v->a[233401] = actions(9364);
	v->a[233402] = 1;
	v->a[233403] = anon_sym_LPAREN;
	v->a[233404] = actions(9366);
	v->a[233405] = 1;
	v->a[233406] = anon_sym_BANG;
	v->a[233407] = actions(9372);
	v->a[233408] = 1;
	v->a[233409] = anon_sym_TILDE;
	v->a[233410] = actions(9374);
	v->a[233411] = 1;
	v->a[233412] = anon_sym_DOLLAR;
	v->a[233413] = actions(9376);
	v->a[233414] = 1;
	v->a[233415] = anon_sym_DQUOTE;
	v->a[233416] = actions(9378);
	v->a[233417] = 1;
	v->a[233418] = aux_sym_number_token1;
	v->a[233419] = actions(9380);
	small_parse_table_11671(v);
}

void	small_parse_table_11671(t_small_parse_table_array *v)
{
	v->a[233420] = 1;
	v->a[233421] = aux_sym_number_token2;
	v->a[233422] = actions(9382);
	v->a[233423] = 1;
	v->a[233424] = anon_sym_DOLLAR_LBRACE;
	v->a[233425] = actions(9384);
	v->a[233426] = 1;
	v->a[233427] = anon_sym_DOLLAR_LPAREN;
	v->a[233428] = actions(9386);
	v->a[233429] = 1;
	v->a[233430] = anon_sym_BQUOTE;
	v->a[233431] = actions(9388);
	v->a[233432] = 1;
	v->a[233433] = anon_sym_DOLLAR_BQUOTE;
	v->a[233434] = actions(9392);
	v->a[233435] = 1;
	v->a[233436] = sym_variable_name;
	v->a[233437] = actions(11032);
	v->a[233438] = 1;
	v->a[233439] = aux_sym__simple_variable_name_token1;
	small_parse_table_11672(v);
}

void	small_parse_table_11672(t_small_parse_table_array *v)
{
	v->a[233440] = state(3391);
	v->a[233441] = 1;
	v->a[233442] = sym__arithmetic_binary_expression;
	v->a[233443] = state(3396);
	v->a[233444] = 1;
	v->a[233445] = sym__arithmetic_ternary_expression;
	v->a[233446] = state(3398);
	v->a[233447] = 1;
	v->a[233448] = sym__arithmetic_unary_expression;
	v->a[233449] = state(3400);
	v->a[233450] = 1;
	v->a[233451] = sym__arithmetic_postfix_expression;
	v->a[233452] = actions(9368);
	v->a[233453] = 2;
	v->a[233454] = anon_sym_PLUS_PLUS2;
	v->a[233455] = anon_sym_DASH_DASH2;
	v->a[233456] = actions(9370);
	v->a[233457] = 2;
	v->a[233458] = anon_sym_DASH2;
	v->a[233459] = anon_sym_PLUS2;
	small_parse_table_11673(v);
}

void	small_parse_table_11673(t_small_parse_table_array *v)
{
	v->a[233460] = state(3432);
	v->a[233461] = 9;
	v->a[233462] = sym_subscript;
	v->a[233463] = sym__arithmetic_expression;
	v->a[233464] = sym__arithmetic_literal;
	v->a[233465] = sym__arithmetic_parenthesized_expression;
	v->a[233466] = sym_string;
	v->a[233467] = sym_number;
	v->a[233468] = sym_simple_expansion;
	v->a[233469] = sym_expansion;
	v->a[233470] = sym_command_substitution;
	v->a[233471] = 18;
	v->a[233472] = actions(3);
	v->a[233473] = 1;
	v->a[233474] = sym_comment;
	v->a[233475] = actions(1460);
	v->a[233476] = 1;
	v->a[233477] = aux_sym_number_token1;
	v->a[233478] = actions(1462);
	v->a[233479] = 1;
	small_parse_table_11674(v);
}

void	small_parse_table_11674(t_small_parse_table_array *v)
{
	v->a[233480] = aux_sym_number_token2;
	v->a[233481] = actions(1466);
	v->a[233482] = 1;
	v->a[233483] = anon_sym_DOLLAR_LPAREN;
	v->a[233484] = actions(1478);
	v->a[233485] = 1;
	v->a[233486] = sym__brace_start;
	v->a[233487] = actions(8878);
	v->a[233488] = 1;
	v->a[233489] = anon_sym_DOLLAR_LBRACK;
	v->a[233490] = actions(8882);
	v->a[233491] = 1;
	v->a[233492] = anon_sym_DQUOTE;
	v->a[233493] = actions(8886);
	v->a[233494] = 1;
	v->a[233495] = anon_sym_DOLLAR_LBRACE;
	v->a[233496] = actions(8888);
	v->a[233497] = 1;
	v->a[233498] = anon_sym_BQUOTE;
	v->a[233499] = actions(8890);
	small_parse_table_11675(v);
}

/* EOF small_parse_table_2334.c */
