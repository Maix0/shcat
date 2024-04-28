/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2390.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11950(t_small_parse_table_array *v)
{
	v->a[239000] = actions(9290);
	v->a[239001] = 1;
	v->a[239002] = anon_sym_DQUOTE;
	v->a[239003] = actions(9292);
	v->a[239004] = 1;
	v->a[239005] = aux_sym_number_token1;
	v->a[239006] = actions(9294);
	v->a[239007] = 1;
	v->a[239008] = aux_sym_number_token2;
	v->a[239009] = actions(9296);
	v->a[239010] = 1;
	v->a[239011] = anon_sym_DOLLAR_LBRACE;
	v->a[239012] = actions(9298);
	v->a[239013] = 1;
	v->a[239014] = anon_sym_DOLLAR_LPAREN;
	v->a[239015] = actions(9300);
	v->a[239016] = 1;
	v->a[239017] = anon_sym_BQUOTE;
	v->a[239018] = actions(9302);
	v->a[239019] = 1;
	small_parse_table_11951(v);
}

void	small_parse_table_11951(t_small_parse_table_array *v)
{
	v->a[239020] = anon_sym_DOLLAR_BQUOTE;
	v->a[239021] = actions(11228);
	v->a[239022] = 1;
	v->a[239023] = aux_sym__simple_variable_name_token1;
	v->a[239024] = state(2801);
	v->a[239025] = 1;
	v->a[239026] = sym__arithmetic_binary_expression;
	v->a[239027] = state(2803);
	v->a[239028] = 1;
	v->a[239029] = sym__arithmetic_ternary_expression;
	v->a[239030] = state(2809);
	v->a[239031] = 1;
	v->a[239032] = sym__arithmetic_unary_expression;
	v->a[239033] = state(2825);
	v->a[239034] = 1;
	v->a[239035] = sym__arithmetic_postfix_expression;
	v->a[239036] = actions(9282);
	v->a[239037] = 2;
	v->a[239038] = anon_sym_PLUS_PLUS2;
	v->a[239039] = anon_sym_DASH_DASH2;
	small_parse_table_11952(v);
}

void	small_parse_table_11952(t_small_parse_table_array *v)
{
	v->a[239040] = actions(9284);
	v->a[239041] = 2;
	v->a[239042] = anon_sym_DASH2;
	v->a[239043] = anon_sym_PLUS2;
	v->a[239044] = state(2789);
	v->a[239045] = 9;
	v->a[239046] = sym_subscript;
	v->a[239047] = sym__arithmetic_expression;
	v->a[239048] = sym__arithmetic_literal;
	v->a[239049] = sym__arithmetic_parenthesized_expression;
	v->a[239050] = sym_string;
	v->a[239051] = sym_number;
	v->a[239052] = sym_simple_expansion;
	v->a[239053] = sym_expansion;
	v->a[239054] = sym_command_substitution;
	v->a[239055] = 21;
	v->a[239056] = actions(71);
	v->a[239057] = 1;
	v->a[239058] = sym_comment;
	v->a[239059] = actions(3064);
	small_parse_table_11953(v);
}

void	small_parse_table_11953(t_small_parse_table_array *v)
{
	v->a[239060] = 1;
	v->a[239061] = sym_variable_name;
	v->a[239062] = actions(9278);
	v->a[239063] = 1;
	v->a[239064] = anon_sym_LPAREN;
	v->a[239065] = actions(9280);
	v->a[239066] = 1;
	v->a[239067] = anon_sym_BANG;
	v->a[239068] = actions(9286);
	v->a[239069] = 1;
	v->a[239070] = anon_sym_TILDE;
	v->a[239071] = actions(9288);
	v->a[239072] = 1;
	v->a[239073] = anon_sym_DOLLAR;
	v->a[239074] = actions(9290);
	v->a[239075] = 1;
	v->a[239076] = anon_sym_DQUOTE;
	v->a[239077] = actions(9292);
	v->a[239078] = 1;
	v->a[239079] = aux_sym_number_token1;
	small_parse_table_11954(v);
}

void	small_parse_table_11954(t_small_parse_table_array *v)
{
	v->a[239080] = actions(9294);
	v->a[239081] = 1;
	v->a[239082] = aux_sym_number_token2;
	v->a[239083] = actions(9296);
	v->a[239084] = 1;
	v->a[239085] = anon_sym_DOLLAR_LBRACE;
	v->a[239086] = actions(9298);
	v->a[239087] = 1;
	v->a[239088] = anon_sym_DOLLAR_LPAREN;
	v->a[239089] = actions(9300);
	v->a[239090] = 1;
	v->a[239091] = anon_sym_BQUOTE;
	v->a[239092] = actions(9302);
	v->a[239093] = 1;
	v->a[239094] = anon_sym_DOLLAR_BQUOTE;
	v->a[239095] = actions(11230);
	v->a[239096] = 1;
	v->a[239097] = aux_sym__simple_variable_name_token1;
	v->a[239098] = state(2801);
	v->a[239099] = 1;
	small_parse_table_11955(v);
}

/* EOF small_parse_table_2390.c */
