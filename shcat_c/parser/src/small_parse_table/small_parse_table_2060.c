/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2060.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10300(t_small_parse_table_array *v)
{
	v->a[206000] = state(3391);
	v->a[206001] = 1;
	v->a[206002] = sym__arithmetic_binary_expression;
	v->a[206003] = state(3396);
	v->a[206004] = 1;
	v->a[206005] = sym__arithmetic_ternary_expression;
	v->a[206006] = state(3398);
	v->a[206007] = 1;
	v->a[206008] = sym__arithmetic_unary_expression;
	v->a[206009] = state(3400);
	v->a[206010] = 1;
	v->a[206011] = sym__arithmetic_postfix_expression;
	v->a[206012] = actions(9368);
	v->a[206013] = 2;
	v->a[206014] = anon_sym_PLUS_PLUS2;
	v->a[206015] = anon_sym_DASH_DASH2;
	v->a[206016] = actions(9370);
	v->a[206017] = 2;
	v->a[206018] = anon_sym_DASH2;
	v->a[206019] = anon_sym_PLUS2;
	small_parse_table_10301(v);
}

void	small_parse_table_10301(t_small_parse_table_array *v)
{
	v->a[206020] = state(3344);
	v->a[206021] = 9;
	v->a[206022] = sym_subscript;
	v->a[206023] = sym__arithmetic_expression;
	v->a[206024] = sym__arithmetic_literal;
	v->a[206025] = sym__arithmetic_parenthesized_expression;
	v->a[206026] = sym_string;
	v->a[206027] = sym_number;
	v->a[206028] = sym_simple_expansion;
	v->a[206029] = sym_expansion;
	v->a[206030] = sym_command_substitution;
	v->a[206031] = 21;
	v->a[206032] = actions(71);
	v->a[206033] = 1;
	v->a[206034] = sym_comment;
	v->a[206035] = actions(3064);
	v->a[206036] = 1;
	v->a[206037] = sym_variable_name;
	v->a[206038] = actions(9278);
	v->a[206039] = 1;
	small_parse_table_10302(v);
}

void	small_parse_table_10302(t_small_parse_table_array *v)
{
	v->a[206040] = anon_sym_LPAREN;
	v->a[206041] = actions(9280);
	v->a[206042] = 1;
	v->a[206043] = anon_sym_BANG;
	v->a[206044] = actions(9286);
	v->a[206045] = 1;
	v->a[206046] = anon_sym_TILDE;
	v->a[206047] = actions(9288);
	v->a[206048] = 1;
	v->a[206049] = anon_sym_DOLLAR;
	v->a[206050] = actions(9290);
	v->a[206051] = 1;
	v->a[206052] = anon_sym_DQUOTE;
	v->a[206053] = actions(9292);
	v->a[206054] = 1;
	v->a[206055] = aux_sym_number_token1;
	v->a[206056] = actions(9294);
	v->a[206057] = 1;
	v->a[206058] = aux_sym_number_token2;
	v->a[206059] = actions(9296);
	small_parse_table_10303(v);
}

void	small_parse_table_10303(t_small_parse_table_array *v)
{
	v->a[206060] = 1;
	v->a[206061] = anon_sym_DOLLAR_LBRACE;
	v->a[206062] = actions(9298);
	v->a[206063] = 1;
	v->a[206064] = anon_sym_DOLLAR_LPAREN;
	v->a[206065] = actions(9300);
	v->a[206066] = 1;
	v->a[206067] = anon_sym_BQUOTE;
	v->a[206068] = actions(9302);
	v->a[206069] = 1;
	v->a[206070] = anon_sym_DOLLAR_BQUOTE;
	v->a[206071] = actions(9576);
	v->a[206072] = 1;
	v->a[206073] = aux_sym__simple_variable_name_token1;
	v->a[206074] = state(2801);
	v->a[206075] = 1;
	v->a[206076] = sym__arithmetic_binary_expression;
	v->a[206077] = state(2803);
	v->a[206078] = 1;
	v->a[206079] = sym__arithmetic_ternary_expression;
	small_parse_table_10304(v);
}

void	small_parse_table_10304(t_small_parse_table_array *v)
{
	v->a[206080] = state(2809);
	v->a[206081] = 1;
	v->a[206082] = sym__arithmetic_unary_expression;
	v->a[206083] = state(2825);
	v->a[206084] = 1;
	v->a[206085] = sym__arithmetic_postfix_expression;
	v->a[206086] = actions(9282);
	v->a[206087] = 2;
	v->a[206088] = anon_sym_PLUS_PLUS2;
	v->a[206089] = anon_sym_DASH_DASH2;
	v->a[206090] = actions(9284);
	v->a[206091] = 2;
	v->a[206092] = anon_sym_DASH2;
	v->a[206093] = anon_sym_PLUS2;
	v->a[206094] = state(2747);
	v->a[206095] = 9;
	v->a[206096] = sym_subscript;
	v->a[206097] = sym__arithmetic_expression;
	v->a[206098] = sym__arithmetic_literal;
	v->a[206099] = sym__arithmetic_parenthesized_expression;
	small_parse_table_10305(v);
}

/* EOF small_parse_table_2060.c */
