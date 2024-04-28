/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2250.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11250(t_small_parse_table_array *v)
{
	v->a[225000] = actions(10700);
	v->a[225001] = 1;
	v->a[225002] = anon_sym_DOLLAR;
	v->a[225003] = actions(352);
	v->a[225004] = 2;
	v->a[225005] = anon_sym_LPAREN_LPAREN;
	v->a[225006] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[225007] = actions(387);
	v->a[225008] = 2;
	v->a[225009] = anon_sym_LT_LPAREN;
	v->a[225010] = anon_sym_GT_LPAREN;
	v->a[225011] = actions(8844);
	v->a[225012] = 2;
	v->a[225013] = sym_test_operator;
	v->a[225014] = sym__special_character;
	v->a[225015] = actions(8842);
	v->a[225016] = 3;
	v->a[225017] = sym__bare_dollar;
	v->a[225018] = sym_raw_string;
	v->a[225019] = sym_ansi_c_string;
	small_parse_table_11251(v);
}

void	small_parse_table_11251(t_small_parse_table_array *v)
{
	v->a[225020] = state(2730);
	v->a[225021] = 9;
	v->a[225022] = sym_arithmetic_expansion;
	v->a[225023] = sym_brace_expression;
	v->a[225024] = sym_string;
	v->a[225025] = sym_translated_string;
	v->a[225026] = sym_number;
	v->a[225027] = sym_simple_expansion;
	v->a[225028] = sym_expansion;
	v->a[225029] = sym_command_substitution;
	v->a[225030] = sym_process_substitution;
	v->a[225031] = 18;
	v->a[225032] = actions(3);
	v->a[225033] = 1;
	v->a[225034] = sym_comment;
	v->a[225035] = actions(363);
	v->a[225036] = 1;
	v->a[225037] = anon_sym_DOLLAR_LBRACK;
	v->a[225038] = actions(371);
	v->a[225039] = 1;
	small_parse_table_11252(v);
}

void	small_parse_table_11252(t_small_parse_table_array *v)
{
	v->a[225040] = anon_sym_DQUOTE;
	v->a[225041] = actions(375);
	v->a[225042] = 1;
	v->a[225043] = aux_sym_number_token1;
	v->a[225044] = actions(377);
	v->a[225045] = 1;
	v->a[225046] = aux_sym_number_token2;
	v->a[225047] = actions(379);
	v->a[225048] = 1;
	v->a[225049] = anon_sym_DOLLAR_LBRACE;
	v->a[225050] = actions(381);
	v->a[225051] = 1;
	v->a[225052] = anon_sym_DOLLAR_LPAREN;
	v->a[225053] = actions(385);
	v->a[225054] = 1;
	v->a[225055] = anon_sym_DOLLAR_BQUOTE;
	v->a[225056] = actions(391);
	v->a[225057] = 1;
	v->a[225058] = sym__brace_start;
	v->a[225059] = actions(5809);
	small_parse_table_11253(v);
}

void	small_parse_table_11253(t_small_parse_table_array *v)
{
	v->a[225060] = 1;
	v->a[225061] = anon_sym_BQUOTE;
	v->a[225062] = actions(8836);
	v->a[225063] = 1;
	v->a[225064] = sym_word;
	v->a[225065] = actions(8840);
	v->a[225066] = 1;
	v->a[225067] = sym__comment_word;
	v->a[225068] = actions(10702);
	v->a[225069] = 1;
	v->a[225070] = anon_sym_DOLLAR;
	v->a[225071] = actions(352);
	v->a[225072] = 2;
	v->a[225073] = anon_sym_LPAREN_LPAREN;
	v->a[225074] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[225075] = actions(387);
	v->a[225076] = 2;
	v->a[225077] = anon_sym_LT_LPAREN;
	v->a[225078] = anon_sym_GT_LPAREN;
	v->a[225079] = actions(8844);
	small_parse_table_11254(v);
}

void	small_parse_table_11254(t_small_parse_table_array *v)
{
	v->a[225080] = 2;
	v->a[225081] = sym_test_operator;
	v->a[225082] = sym__special_character;
	v->a[225083] = actions(8842);
	v->a[225084] = 3;
	v->a[225085] = sym__bare_dollar;
	v->a[225086] = sym_raw_string;
	v->a[225087] = sym_ansi_c_string;
	v->a[225088] = state(2730);
	v->a[225089] = 9;
	v->a[225090] = sym_arithmetic_expansion;
	v->a[225091] = sym_brace_expression;
	v->a[225092] = sym_string;
	v->a[225093] = sym_translated_string;
	v->a[225094] = sym_number;
	v->a[225095] = sym_simple_expansion;
	v->a[225096] = sym_expansion;
	v->a[225097] = sym_command_substitution;
	v->a[225098] = sym_process_substitution;
	v->a[225099] = 18;
	small_parse_table_11255(v);
}

/* EOF small_parse_table_2250.c */
