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
	v->a[32000] = anon_sym_AMP_AMP;
	v->a[32001] = anon_sym_PIPE_PIPE;
	v->a[32002] = anon_sym_LT;
	v->a[32003] = anon_sym_GT;
	v->a[32004] = anon_sym_GT_GT;
	v->a[32005] = anon_sym_LT_AMP;
	v->a[32006] = anon_sym_GT_AMP;
	v->a[32007] = anon_sym_GT_PIPE;
	v->a[32008] = anon_sym_LT_GT;
	v->a[32009] = anon_sym_LT_LT;
	v->a[32010] = anon_sym_LT_LT_DASH;
	v->a[32011] = aux_sym_heredoc_redirect_token1;
	v->a[32012] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32013] = anon_sym_AMP;
	v->a[32014] = aux_sym_concatenation_token1;
	v->a[32015] = anon_sym_DOLLAR;
	v->a[32016] = anon_sym_DQUOTE;
	v->a[32017] = sym_raw_string;
	v->a[32018] = sym_number;
	v->a[32019] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1601(v);
}

void	small_parse_table_1601(t_small_parse_table_array *v)
{
	v->a[32020] = anon_sym_DOLLAR_LPAREN;
	v->a[32021] = anon_sym_BQUOTE;
	v->a[32022] = sym_word;
	v->a[32023] = anon_sym_SEMI;
	v->a[32024] = 6;
	v->a[32025] = actions(3);
	v->a[32026] = 1;
	v->a[32027] = sym_comment;
	v->a[32028] = actions(1203);
	v->a[32029] = 1;
	v->a[32030] = aux_sym_concatenation_token1;
	v->a[32031] = actions(1215);
	v->a[32032] = 1;
	v->a[32033] = sym__concat;
	v->a[32034] = state(388);
	v->a[32035] = 1;
	v->a[32036] = aux_sym_concatenation_repeat1;
	v->a[32037] = actions(1047);
	v->a[32038] = 3;
	v->a[32039] = sym_file_descriptor;
	small_parse_table_1602(v);
}

void	small_parse_table_1602(t_small_parse_table_array *v)
{
	v->a[32040] = sym_variable_name;
	v->a[32041] = ts_builtin_sym_end;
	v->a[32042] = actions(1043);
	v->a[32043] = 25;
	v->a[32044] = anon_sym_PIPE;
	v->a[32045] = anon_sym_SEMI_SEMI;
	v->a[32046] = anon_sym_AMP_AMP;
	v->a[32047] = anon_sym_PIPE_PIPE;
	v->a[32048] = anon_sym_LT;
	v->a[32049] = anon_sym_GT;
	v->a[32050] = anon_sym_GT_GT;
	v->a[32051] = anon_sym_LT_AMP;
	v->a[32052] = anon_sym_GT_AMP;
	v->a[32053] = anon_sym_GT_PIPE;
	v->a[32054] = anon_sym_LT_GT;
	v->a[32055] = anon_sym_LT_LT;
	v->a[32056] = anon_sym_LT_LT_DASH;
	v->a[32057] = aux_sym_heredoc_redirect_token1;
	v->a[32058] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32059] = anon_sym_AMP;
	small_parse_table_1603(v);
}

void	small_parse_table_1603(t_small_parse_table_array *v)
{
	v->a[32060] = anon_sym_DOLLAR;
	v->a[32061] = anon_sym_DQUOTE;
	v->a[32062] = sym_raw_string;
	v->a[32063] = sym_number;
	v->a[32064] = anon_sym_DOLLAR_LBRACE;
	v->a[32065] = anon_sym_DOLLAR_LPAREN;
	v->a[32066] = anon_sym_BQUOTE;
	v->a[32067] = sym_word;
	v->a[32068] = anon_sym_SEMI;
	v->a[32069] = 6;
	v->a[32070] = actions(3);
	v->a[32071] = 1;
	v->a[32072] = sym_comment;
	v->a[32073] = actions(1180);
	v->a[32074] = 1;
	v->a[32075] = aux_sym_concatenation_token1;
	v->a[32076] = actions(1217);
	v->a[32077] = 1;
	v->a[32078] = sym__concat;
	v->a[32079] = state(416);
	small_parse_table_1604(v);
}

void	small_parse_table_1604(t_small_parse_table_array *v)
{
	v->a[32080] = 1;
	v->a[32081] = aux_sym_concatenation_repeat1;
	v->a[32082] = actions(1047);
	v->a[32083] = 3;
	v->a[32084] = sym_file_descriptor;
	v->a[32085] = sym__bare_dollar;
	v->a[32086] = ts_builtin_sym_end;
	v->a[32087] = actions(1043);
	v->a[32088] = 25;
	v->a[32089] = anon_sym_PIPE;
	v->a[32090] = anon_sym_SEMI_SEMI;
	v->a[32091] = anon_sym_AMP_AMP;
	v->a[32092] = anon_sym_PIPE_PIPE;
	v->a[32093] = anon_sym_LT;
	v->a[32094] = anon_sym_GT;
	v->a[32095] = anon_sym_GT_GT;
	v->a[32096] = anon_sym_LT_AMP;
	v->a[32097] = anon_sym_GT_AMP;
	v->a[32098] = anon_sym_GT_PIPE;
	v->a[32099] = anon_sym_LT_GT;
	small_parse_table_1605(v);
}

/* EOF small_parse_table_320.c */
