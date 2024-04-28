/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_120.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_600(t_small_parse_table_array *v)
{
	v->a[12000] = 21;
	v->a[12001] = actions(3);
	v->a[12002] = 1;
	v->a[12003] = sym_comment;
	v->a[12004] = actions(2572);
	v->a[12005] = 1;
	v->a[12006] = anon_sym_DOLLAR_LBRACK;
	v->a[12007] = actions(2574);
	v->a[12008] = 1;
	v->a[12009] = anon_sym_DOLLAR;
	v->a[12010] = actions(2576);
	v->a[12011] = 1;
	v->a[12012] = sym__special_character;
	v->a[12013] = actions(2578);
	v->a[12014] = 1;
	v->a[12015] = anon_sym_DQUOTE;
	v->a[12016] = actions(2580);
	v->a[12017] = 1;
	v->a[12018] = aux_sym_number_token1;
	v->a[12019] = actions(2582);
	small_parse_table_601(v);
}

void	small_parse_table_601(t_small_parse_table_array *v)
{
	v->a[12020] = 1;
	v->a[12021] = aux_sym_number_token2;
	v->a[12022] = actions(2584);
	v->a[12023] = 1;
	v->a[12024] = anon_sym_DOLLAR_LBRACE;
	v->a[12025] = actions(2586);
	v->a[12026] = 1;
	v->a[12027] = anon_sym_DOLLAR_LPAREN;
	v->a[12028] = actions(2588);
	v->a[12029] = 1;
	v->a[12030] = anon_sym_BQUOTE;
	v->a[12031] = actions(2590);
	v->a[12032] = 1;
	v->a[12033] = anon_sym_DOLLAR_BQUOTE;
	v->a[12034] = actions(2594);
	v->a[12035] = 1;
	v->a[12036] = sym_test_operator;
	v->a[12037] = actions(2596);
	v->a[12038] = 1;
	v->a[12039] = sym__brace_start;
	small_parse_table_602(v);
}

void	small_parse_table_602(t_small_parse_table_array *v)
{
	v->a[12040] = state(1899);
	v->a[12041] = 1;
	v->a[12042] = aux_sym__literal_repeat1;
	v->a[12043] = actions(2096);
	v->a[12044] = 2;
	v->a[12045] = sym_file_descriptor;
	v->a[12046] = aux_sym_heredoc_redirect_token1;
	v->a[12047] = actions(2570);
	v->a[12048] = 2;
	v->a[12049] = anon_sym_LPAREN_LPAREN;
	v->a[12050] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[12051] = actions(2592);
	v->a[12052] = 2;
	v->a[12053] = anon_sym_LT_LPAREN;
	v->a[12054] = anon_sym_GT_LPAREN;
	v->a[12055] = state(621);
	v->a[12056] = 2;
	v->a[12057] = sym_concatenation;
	v->a[12058] = aux_sym_for_statement_repeat1;
	v->a[12059] = actions(2568);
	small_parse_table_603(v);
}

void	small_parse_table_603(t_small_parse_table_array *v)
{
	v->a[12060] = 3;
	v->a[12061] = sym_raw_string;
	v->a[12062] = sym_ansi_c_string;
	v->a[12063] = sym_word;
	v->a[12064] = state(1394);
	v->a[12065] = 9;
	v->a[12066] = sym_arithmetic_expansion;
	v->a[12067] = sym_brace_expression;
	v->a[12068] = sym_string;
	v->a[12069] = sym_translated_string;
	v->a[12070] = sym_number;
	v->a[12071] = sym_simple_expansion;
	v->a[12072] = sym_expansion;
	v->a[12073] = sym_command_substitution;
	v->a[12074] = sym_process_substitution;
	v->a[12075] = actions(2094);
	v->a[12076] = 22;
	v->a[12077] = anon_sym_SEMI;
	v->a[12078] = anon_sym_PIPE_PIPE;
	v->a[12079] = anon_sym_AMP_AMP;
	small_parse_table_604(v);
}

void	small_parse_table_604(t_small_parse_table_array *v)
{
	v->a[12080] = anon_sym_PIPE;
	v->a[12081] = anon_sym_AMP;
	v->a[12082] = anon_sym_LT;
	v->a[12083] = anon_sym_GT;
	v->a[12084] = anon_sym_LT_LT;
	v->a[12085] = anon_sym_GT_GT;
	v->a[12086] = anon_sym_SEMI_SEMI;
	v->a[12087] = anon_sym_SEMI_AMP;
	v->a[12088] = anon_sym_SEMI_SEMI_AMP;
	v->a[12089] = anon_sym_PIPE_AMP;
	v->a[12090] = anon_sym_AMP_GT;
	v->a[12091] = anon_sym_AMP_GT_GT;
	v->a[12092] = anon_sym_LT_AMP;
	v->a[12093] = anon_sym_GT_AMP;
	v->a[12094] = anon_sym_GT_PIPE;
	v->a[12095] = anon_sym_LT_AMP_DASH;
	v->a[12096] = anon_sym_GT_AMP_DASH;
	v->a[12097] = anon_sym_LT_LT_DASH;
	v->a[12098] = anon_sym_LT_LT_LT;
	v->a[12099] = 6;
	small_parse_table_605(v);
}

/* EOF small_parse_table_120.c */
