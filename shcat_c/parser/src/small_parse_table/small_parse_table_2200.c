/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2200.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11000(t_small_parse_table_array *v)
{
	v->a[220000] = 1;
	v->a[220001] = anon_sym_DQUOTE;
	v->a[220002] = actions(8240);
	v->a[220003] = 1;
	v->a[220004] = anon_sym_DOLLAR_LBRACE;
	v->a[220005] = actions(8242);
	v->a[220006] = 1;
	v->a[220007] = anon_sym_BQUOTE;
	v->a[220008] = actions(8244);
	v->a[220009] = 1;
	v->a[220010] = anon_sym_DOLLAR_BQUOTE;
	v->a[220011] = actions(10488);
	v->a[220012] = 1;
	v->a[220013] = sym_word;
	v->a[220014] = actions(10494);
	v->a[220015] = 1;
	v->a[220016] = sym__comment_word;
	v->a[220017] = actions(8228);
	v->a[220018] = 2;
	v->a[220019] = anon_sym_LPAREN_LPAREN;
	small_parse_table_11001(v);
}

void	small_parse_table_11001(t_small_parse_table_array *v)
{
	v->a[220020] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[220021] = actions(8246);
	v->a[220022] = 2;
	v->a[220023] = anon_sym_LT_LPAREN;
	v->a[220024] = anon_sym_GT_LPAREN;
	v->a[220025] = actions(10490);
	v->a[220026] = 2;
	v->a[220027] = sym_test_operator;
	v->a[220028] = sym__special_character;
	v->a[220029] = actions(10492);
	v->a[220030] = 3;
	v->a[220031] = sym__bare_dollar;
	v->a[220032] = sym_raw_string;
	v->a[220033] = sym_ansi_c_string;
	v->a[220034] = state(1440);
	v->a[220035] = 9;
	v->a[220036] = sym_arithmetic_expansion;
	v->a[220037] = sym_brace_expression;
	v->a[220038] = sym_string;
	v->a[220039] = sym_translated_string;
	small_parse_table_11002(v);
}

void	small_parse_table_11002(t_small_parse_table_array *v)
{
	v->a[220040] = sym_number;
	v->a[220041] = sym_simple_expansion;
	v->a[220042] = sym_expansion;
	v->a[220043] = sym_command_substitution;
	v->a[220044] = sym_process_substitution;
	v->a[220045] = 21;
	v->a[220046] = actions(71);
	v->a[220047] = 1;
	v->a[220048] = sym_comment;
	v->a[220049] = actions(9364);
	v->a[220050] = 1;
	v->a[220051] = anon_sym_LPAREN;
	v->a[220052] = actions(9366);
	v->a[220053] = 1;
	v->a[220054] = anon_sym_BANG;
	v->a[220055] = actions(9372);
	v->a[220056] = 1;
	v->a[220057] = anon_sym_TILDE;
	v->a[220058] = actions(9374);
	v->a[220059] = 1;
	small_parse_table_11003(v);
}

void	small_parse_table_11003(t_small_parse_table_array *v)
{
	v->a[220060] = anon_sym_DOLLAR;
	v->a[220061] = actions(9376);
	v->a[220062] = 1;
	v->a[220063] = anon_sym_DQUOTE;
	v->a[220064] = actions(9378);
	v->a[220065] = 1;
	v->a[220066] = aux_sym_number_token1;
	v->a[220067] = actions(9380);
	v->a[220068] = 1;
	v->a[220069] = aux_sym_number_token2;
	v->a[220070] = actions(9382);
	v->a[220071] = 1;
	v->a[220072] = anon_sym_DOLLAR_LBRACE;
	v->a[220073] = actions(9384);
	v->a[220074] = 1;
	v->a[220075] = anon_sym_DOLLAR_LPAREN;
	v->a[220076] = actions(9386);
	v->a[220077] = 1;
	v->a[220078] = anon_sym_BQUOTE;
	v->a[220079] = actions(9388);
	small_parse_table_11004(v);
}

void	small_parse_table_11004(t_small_parse_table_array *v)
{
	v->a[220080] = 1;
	v->a[220081] = anon_sym_DOLLAR_BQUOTE;
	v->a[220082] = actions(9392);
	v->a[220083] = 1;
	v->a[220084] = sym_variable_name;
	v->a[220085] = actions(10496);
	v->a[220086] = 1;
	v->a[220087] = aux_sym__simple_variable_name_token1;
	v->a[220088] = state(3391);
	v->a[220089] = 1;
	v->a[220090] = sym__arithmetic_binary_expression;
	v->a[220091] = state(3396);
	v->a[220092] = 1;
	v->a[220093] = sym__arithmetic_ternary_expression;
	v->a[220094] = state(3398);
	v->a[220095] = 1;
	v->a[220096] = sym__arithmetic_unary_expression;
	v->a[220097] = state(3400);
	v->a[220098] = 1;
	v->a[220099] = sym__arithmetic_postfix_expression;
	small_parse_table_11005(v);
}

/* EOF small_parse_table_2200.c */
