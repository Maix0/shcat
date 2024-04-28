/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2020.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10100(t_small_parse_table_array *v)
{
	v->a[202000] = actions(9060);
	v->a[202001] = 2;
	v->a[202002] = anon_sym_LT_LPAREN;
	v->a[202003] = anon_sym_GT_LPAREN;
	v->a[202004] = state(680);
	v->a[202005] = 2;
	v->a[202006] = sym_concatenation;
	v->a[202007] = aux_sym_for_statement_repeat1;
	v->a[202008] = state(1526);
	v->a[202009] = 9;
	v->a[202010] = sym_arithmetic_expansion;
	v->a[202011] = sym_brace_expression;
	v->a[202012] = sym_string;
	v->a[202013] = sym_translated_string;
	v->a[202014] = sym_number;
	v->a[202015] = sym_simple_expansion;
	v->a[202016] = sym_expansion;
	v->a[202017] = sym_command_substitution;
	v->a[202018] = sym_process_substitution;
	v->a[202019] = 20;
	small_parse_table_10101(v);
}

void	small_parse_table_10101(t_small_parse_table_array *v)
{
	v->a[202020] = actions(71);
	v->a[202021] = 1;
	v->a[202022] = sym_comment;
	v->a[202023] = actions(8178);
	v->a[202024] = 1;
	v->a[202025] = anon_sym_DOLLAR_LBRACK;
	v->a[202026] = actions(8180);
	v->a[202027] = 1;
	v->a[202028] = anon_sym_DOLLAR;
	v->a[202029] = actions(8182);
	v->a[202030] = 1;
	v->a[202031] = sym__special_character;
	v->a[202032] = actions(8184);
	v->a[202033] = 1;
	v->a[202034] = anon_sym_DQUOTE;
	v->a[202035] = actions(8188);
	v->a[202036] = 1;
	v->a[202037] = aux_sym_number_token1;
	v->a[202038] = actions(8190);
	v->a[202039] = 1;
	small_parse_table_10102(v);
}

void	small_parse_table_10102(t_small_parse_table_array *v)
{
	v->a[202040] = aux_sym_number_token2;
	v->a[202041] = actions(8192);
	v->a[202042] = 1;
	v->a[202043] = anon_sym_DOLLAR_LBRACE;
	v->a[202044] = actions(8194);
	v->a[202045] = 1;
	v->a[202046] = anon_sym_DOLLAR_LPAREN;
	v->a[202047] = actions(8196);
	v->a[202048] = 1;
	v->a[202049] = anon_sym_BQUOTE;
	v->a[202050] = actions(8198);
	v->a[202051] = 1;
	v->a[202052] = anon_sym_DOLLAR_BQUOTE;
	v->a[202053] = actions(8208);
	v->a[202054] = 1;
	v->a[202055] = sym__brace_start;
	v->a[202056] = actions(9230);
	v->a[202057] = 1;
	v->a[202058] = sym_word;
	v->a[202059] = actions(9234);
	small_parse_table_10103(v);
}

void	small_parse_table_10103(t_small_parse_table_array *v)
{
	v->a[202060] = 1;
	v->a[202061] = sym_test_operator;
	v->a[202062] = state(1744);
	v->a[202063] = 1;
	v->a[202064] = aux_sym__literal_repeat1;
	v->a[202065] = actions(8174);
	v->a[202066] = 2;
	v->a[202067] = anon_sym_LPAREN_LPAREN;
	v->a[202068] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[202069] = actions(8200);
	v->a[202070] = 2;
	v->a[202071] = anon_sym_LT_LPAREN;
	v->a[202072] = anon_sym_GT_LPAREN;
	v->a[202073] = actions(9232);
	v->a[202074] = 2;
	v->a[202075] = sym_raw_string;
	v->a[202076] = sym_ansi_c_string;
	v->a[202077] = state(816);
	v->a[202078] = 2;
	v->a[202079] = sym_concatenation;
	small_parse_table_10104(v);
}

void	small_parse_table_10104(t_small_parse_table_array *v)
{
	v->a[202080] = aux_sym_for_statement_repeat1;
	v->a[202081] = state(2337);
	v->a[202082] = 9;
	v->a[202083] = sym_arithmetic_expansion;
	v->a[202084] = sym_brace_expression;
	v->a[202085] = sym_string;
	v->a[202086] = sym_translated_string;
	v->a[202087] = sym_number;
	v->a[202088] = sym_simple_expansion;
	v->a[202089] = sym_expansion;
	v->a[202090] = sym_command_substitution;
	v->a[202091] = sym_process_substitution;
	v->a[202092] = 20;
	v->a[202093] = actions(71);
	v->a[202094] = 1;
	v->a[202095] = sym_comment;
	v->a[202096] = actions(4943);
	v->a[202097] = 1;
	v->a[202098] = sym_word;
	v->a[202099] = actions(4947);
	small_parse_table_10105(v);
}

/* EOF small_parse_table_2020.c */
