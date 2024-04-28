/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2140.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10700(t_small_parse_table_array *v)
{
	v->a[214000] = state(2392);
	v->a[214001] = 9;
	v->a[214002] = sym_arithmetic_expansion;
	v->a[214003] = sym_brace_expression;
	v->a[214004] = sym_string;
	v->a[214005] = sym_translated_string;
	v->a[214006] = sym_number;
	v->a[214007] = sym_simple_expansion;
	v->a[214008] = sym_expansion;
	v->a[214009] = sym_command_substitution;
	v->a[214010] = sym_process_substitution;
	v->a[214011] = 21;
	v->a[214012] = actions(71);
	v->a[214013] = 1;
	v->a[214014] = sym_comment;
	v->a[214015] = actions(3064);
	v->a[214016] = 1;
	v->a[214017] = sym_variable_name;
	v->a[214018] = actions(3225);
	v->a[214019] = 1;
	small_parse_table_10701(v);
}

void	small_parse_table_10701(t_small_parse_table_array *v)
{
	v->a[214020] = aux_sym__simple_variable_name_token1;
	v->a[214021] = actions(9278);
	v->a[214022] = 1;
	v->a[214023] = anon_sym_LPAREN;
	v->a[214024] = actions(9280);
	v->a[214025] = 1;
	v->a[214026] = anon_sym_BANG;
	v->a[214027] = actions(9286);
	v->a[214028] = 1;
	v->a[214029] = anon_sym_TILDE;
	v->a[214030] = actions(9288);
	v->a[214031] = 1;
	v->a[214032] = anon_sym_DOLLAR;
	v->a[214033] = actions(9290);
	v->a[214034] = 1;
	v->a[214035] = anon_sym_DQUOTE;
	v->a[214036] = actions(9292);
	v->a[214037] = 1;
	v->a[214038] = aux_sym_number_token1;
	v->a[214039] = actions(9294);
	small_parse_table_10702(v);
}

void	small_parse_table_10702(t_small_parse_table_array *v)
{
	v->a[214040] = 1;
	v->a[214041] = aux_sym_number_token2;
	v->a[214042] = actions(9296);
	v->a[214043] = 1;
	v->a[214044] = anon_sym_DOLLAR_LBRACE;
	v->a[214045] = actions(9298);
	v->a[214046] = 1;
	v->a[214047] = anon_sym_DOLLAR_LPAREN;
	v->a[214048] = actions(9300);
	v->a[214049] = 1;
	v->a[214050] = anon_sym_BQUOTE;
	v->a[214051] = actions(9302);
	v->a[214052] = 1;
	v->a[214053] = anon_sym_DOLLAR_BQUOTE;
	v->a[214054] = state(2801);
	v->a[214055] = 1;
	v->a[214056] = sym__arithmetic_binary_expression;
	v->a[214057] = state(2803);
	v->a[214058] = 1;
	v->a[214059] = sym__arithmetic_ternary_expression;
	small_parse_table_10703(v);
}

void	small_parse_table_10703(t_small_parse_table_array *v)
{
	v->a[214060] = state(2809);
	v->a[214061] = 1;
	v->a[214062] = sym__arithmetic_unary_expression;
	v->a[214063] = state(2825);
	v->a[214064] = 1;
	v->a[214065] = sym__arithmetic_postfix_expression;
	v->a[214066] = actions(9282);
	v->a[214067] = 2;
	v->a[214068] = anon_sym_PLUS_PLUS2;
	v->a[214069] = anon_sym_DASH_DASH2;
	v->a[214070] = actions(9284);
	v->a[214071] = 2;
	v->a[214072] = anon_sym_DASH2;
	v->a[214073] = anon_sym_PLUS2;
	v->a[214074] = state(2756);
	v->a[214075] = 9;
	v->a[214076] = sym_subscript;
	v->a[214077] = sym__arithmetic_expression;
	v->a[214078] = sym__arithmetic_literal;
	v->a[214079] = sym__arithmetic_parenthesized_expression;
	small_parse_table_10704(v);
}

void	small_parse_table_10704(t_small_parse_table_array *v)
{
	v->a[214080] = sym_string;
	v->a[214081] = sym_number;
	v->a[214082] = sym_simple_expansion;
	v->a[214083] = sym_expansion;
	v->a[214084] = sym_command_substitution;
	v->a[214085] = 18;
	v->a[214086] = actions(3);
	v->a[214087] = 1;
	v->a[214088] = sym_comment;
	v->a[214089] = actions(1141);
	v->a[214090] = 1;
	v->a[214091] = anon_sym_DOLLAR_LBRACK;
	v->a[214092] = actions(1149);
	v->a[214093] = 1;
	v->a[214094] = anon_sym_DQUOTE;
	v->a[214095] = actions(1153);
	v->a[214096] = 1;
	v->a[214097] = aux_sym_number_token1;
	v->a[214098] = actions(1155);
	v->a[214099] = 1;
	small_parse_table_10705(v);
}

/* EOF small_parse_table_2140.c */
