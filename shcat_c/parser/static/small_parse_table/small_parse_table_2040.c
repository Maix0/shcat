/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2040.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10200(t_small_parse_table_array *v)
{
	v->a[204000] = 1;
	v->a[204001] = sym_test_operator;
	v->a[204002] = state(2370);
	v->a[204003] = 1;
	v->a[204004] = aux_sym__literal_repeat1;
	v->a[204005] = state(2534);
	v->a[204006] = 1;
	v->a[204007] = sym_concatenation;
	v->a[204008] = actions(2630);
	v->a[204009] = 2;
	v->a[204010] = anon_sym_LPAREN_LPAREN;
	v->a[204011] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[204012] = actions(2658);
	v->a[204013] = 2;
	v->a[204014] = anon_sym_LT_LPAREN;
	v->a[204015] = anon_sym_GT_LPAREN;
	v->a[204016] = actions(9430);
	v->a[204017] = 2;
	v->a[204018] = sym_raw_string;
	v->a[204019] = sym_ansi_c_string;
	small_parse_table_10201(v);
}

void	small_parse_table_10201(t_small_parse_table_array *v)
{
	v->a[204020] = state(2154);
	v->a[204021] = 9;
	v->a[204022] = sym_arithmetic_expansion;
	v->a[204023] = sym_brace_expression;
	v->a[204024] = sym_string;
	v->a[204025] = sym_translated_string;
	v->a[204026] = sym_number;
	v->a[204027] = sym_simple_expansion;
	v->a[204028] = sym_expansion;
	v->a[204029] = sym_command_substitution;
	v->a[204030] = sym_process_substitution;
	v->a[204031] = 20;
	v->a[204032] = actions(71);
	v->a[204033] = 1;
	v->a[204034] = sym_comment;
	v->a[204035] = actions(4767);
	v->a[204036] = 1;
	v->a[204037] = anon_sym_DOLLAR_LBRACK;
	v->a[204038] = actions(4769);
	v->a[204039] = 1;
	small_parse_table_10202(v);
}

void	small_parse_table_10202(t_small_parse_table_array *v)
{
	v->a[204040] = anon_sym_DOLLAR;
	v->a[204041] = actions(4773);
	v->a[204042] = 1;
	v->a[204043] = anon_sym_DQUOTE;
	v->a[204044] = actions(4777);
	v->a[204045] = 1;
	v->a[204046] = aux_sym_number_token1;
	v->a[204047] = actions(4779);
	v->a[204048] = 1;
	v->a[204049] = aux_sym_number_token2;
	v->a[204050] = actions(4781);
	v->a[204051] = 1;
	v->a[204052] = anon_sym_DOLLAR_LBRACE;
	v->a[204053] = actions(4783);
	v->a[204054] = 1;
	v->a[204055] = anon_sym_DOLLAR_LPAREN;
	v->a[204056] = actions(4785);
	v->a[204057] = 1;
	v->a[204058] = anon_sym_BQUOTE;
	v->a[204059] = actions(4787);
	small_parse_table_10203(v);
}

void	small_parse_table_10203(t_small_parse_table_array *v)
{
	v->a[204060] = 1;
	v->a[204061] = anon_sym_DOLLAR_BQUOTE;
	v->a[204062] = actions(4793);
	v->a[204063] = 1;
	v->a[204064] = sym__brace_start;
	v->a[204065] = actions(9434);
	v->a[204066] = 1;
	v->a[204067] = sym_word;
	v->a[204068] = actions(9436);
	v->a[204069] = 1;
	v->a[204070] = sym__special_character;
	v->a[204071] = actions(9440);
	v->a[204072] = 1;
	v->a[204073] = sym_test_operator;
	v->a[204074] = state(5258);
	v->a[204075] = 1;
	v->a[204076] = aux_sym__literal_repeat1;
	v->a[204077] = state(5543);
	v->a[204078] = 1;
	v->a[204079] = sym_concatenation;
	small_parse_table_10204(v);
}

void	small_parse_table_10204(t_small_parse_table_array *v)
{
	v->a[204080] = actions(4765);
	v->a[204081] = 2;
	v->a[204082] = anon_sym_LPAREN_LPAREN;
	v->a[204083] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[204084] = actions(4789);
	v->a[204085] = 2;
	v->a[204086] = anon_sym_LT_LPAREN;
	v->a[204087] = anon_sym_GT_LPAREN;
	v->a[204088] = actions(9438);
	v->a[204089] = 2;
	v->a[204090] = sym_raw_string;
	v->a[204091] = sym_ansi_c_string;
	v->a[204092] = state(5173);
	v->a[204093] = 9;
	v->a[204094] = sym_arithmetic_expansion;
	v->a[204095] = sym_brace_expression;
	v->a[204096] = sym_string;
	v->a[204097] = sym_translated_string;
	v->a[204098] = sym_number;
	v->a[204099] = sym_simple_expansion;
	small_parse_table_10205(v);
}

/* EOF small_parse_table_2040.c */
