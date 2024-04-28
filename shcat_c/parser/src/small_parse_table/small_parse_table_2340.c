/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2340.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11700(t_small_parse_table_array *v)
{
	v->a[234000] = actions(2656);
	v->a[234001] = 1;
	v->a[234002] = anon_sym_DOLLAR_BQUOTE;
	v->a[234003] = actions(2664);
	v->a[234004] = 1;
	v->a[234005] = sym__brace_start;
	v->a[234006] = actions(9620);
	v->a[234007] = 1;
	v->a[234008] = sym_word;
	v->a[234009] = actions(9626);
	v->a[234010] = 1;
	v->a[234011] = sym__comment_word;
	v->a[234012] = actions(11050);
	v->a[234013] = 1;
	v->a[234014] = anon_sym_DOLLAR;
	v->a[234015] = actions(2630);
	v->a[234016] = 2;
	v->a[234017] = anon_sym_LPAREN_LPAREN;
	v->a[234018] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[234019] = actions(2658);
	small_parse_table_11701(v);
}

void	small_parse_table_11701(t_small_parse_table_array *v)
{
	v->a[234020] = 2;
	v->a[234021] = anon_sym_LT_LPAREN;
	v->a[234022] = anon_sym_GT_LPAREN;
	v->a[234023] = actions(9622);
	v->a[234024] = 2;
	v->a[234025] = sym_test_operator;
	v->a[234026] = sym__special_character;
	v->a[234027] = actions(9624);
	v->a[234028] = 3;
	v->a[234029] = sym__bare_dollar;
	v->a[234030] = sym_raw_string;
	v->a[234031] = sym_ansi_c_string;
	v->a[234032] = state(2344);
	v->a[234033] = 9;
	v->a[234034] = sym_arithmetic_expansion;
	v->a[234035] = sym_brace_expression;
	v->a[234036] = sym_string;
	v->a[234037] = sym_translated_string;
	v->a[234038] = sym_number;
	v->a[234039] = sym_simple_expansion;
	small_parse_table_11702(v);
}

void	small_parse_table_11702(t_small_parse_table_array *v)
{
	v->a[234040] = sym_expansion;
	v->a[234041] = sym_command_substitution;
	v->a[234042] = sym_process_substitution;
	v->a[234043] = 18;
	v->a[234044] = actions(3);
	v->a[234045] = 1;
	v->a[234046] = sym_comment;
	v->a[234047] = actions(3441);
	v->a[234048] = 1;
	v->a[234049] = aux_sym_number_token1;
	v->a[234050] = actions(3443);
	v->a[234051] = 1;
	v->a[234052] = aux_sym_number_token2;
	v->a[234053] = actions(3447);
	v->a[234054] = 1;
	v->a[234055] = anon_sym_DOLLAR_LPAREN;
	v->a[234056] = actions(3459);
	v->a[234057] = 1;
	v->a[234058] = sym__brace_start;
	v->a[234059] = actions(10930);
	small_parse_table_11703(v);
}

void	small_parse_table_11703(t_small_parse_table_array *v)
{
	v->a[234060] = 1;
	v->a[234061] = sym_word;
	v->a[234062] = actions(10934);
	v->a[234063] = 1;
	v->a[234064] = anon_sym_DOLLAR_LBRACK;
	v->a[234065] = actions(10940);
	v->a[234066] = 1;
	v->a[234067] = anon_sym_DQUOTE;
	v->a[234068] = actions(10944);
	v->a[234069] = 1;
	v->a[234070] = anon_sym_DOLLAR_LBRACE;
	v->a[234071] = actions(10946);
	v->a[234072] = 1;
	v->a[234073] = anon_sym_BQUOTE;
	v->a[234074] = actions(10948);
	v->a[234075] = 1;
	v->a[234076] = anon_sym_DOLLAR_BQUOTE;
	v->a[234077] = actions(10952);
	v->a[234078] = 1;
	v->a[234079] = sym__comment_word;
	small_parse_table_11704(v);
}

void	small_parse_table_11704(t_small_parse_table_array *v)
{
	v->a[234080] = actions(11052);
	v->a[234081] = 1;
	v->a[234082] = anon_sym_DOLLAR;
	v->a[234083] = actions(10932);
	v->a[234084] = 2;
	v->a[234085] = anon_sym_LPAREN_LPAREN;
	v->a[234086] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[234087] = actions(10938);
	v->a[234088] = 2;
	v->a[234089] = sym_test_operator;
	v->a[234090] = sym__special_character;
	v->a[234091] = actions(10950);
	v->a[234092] = 2;
	v->a[234093] = anon_sym_LT_LPAREN;
	v->a[234094] = anon_sym_GT_LPAREN;
	v->a[234095] = actions(10942);
	v->a[234096] = 3;
	v->a[234097] = sym__bare_dollar;
	v->a[234098] = sym_raw_string;
	v->a[234099] = sym_ansi_c_string;
	small_parse_table_11705(v);
}

/* EOF small_parse_table_2340.c */
