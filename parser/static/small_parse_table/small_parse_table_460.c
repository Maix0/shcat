/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_460.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2300(t_small_parse_table_array *v)
{
	v->a[46000] = 1;
	v->a[46001] = anon_sym_DQUOTE;
	v->a[46002] = actions(1592);
	v->a[46003] = 1;
	v->a[46004] = anon_sym_DOLLAR_LBRACE;
	v->a[46005] = actions(1594);
	v->a[46006] = 1;
	v->a[46007] = anon_sym_DOLLAR_LPAREN;
	v->a[46008] = actions(1596);
	v->a[46009] = 1;
	v->a[46010] = anon_sym_BQUOTE;
	v->a[46011] = actions(1598);
	v->a[46012] = 1;
	v->a[46013] = sym_variable_name;
	v->a[46014] = actions(1669);
	v->a[46015] = 1;
	v->a[46016] = anon_sym_RPAREN_RPAREN;
	v->a[46017] = actions(1580);
	v->a[46018] = 2;
	v->a[46019] = anon_sym_PLUS_PLUS;
	small_parse_table_2301(v);
}

void	small_parse_table_2301(t_small_parse_table_array *v)
{
	v->a[46020] = anon_sym_DASH_DASH;
	v->a[46021] = actions(1582);
	v->a[46022] = 2;
	v->a[46023] = anon_sym_DASH2;
	v->a[46024] = anon_sym_PLUS2;
	v->a[46025] = actions(1590);
	v->a[46026] = 2;
	v->a[46027] = sym_number;
	v->a[46028] = aux_sym__simple_variable_name_token1;
	v->a[46029] = state(238);
	v->a[46030] = 3;
	v->a[46031] = sym_string;
	v->a[46032] = sym_simple_expansion;
	v->a[46033] = sym_expansion;
	v->a[46034] = state(310);
	v->a[46035] = 8;
	v->a[46036] = sym__arithmetic_expression;
	v->a[46037] = sym_arithmetic_literal;
	v->a[46038] = sym_arithmetic_binary_expression;
	v->a[46039] = sym_arithmetic_ternary_expression;
	small_parse_table_2302(v);
}

void	small_parse_table_2302(t_small_parse_table_array *v)
{
	v->a[46040] = sym_arithmetic_unary_expression;
	v->a[46041] = sym_arithmetic_postfix_expression;
	v->a[46042] = sym_arithmetic_parenthesized_expression;
	v->a[46043] = sym_command_substitution;
	v->a[46044] = 3;
	v->a[46045] = actions(3);
	v->a[46046] = 1;
	v->a[46047] = sym_comment;
	v->a[46048] = actions(1377);
	v->a[46049] = 2;
	v->a[46050] = sym_file_descriptor;
	v->a[46051] = sym_variable_name;
	v->a[46052] = actions(1375);
	v->a[46053] = 25;
	v->a[46054] = anon_sym_for;
	v->a[46055] = anon_sym_while;
	v->a[46056] = anon_sym_until;
	v->a[46057] = anon_sym_do;
	v->a[46058] = anon_sym_if;
	v->a[46059] = anon_sym_case;
	small_parse_table_2303(v);
}

void	small_parse_table_2303(t_small_parse_table_array *v)
{
	v->a[46060] = anon_sym_LPAREN;
	v->a[46061] = anon_sym_LBRACE;
	v->a[46062] = anon_sym_BANG;
	v->a[46063] = anon_sym_LT;
	v->a[46064] = anon_sym_GT;
	v->a[46065] = anon_sym_GT_GT;
	v->a[46066] = anon_sym_LT_AMP;
	v->a[46067] = anon_sym_GT_AMP;
	v->a[46068] = anon_sym_GT_PIPE;
	v->a[46069] = anon_sym_LT_GT;
	v->a[46070] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[46071] = anon_sym_DOLLAR;
	v->a[46072] = anon_sym_DQUOTE;
	v->a[46073] = sym_raw_string;
	v->a[46074] = sym_number;
	v->a[46075] = anon_sym_DOLLAR_LBRACE;
	v->a[46076] = anon_sym_DOLLAR_LPAREN;
	v->a[46077] = anon_sym_BQUOTE;
	v->a[46078] = sym_word;
	v->a[46079] = 3;
	small_parse_table_2304(v);
}

void	small_parse_table_2304(t_small_parse_table_array *v)
{
	v->a[46080] = actions(3);
	v->a[46081] = 1;
	v->a[46082] = sym_comment;
	v->a[46083] = actions(1377);
	v->a[46084] = 2;
	v->a[46085] = sym_file_descriptor;
	v->a[46086] = sym_variable_name;
	v->a[46087] = actions(1375);
	v->a[46088] = 25;
	v->a[46089] = anon_sym_for;
	v->a[46090] = anon_sym_while;
	v->a[46091] = anon_sym_until;
	v->a[46092] = anon_sym_if;
	v->a[46093] = anon_sym_case;
	v->a[46094] = anon_sym_LPAREN;
	v->a[46095] = anon_sym_LBRACE;
	v->a[46096] = anon_sym_RBRACE;
	v->a[46097] = anon_sym_BANG;
	v->a[46098] = anon_sym_LT;
	v->a[46099] = anon_sym_GT;
	small_parse_table_2305(v);
}

/* EOF small_parse_table_460.c */
