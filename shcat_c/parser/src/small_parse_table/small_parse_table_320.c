/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_320.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1600(t_small_parse_table_array *v)
{
	v->a[32000] = anon_sym_SEMI_AMP;
	v->a[32001] = anon_sym_SEMI_SEMI_AMP;
	v->a[32002] = anon_sym_PIPE_AMP;
	v->a[32003] = anon_sym_EQ_TILDE;
	v->a[32004] = anon_sym_AMP_GT;
	v->a[32005] = anon_sym_AMP_GT_GT;
	v->a[32006] = anon_sym_LT_AMP;
	v->a[32007] = anon_sym_GT_AMP;
	v->a[32008] = anon_sym_GT_PIPE;
	v->a[32009] = anon_sym_LT_AMP_DASH;
	v->a[32010] = anon_sym_GT_AMP_DASH;
	v->a[32011] = anon_sym_LT_LT_DASH;
	v->a[32012] = anon_sym_LT_LT_LT;
	v->a[32013] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32014] = anon_sym_DOLLAR_LBRACK;
	v->a[32015] = anon_sym_DOLLAR;
	v->a[32016] = sym__special_character;
	v->a[32017] = anon_sym_DQUOTE;
	v->a[32018] = sym_raw_string;
	v->a[32019] = sym_ansi_c_string;
	small_parse_table_1601(v);
}

void	small_parse_table_1601(t_small_parse_table_array *v)
{
	v->a[32020] = aux_sym_number_token1;
	v->a[32021] = aux_sym_number_token2;
	v->a[32022] = anon_sym_DOLLAR_LBRACE;
	v->a[32023] = anon_sym_DOLLAR_LPAREN;
	v->a[32024] = anon_sym_BQUOTE;
	v->a[32025] = anon_sym_DOLLAR_BQUOTE;
	v->a[32026] = anon_sym_LT_LPAREN;
	v->a[32027] = anon_sym_GT_LPAREN;
	v->a[32028] = sym_word;
	v->a[32029] = 8;
	v->a[32030] = actions(3);
	v->a[32031] = 1;
	v->a[32032] = sym_comment;
	v->a[32033] = actions(3282);
	v->a[32034] = 1;
	v->a[32035] = anon_sym_DQUOTE;
	v->a[32036] = actions(3286);
	v->a[32037] = 1;
	v->a[32038] = sym_variable_name;
	v->a[32039] = state(1628);
	small_parse_table_1602(v);
}

void	small_parse_table_1602(t_small_parse_table_array *v)
{
	v->a[32040] = 1;
	v->a[32041] = sym_string;
	v->a[32042] = actions(3284);
	v->a[32043] = 2;
	v->a[32044] = aux_sym__simple_variable_name_token1;
	v->a[32045] = aux_sym__multiline_variable_name_token1;
	v->a[32046] = actions(1235);
	v->a[32047] = 3;
	v->a[32048] = sym_file_descriptor;
	v->a[32049] = sym_test_operator;
	v->a[32050] = sym__brace_start;
	v->a[32051] = actions(3280);
	v->a[32052] = 9;
	v->a[32053] = anon_sym_DASH;
	v->a[32054] = anon_sym_STAR;
	v->a[32055] = anon_sym_BANG;
	v->a[32056] = anon_sym_QMARK;
	v->a[32057] = anon_sym_DOLLAR;
	v->a[32058] = anon_sym_POUND;
	v->a[32059] = anon_sym_AT2;
	small_parse_table_1603(v);
}

void	small_parse_table_1603(t_small_parse_table_array *v)
{
	v->a[32060] = anon_sym_0;
	v->a[32061] = anon_sym__;
	v->a[32062] = actions(1227);
	v->a[32063] = 33;
	v->a[32064] = anon_sym_LPAREN_LPAREN;
	v->a[32065] = anon_sym_PIPE_PIPE;
	v->a[32066] = anon_sym_AMP_AMP;
	v->a[32067] = anon_sym_PIPE;
	v->a[32068] = anon_sym_LT;
	v->a[32069] = anon_sym_GT;
	v->a[32070] = anon_sym_LT_LT;
	v->a[32071] = anon_sym_GT_GT;
	v->a[32072] = anon_sym_PIPE_AMP;
	v->a[32073] = anon_sym_AMP_GT;
	v->a[32074] = anon_sym_AMP_GT_GT;
	v->a[32075] = anon_sym_LT_AMP;
	v->a[32076] = anon_sym_GT_AMP;
	v->a[32077] = anon_sym_GT_PIPE;
	v->a[32078] = anon_sym_LT_AMP_DASH;
	v->a[32079] = anon_sym_GT_AMP_DASH;
	small_parse_table_1604(v);
}

void	small_parse_table_1604(t_small_parse_table_array *v)
{
	v->a[32080] = anon_sym_LT_LT_DASH;
	v->a[32081] = aux_sym_heredoc_redirect_token1;
	v->a[32082] = anon_sym_LT_LT_LT;
	v->a[32083] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32084] = anon_sym_DOLLAR_LBRACK;
	v->a[32085] = sym__special_character;
	v->a[32086] = sym_raw_string;
	v->a[32087] = sym_ansi_c_string;
	v->a[32088] = aux_sym_number_token1;
	v->a[32089] = aux_sym_number_token2;
	v->a[32090] = anon_sym_DOLLAR_LBRACE;
	v->a[32091] = anon_sym_DOLLAR_LPAREN;
	v->a[32092] = anon_sym_BQUOTE;
	v->a[32093] = anon_sym_DOLLAR_BQUOTE;
	v->a[32094] = anon_sym_LT_LPAREN;
	v->a[32095] = anon_sym_GT_LPAREN;
	v->a[32096] = sym_word;
	v->a[32097] = 6;
	v->a[32098] = actions(3);
	v->a[32099] = 1;
	small_parse_table_1605(v);
}

/* EOF small_parse_table_320.c */
