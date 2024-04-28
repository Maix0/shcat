/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2288.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11440(t_small_parse_table_array *v)
{
	v->a[228800] = state(2809);
	v->a[228801] = 1;
	v->a[228802] = sym__arithmetic_unary_expression;
	v->a[228803] = state(2825);
	v->a[228804] = 1;
	v->a[228805] = sym__arithmetic_postfix_expression;
	v->a[228806] = actions(9282);
	v->a[228807] = 2;
	v->a[228808] = anon_sym_PLUS_PLUS2;
	v->a[228809] = anon_sym_DASH_DASH2;
	v->a[228810] = actions(9284);
	v->a[228811] = 2;
	v->a[228812] = anon_sym_DASH2;
	v->a[228813] = anon_sym_PLUS2;
	v->a[228814] = state(3350);
	v->a[228815] = 9;
	v->a[228816] = sym_subscript;
	v->a[228817] = sym__arithmetic_expression;
	v->a[228818] = sym__arithmetic_literal;
	v->a[228819] = sym__arithmetic_parenthesized_expression;
	small_parse_table_11441(v);
}

void	small_parse_table_11441(t_small_parse_table_array *v)
{
	v->a[228820] = sym_string;
	v->a[228821] = sym_number;
	v->a[228822] = sym_simple_expansion;
	v->a[228823] = sym_expansion;
	v->a[228824] = sym_command_substitution;
	v->a[228825] = 21;
	v->a[228826] = actions(71);
	v->a[228827] = 1;
	v->a[228828] = sym_comment;
	v->a[228829] = actions(3064);
	v->a[228830] = 1;
	v->a[228831] = sym_variable_name;
	v->a[228832] = actions(9278);
	v->a[228833] = 1;
	v->a[228834] = anon_sym_LPAREN;
	v->a[228835] = actions(9280);
	v->a[228836] = 1;
	v->a[228837] = anon_sym_BANG;
	v->a[228838] = actions(9286);
	v->a[228839] = 1;
	small_parse_table_11442(v);
}

void	small_parse_table_11442(t_small_parse_table_array *v)
{
	v->a[228840] = anon_sym_TILDE;
	v->a[228841] = actions(9288);
	v->a[228842] = 1;
	v->a[228843] = anon_sym_DOLLAR;
	v->a[228844] = actions(9290);
	v->a[228845] = 1;
	v->a[228846] = anon_sym_DQUOTE;
	v->a[228847] = actions(9292);
	v->a[228848] = 1;
	v->a[228849] = aux_sym_number_token1;
	v->a[228850] = actions(9294);
	v->a[228851] = 1;
	v->a[228852] = aux_sym_number_token2;
	v->a[228853] = actions(9296);
	v->a[228854] = 1;
	v->a[228855] = anon_sym_DOLLAR_LBRACE;
	v->a[228856] = actions(9298);
	v->a[228857] = 1;
	v->a[228858] = anon_sym_DOLLAR_LPAREN;
	v->a[228859] = actions(9300);
	small_parse_table_11443(v);
}

void	small_parse_table_11443(t_small_parse_table_array *v)
{
	v->a[228860] = 1;
	v->a[228861] = anon_sym_BQUOTE;
	v->a[228862] = actions(9302);
	v->a[228863] = 1;
	v->a[228864] = anon_sym_DOLLAR_BQUOTE;
	v->a[228865] = actions(10856);
	v->a[228866] = 1;
	v->a[228867] = aux_sym__simple_variable_name_token1;
	v->a[228868] = state(2801);
	v->a[228869] = 1;
	v->a[228870] = sym__arithmetic_binary_expression;
	v->a[228871] = state(2803);
	v->a[228872] = 1;
	v->a[228873] = sym__arithmetic_ternary_expression;
	v->a[228874] = state(2809);
	v->a[228875] = 1;
	v->a[228876] = sym__arithmetic_unary_expression;
	v->a[228877] = state(2825);
	v->a[228878] = 1;
	v->a[228879] = sym__arithmetic_postfix_expression;
	small_parse_table_11444(v);
}

void	small_parse_table_11444(t_small_parse_table_array *v)
{
	v->a[228880] = actions(9282);
	v->a[228881] = 2;
	v->a[228882] = anon_sym_PLUS_PLUS2;
	v->a[228883] = anon_sym_DASH_DASH2;
	v->a[228884] = actions(9284);
	v->a[228885] = 2;
	v->a[228886] = anon_sym_DASH2;
	v->a[228887] = anon_sym_PLUS2;
	v->a[228888] = state(2936);
	v->a[228889] = 9;
	v->a[228890] = sym_subscript;
	v->a[228891] = sym__arithmetic_expression;
	v->a[228892] = sym__arithmetic_literal;
	v->a[228893] = sym__arithmetic_parenthesized_expression;
	v->a[228894] = sym_string;
	v->a[228895] = sym_number;
	v->a[228896] = sym_simple_expansion;
	v->a[228897] = sym_expansion;
	v->a[228898] = sym_command_substitution;
	v->a[228899] = 21;
	small_parse_table_11445(v);
}

/* EOF small_parse_table_2288.c */
