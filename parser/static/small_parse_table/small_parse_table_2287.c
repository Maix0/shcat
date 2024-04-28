/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2287.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11435(t_small_parse_table_array *v)
{
	v->a[228700] = 1;
	v->a[228701] = anon_sym_DQUOTE;
	v->a[228702] = actions(9912);
	v->a[228703] = 1;
	v->a[228704] = aux_sym_number_token1;
	v->a[228705] = actions(9914);
	v->a[228706] = 1;
	v->a[228707] = aux_sym_number_token2;
	v->a[228708] = actions(9916);
	v->a[228709] = 1;
	v->a[228710] = anon_sym_DOLLAR_LBRACE;
	v->a[228711] = actions(9918);
	v->a[228712] = 1;
	v->a[228713] = anon_sym_DOLLAR_LPAREN;
	v->a[228714] = actions(9920);
	v->a[228715] = 1;
	v->a[228716] = anon_sym_BQUOTE;
	v->a[228717] = actions(9922);
	v->a[228718] = 1;
	v->a[228719] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_11436(v);
}

void	small_parse_table_11436(t_small_parse_table_array *v)
{
	v->a[228720] = state(3359);
	v->a[228721] = 1;
	v->a[228722] = sym__arithmetic_postfix_expression;
	v->a[228723] = state(3361);
	v->a[228724] = 1;
	v->a[228725] = sym__arithmetic_unary_expression;
	v->a[228726] = state(3367);
	v->a[228727] = 1;
	v->a[228728] = sym__arithmetic_ternary_expression;
	v->a[228729] = state(3375);
	v->a[228730] = 1;
	v->a[228731] = sym__arithmetic_binary_expression;
	v->a[228732] = actions(9902);
	v->a[228733] = 2;
	v->a[228734] = anon_sym_PLUS_PLUS2;
	v->a[228735] = anon_sym_DASH_DASH2;
	v->a[228736] = actions(9904);
	v->a[228737] = 2;
	v->a[228738] = anon_sym_DASH2;
	v->a[228739] = anon_sym_PLUS2;
	small_parse_table_11437(v);
}

void	small_parse_table_11437(t_small_parse_table_array *v)
{
	v->a[228740] = state(3365);
	v->a[228741] = 9;
	v->a[228742] = sym_subscript;
	v->a[228743] = sym__arithmetic_expression;
	v->a[228744] = sym__arithmetic_literal;
	v->a[228745] = sym__arithmetic_parenthesized_expression;
	v->a[228746] = sym_string;
	v->a[228747] = sym_number;
	v->a[228748] = sym_simple_expansion;
	v->a[228749] = sym_expansion;
	v->a[228750] = sym_command_substitution;
	v->a[228751] = 21;
	v->a[228752] = actions(71);
	v->a[228753] = 1;
	v->a[228754] = sym_comment;
	v->a[228755] = actions(3064);
	v->a[228756] = 1;
	v->a[228757] = sym_variable_name;
	v->a[228758] = actions(9278);
	v->a[228759] = 1;
	small_parse_table_11438(v);
}

void	small_parse_table_11438(t_small_parse_table_array *v)
{
	v->a[228760] = anon_sym_LPAREN;
	v->a[228761] = actions(9280);
	v->a[228762] = 1;
	v->a[228763] = anon_sym_BANG;
	v->a[228764] = actions(9286);
	v->a[228765] = 1;
	v->a[228766] = anon_sym_TILDE;
	v->a[228767] = actions(9288);
	v->a[228768] = 1;
	v->a[228769] = anon_sym_DOLLAR;
	v->a[228770] = actions(9290);
	v->a[228771] = 1;
	v->a[228772] = anon_sym_DQUOTE;
	v->a[228773] = actions(9292);
	v->a[228774] = 1;
	v->a[228775] = aux_sym_number_token1;
	v->a[228776] = actions(9294);
	v->a[228777] = 1;
	v->a[228778] = aux_sym_number_token2;
	v->a[228779] = actions(9296);
	small_parse_table_11439(v);
}

void	small_parse_table_11439(t_small_parse_table_array *v)
{
	v->a[228780] = 1;
	v->a[228781] = anon_sym_DOLLAR_LBRACE;
	v->a[228782] = actions(9298);
	v->a[228783] = 1;
	v->a[228784] = anon_sym_DOLLAR_LPAREN;
	v->a[228785] = actions(9300);
	v->a[228786] = 1;
	v->a[228787] = anon_sym_BQUOTE;
	v->a[228788] = actions(9302);
	v->a[228789] = 1;
	v->a[228790] = anon_sym_DOLLAR_BQUOTE;
	v->a[228791] = actions(10854);
	v->a[228792] = 1;
	v->a[228793] = aux_sym__simple_variable_name_token1;
	v->a[228794] = state(2801);
	v->a[228795] = 1;
	v->a[228796] = sym__arithmetic_binary_expression;
	v->a[228797] = state(2803);
	v->a[228798] = 1;
	v->a[228799] = sym__arithmetic_ternary_expression;
	small_parse_table_11440(v);
}

/* EOF small_parse_table_2287.c */
