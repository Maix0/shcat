/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2230.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11150(t_small_parse_table_array *v)
{
	v->a[223000] = actions(9278);
	v->a[223001] = 1;
	v->a[223002] = anon_sym_LPAREN;
	v->a[223003] = actions(9280);
	v->a[223004] = 1;
	v->a[223005] = anon_sym_BANG;
	v->a[223006] = actions(9286);
	v->a[223007] = 1;
	v->a[223008] = anon_sym_TILDE;
	v->a[223009] = actions(9288);
	v->a[223010] = 1;
	v->a[223011] = anon_sym_DOLLAR;
	v->a[223012] = actions(9290);
	v->a[223013] = 1;
	v->a[223014] = anon_sym_DQUOTE;
	v->a[223015] = actions(9292);
	v->a[223016] = 1;
	v->a[223017] = aux_sym_number_token1;
	v->a[223018] = actions(9294);
	v->a[223019] = 1;
	small_parse_table_11151(v);
}

void	small_parse_table_11151(t_small_parse_table_array *v)
{
	v->a[223020] = aux_sym_number_token2;
	v->a[223021] = actions(9296);
	v->a[223022] = 1;
	v->a[223023] = anon_sym_DOLLAR_LBRACE;
	v->a[223024] = actions(9298);
	v->a[223025] = 1;
	v->a[223026] = anon_sym_DOLLAR_LPAREN;
	v->a[223027] = actions(9300);
	v->a[223028] = 1;
	v->a[223029] = anon_sym_BQUOTE;
	v->a[223030] = actions(9302);
	v->a[223031] = 1;
	v->a[223032] = anon_sym_DOLLAR_BQUOTE;
	v->a[223033] = actions(10644);
	v->a[223034] = 1;
	v->a[223035] = aux_sym__simple_variable_name_token1;
	v->a[223036] = state(2801);
	v->a[223037] = 1;
	v->a[223038] = sym__arithmetic_binary_expression;
	v->a[223039] = state(2803);
	small_parse_table_11152(v);
}

void	small_parse_table_11152(t_small_parse_table_array *v)
{
	v->a[223040] = 1;
	v->a[223041] = sym__arithmetic_ternary_expression;
	v->a[223042] = state(2809);
	v->a[223043] = 1;
	v->a[223044] = sym__arithmetic_unary_expression;
	v->a[223045] = state(2825);
	v->a[223046] = 1;
	v->a[223047] = sym__arithmetic_postfix_expression;
	v->a[223048] = actions(9282);
	v->a[223049] = 2;
	v->a[223050] = anon_sym_PLUS_PLUS2;
	v->a[223051] = anon_sym_DASH_DASH2;
	v->a[223052] = actions(9284);
	v->a[223053] = 2;
	v->a[223054] = anon_sym_DASH2;
	v->a[223055] = anon_sym_PLUS2;
	v->a[223056] = state(2767);
	v->a[223057] = 9;
	v->a[223058] = sym_subscript;
	v->a[223059] = sym__arithmetic_expression;
	small_parse_table_11153(v);
}

void	small_parse_table_11153(t_small_parse_table_array *v)
{
	v->a[223060] = sym__arithmetic_literal;
	v->a[223061] = sym__arithmetic_parenthesized_expression;
	v->a[223062] = sym_string;
	v->a[223063] = sym_number;
	v->a[223064] = sym_simple_expansion;
	v->a[223065] = sym_expansion;
	v->a[223066] = sym_command_substitution;
	v->a[223067] = 21;
	v->a[223068] = actions(71);
	v->a[223069] = 1;
	v->a[223070] = sym_comment;
	v->a[223071] = actions(3064);
	v->a[223072] = 1;
	v->a[223073] = sym_variable_name;
	v->a[223074] = actions(9278);
	v->a[223075] = 1;
	v->a[223076] = anon_sym_LPAREN;
	v->a[223077] = actions(9280);
	v->a[223078] = 1;
	v->a[223079] = anon_sym_BANG;
	small_parse_table_11154(v);
}

void	small_parse_table_11154(t_small_parse_table_array *v)
{
	v->a[223080] = actions(9286);
	v->a[223081] = 1;
	v->a[223082] = anon_sym_TILDE;
	v->a[223083] = actions(9288);
	v->a[223084] = 1;
	v->a[223085] = anon_sym_DOLLAR;
	v->a[223086] = actions(9290);
	v->a[223087] = 1;
	v->a[223088] = anon_sym_DQUOTE;
	v->a[223089] = actions(9292);
	v->a[223090] = 1;
	v->a[223091] = aux_sym_number_token1;
	v->a[223092] = actions(9294);
	v->a[223093] = 1;
	v->a[223094] = aux_sym_number_token2;
	v->a[223095] = actions(9296);
	v->a[223096] = 1;
	v->a[223097] = anon_sym_DOLLAR_LBRACE;
	v->a[223098] = actions(9298);
	v->a[223099] = 1;
	small_parse_table_11155(v);
}

/* EOF small_parse_table_2230.c */
