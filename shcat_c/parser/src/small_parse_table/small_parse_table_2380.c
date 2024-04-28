/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2380.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11900(t_small_parse_table_array *v)
{
	v->a[238000] = actions(9298);
	v->a[238001] = 1;
	v->a[238002] = anon_sym_DOLLAR_LPAREN;
	v->a[238003] = actions(9300);
	v->a[238004] = 1;
	v->a[238005] = anon_sym_BQUOTE;
	v->a[238006] = actions(9302);
	v->a[238007] = 1;
	v->a[238008] = anon_sym_DOLLAR_BQUOTE;
	v->a[238009] = actions(11200);
	v->a[238010] = 1;
	v->a[238011] = aux_sym__simple_variable_name_token1;
	v->a[238012] = state(2801);
	v->a[238013] = 1;
	v->a[238014] = sym__arithmetic_binary_expression;
	v->a[238015] = state(2803);
	v->a[238016] = 1;
	v->a[238017] = sym__arithmetic_ternary_expression;
	v->a[238018] = state(2809);
	v->a[238019] = 1;
	small_parse_table_11901(v);
}

void	small_parse_table_11901(t_small_parse_table_array *v)
{
	v->a[238020] = sym__arithmetic_unary_expression;
	v->a[238021] = state(2825);
	v->a[238022] = 1;
	v->a[238023] = sym__arithmetic_postfix_expression;
	v->a[238024] = actions(9282);
	v->a[238025] = 2;
	v->a[238026] = anon_sym_PLUS_PLUS2;
	v->a[238027] = anon_sym_DASH_DASH2;
	v->a[238028] = actions(9284);
	v->a[238029] = 2;
	v->a[238030] = anon_sym_DASH2;
	v->a[238031] = anon_sym_PLUS2;
	v->a[238032] = state(2787);
	v->a[238033] = 9;
	v->a[238034] = sym_subscript;
	v->a[238035] = sym__arithmetic_expression;
	v->a[238036] = sym__arithmetic_literal;
	v->a[238037] = sym__arithmetic_parenthesized_expression;
	v->a[238038] = sym_string;
	v->a[238039] = sym_number;
	small_parse_table_11902(v);
}

void	small_parse_table_11902(t_small_parse_table_array *v)
{
	v->a[238040] = sym_simple_expansion;
	v->a[238041] = sym_expansion;
	v->a[238042] = sym_command_substitution;
	v->a[238043] = 18;
	v->a[238044] = actions(3);
	v->a[238045] = 1;
	v->a[238046] = sym_comment;
	v->a[238047] = actions(3032);
	v->a[238048] = 1;
	v->a[238049] = aux_sym_number_token1;
	v->a[238050] = actions(3034);
	v->a[238051] = 1;
	v->a[238052] = aux_sym_number_token2;
	v->a[238053] = actions(3038);
	v->a[238054] = 1;
	v->a[238055] = anon_sym_DOLLAR_LPAREN;
	v->a[238056] = actions(3048);
	v->a[238057] = 1;
	v->a[238058] = sym__brace_start;
	v->a[238059] = actions(10134);
	small_parse_table_11903(v);
}

void	small_parse_table_11903(t_small_parse_table_array *v)
{
	v->a[238060] = 1;
	v->a[238061] = anon_sym_DOLLAR_LBRACK;
	v->a[238062] = actions(10138);
	v->a[238063] = 1;
	v->a[238064] = anon_sym_DQUOTE;
	v->a[238065] = actions(10142);
	v->a[238066] = 1;
	v->a[238067] = anon_sym_DOLLAR_LBRACE;
	v->a[238068] = actions(10144);
	v->a[238069] = 1;
	v->a[238070] = anon_sym_BQUOTE;
	v->a[238071] = actions(10146);
	v->a[238072] = 1;
	v->a[238073] = anon_sym_DOLLAR_BQUOTE;
	v->a[238074] = actions(10556);
	v->a[238075] = 1;
	v->a[238076] = sym_word;
	v->a[238077] = actions(10562);
	v->a[238078] = 1;
	v->a[238079] = sym__comment_word;
	small_parse_table_11904(v);
}

void	small_parse_table_11904(t_small_parse_table_array *v)
{
	v->a[238080] = actions(11202);
	v->a[238081] = 1;
	v->a[238082] = anon_sym_DOLLAR;
	v->a[238083] = actions(10132);
	v->a[238084] = 2;
	v->a[238085] = anon_sym_LPAREN_LPAREN;
	v->a[238086] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[238087] = actions(10148);
	v->a[238088] = 2;
	v->a[238089] = anon_sym_LT_LPAREN;
	v->a[238090] = anon_sym_GT_LPAREN;
	v->a[238091] = actions(10558);
	v->a[238092] = 2;
	v->a[238093] = sym_test_operator;
	v->a[238094] = sym__special_character;
	v->a[238095] = actions(10560);
	v->a[238096] = 3;
	v->a[238097] = sym__bare_dollar;
	v->a[238098] = sym_raw_string;
	v->a[238099] = sym_ansi_c_string;
	small_parse_table_11905(v);
}

/* EOF small_parse_table_2380.c */
