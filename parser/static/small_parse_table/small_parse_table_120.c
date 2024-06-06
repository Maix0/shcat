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
	v->a[12000] = anon_sym_GT;
	v->a[12001] = anon_sym_GT_GT;
	v->a[12002] = anon_sym_AMP_GT;
	v->a[12003] = anon_sym_AMP_GT_GT;
	v->a[12004] = anon_sym_LT_AMP;
	v->a[12005] = anon_sym_GT_AMP;
	v->a[12006] = anon_sym_GT_PIPE;
	v->a[12007] = anon_sym_LT_AMP_DASH;
	v->a[12008] = anon_sym_GT_AMP_DASH;
	v->a[12009] = anon_sym_LT_LT;
	v->a[12010] = anon_sym_LT_LT_DASH;
	v->a[12011] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[12012] = anon_sym_AMP;
	v->a[12013] = anon_sym_DOLLAR;
	v->a[12014] = sym__special_character;
	v->a[12015] = anon_sym_DQUOTE;
	v->a[12016] = sym_raw_string;
	v->a[12017] = aux_sym_number_token1;
	v->a[12018] = aux_sym_number_token2;
	v->a[12019] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_601(v);
}

void	small_parse_table_601(t_small_parse_table_array *v)
{
	v->a[12020] = anon_sym_DOLLAR_LPAREN;
	v->a[12021] = anon_sym_BQUOTE;
	v->a[12022] = anon_sym_DOLLAR_BQUOTE;
	v->a[12023] = sym_word;
	v->a[12024] = anon_sym_SEMI;
	v->a[12025] = 6;
	v->a[12026] = actions(3);
	v->a[12027] = 1;
	v->a[12028] = sym_comment;
	v->a[12029] = actions(1806);
	v->a[12030] = 1;
	v->a[12031] = sym_variable_name;
	v->a[12032] = actions(1804);
	v->a[12033] = 2;
	v->a[12034] = aux_sym__simple_variable_name_token1;
	v->a[12035] = aux_sym__multiline_variable_name_token1;
	v->a[12036] = actions(828);
	v->a[12037] = 3;
	v->a[12038] = sym_file_descriptor;
	v->a[12039] = sym_test_operator;
	small_parse_table_602(v);
}

void	small_parse_table_602(t_small_parse_table_array *v)
{
	v->a[12040] = sym__brace_start;
	v->a[12041] = actions(1802);
	v->a[12042] = 9;
	v->a[12043] = anon_sym_BANG;
	v->a[12044] = anon_sym_DASH;
	v->a[12045] = anon_sym_STAR;
	v->a[12046] = anon_sym_QMARK;
	v->a[12047] = anon_sym_DOLLAR;
	v->a[12048] = anon_sym_POUND;
	v->a[12049] = anon_sym_AT;
	v->a[12050] = anon_sym_0;
	v->a[12051] = anon_sym__;
	v->a[12052] = actions(826);
	v->a[12053] = 31;
	v->a[12054] = anon_sym_PIPE;
	v->a[12055] = anon_sym_SEMI_SEMI;
	v->a[12056] = anon_sym_PIPE_AMP;
	v->a[12057] = anon_sym_AMP_AMP;
	v->a[12058] = anon_sym_PIPE_PIPE;
	v->a[12059] = anon_sym_LT;
	small_parse_table_603(v);
}

void	small_parse_table_603(t_small_parse_table_array *v)
{
	v->a[12060] = anon_sym_GT;
	v->a[12061] = anon_sym_GT_GT;
	v->a[12062] = anon_sym_AMP_GT;
	v->a[12063] = anon_sym_AMP_GT_GT;
	v->a[12064] = anon_sym_LT_AMP;
	v->a[12065] = anon_sym_GT_AMP;
	v->a[12066] = anon_sym_GT_PIPE;
	v->a[12067] = anon_sym_LT_AMP_DASH;
	v->a[12068] = anon_sym_GT_AMP_DASH;
	v->a[12069] = anon_sym_LT_LT;
	v->a[12070] = anon_sym_LT_LT_DASH;
	v->a[12071] = aux_sym_heredoc_redirect_token1;
	v->a[12072] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[12073] = anon_sym_AMP;
	v->a[12074] = sym__special_character;
	v->a[12075] = anon_sym_DQUOTE;
	v->a[12076] = sym_raw_string;
	v->a[12077] = aux_sym_number_token1;
	v->a[12078] = aux_sym_number_token2;
	v->a[12079] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_604(v);
}

void	small_parse_table_604(t_small_parse_table_array *v)
{
	v->a[12080] = anon_sym_DOLLAR_LPAREN;
	v->a[12081] = anon_sym_BQUOTE;
	v->a[12082] = anon_sym_DOLLAR_BQUOTE;
	v->a[12083] = sym_word;
	v->a[12084] = anon_sym_SEMI;
	v->a[12085] = 6;
	v->a[12086] = actions(3);
	v->a[12087] = 1;
	v->a[12088] = sym_comment;
	v->a[12089] = actions(1806);
	v->a[12090] = 1;
	v->a[12091] = sym_variable_name;
	v->a[12092] = actions(1804);
	v->a[12093] = 2;
	v->a[12094] = aux_sym__simple_variable_name_token1;
	v->a[12095] = aux_sym__multiline_variable_name_token1;
	v->a[12096] = actions(816);
	v->a[12097] = 3;
	v->a[12098] = sym_file_descriptor;
	v->a[12099] = sym_test_operator;
	small_parse_table_605(v);
}

/* EOF small_parse_table_120.c */
