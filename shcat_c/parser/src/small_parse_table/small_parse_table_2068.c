/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2068.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10340(t_small_parse_table_array *v)
{
	v->a[206800] = actions(9370);
	v->a[206801] = 2;
	v->a[206802] = anon_sym_DASH2;
	v->a[206803] = anon_sym_PLUS2;
	v->a[206804] = state(3341);
	v->a[206805] = 9;
	v->a[206806] = sym_subscript;
	v->a[206807] = sym__arithmetic_expression;
	v->a[206808] = sym__arithmetic_literal;
	v->a[206809] = sym__arithmetic_parenthesized_expression;
	v->a[206810] = sym_string;
	v->a[206811] = sym_number;
	v->a[206812] = sym_simple_expansion;
	v->a[206813] = sym_expansion;
	v->a[206814] = sym_command_substitution;
	v->a[206815] = 21;
	v->a[206816] = actions(71);
	v->a[206817] = 1;
	v->a[206818] = sym_comment;
	v->a[206819] = actions(3064);
	small_parse_table_10341(v);
}

void	small_parse_table_10341(t_small_parse_table_array *v)
{
	v->a[206820] = 1;
	v->a[206821] = sym_variable_name;
	v->a[206822] = actions(9278);
	v->a[206823] = 1;
	v->a[206824] = anon_sym_LPAREN;
	v->a[206825] = actions(9280);
	v->a[206826] = 1;
	v->a[206827] = anon_sym_BANG;
	v->a[206828] = actions(9286);
	v->a[206829] = 1;
	v->a[206830] = anon_sym_TILDE;
	v->a[206831] = actions(9288);
	v->a[206832] = 1;
	v->a[206833] = anon_sym_DOLLAR;
	v->a[206834] = actions(9290);
	v->a[206835] = 1;
	v->a[206836] = anon_sym_DQUOTE;
	v->a[206837] = actions(9292);
	v->a[206838] = 1;
	v->a[206839] = aux_sym_number_token1;
	small_parse_table_10342(v);
}

void	small_parse_table_10342(t_small_parse_table_array *v)
{
	v->a[206840] = actions(9294);
	v->a[206841] = 1;
	v->a[206842] = aux_sym_number_token2;
	v->a[206843] = actions(9296);
	v->a[206844] = 1;
	v->a[206845] = anon_sym_DOLLAR_LBRACE;
	v->a[206846] = actions(9298);
	v->a[206847] = 1;
	v->a[206848] = anon_sym_DOLLAR_LPAREN;
	v->a[206849] = actions(9300);
	v->a[206850] = 1;
	v->a[206851] = anon_sym_BQUOTE;
	v->a[206852] = actions(9302);
	v->a[206853] = 1;
	v->a[206854] = anon_sym_DOLLAR_BQUOTE;
	v->a[206855] = actions(9614);
	v->a[206856] = 1;
	v->a[206857] = aux_sym__simple_variable_name_token1;
	v->a[206858] = state(2801);
	v->a[206859] = 1;
	small_parse_table_10343(v);
}

void	small_parse_table_10343(t_small_parse_table_array *v)
{
	v->a[206860] = sym__arithmetic_binary_expression;
	v->a[206861] = state(2803);
	v->a[206862] = 1;
	v->a[206863] = sym__arithmetic_ternary_expression;
	v->a[206864] = state(2809);
	v->a[206865] = 1;
	v->a[206866] = sym__arithmetic_unary_expression;
	v->a[206867] = state(2825);
	v->a[206868] = 1;
	v->a[206869] = sym__arithmetic_postfix_expression;
	v->a[206870] = actions(9282);
	v->a[206871] = 2;
	v->a[206872] = anon_sym_PLUS_PLUS2;
	v->a[206873] = anon_sym_DASH_DASH2;
	v->a[206874] = actions(9284);
	v->a[206875] = 2;
	v->a[206876] = anon_sym_DASH2;
	v->a[206877] = anon_sym_PLUS2;
	v->a[206878] = state(2750);
	v->a[206879] = 9;
	small_parse_table_10344(v);
}

void	small_parse_table_10344(t_small_parse_table_array *v)
{
	v->a[206880] = sym_subscript;
	v->a[206881] = sym__arithmetic_expression;
	v->a[206882] = sym__arithmetic_literal;
	v->a[206883] = sym__arithmetic_parenthesized_expression;
	v->a[206884] = sym_string;
	v->a[206885] = sym_number;
	v->a[206886] = sym_simple_expansion;
	v->a[206887] = sym_expansion;
	v->a[206888] = sym_command_substitution;
	v->a[206889] = 18;
	v->a[206890] = actions(3);
	v->a[206891] = 1;
	v->a[206892] = sym_comment;
	v->a[206893] = actions(8102);
	v->a[206894] = 1;
	v->a[206895] = anon_sym_DOLLAR_LBRACK;
	v->a[206896] = actions(8108);
	v->a[206897] = 1;
	v->a[206898] = anon_sym_DQUOTE;
	v->a[206899] = actions(8112);
	small_parse_table_10345(v);
}

/* EOF small_parse_table_2068.c */
