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
	v->a[32000] = anon_sym_LT_LT;
	v->a[32001] = anon_sym_LT_LT_DASH;
	v->a[32002] = aux_sym_heredoc_redirect_token1;
	v->a[32003] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32004] = anon_sym_AMP;
	v->a[32005] = aux_sym_concatenation_token1;
	v->a[32006] = anon_sym_DOLLAR;
	v->a[32007] = anon_sym_DQUOTE;
	v->a[32008] = sym_raw_string;
	v->a[32009] = aux_sym_number_token1;
	v->a[32010] = aux_sym_number_token2;
	v->a[32011] = anon_sym_DOLLAR_LBRACE;
	v->a[32012] = anon_sym_DOLLAR_LPAREN;
	v->a[32013] = anon_sym_BQUOTE;
	v->a[32014] = sym_word;
	v->a[32015] = anon_sym_SEMI;
	v->a[32016] = 6;
	v->a[32017] = actions(3);
	v->a[32018] = 1;
	v->a[32019] = sym_comment;
	small_parse_table_1601(v);
}

void	small_parse_table_1601(t_small_parse_table_array *v)
{
	v->a[32020] = actions(1303);
	v->a[32021] = 1;
	v->a[32022] = aux_sym_concatenation_token1;
	v->a[32023] = actions(1306);
	v->a[32024] = 1;
	v->a[32025] = sym__concat;
	v->a[32026] = state(350);
	v->a[32027] = 1;
	v->a[32028] = aux_sym_concatenation_repeat1;
	v->a[32029] = actions(1112);
	v->a[32030] = 2;
	v->a[32031] = sym_file_descriptor;
	v->a[32032] = sym__bare_dollar;
	v->a[32033] = actions(1114);
	v->a[32034] = 30;
	v->a[32035] = anon_sym_PIPE;
	v->a[32036] = anon_sym_RPAREN;
	v->a[32037] = anon_sym_SEMI_SEMI;
	v->a[32038] = anon_sym_AMP_AMP;
	v->a[32039] = anon_sym_PIPE_PIPE;
	small_parse_table_1602(v);
}

void	small_parse_table_1602(t_small_parse_table_array *v)
{
	v->a[32040] = anon_sym_LT;
	v->a[32041] = anon_sym_GT;
	v->a[32042] = anon_sym_GT_GT;
	v->a[32043] = anon_sym_AMP_GT;
	v->a[32044] = anon_sym_AMP_GT_GT;
	v->a[32045] = anon_sym_LT_AMP;
	v->a[32046] = anon_sym_GT_AMP;
	v->a[32047] = anon_sym_GT_PIPE;
	v->a[32048] = anon_sym_LT_AMP_DASH;
	v->a[32049] = anon_sym_GT_AMP_DASH;
	v->a[32050] = anon_sym_LT_LT;
	v->a[32051] = anon_sym_LT_LT_DASH;
	v->a[32052] = aux_sym_heredoc_redirect_token1;
	v->a[32053] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32054] = anon_sym_AMP;
	v->a[32055] = anon_sym_DOLLAR;
	v->a[32056] = anon_sym_DQUOTE;
	v->a[32057] = sym_raw_string;
	v->a[32058] = aux_sym_number_token1;
	v->a[32059] = aux_sym_number_token2;
	small_parse_table_1603(v);
}

void	small_parse_table_1603(t_small_parse_table_array *v)
{
	v->a[32060] = anon_sym_DOLLAR_LBRACE;
	v->a[32061] = anon_sym_DOLLAR_LPAREN;
	v->a[32062] = anon_sym_BQUOTE;
	v->a[32063] = sym_word;
	v->a[32064] = anon_sym_SEMI;
	v->a[32065] = 3;
	v->a[32066] = actions(3);
	v->a[32067] = 1;
	v->a[32068] = sym_comment;
	v->a[32069] = actions(1311);
	v->a[32070] = 3;
	v->a[32071] = sym_file_descriptor;
	v->a[32072] = sym__concat;
	v->a[32073] = sym__bare_dollar;
	v->a[32074] = actions(1309);
	v->a[32075] = 32;
	v->a[32076] = anon_sym_LPAREN;
	v->a[32077] = anon_sym_PIPE;
	v->a[32078] = anon_sym_RPAREN;
	v->a[32079] = anon_sym_SEMI_SEMI;
	small_parse_table_1604(v);
}

void	small_parse_table_1604(t_small_parse_table_array *v)
{
	v->a[32080] = anon_sym_AMP_AMP;
	v->a[32081] = anon_sym_PIPE_PIPE;
	v->a[32082] = anon_sym_LT;
	v->a[32083] = anon_sym_GT;
	v->a[32084] = anon_sym_GT_GT;
	v->a[32085] = anon_sym_AMP_GT;
	v->a[32086] = anon_sym_AMP_GT_GT;
	v->a[32087] = anon_sym_LT_AMP;
	v->a[32088] = anon_sym_GT_AMP;
	v->a[32089] = anon_sym_GT_PIPE;
	v->a[32090] = anon_sym_LT_AMP_DASH;
	v->a[32091] = anon_sym_GT_AMP_DASH;
	v->a[32092] = anon_sym_LT_LT;
	v->a[32093] = anon_sym_LT_LT_DASH;
	v->a[32094] = aux_sym_heredoc_redirect_token1;
	v->a[32095] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32096] = anon_sym_AMP;
	v->a[32097] = aux_sym_concatenation_token1;
	v->a[32098] = anon_sym_DOLLAR;
	v->a[32099] = anon_sym_DQUOTE;
	small_parse_table_1605(v);
}

/* EOF small_parse_table_320.c */
