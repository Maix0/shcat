/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_760.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3800(t_small_parse_table_array *v)
{
	v->a[76000] = sym_raw_string;
	v->a[76001] = sym_ansi_c_string;
	v->a[76002] = aux_sym_number_token1;
	v->a[76003] = aux_sym_number_token2;
	v->a[76004] = anon_sym_DOLLAR_LBRACE;
	v->a[76005] = anon_sym_DOLLAR_LPAREN;
	v->a[76006] = anon_sym_BQUOTE;
	v->a[76007] = anon_sym_DOLLAR_BQUOTE;
	v->a[76008] = anon_sym_LT_LPAREN;
	v->a[76009] = anon_sym_GT_LPAREN;
	v->a[76010] = sym_word;
	v->a[76011] = 3;
	v->a[76012] = actions(3);
	v->a[76013] = 1;
	v->a[76014] = sym_comment;
	v->a[76015] = actions(4372);
	v->a[76016] = 6;
	v->a[76017] = sym_file_descriptor;
	v->a[76018] = sym_test_operator;
	v->a[76019] = sym__bare_dollar;
	small_parse_table_3801(v);
}

void	small_parse_table_3801(t_small_parse_table_array *v)
{
	v->a[76020] = sym__brace_start;
	v->a[76021] = ts_builtin_sym_end;
	v->a[76022] = aux_sym_heredoc_redirect_token1;
	v->a[76023] = actions(4370);
	v->a[76024] = 39;
	v->a[76025] = anon_sym_LPAREN_LPAREN;
	v->a[76026] = anon_sym_SEMI;
	v->a[76027] = anon_sym_PIPE_PIPE;
	v->a[76028] = anon_sym_AMP_AMP;
	v->a[76029] = anon_sym_PIPE;
	v->a[76030] = anon_sym_AMP;
	v->a[76031] = anon_sym_EQ_EQ;
	v->a[76032] = anon_sym_LT;
	v->a[76033] = anon_sym_GT;
	v->a[76034] = anon_sym_LT_LT;
	v->a[76035] = anon_sym_GT_GT;
	v->a[76036] = anon_sym_SEMI_SEMI;
	v->a[76037] = anon_sym_PIPE_AMP;
	v->a[76038] = anon_sym_EQ_TILDE;
	v->a[76039] = anon_sym_AMP_GT;
	small_parse_table_3802(v);
}

void	small_parse_table_3802(t_small_parse_table_array *v)
{
	v->a[76040] = anon_sym_AMP_GT_GT;
	v->a[76041] = anon_sym_LT_AMP;
	v->a[76042] = anon_sym_GT_AMP;
	v->a[76043] = anon_sym_GT_PIPE;
	v->a[76044] = anon_sym_LT_AMP_DASH;
	v->a[76045] = anon_sym_GT_AMP_DASH;
	v->a[76046] = anon_sym_LT_LT_DASH;
	v->a[76047] = anon_sym_LT_LT_LT;
	v->a[76048] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[76049] = anon_sym_DOLLAR_LBRACK;
	v->a[76050] = anon_sym_DOLLAR;
	v->a[76051] = sym__special_character;
	v->a[76052] = anon_sym_DQUOTE;
	v->a[76053] = sym_raw_string;
	v->a[76054] = sym_ansi_c_string;
	v->a[76055] = aux_sym_number_token1;
	v->a[76056] = aux_sym_number_token2;
	v->a[76057] = anon_sym_DOLLAR_LBRACE;
	v->a[76058] = anon_sym_DOLLAR_LPAREN;
	v->a[76059] = anon_sym_BQUOTE;
	small_parse_table_3803(v);
}

void	small_parse_table_3803(t_small_parse_table_array *v)
{
	v->a[76060] = anon_sym_DOLLAR_BQUOTE;
	v->a[76061] = anon_sym_LT_LPAREN;
	v->a[76062] = anon_sym_GT_LPAREN;
	v->a[76063] = sym_word;
	v->a[76064] = 3;
	v->a[76065] = actions(3);
	v->a[76066] = 1;
	v->a[76067] = sym_comment;
	v->a[76068] = actions(1253);
	v->a[76069] = 6;
	v->a[76070] = sym_file_descriptor;
	v->a[76071] = sym__concat;
	v->a[76072] = sym_variable_name;
	v->a[76073] = sym_test_operator;
	v->a[76074] = sym__brace_start;
	v->a[76075] = aux_sym_heredoc_redirect_token1;
	v->a[76076] = actions(1251);
	v->a[76077] = 39;
	v->a[76078] = anon_sym_LPAREN_LPAREN;
	v->a[76079] = anon_sym_SEMI;
	small_parse_table_3804(v);
}

void	small_parse_table_3804(t_small_parse_table_array *v)
{
	v->a[76080] = anon_sym_PIPE_PIPE;
	v->a[76081] = anon_sym_AMP_AMP;
	v->a[76082] = anon_sym_PIPE;
	v->a[76083] = anon_sym_AMP;
	v->a[76084] = anon_sym_LT;
	v->a[76085] = anon_sym_GT;
	v->a[76086] = anon_sym_LT_LT;
	v->a[76087] = anon_sym_GT_GT;
	v->a[76088] = anon_sym_RPAREN;
	v->a[76089] = anon_sym_SEMI_SEMI;
	v->a[76090] = anon_sym_PIPE_AMP;
	v->a[76091] = anon_sym_AMP_GT;
	v->a[76092] = anon_sym_AMP_GT_GT;
	v->a[76093] = anon_sym_LT_AMP;
	v->a[76094] = anon_sym_GT_AMP;
	v->a[76095] = anon_sym_GT_PIPE;
	v->a[76096] = anon_sym_LT_AMP_DASH;
	v->a[76097] = anon_sym_GT_AMP_DASH;
	v->a[76098] = anon_sym_LT_LT_DASH;
	v->a[76099] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_3805(v);
}

/* EOF small_parse_table_760.c */
