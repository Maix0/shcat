/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2114.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10570(t_small_parse_table_array *v)
{
	v->a[211400] = actions(71);
	v->a[211401] = 1;
	v->a[211402] = sym_comment;
	v->a[211403] = actions(9364);
	v->a[211404] = 1;
	v->a[211405] = anon_sym_LPAREN;
	v->a[211406] = actions(9366);
	v->a[211407] = 1;
	v->a[211408] = anon_sym_BANG;
	v->a[211409] = actions(9372);
	v->a[211410] = 1;
	v->a[211411] = anon_sym_TILDE;
	v->a[211412] = actions(9374);
	v->a[211413] = 1;
	v->a[211414] = anon_sym_DOLLAR;
	v->a[211415] = actions(9376);
	v->a[211416] = 1;
	v->a[211417] = anon_sym_DQUOTE;
	v->a[211418] = actions(9378);
	v->a[211419] = 1;
	small_parse_table_10571(v);
}

void	small_parse_table_10571(t_small_parse_table_array *v)
{
	v->a[211420] = aux_sym_number_token1;
	v->a[211421] = actions(9380);
	v->a[211422] = 1;
	v->a[211423] = aux_sym_number_token2;
	v->a[211424] = actions(9382);
	v->a[211425] = 1;
	v->a[211426] = anon_sym_DOLLAR_LBRACE;
	v->a[211427] = actions(9384);
	v->a[211428] = 1;
	v->a[211429] = anon_sym_DOLLAR_LPAREN;
	v->a[211430] = actions(9386);
	v->a[211431] = 1;
	v->a[211432] = anon_sym_BQUOTE;
	v->a[211433] = actions(9388);
	v->a[211434] = 1;
	v->a[211435] = anon_sym_DOLLAR_BQUOTE;
	v->a[211436] = actions(9392);
	v->a[211437] = 1;
	v->a[211438] = sym_variable_name;
	v->a[211439] = actions(10030);
	small_parse_table_10572(v);
}

void	small_parse_table_10572(t_small_parse_table_array *v)
{
	v->a[211440] = 1;
	v->a[211441] = aux_sym__simple_variable_name_token1;
	v->a[211442] = state(3391);
	v->a[211443] = 1;
	v->a[211444] = sym__arithmetic_binary_expression;
	v->a[211445] = state(3396);
	v->a[211446] = 1;
	v->a[211447] = sym__arithmetic_ternary_expression;
	v->a[211448] = state(3398);
	v->a[211449] = 1;
	v->a[211450] = sym__arithmetic_unary_expression;
	v->a[211451] = state(3400);
	v->a[211452] = 1;
	v->a[211453] = sym__arithmetic_postfix_expression;
	v->a[211454] = actions(9368);
	v->a[211455] = 2;
	v->a[211456] = anon_sym_PLUS_PLUS2;
	v->a[211457] = anon_sym_DASH_DASH2;
	v->a[211458] = actions(9370);
	v->a[211459] = 2;
	small_parse_table_10573(v);
}

void	small_parse_table_10573(t_small_parse_table_array *v)
{
	v->a[211460] = anon_sym_DASH2;
	v->a[211461] = anon_sym_PLUS2;
	v->a[211462] = state(3369);
	v->a[211463] = 9;
	v->a[211464] = sym_subscript;
	v->a[211465] = sym__arithmetic_expression;
	v->a[211466] = sym__arithmetic_literal;
	v->a[211467] = sym__arithmetic_parenthesized_expression;
	v->a[211468] = sym_string;
	v->a[211469] = sym_number;
	v->a[211470] = sym_simple_expansion;
	v->a[211471] = sym_expansion;
	v->a[211472] = sym_command_substitution;
	v->a[211473] = 20;
	v->a[211474] = actions(71);
	v->a[211475] = 1;
	v->a[211476] = sym_comment;
	v->a[211477] = actions(8268);
	v->a[211478] = 1;
	v->a[211479] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_10574(v);
}

void	small_parse_table_10574(t_small_parse_table_array *v)
{
	v->a[211480] = actions(8270);
	v->a[211481] = 1;
	v->a[211482] = anon_sym_DOLLAR;
	v->a[211483] = actions(8272);
	v->a[211484] = 1;
	v->a[211485] = sym__special_character;
	v->a[211486] = actions(8274);
	v->a[211487] = 1;
	v->a[211488] = anon_sym_DQUOTE;
	v->a[211489] = actions(8278);
	v->a[211490] = 1;
	v->a[211491] = aux_sym_number_token1;
	v->a[211492] = actions(8280);
	v->a[211493] = 1;
	v->a[211494] = aux_sym_number_token2;
	v->a[211495] = actions(8282);
	v->a[211496] = 1;
	v->a[211497] = anon_sym_DOLLAR_LBRACE;
	v->a[211498] = actions(8284);
	v->a[211499] = 1;
	small_parse_table_10575(v);
}

/* EOF small_parse_table_2114.c */
