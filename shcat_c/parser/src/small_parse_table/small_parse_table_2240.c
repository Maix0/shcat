/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2240.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11200(t_small_parse_table_array *v)
{
	v->a[224000] = actions(9294);
	v->a[224001] = 1;
	v->a[224002] = aux_sym_number_token2;
	v->a[224003] = actions(9296);
	v->a[224004] = 1;
	v->a[224005] = anon_sym_DOLLAR_LBRACE;
	v->a[224006] = actions(9298);
	v->a[224007] = 1;
	v->a[224008] = anon_sym_DOLLAR_LPAREN;
	v->a[224009] = actions(9300);
	v->a[224010] = 1;
	v->a[224011] = anon_sym_BQUOTE;
	v->a[224012] = actions(9302);
	v->a[224013] = 1;
	v->a[224014] = anon_sym_DOLLAR_BQUOTE;
	v->a[224015] = actions(10672);
	v->a[224016] = 1;
	v->a[224017] = aux_sym__simple_variable_name_token1;
	v->a[224018] = state(2801);
	v->a[224019] = 1;
	small_parse_table_11201(v);
}

void	small_parse_table_11201(t_small_parse_table_array *v)
{
	v->a[224020] = sym__arithmetic_binary_expression;
	v->a[224021] = state(2803);
	v->a[224022] = 1;
	v->a[224023] = sym__arithmetic_ternary_expression;
	v->a[224024] = state(2809);
	v->a[224025] = 1;
	v->a[224026] = sym__arithmetic_unary_expression;
	v->a[224027] = state(2825);
	v->a[224028] = 1;
	v->a[224029] = sym__arithmetic_postfix_expression;
	v->a[224030] = actions(9282);
	v->a[224031] = 2;
	v->a[224032] = anon_sym_PLUS_PLUS2;
	v->a[224033] = anon_sym_DASH_DASH2;
	v->a[224034] = actions(9284);
	v->a[224035] = 2;
	v->a[224036] = anon_sym_DASH2;
	v->a[224037] = anon_sym_PLUS2;
	v->a[224038] = state(2769);
	v->a[224039] = 9;
	small_parse_table_11202(v);
}

void	small_parse_table_11202(t_small_parse_table_array *v)
{
	v->a[224040] = sym_subscript;
	v->a[224041] = sym__arithmetic_expression;
	v->a[224042] = sym__arithmetic_literal;
	v->a[224043] = sym__arithmetic_parenthesized_expression;
	v->a[224044] = sym_string;
	v->a[224045] = sym_number;
	v->a[224046] = sym_simple_expansion;
	v->a[224047] = sym_expansion;
	v->a[224048] = sym_command_substitution;
	v->a[224049] = 21;
	v->a[224050] = actions(71);
	v->a[224051] = 1;
	v->a[224052] = sym_comment;
	v->a[224053] = actions(3064);
	v->a[224054] = 1;
	v->a[224055] = sym_variable_name;
	v->a[224056] = actions(9278);
	v->a[224057] = 1;
	v->a[224058] = anon_sym_LPAREN;
	v->a[224059] = actions(9280);
	small_parse_table_11203(v);
}

void	small_parse_table_11203(t_small_parse_table_array *v)
{
	v->a[224060] = 1;
	v->a[224061] = anon_sym_BANG;
	v->a[224062] = actions(9286);
	v->a[224063] = 1;
	v->a[224064] = anon_sym_TILDE;
	v->a[224065] = actions(9288);
	v->a[224066] = 1;
	v->a[224067] = anon_sym_DOLLAR;
	v->a[224068] = actions(9290);
	v->a[224069] = 1;
	v->a[224070] = anon_sym_DQUOTE;
	v->a[224071] = actions(9292);
	v->a[224072] = 1;
	v->a[224073] = aux_sym_number_token1;
	v->a[224074] = actions(9294);
	v->a[224075] = 1;
	v->a[224076] = aux_sym_number_token2;
	v->a[224077] = actions(9296);
	v->a[224078] = 1;
	v->a[224079] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_11204(v);
}

void	small_parse_table_11204(t_small_parse_table_array *v)
{
	v->a[224080] = actions(9298);
	v->a[224081] = 1;
	v->a[224082] = anon_sym_DOLLAR_LPAREN;
	v->a[224083] = actions(9300);
	v->a[224084] = 1;
	v->a[224085] = anon_sym_BQUOTE;
	v->a[224086] = actions(9302);
	v->a[224087] = 1;
	v->a[224088] = anon_sym_DOLLAR_BQUOTE;
	v->a[224089] = actions(10674);
	v->a[224090] = 1;
	v->a[224091] = aux_sym__simple_variable_name_token1;
	v->a[224092] = state(2801);
	v->a[224093] = 1;
	v->a[224094] = sym__arithmetic_binary_expression;
	v->a[224095] = state(2803);
	v->a[224096] = 1;
	v->a[224097] = sym__arithmetic_ternary_expression;
	v->a[224098] = state(2809);
	v->a[224099] = 1;
	small_parse_table_11205(v);
}

/* EOF small_parse_table_2240.c */
