/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_790.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3950(t_small_parse_table_array *v)
{
	v->a[79000] = 3;
	v->a[79001] = actions(3);
	v->a[79002] = 1;
	v->a[79003] = sym_comment;
	v->a[79004] = actions(4465);
	v->a[79005] = 6;
	v->a[79006] = sym_file_descriptor;
	v->a[79007] = sym_test_operator;
	v->a[79008] = sym__bare_dollar;
	v->a[79009] = sym__brace_start;
	v->a[79010] = ts_builtin_sym_end;
	v->a[79011] = aux_sym_heredoc_redirect_token1;
	v->a[79012] = actions(4463);
	v->a[79013] = 39;
	v->a[79014] = anon_sym_LPAREN_LPAREN;
	v->a[79015] = anon_sym_SEMI;
	v->a[79016] = anon_sym_PIPE_PIPE;
	v->a[79017] = anon_sym_AMP_AMP;
	v->a[79018] = anon_sym_PIPE;
	v->a[79019] = anon_sym_AMP;
	small_parse_table_3951(v);
}

void	small_parse_table_3951(t_small_parse_table_array *v)
{
	v->a[79020] = anon_sym_EQ_EQ;
	v->a[79021] = anon_sym_LT;
	v->a[79022] = anon_sym_GT;
	v->a[79023] = anon_sym_LT_LT;
	v->a[79024] = anon_sym_GT_GT;
	v->a[79025] = anon_sym_SEMI_SEMI;
	v->a[79026] = anon_sym_PIPE_AMP;
	v->a[79027] = anon_sym_EQ_TILDE;
	v->a[79028] = anon_sym_AMP_GT;
	v->a[79029] = anon_sym_AMP_GT_GT;
	v->a[79030] = anon_sym_LT_AMP;
	v->a[79031] = anon_sym_GT_AMP;
	v->a[79032] = anon_sym_GT_PIPE;
	v->a[79033] = anon_sym_LT_AMP_DASH;
	v->a[79034] = anon_sym_GT_AMP_DASH;
	v->a[79035] = anon_sym_LT_LT_DASH;
	v->a[79036] = anon_sym_LT_LT_LT;
	v->a[79037] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79038] = anon_sym_DOLLAR_LBRACK;
	v->a[79039] = anon_sym_DOLLAR;
	small_parse_table_3952(v);
}

void	small_parse_table_3952(t_small_parse_table_array *v)
{
	v->a[79040] = sym__special_character;
	v->a[79041] = anon_sym_DQUOTE;
	v->a[79042] = sym_raw_string;
	v->a[79043] = sym_ansi_c_string;
	v->a[79044] = aux_sym_number_token1;
	v->a[79045] = aux_sym_number_token2;
	v->a[79046] = anon_sym_DOLLAR_LBRACE;
	v->a[79047] = anon_sym_DOLLAR_LPAREN;
	v->a[79048] = anon_sym_BQUOTE;
	v->a[79049] = anon_sym_DOLLAR_BQUOTE;
	v->a[79050] = anon_sym_LT_LPAREN;
	v->a[79051] = anon_sym_GT_LPAREN;
	v->a[79052] = sym_word;
	v->a[79053] = 3;
	v->a[79054] = actions(3);
	v->a[79055] = 1;
	v->a[79056] = sym_comment;
	v->a[79057] = actions(1302);
	v->a[79058] = 5;
	v->a[79059] = sym_file_descriptor;
	small_parse_table_3953(v);
}

void	small_parse_table_3953(t_small_parse_table_array *v)
{
	v->a[79060] = sym__concat;
	v->a[79061] = sym_test_operator;
	v->a[79062] = sym__brace_start;
	v->a[79063] = aux_sym_heredoc_redirect_token1;
	v->a[79064] = actions(1300);
	v->a[79065] = 40;
	v->a[79066] = anon_sym_LPAREN_LPAREN;
	v->a[79067] = anon_sym_SEMI;
	v->a[79068] = anon_sym_PIPE_PIPE;
	v->a[79069] = anon_sym_AMP_AMP;
	v->a[79070] = anon_sym_PIPE;
	v->a[79071] = anon_sym_AMP;
	v->a[79072] = anon_sym_LT;
	v->a[79073] = anon_sym_GT;
	v->a[79074] = anon_sym_LT_LT;
	v->a[79075] = anon_sym_GT_GT;
	v->a[79076] = anon_sym_SEMI_SEMI;
	v->a[79077] = anon_sym_SEMI_AMP;
	v->a[79078] = anon_sym_SEMI_SEMI_AMP;
	v->a[79079] = anon_sym_PIPE_AMP;
	small_parse_table_3954(v);
}

void	small_parse_table_3954(t_small_parse_table_array *v)
{
	v->a[79080] = anon_sym_AMP_GT;
	v->a[79081] = anon_sym_AMP_GT_GT;
	v->a[79082] = anon_sym_LT_AMP;
	v->a[79083] = anon_sym_GT_AMP;
	v->a[79084] = anon_sym_GT_PIPE;
	v->a[79085] = anon_sym_LT_AMP_DASH;
	v->a[79086] = anon_sym_GT_AMP_DASH;
	v->a[79087] = anon_sym_LT_LT_DASH;
	v->a[79088] = anon_sym_LT_LT_LT;
	v->a[79089] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79090] = anon_sym_DOLLAR_LBRACK;
	v->a[79091] = aux_sym_concatenation_token1;
	v->a[79092] = anon_sym_DOLLAR;
	v->a[79093] = sym__special_character;
	v->a[79094] = anon_sym_DQUOTE;
	v->a[79095] = sym_raw_string;
	v->a[79096] = sym_ansi_c_string;
	v->a[79097] = aux_sym_number_token1;
	v->a[79098] = aux_sym_number_token2;
	v->a[79099] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3955(v);
}

/* EOF small_parse_table_790.c */
