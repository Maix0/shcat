/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2090.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10450(t_small_parse_table_array *v)
{
	v->a[209000] = sym_comment;
	v->a[209001] = actions(3064);
	v->a[209002] = 1;
	v->a[209003] = sym_variable_name;
	v->a[209004] = actions(9278);
	v->a[209005] = 1;
	v->a[209006] = anon_sym_LPAREN;
	v->a[209007] = actions(9280);
	v->a[209008] = 1;
	v->a[209009] = anon_sym_BANG;
	v->a[209010] = actions(9286);
	v->a[209011] = 1;
	v->a[209012] = anon_sym_TILDE;
	v->a[209013] = actions(9288);
	v->a[209014] = 1;
	v->a[209015] = anon_sym_DOLLAR;
	v->a[209016] = actions(9290);
	v->a[209017] = 1;
	v->a[209018] = anon_sym_DQUOTE;
	v->a[209019] = actions(9292);
	small_parse_table_10451(v);
}

void	small_parse_table_10451(t_small_parse_table_array *v)
{
	v->a[209020] = 1;
	v->a[209021] = aux_sym_number_token1;
	v->a[209022] = actions(9294);
	v->a[209023] = 1;
	v->a[209024] = aux_sym_number_token2;
	v->a[209025] = actions(9296);
	v->a[209026] = 1;
	v->a[209027] = anon_sym_DOLLAR_LBRACE;
	v->a[209028] = actions(9298);
	v->a[209029] = 1;
	v->a[209030] = anon_sym_DOLLAR_LPAREN;
	v->a[209031] = actions(9300);
	v->a[209032] = 1;
	v->a[209033] = anon_sym_BQUOTE;
	v->a[209034] = actions(9302);
	v->a[209035] = 1;
	v->a[209036] = anon_sym_DOLLAR_BQUOTE;
	v->a[209037] = actions(9842);
	v->a[209038] = 1;
	v->a[209039] = aux_sym__simple_variable_name_token1;
	small_parse_table_10452(v);
}

void	small_parse_table_10452(t_small_parse_table_array *v)
{
	v->a[209040] = state(2801);
	v->a[209041] = 1;
	v->a[209042] = sym__arithmetic_binary_expression;
	v->a[209043] = state(2803);
	v->a[209044] = 1;
	v->a[209045] = sym__arithmetic_ternary_expression;
	v->a[209046] = state(2809);
	v->a[209047] = 1;
	v->a[209048] = sym__arithmetic_unary_expression;
	v->a[209049] = state(2825);
	v->a[209050] = 1;
	v->a[209051] = sym__arithmetic_postfix_expression;
	v->a[209052] = actions(9282);
	v->a[209053] = 2;
	v->a[209054] = anon_sym_PLUS_PLUS2;
	v->a[209055] = anon_sym_DASH_DASH2;
	v->a[209056] = actions(9284);
	v->a[209057] = 2;
	v->a[209058] = anon_sym_DASH2;
	v->a[209059] = anon_sym_PLUS2;
	small_parse_table_10453(v);
}

void	small_parse_table_10453(t_small_parse_table_array *v)
{
	v->a[209060] = state(2739);
	v->a[209061] = 9;
	v->a[209062] = sym_subscript;
	v->a[209063] = sym__arithmetic_expression;
	v->a[209064] = sym__arithmetic_literal;
	v->a[209065] = sym__arithmetic_parenthesized_expression;
	v->a[209066] = sym_string;
	v->a[209067] = sym_number;
	v->a[209068] = sym_simple_expansion;
	v->a[209069] = sym_expansion;
	v->a[209070] = sym_command_substitution;
	v->a[209071] = 20;
	v->a[209072] = actions(71);
	v->a[209073] = 1;
	v->a[209074] = sym_comment;
	v->a[209075] = actions(1587);
	v->a[209076] = 1;
	v->a[209077] = anon_sym_DOLLAR;
	v->a[209078] = actions(1593);
	v->a[209079] = 1;
	small_parse_table_10454(v);
}

void	small_parse_table_10454(t_small_parse_table_array *v)
{
	v->a[209080] = aux_sym_number_token1;
	v->a[209081] = actions(1595);
	v->a[209082] = 1;
	v->a[209083] = aux_sym_number_token2;
	v->a[209084] = actions(1599);
	v->a[209085] = 1;
	v->a[209086] = anon_sym_DOLLAR_LPAREN;
	v->a[209087] = actions(1611);
	v->a[209088] = 1;
	v->a[209089] = sym__brace_start;
	v->a[209090] = actions(9240);
	v->a[209091] = 1;
	v->a[209092] = anon_sym_DOLLAR_LBRACK;
	v->a[209093] = actions(9242);
	v->a[209094] = 1;
	v->a[209095] = sym__special_character;
	v->a[209096] = actions(9244);
	v->a[209097] = 1;
	v->a[209098] = anon_sym_DQUOTE;
	v->a[209099] = actions(9248);
	small_parse_table_10455(v);
}

/* EOF small_parse_table_2090.c */
