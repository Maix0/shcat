/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2336.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11680(t_small_parse_table_array *v)
{
	v->a[233600] = anon_sym_DASH2;
	v->a[233601] = anon_sym_PLUS2;
	v->a[233602] = state(3431);
	v->a[233603] = 9;
	v->a[233604] = sym_subscript;
	v->a[233605] = sym__arithmetic_expression;
	v->a[233606] = sym__arithmetic_literal;
	v->a[233607] = sym__arithmetic_parenthesized_expression;
	v->a[233608] = sym_string;
	v->a[233609] = sym_number;
	v->a[233610] = sym_simple_expansion;
	v->a[233611] = sym_expansion;
	v->a[233612] = sym_command_substitution;
	v->a[233613] = 21;
	v->a[233614] = actions(71);
	v->a[233615] = 1;
	v->a[233616] = sym_comment;
	v->a[233617] = actions(9364);
	v->a[233618] = 1;
	v->a[233619] = anon_sym_LPAREN;
	small_parse_table_11681(v);
}

void	small_parse_table_11681(t_small_parse_table_array *v)
{
	v->a[233620] = actions(9366);
	v->a[233621] = 1;
	v->a[233622] = anon_sym_BANG;
	v->a[233623] = actions(9372);
	v->a[233624] = 1;
	v->a[233625] = anon_sym_TILDE;
	v->a[233626] = actions(9374);
	v->a[233627] = 1;
	v->a[233628] = anon_sym_DOLLAR;
	v->a[233629] = actions(9376);
	v->a[233630] = 1;
	v->a[233631] = anon_sym_DQUOTE;
	v->a[233632] = actions(9378);
	v->a[233633] = 1;
	v->a[233634] = aux_sym_number_token1;
	v->a[233635] = actions(9380);
	v->a[233636] = 1;
	v->a[233637] = aux_sym_number_token2;
	v->a[233638] = actions(9382);
	v->a[233639] = 1;
	small_parse_table_11682(v);
}

void	small_parse_table_11682(t_small_parse_table_array *v)
{
	v->a[233640] = anon_sym_DOLLAR_LBRACE;
	v->a[233641] = actions(9384);
	v->a[233642] = 1;
	v->a[233643] = anon_sym_DOLLAR_LPAREN;
	v->a[233644] = actions(9386);
	v->a[233645] = 1;
	v->a[233646] = anon_sym_BQUOTE;
	v->a[233647] = actions(9388);
	v->a[233648] = 1;
	v->a[233649] = anon_sym_DOLLAR_BQUOTE;
	v->a[233650] = actions(9392);
	v->a[233651] = 1;
	v->a[233652] = sym_variable_name;
	v->a[233653] = actions(11038);
	v->a[233654] = 1;
	v->a[233655] = aux_sym__simple_variable_name_token1;
	v->a[233656] = state(3391);
	v->a[233657] = 1;
	v->a[233658] = sym__arithmetic_binary_expression;
	v->a[233659] = state(3396);
	small_parse_table_11683(v);
}

void	small_parse_table_11683(t_small_parse_table_array *v)
{
	v->a[233660] = 1;
	v->a[233661] = sym__arithmetic_ternary_expression;
	v->a[233662] = state(3398);
	v->a[233663] = 1;
	v->a[233664] = sym__arithmetic_unary_expression;
	v->a[233665] = state(3400);
	v->a[233666] = 1;
	v->a[233667] = sym__arithmetic_postfix_expression;
	v->a[233668] = actions(9368);
	v->a[233669] = 2;
	v->a[233670] = anon_sym_PLUS_PLUS2;
	v->a[233671] = anon_sym_DASH_DASH2;
	v->a[233672] = actions(9370);
	v->a[233673] = 2;
	v->a[233674] = anon_sym_DASH2;
	v->a[233675] = anon_sym_PLUS2;
	v->a[233676] = state(3260);
	v->a[233677] = 9;
	v->a[233678] = sym_subscript;
	v->a[233679] = sym__arithmetic_expression;
	small_parse_table_11684(v);
}

void	small_parse_table_11684(t_small_parse_table_array *v)
{
	v->a[233680] = sym__arithmetic_literal;
	v->a[233681] = sym__arithmetic_parenthesized_expression;
	v->a[233682] = sym_string;
	v->a[233683] = sym_number;
	v->a[233684] = sym_simple_expansion;
	v->a[233685] = sym_expansion;
	v->a[233686] = sym_command_substitution;
	v->a[233687] = 21;
	v->a[233688] = actions(71);
	v->a[233689] = 1;
	v->a[233690] = sym_comment;
	v->a[233691] = actions(3064);
	v->a[233692] = 1;
	v->a[233693] = sym_variable_name;
	v->a[233694] = actions(3465);
	v->a[233695] = 1;
	v->a[233696] = aux_sym__simple_variable_name_token1;
	v->a[233697] = actions(9278);
	v->a[233698] = 1;
	v->a[233699] = anon_sym_LPAREN;
	small_parse_table_11685(v);
}

/* EOF small_parse_table_2336.c */
