/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_440.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2200(t_small_parse_table_array *v)
{
	v->a[44000] = aux_sym__simple_variable_name_token1;
	v->a[44001] = state(157);
	v->a[44002] = 3;
	v->a[44003] = sym_string;
	v->a[44004] = sym_simple_expansion;
	v->a[44005] = sym_expansion;
	v->a[44006] = state(244);
	v->a[44007] = 7;
	v->a[44008] = sym__arithmetic_expression;
	v->a[44009] = sym_arithmetic_literal;
	v->a[44010] = sym_arithmetic_binary_expression;
	v->a[44011] = sym_arithmetic_ternary_expression;
	v->a[44012] = sym_arithmetic_unary_expression;
	v->a[44013] = sym_arithmetic_postfix_expression;
	v->a[44014] = sym_arithmetic_parenthesized_expression;
	v->a[44015] = 12;
	v->a[44016] = actions(407);
	v->a[44017] = 1;
	v->a[44018] = sym_comment;
	v->a[44019] = actions(1540);
	small_parse_table_2201(v);
}

void	small_parse_table_2201(t_small_parse_table_array *v)
{
	v->a[44020] = 1;
	v->a[44021] = anon_sym_LPAREN;
	v->a[44022] = actions(1542);
	v->a[44023] = 1;
	v->a[44024] = anon_sym_BANG;
	v->a[44025] = actions(1548);
	v->a[44026] = 1;
	v->a[44027] = anon_sym_DOLLAR;
	v->a[44028] = actions(1550);
	v->a[44029] = 1;
	v->a[44030] = anon_sym_DQUOTE;
	v->a[44031] = actions(1554);
	v->a[44032] = 1;
	v->a[44033] = anon_sym_DOLLAR_LBRACE;
	v->a[44034] = actions(1556);
	v->a[44035] = 1;
	v->a[44036] = sym_variable_name;
	v->a[44037] = actions(1544);
	v->a[44038] = 2;
	v->a[44039] = anon_sym_PLUS_PLUS;
	small_parse_table_2202(v);
}

void	small_parse_table_2202(t_small_parse_table_array *v)
{
	v->a[44040] = anon_sym_DASH_DASH;
	v->a[44041] = actions(1546);
	v->a[44042] = 2;
	v->a[44043] = anon_sym_DASH2;
	v->a[44044] = anon_sym_PLUS2;
	v->a[44045] = actions(1552);
	v->a[44046] = 2;
	v->a[44047] = sym_number;
	v->a[44048] = aux_sym__simple_variable_name_token1;
	v->a[44049] = state(157);
	v->a[44050] = 3;
	v->a[44051] = sym_string;
	v->a[44052] = sym_simple_expansion;
	v->a[44053] = sym_expansion;
	v->a[44054] = state(235);
	v->a[44055] = 7;
	v->a[44056] = sym__arithmetic_expression;
	v->a[44057] = sym_arithmetic_literal;
	v->a[44058] = sym_arithmetic_binary_expression;
	v->a[44059] = sym_arithmetic_ternary_expression;
	small_parse_table_2203(v);
}

void	small_parse_table_2203(t_small_parse_table_array *v)
{
	v->a[44060] = sym_arithmetic_unary_expression;
	v->a[44061] = sym_arithmetic_postfix_expression;
	v->a[44062] = sym_arithmetic_parenthesized_expression;
	v->a[44063] = 12;
	v->a[44064] = actions(407);
	v->a[44065] = 1;
	v->a[44066] = sym_comment;
	v->a[44067] = actions(1522);
	v->a[44068] = 1;
	v->a[44069] = anon_sym_LPAREN;
	v->a[44070] = actions(1524);
	v->a[44071] = 1;
	v->a[44072] = anon_sym_BANG;
	v->a[44073] = actions(1530);
	v->a[44074] = 1;
	v->a[44075] = anon_sym_DOLLAR;
	v->a[44076] = actions(1532);
	v->a[44077] = 1;
	v->a[44078] = anon_sym_DQUOTE;
	v->a[44079] = actions(1536);
	small_parse_table_2204(v);
}

void	small_parse_table_2204(t_small_parse_table_array *v)
{
	v->a[44080] = 1;
	v->a[44081] = anon_sym_DOLLAR_LBRACE;
	v->a[44082] = actions(1538);
	v->a[44083] = 1;
	v->a[44084] = sym_variable_name;
	v->a[44085] = actions(1526);
	v->a[44086] = 2;
	v->a[44087] = anon_sym_PLUS_PLUS;
	v->a[44088] = anon_sym_DASH_DASH;
	v->a[44089] = actions(1528);
	v->a[44090] = 2;
	v->a[44091] = anon_sym_DASH2;
	v->a[44092] = anon_sym_PLUS2;
	v->a[44093] = actions(1534);
	v->a[44094] = 2;
	v->a[44095] = sym_number;
	v->a[44096] = aux_sym__simple_variable_name_token1;
	v->a[44097] = state(206);
	v->a[44098] = 3;
	v->a[44099] = sym_string;
	small_parse_table_2205(v);
}

/* EOF small_parse_table_440.c */
