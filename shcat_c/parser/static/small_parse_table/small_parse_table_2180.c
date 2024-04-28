/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2180.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10900(t_small_parse_table_array *v)
{
	v->a[218000] = actions(10392);
	v->a[218001] = 1;
	v->a[218002] = anon_sym_DOLLAR;
	v->a[218003] = actions(8904);
	v->a[218004] = 2;
	v->a[218005] = anon_sym_LPAREN_LPAREN;
	v->a[218006] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[218007] = actions(8920);
	v->a[218008] = 2;
	v->a[218009] = anon_sym_LT_LPAREN;
	v->a[218010] = anon_sym_GT_LPAREN;
	v->a[218011] = actions(9852);
	v->a[218012] = 2;
	v->a[218013] = sym_test_operator;
	v->a[218014] = sym__special_character;
	v->a[218015] = actions(9854);
	v->a[218016] = 3;
	v->a[218017] = sym__bare_dollar;
	v->a[218018] = sym_raw_string;
	v->a[218019] = sym_ansi_c_string;
	small_parse_table_10901(v);
}

void	small_parse_table_10901(t_small_parse_table_array *v)
{
	v->a[218020] = state(1921);
	v->a[218021] = 9;
	v->a[218022] = sym_arithmetic_expansion;
	v->a[218023] = sym_brace_expression;
	v->a[218024] = sym_string;
	v->a[218025] = sym_translated_string;
	v->a[218026] = sym_number;
	v->a[218027] = sym_simple_expansion;
	v->a[218028] = sym_expansion;
	v->a[218029] = sym_command_substitution;
	v->a[218030] = sym_process_substitution;
	v->a[218031] = 21;
	v->a[218032] = actions(71);
	v->a[218033] = 1;
	v->a[218034] = sym_comment;
	v->a[218035] = actions(3064);
	v->a[218036] = 1;
	v->a[218037] = sym_variable_name;
	v->a[218038] = actions(9278);
	v->a[218039] = 1;
	small_parse_table_10902(v);
}

void	small_parse_table_10902(t_small_parse_table_array *v)
{
	v->a[218040] = anon_sym_LPAREN;
	v->a[218041] = actions(9280);
	v->a[218042] = 1;
	v->a[218043] = anon_sym_BANG;
	v->a[218044] = actions(9286);
	v->a[218045] = 1;
	v->a[218046] = anon_sym_TILDE;
	v->a[218047] = actions(9288);
	v->a[218048] = 1;
	v->a[218049] = anon_sym_DOLLAR;
	v->a[218050] = actions(9290);
	v->a[218051] = 1;
	v->a[218052] = anon_sym_DQUOTE;
	v->a[218053] = actions(9292);
	v->a[218054] = 1;
	v->a[218055] = aux_sym_number_token1;
	v->a[218056] = actions(9294);
	v->a[218057] = 1;
	v->a[218058] = aux_sym_number_token2;
	v->a[218059] = actions(9296);
	small_parse_table_10903(v);
}

void	small_parse_table_10903(t_small_parse_table_array *v)
{
	v->a[218060] = 1;
	v->a[218061] = anon_sym_DOLLAR_LBRACE;
	v->a[218062] = actions(9298);
	v->a[218063] = 1;
	v->a[218064] = anon_sym_DOLLAR_LPAREN;
	v->a[218065] = actions(9300);
	v->a[218066] = 1;
	v->a[218067] = anon_sym_BQUOTE;
	v->a[218068] = actions(9302);
	v->a[218069] = 1;
	v->a[218070] = anon_sym_DOLLAR_BQUOTE;
	v->a[218071] = actions(10394);
	v->a[218072] = 1;
	v->a[218073] = aux_sym__simple_variable_name_token1;
	v->a[218074] = state(2801);
	v->a[218075] = 1;
	v->a[218076] = sym__arithmetic_binary_expression;
	v->a[218077] = state(2803);
	v->a[218078] = 1;
	v->a[218079] = sym__arithmetic_ternary_expression;
	small_parse_table_10904(v);
}

void	small_parse_table_10904(t_small_parse_table_array *v)
{
	v->a[218080] = state(2809);
	v->a[218081] = 1;
	v->a[218082] = sym__arithmetic_unary_expression;
	v->a[218083] = state(2825);
	v->a[218084] = 1;
	v->a[218085] = sym__arithmetic_postfix_expression;
	v->a[218086] = actions(9282);
	v->a[218087] = 2;
	v->a[218088] = anon_sym_PLUS_PLUS2;
	v->a[218089] = anon_sym_DASH_DASH2;
	v->a[218090] = actions(9284);
	v->a[218091] = 2;
	v->a[218092] = anon_sym_DASH2;
	v->a[218093] = anon_sym_PLUS2;
	v->a[218094] = state(2760);
	v->a[218095] = 9;
	v->a[218096] = sym_subscript;
	v->a[218097] = sym__arithmetic_expression;
	v->a[218098] = sym__arithmetic_literal;
	v->a[218099] = sym__arithmetic_parenthesized_expression;
	small_parse_table_10905(v);
}

/* EOF small_parse_table_2180.c */
