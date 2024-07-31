/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_430.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2150(t_small_parse_table_array *v)
{
	v->a[43000] = sym_arithmetic_binary_expression;
	v->a[43001] = sym_arithmetic_ternary_expression;
	v->a[43002] = sym_arithmetic_unary_expression;
	v->a[43003] = sym_arithmetic_postfix_expression;
	v->a[43004] = sym_arithmetic_parenthesized_expression;
	v->a[43005] = 12;
	v->a[43006] = actions(407);
	v->a[43007] = 1;
	v->a[43008] = sym_comment;
	v->a[43009] = actions(1540);
	v->a[43010] = 1;
	v->a[43011] = anon_sym_LPAREN;
	v->a[43012] = actions(1542);
	v->a[43013] = 1;
	v->a[43014] = anon_sym_BANG;
	v->a[43015] = actions(1548);
	v->a[43016] = 1;
	v->a[43017] = anon_sym_DOLLAR;
	v->a[43018] = actions(1550);
	v->a[43019] = 1;
	small_parse_table_2151(v);
}

void	small_parse_table_2151(t_small_parse_table_array *v)
{
	v->a[43020] = anon_sym_DQUOTE;
	v->a[43021] = actions(1554);
	v->a[43022] = 1;
	v->a[43023] = anon_sym_DOLLAR_LBRACE;
	v->a[43024] = actions(1556);
	v->a[43025] = 1;
	v->a[43026] = sym_variable_name;
	v->a[43027] = actions(1544);
	v->a[43028] = 2;
	v->a[43029] = anon_sym_PLUS_PLUS;
	v->a[43030] = anon_sym_DASH_DASH;
	v->a[43031] = actions(1546);
	v->a[43032] = 2;
	v->a[43033] = anon_sym_DASH2;
	v->a[43034] = anon_sym_PLUS2;
	v->a[43035] = actions(1552);
	v->a[43036] = 2;
	v->a[43037] = sym_number;
	v->a[43038] = aux_sym__simple_variable_name_token1;
	v->a[43039] = state(157);
	small_parse_table_2152(v);
}

void	small_parse_table_2152(t_small_parse_table_array *v)
{
	v->a[43040] = 3;
	v->a[43041] = sym_string;
	v->a[43042] = sym_simple_expansion;
	v->a[43043] = sym_expansion;
	v->a[43044] = state(181);
	v->a[43045] = 7;
	v->a[43046] = sym__arithmetic_expression;
	v->a[43047] = sym_arithmetic_literal;
	v->a[43048] = sym_arithmetic_binary_expression;
	v->a[43049] = sym_arithmetic_ternary_expression;
	v->a[43050] = sym_arithmetic_unary_expression;
	v->a[43051] = sym_arithmetic_postfix_expression;
	v->a[43052] = sym_arithmetic_parenthesized_expression;
	v->a[43053] = 12;
	v->a[43054] = actions(407);
	v->a[43055] = 1;
	v->a[43056] = sym_comment;
	v->a[43057] = actions(1540);
	v->a[43058] = 1;
	v->a[43059] = anon_sym_LPAREN;
	small_parse_table_2153(v);
}

void	small_parse_table_2153(t_small_parse_table_array *v)
{
	v->a[43060] = actions(1542);
	v->a[43061] = 1;
	v->a[43062] = anon_sym_BANG;
	v->a[43063] = actions(1548);
	v->a[43064] = 1;
	v->a[43065] = anon_sym_DOLLAR;
	v->a[43066] = actions(1550);
	v->a[43067] = 1;
	v->a[43068] = anon_sym_DQUOTE;
	v->a[43069] = actions(1554);
	v->a[43070] = 1;
	v->a[43071] = anon_sym_DOLLAR_LBRACE;
	v->a[43072] = actions(1556);
	v->a[43073] = 1;
	v->a[43074] = sym_variable_name;
	v->a[43075] = actions(1544);
	v->a[43076] = 2;
	v->a[43077] = anon_sym_PLUS_PLUS;
	v->a[43078] = anon_sym_DASH_DASH;
	v->a[43079] = actions(1546);
	small_parse_table_2154(v);
}

void	small_parse_table_2154(t_small_parse_table_array *v)
{
	v->a[43080] = 2;
	v->a[43081] = anon_sym_DASH2;
	v->a[43082] = anon_sym_PLUS2;
	v->a[43083] = actions(1552);
	v->a[43084] = 2;
	v->a[43085] = sym_number;
	v->a[43086] = aux_sym__simple_variable_name_token1;
	v->a[43087] = state(157);
	v->a[43088] = 3;
	v->a[43089] = sym_string;
	v->a[43090] = sym_simple_expansion;
	v->a[43091] = sym_expansion;
	v->a[43092] = state(184);
	v->a[43093] = 7;
	v->a[43094] = sym__arithmetic_expression;
	v->a[43095] = sym_arithmetic_literal;
	v->a[43096] = sym_arithmetic_binary_expression;
	v->a[43097] = sym_arithmetic_ternary_expression;
	v->a[43098] = sym_arithmetic_unary_expression;
	v->a[43099] = sym_arithmetic_postfix_expression;
	small_parse_table_2155(v);
}

/* EOF small_parse_table_430.c */
