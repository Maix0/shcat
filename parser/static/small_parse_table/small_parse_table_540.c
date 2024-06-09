/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_540.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2700(t_small_parse_table_array *v)
{
	v->a[54000] = 1;
	v->a[54001] = aux_sym__simple_variable_name_token1;
	v->a[54002] = actions(2007);
	v->a[54003] = 1;
	v->a[54004] = sym_variable_name;
	v->a[54005] = actions(2013);
	v->a[54006] = 1;
	v->a[54007] = anon_sym_RPAREN_RPAREN;
	v->a[54008] = actions(1985);
	v->a[54009] = 2;
	v->a[54010] = anon_sym_PLUS_PLUS;
	v->a[54011] = anon_sym_DASH_DASH;
	v->a[54012] = actions(1987);
	v->a[54013] = 2;
	v->a[54014] = anon_sym_DASH2;
	v->a[54015] = anon_sym_PLUS2;
	v->a[54016] = state(530);
	v->a[54017] = 4;
	v->a[54018] = sym_string;
	v->a[54019] = sym_number;
	small_parse_table_2701(v);
}

void	small_parse_table_2701(t_small_parse_table_array *v)
{
	v->a[54020] = sym_simple_expansion;
	v->a[54021] = sym_expansion;
	v->a[54022] = state(681);
	v->a[54023] = 8;
	v->a[54024] = sym__arithmetic_expression;
	v->a[54025] = sym_arithmetic_literal;
	v->a[54026] = sym_arithmetic_binary_expression;
	v->a[54027] = sym_arithmetic_ternary_expression;
	v->a[54028] = sym_arithmetic_unary_expression;
	v->a[54029] = sym_arithmetic_postfix_expression;
	v->a[54030] = sym_arithmetic_parenthesized_expression;
	v->a[54031] = sym_command_substitution;
	v->a[54032] = 18;
	v->a[54033] = actions(1404);
	v->a[54034] = 1;
	v->a[54035] = sym_comment;
	v->a[54036] = actions(1979);
	v->a[54037] = 1;
	v->a[54038] = anon_sym_LPAREN;
	v->a[54039] = actions(1981);
	small_parse_table_2702(v);
}

void	small_parse_table_2702(t_small_parse_table_array *v)
{
	v->a[54040] = 1;
	v->a[54041] = anon_sym_BANG;
	v->a[54042] = actions(1989);
	v->a[54043] = 1;
	v->a[54044] = anon_sym_TILDE;
	v->a[54045] = actions(1991);
	v->a[54046] = 1;
	v->a[54047] = anon_sym_DOLLAR;
	v->a[54048] = actions(1993);
	v->a[54049] = 1;
	v->a[54050] = anon_sym_DQUOTE;
	v->a[54051] = actions(1995);
	v->a[54052] = 1;
	v->a[54053] = aux_sym_number_token1;
	v->a[54054] = actions(1997);
	v->a[54055] = 1;
	v->a[54056] = aux_sym_number_token2;
	v->a[54057] = actions(1999);
	v->a[54058] = 1;
	v->a[54059] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2703(v);
}

void	small_parse_table_2703(t_small_parse_table_array *v)
{
	v->a[54060] = actions(2001);
	v->a[54061] = 1;
	v->a[54062] = anon_sym_DOLLAR_LPAREN;
	v->a[54063] = actions(2003);
	v->a[54064] = 1;
	v->a[54065] = anon_sym_BQUOTE;
	v->a[54066] = actions(2005);
	v->a[54067] = 1;
	v->a[54068] = aux_sym__simple_variable_name_token1;
	v->a[54069] = actions(2007);
	v->a[54070] = 1;
	v->a[54071] = sym_variable_name;
	v->a[54072] = actions(2015);
	v->a[54073] = 1;
	v->a[54074] = anon_sym_RPAREN_RPAREN;
	v->a[54075] = actions(1985);
	v->a[54076] = 2;
	v->a[54077] = anon_sym_PLUS_PLUS;
	v->a[54078] = anon_sym_DASH_DASH;
	v->a[54079] = actions(1987);
	small_parse_table_2704(v);
}

void	small_parse_table_2704(t_small_parse_table_array *v)
{
	v->a[54080] = 2;
	v->a[54081] = anon_sym_DASH2;
	v->a[54082] = anon_sym_PLUS2;
	v->a[54083] = state(530);
	v->a[54084] = 4;
	v->a[54085] = sym_string;
	v->a[54086] = sym_number;
	v->a[54087] = sym_simple_expansion;
	v->a[54088] = sym_expansion;
	v->a[54089] = state(667);
	v->a[54090] = 8;
	v->a[54091] = sym__arithmetic_expression;
	v->a[54092] = sym_arithmetic_literal;
	v->a[54093] = sym_arithmetic_binary_expression;
	v->a[54094] = sym_arithmetic_ternary_expression;
	v->a[54095] = sym_arithmetic_unary_expression;
	v->a[54096] = sym_arithmetic_postfix_expression;
	v->a[54097] = sym_arithmetic_parenthesized_expression;
	v->a[54098] = sym_command_substitution;
	v->a[54099] = 18;
	small_parse_table_2705(v);
}

/* EOF small_parse_table_540.c */
