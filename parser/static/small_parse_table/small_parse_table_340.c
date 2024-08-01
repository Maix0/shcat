/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_340.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1700(t_small_parse_table_array *v)
{
	v->a[34000] = actions(1426);
	v->a[34001] = 2;
	v->a[34002] = anon_sym_DASH2;
	v->a[34003] = anon_sym_PLUS2;
	v->a[34004] = actions(1432);
	v->a[34005] = 2;
	v->a[34006] = sym_number;
	v->a[34007] = aux_sym__simple_variable_name_token1;
	v->a[34008] = state(1312);
	v->a[34009] = 3;
	v->a[34010] = sym_string;
	v->a[34011] = sym_simple_expansion;
	v->a[34012] = sym_expansion;
	v->a[34013] = state(1318);
	v->a[34014] = 7;
	v->a[34015] = sym__arithmetic_expression;
	v->a[34016] = sym_arithmetic_literal;
	v->a[34017] = sym_arithmetic_binary_expression;
	v->a[34018] = sym_arithmetic_ternary_expression;
	v->a[34019] = sym_arithmetic_unary_expression;
	small_parse_table_1701(v);
}

void	small_parse_table_1701(t_small_parse_table_array *v)
{
	v->a[34020] = sym_arithmetic_postfix_expression;
	v->a[34021] = sym_arithmetic_parenthesized_expression;
	v->a[34022] = 10;
	v->a[34023] = actions(1424);
	v->a[34024] = 1;
	v->a[34025] = anon_sym_LPAREN;
	v->a[34026] = actions(1428);
	v->a[34027] = 1;
	v->a[34028] = anon_sym_DOLLAR;
	v->a[34029] = actions(1430);
	v->a[34030] = 1;
	v->a[34031] = anon_sym_DQUOTE;
	v->a[34032] = actions(1434);
	v->a[34033] = 1;
	v->a[34034] = anon_sym_DOLLAR_LBRACE;
	v->a[34035] = actions(1436);
	v->a[34036] = 1;
	v->a[34037] = sym_comment;
	v->a[34038] = actions(1438);
	v->a[34039] = 1;
	small_parse_table_1702(v);
}

void	small_parse_table_1702(t_small_parse_table_array *v)
{
	v->a[34040] = sym_variable_name;
	v->a[34041] = actions(1426);
	v->a[34042] = 2;
	v->a[34043] = anon_sym_DASH2;
	v->a[34044] = anon_sym_PLUS2;
	v->a[34045] = actions(1432);
	v->a[34046] = 2;
	v->a[34047] = sym_number;
	v->a[34048] = aux_sym__simple_variable_name_token1;
	v->a[34049] = state(1312);
	v->a[34050] = 3;
	v->a[34051] = sym_string;
	v->a[34052] = sym_simple_expansion;
	v->a[34053] = sym_expansion;
	v->a[34054] = state(1346);
	v->a[34055] = 7;
	v->a[34056] = sym__arithmetic_expression;
	v->a[34057] = sym_arithmetic_literal;
	v->a[34058] = sym_arithmetic_binary_expression;
	v->a[34059] = sym_arithmetic_ternary_expression;
	small_parse_table_1703(v);
}

void	small_parse_table_1703(t_small_parse_table_array *v)
{
	v->a[34060] = sym_arithmetic_unary_expression;
	v->a[34061] = sym_arithmetic_postfix_expression;
	v->a[34062] = sym_arithmetic_parenthesized_expression;
	v->a[34063] = 10;
	v->a[34064] = actions(1424);
	v->a[34065] = 1;
	v->a[34066] = anon_sym_LPAREN;
	v->a[34067] = actions(1428);
	v->a[34068] = 1;
	v->a[34069] = anon_sym_DOLLAR;
	v->a[34070] = actions(1430);
	v->a[34071] = 1;
	v->a[34072] = anon_sym_DQUOTE;
	v->a[34073] = actions(1434);
	v->a[34074] = 1;
	v->a[34075] = anon_sym_DOLLAR_LBRACE;
	v->a[34076] = actions(1436);
	v->a[34077] = 1;
	v->a[34078] = sym_comment;
	v->a[34079] = actions(1438);
	small_parse_table_1704(v);
}

void	small_parse_table_1704(t_small_parse_table_array *v)
{
	v->a[34080] = 1;
	v->a[34081] = sym_variable_name;
	v->a[34082] = actions(1426);
	v->a[34083] = 2;
	v->a[34084] = anon_sym_DASH2;
	v->a[34085] = anon_sym_PLUS2;
	v->a[34086] = actions(1432);
	v->a[34087] = 2;
	v->a[34088] = sym_number;
	v->a[34089] = aux_sym__simple_variable_name_token1;
	v->a[34090] = state(1312);
	v->a[34091] = 3;
	v->a[34092] = sym_string;
	v->a[34093] = sym_simple_expansion;
	v->a[34094] = sym_expansion;
	v->a[34095] = state(1356);
	v->a[34096] = 7;
	v->a[34097] = sym__arithmetic_expression;
	v->a[34098] = sym_arithmetic_literal;
	v->a[34099] = sym_arithmetic_binary_expression;
	small_parse_table_1705(v);
}

/* EOF small_parse_table_340.c */
