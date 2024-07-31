/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_420.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2100(t_small_parse_table_array *v)
{
	v->a[42000] = anon_sym_BANG;
	v->a[42001] = actions(1530);
	v->a[42002] = 1;
	v->a[42003] = anon_sym_DOLLAR;
	v->a[42004] = actions(1532);
	v->a[42005] = 1;
	v->a[42006] = anon_sym_DQUOTE;
	v->a[42007] = actions(1536);
	v->a[42008] = 1;
	v->a[42009] = anon_sym_DOLLAR_LBRACE;
	v->a[42010] = actions(1538);
	v->a[42011] = 1;
	v->a[42012] = sym_variable_name;
	v->a[42013] = actions(1526);
	v->a[42014] = 2;
	v->a[42015] = anon_sym_PLUS_PLUS;
	v->a[42016] = anon_sym_DASH_DASH;
	v->a[42017] = actions(1528);
	v->a[42018] = 2;
	v->a[42019] = anon_sym_DASH2;
	small_parse_table_2101(v);
}

void	small_parse_table_2101(t_small_parse_table_array *v)
{
	v->a[42020] = anon_sym_PLUS2;
	v->a[42021] = actions(1534);
	v->a[42022] = 2;
	v->a[42023] = sym_number;
	v->a[42024] = aux_sym__simple_variable_name_token1;
	v->a[42025] = state(206);
	v->a[42026] = 3;
	v->a[42027] = sym_string;
	v->a[42028] = sym_simple_expansion;
	v->a[42029] = sym_expansion;
	v->a[42030] = state(225);
	v->a[42031] = 7;
	v->a[42032] = sym__arithmetic_expression;
	v->a[42033] = sym_arithmetic_literal;
	v->a[42034] = sym_arithmetic_binary_expression;
	v->a[42035] = sym_arithmetic_ternary_expression;
	v->a[42036] = sym_arithmetic_unary_expression;
	v->a[42037] = sym_arithmetic_postfix_expression;
	v->a[42038] = sym_arithmetic_parenthesized_expression;
	v->a[42039] = 12;
	small_parse_table_2102(v);
}

void	small_parse_table_2102(t_small_parse_table_array *v)
{
	v->a[42040] = actions(407);
	v->a[42041] = 1;
	v->a[42042] = sym_comment;
	v->a[42043] = actions(1522);
	v->a[42044] = 1;
	v->a[42045] = anon_sym_LPAREN;
	v->a[42046] = actions(1524);
	v->a[42047] = 1;
	v->a[42048] = anon_sym_BANG;
	v->a[42049] = actions(1530);
	v->a[42050] = 1;
	v->a[42051] = anon_sym_DOLLAR;
	v->a[42052] = actions(1532);
	v->a[42053] = 1;
	v->a[42054] = anon_sym_DQUOTE;
	v->a[42055] = actions(1536);
	v->a[42056] = 1;
	v->a[42057] = anon_sym_DOLLAR_LBRACE;
	v->a[42058] = actions(1538);
	v->a[42059] = 1;
	small_parse_table_2103(v);
}

void	small_parse_table_2103(t_small_parse_table_array *v)
{
	v->a[42060] = sym_variable_name;
	v->a[42061] = actions(1526);
	v->a[42062] = 2;
	v->a[42063] = anon_sym_PLUS_PLUS;
	v->a[42064] = anon_sym_DASH_DASH;
	v->a[42065] = actions(1528);
	v->a[42066] = 2;
	v->a[42067] = anon_sym_DASH2;
	v->a[42068] = anon_sym_PLUS2;
	v->a[42069] = actions(1534);
	v->a[42070] = 2;
	v->a[42071] = sym_number;
	v->a[42072] = aux_sym__simple_variable_name_token1;
	v->a[42073] = state(206);
	v->a[42074] = 3;
	v->a[42075] = sym_string;
	v->a[42076] = sym_simple_expansion;
	v->a[42077] = sym_expansion;
	v->a[42078] = state(238);
	v->a[42079] = 7;
	small_parse_table_2104(v);
}

void	small_parse_table_2104(t_small_parse_table_array *v)
{
	v->a[42080] = sym__arithmetic_expression;
	v->a[42081] = sym_arithmetic_literal;
	v->a[42082] = sym_arithmetic_binary_expression;
	v->a[42083] = sym_arithmetic_ternary_expression;
	v->a[42084] = sym_arithmetic_unary_expression;
	v->a[42085] = sym_arithmetic_postfix_expression;
	v->a[42086] = sym_arithmetic_parenthesized_expression;
	v->a[42087] = 12;
	v->a[42088] = actions(407);
	v->a[42089] = 1;
	v->a[42090] = sym_comment;
	v->a[42091] = actions(1522);
	v->a[42092] = 1;
	v->a[42093] = anon_sym_LPAREN;
	v->a[42094] = actions(1524);
	v->a[42095] = 1;
	v->a[42096] = anon_sym_BANG;
	v->a[42097] = actions(1530);
	v->a[42098] = 1;
	v->a[42099] = anon_sym_DOLLAR;
	small_parse_table_2105(v);
}

/* EOF small_parse_table_420.c */
