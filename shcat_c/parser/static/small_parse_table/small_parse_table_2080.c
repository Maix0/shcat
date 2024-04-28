/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2080.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10400(t_small_parse_table_array *v)
{
	v->a[208000] = sym_arithmetic_expansion;
	v->a[208001] = sym_brace_expression;
	v->a[208002] = sym_string;
	v->a[208003] = sym_translated_string;
	v->a[208004] = sym_number;
	v->a[208005] = sym_simple_expansion;
	v->a[208006] = sym_expansion;
	v->a[208007] = sym_command_substitution;
	v->a[208008] = sym_process_substitution;
	v->a[208009] = 20;
	v->a[208010] = actions(71);
	v->a[208011] = 1;
	v->a[208012] = sym_comment;
	v->a[208013] = actions(5261);
	v->a[208014] = 1;
	v->a[208015] = anon_sym_DOLLAR_LBRACK;
	v->a[208016] = actions(5263);
	v->a[208017] = 1;
	v->a[208018] = anon_sym_DOLLAR;
	v->a[208019] = actions(5265);
	small_parse_table_10401(v);
}

void	small_parse_table_10401(t_small_parse_table_array *v)
{
	v->a[208020] = 1;
	v->a[208021] = sym__special_character;
	v->a[208022] = actions(5267);
	v->a[208023] = 1;
	v->a[208024] = anon_sym_DQUOTE;
	v->a[208025] = actions(5271);
	v->a[208026] = 1;
	v->a[208027] = aux_sym_number_token1;
	v->a[208028] = actions(5273);
	v->a[208029] = 1;
	v->a[208030] = aux_sym_number_token2;
	v->a[208031] = actions(5275);
	v->a[208032] = 1;
	v->a[208033] = anon_sym_DOLLAR_LBRACE;
	v->a[208034] = actions(5277);
	v->a[208035] = 1;
	v->a[208036] = anon_sym_DOLLAR_LPAREN;
	v->a[208037] = actions(5279);
	v->a[208038] = 1;
	v->a[208039] = anon_sym_BQUOTE;
	small_parse_table_10402(v);
}

void	small_parse_table_10402(t_small_parse_table_array *v)
{
	v->a[208040] = actions(5281);
	v->a[208041] = 1;
	v->a[208042] = anon_sym_DOLLAR_BQUOTE;
	v->a[208043] = actions(5287);
	v->a[208044] = 1;
	v->a[208045] = sym__brace_start;
	v->a[208046] = actions(9732);
	v->a[208047] = 1;
	v->a[208048] = sym_word;
	v->a[208049] = actions(9736);
	v->a[208050] = 1;
	v->a[208051] = sym_test_operator;
	v->a[208052] = state(5466);
	v->a[208053] = 1;
	v->a[208054] = aux_sym__literal_repeat1;
	v->a[208055] = state(5612);
	v->a[208056] = 1;
	v->a[208057] = sym_concatenation;
	v->a[208058] = actions(5259);
	v->a[208059] = 2;
	small_parse_table_10403(v);
}

void	small_parse_table_10403(t_small_parse_table_array *v)
{
	v->a[208060] = anon_sym_LPAREN_LPAREN;
	v->a[208061] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[208062] = actions(5283);
	v->a[208063] = 2;
	v->a[208064] = anon_sym_LT_LPAREN;
	v->a[208065] = anon_sym_GT_LPAREN;
	v->a[208066] = actions(9734);
	v->a[208067] = 2;
	v->a[208068] = sym_raw_string;
	v->a[208069] = sym_ansi_c_string;
	v->a[208070] = state(5303);
	v->a[208071] = 9;
	v->a[208072] = sym_arithmetic_expansion;
	v->a[208073] = sym_brace_expression;
	v->a[208074] = sym_string;
	v->a[208075] = sym_translated_string;
	v->a[208076] = sym_number;
	v->a[208077] = sym_simple_expansion;
	v->a[208078] = sym_expansion;
	v->a[208079] = sym_command_substitution;
	small_parse_table_10404(v);
}

void	small_parse_table_10404(t_small_parse_table_array *v)
{
	v->a[208080] = sym_process_substitution;
	v->a[208081] = 18;
	v->a[208082] = actions(3);
	v->a[208083] = 1;
	v->a[208084] = sym_comment;
	v->a[208085] = actions(3401);
	v->a[208086] = 1;
	v->a[208087] = aux_sym_number_token1;
	v->a[208088] = actions(3403);
	v->a[208089] = 1;
	v->a[208090] = aux_sym_number_token2;
	v->a[208091] = actions(3407);
	v->a[208092] = 1;
	v->a[208093] = anon_sym_DOLLAR_LPAREN;
	v->a[208094] = actions(3417);
	v->a[208095] = 1;
	v->a[208096] = sym__brace_start;
	v->a[208097] = actions(8926);
	v->a[208098] = 1;
	v->a[208099] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_10405(v);
}

/* EOF small_parse_table_2080.c */
