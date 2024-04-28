/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2050.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10250(t_small_parse_table_array *v)
{
	v->a[205000] = 1;
	v->a[205001] = aux_sym__simple_variable_name_token1;
	v->a[205002] = state(2801);
	v->a[205003] = 1;
	v->a[205004] = sym__arithmetic_binary_expression;
	v->a[205005] = state(2803);
	v->a[205006] = 1;
	v->a[205007] = sym__arithmetic_ternary_expression;
	v->a[205008] = state(2809);
	v->a[205009] = 1;
	v->a[205010] = sym__arithmetic_unary_expression;
	v->a[205011] = state(2825);
	v->a[205012] = 1;
	v->a[205013] = sym__arithmetic_postfix_expression;
	v->a[205014] = actions(9282);
	v->a[205015] = 2;
	v->a[205016] = anon_sym_PLUS_PLUS2;
	v->a[205017] = anon_sym_DASH_DASH2;
	v->a[205018] = actions(9284);
	v->a[205019] = 2;
	small_parse_table_10251(v);
}

void	small_parse_table_10251(t_small_parse_table_array *v)
{
	v->a[205020] = anon_sym_DASH2;
	v->a[205021] = anon_sym_PLUS2;
	v->a[205022] = state(2741);
	v->a[205023] = 9;
	v->a[205024] = sym_subscript;
	v->a[205025] = sym__arithmetic_expression;
	v->a[205026] = sym__arithmetic_literal;
	v->a[205027] = sym__arithmetic_parenthesized_expression;
	v->a[205028] = sym_string;
	v->a[205029] = sym_number;
	v->a[205030] = sym_simple_expansion;
	v->a[205031] = sym_expansion;
	v->a[205032] = sym_command_substitution;
	v->a[205033] = 21;
	v->a[205034] = actions(71);
	v->a[205035] = 1;
	v->a[205036] = sym_comment;
	v->a[205037] = actions(9364);
	v->a[205038] = 1;
	v->a[205039] = anon_sym_LPAREN;
	small_parse_table_10252(v);
}

void	small_parse_table_10252(t_small_parse_table_array *v)
{
	v->a[205040] = actions(9366);
	v->a[205041] = 1;
	v->a[205042] = anon_sym_BANG;
	v->a[205043] = actions(9372);
	v->a[205044] = 1;
	v->a[205045] = anon_sym_TILDE;
	v->a[205046] = actions(9374);
	v->a[205047] = 1;
	v->a[205048] = anon_sym_DOLLAR;
	v->a[205049] = actions(9376);
	v->a[205050] = 1;
	v->a[205051] = anon_sym_DQUOTE;
	v->a[205052] = actions(9378);
	v->a[205053] = 1;
	v->a[205054] = aux_sym_number_token1;
	v->a[205055] = actions(9380);
	v->a[205056] = 1;
	v->a[205057] = aux_sym_number_token2;
	v->a[205058] = actions(9382);
	v->a[205059] = 1;
	small_parse_table_10253(v);
}

void	small_parse_table_10253(t_small_parse_table_array *v)
{
	v->a[205060] = anon_sym_DOLLAR_LBRACE;
	v->a[205061] = actions(9384);
	v->a[205062] = 1;
	v->a[205063] = anon_sym_DOLLAR_LPAREN;
	v->a[205064] = actions(9386);
	v->a[205065] = 1;
	v->a[205066] = anon_sym_BQUOTE;
	v->a[205067] = actions(9388);
	v->a[205068] = 1;
	v->a[205069] = anon_sym_DOLLAR_BQUOTE;
	v->a[205070] = actions(9392);
	v->a[205071] = 1;
	v->a[205072] = sym_variable_name;
	v->a[205073] = actions(9498);
	v->a[205074] = 1;
	v->a[205075] = aux_sym__simple_variable_name_token1;
	v->a[205076] = state(3391);
	v->a[205077] = 1;
	v->a[205078] = sym__arithmetic_binary_expression;
	v->a[205079] = state(3396);
	small_parse_table_10254(v);
}

void	small_parse_table_10254(t_small_parse_table_array *v)
{
	v->a[205080] = 1;
	v->a[205081] = sym__arithmetic_ternary_expression;
	v->a[205082] = state(3398);
	v->a[205083] = 1;
	v->a[205084] = sym__arithmetic_unary_expression;
	v->a[205085] = state(3400);
	v->a[205086] = 1;
	v->a[205087] = sym__arithmetic_postfix_expression;
	v->a[205088] = actions(9368);
	v->a[205089] = 2;
	v->a[205090] = anon_sym_PLUS_PLUS2;
	v->a[205091] = anon_sym_DASH_DASH2;
	v->a[205092] = actions(9370);
	v->a[205093] = 2;
	v->a[205094] = anon_sym_DASH2;
	v->a[205095] = anon_sym_PLUS2;
	v->a[205096] = state(3362);
	v->a[205097] = 9;
	v->a[205098] = sym_subscript;
	v->a[205099] = sym__arithmetic_expression;
	small_parse_table_10255(v);
}

/* EOF small_parse_table_2050.c */
