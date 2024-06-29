/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_300.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1500(t_small_parse_table_array *v)
{
	v->a[30000] = aux_sym_concatenation_repeat1;
	v->a[30001] = actions(548);
	v->a[30002] = 3;
	v->a[30003] = sym_file_descriptor;
	v->a[30004] = sym_variable_name;
	v->a[30005] = ts_builtin_sym_end;
	v->a[30006] = actions(546);
	v->a[30007] = 28;
	v->a[30008] = anon_sym_PIPE;
	v->a[30009] = anon_sym_SEMI_SEMI;
	v->a[30010] = anon_sym_AMP_AMP;
	v->a[30011] = anon_sym_PIPE_PIPE;
	v->a[30012] = anon_sym_LT;
	v->a[30013] = anon_sym_GT;
	v->a[30014] = anon_sym_GT_GT;
	v->a[30015] = anon_sym_AMP_GT;
	v->a[30016] = anon_sym_AMP_GT_GT;
	v->a[30017] = anon_sym_LT_AMP;
	v->a[30018] = anon_sym_GT_AMP;
	v->a[30019] = anon_sym_GT_PIPE;
	small_parse_table_1501(v);
}

void	small_parse_table_1501(t_small_parse_table_array *v)
{
	v->a[30020] = anon_sym_LT_AMP_DASH;
	v->a[30021] = anon_sym_GT_AMP_DASH;
	v->a[30022] = anon_sym_LT_LT;
	v->a[30023] = anon_sym_LT_LT_DASH;
	v->a[30024] = aux_sym_heredoc_redirect_token1;
	v->a[30025] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30026] = anon_sym_AMP;
	v->a[30027] = anon_sym_DOLLAR;
	v->a[30028] = anon_sym_DQUOTE;
	v->a[30029] = sym_raw_string;
	v->a[30030] = sym_number;
	v->a[30031] = anon_sym_DOLLAR_LBRACE;
	v->a[30032] = anon_sym_DOLLAR_LPAREN;
	v->a[30033] = anon_sym_BQUOTE;
	v->a[30034] = sym_word;
	v->a[30035] = anon_sym_SEMI;
	v->a[30036] = 6;
	v->a[30037] = actions(3);
	v->a[30038] = 1;
	v->a[30039] = sym_comment;
	small_parse_table_1502(v);
}

void	small_parse_table_1502(t_small_parse_table_array *v)
{
	v->a[30040] = actions(1176);
	v->a[30041] = 1;
	v->a[30042] = aux_sym_concatenation_token1;
	v->a[30043] = actions(1178);
	v->a[30044] = 1;
	v->a[30045] = sym__concat;
	v->a[30046] = state(372);
	v->a[30047] = 1;
	v->a[30048] = aux_sym_concatenation_repeat1;
	v->a[30049] = actions(1094);
	v->a[30050] = 3;
	v->a[30051] = sym_file_descriptor;
	v->a[30052] = sym_variable_name;
	v->a[30053] = ts_builtin_sym_end;
	v->a[30054] = actions(1090);
	v->a[30055] = 28;
	v->a[30056] = anon_sym_PIPE;
	v->a[30057] = anon_sym_SEMI_SEMI;
	v->a[30058] = anon_sym_AMP_AMP;
	v->a[30059] = anon_sym_PIPE_PIPE;
	small_parse_table_1503(v);
}

void	small_parse_table_1503(t_small_parse_table_array *v)
{
	v->a[30060] = anon_sym_LT;
	v->a[30061] = anon_sym_GT;
	v->a[30062] = anon_sym_GT_GT;
	v->a[30063] = anon_sym_AMP_GT;
	v->a[30064] = anon_sym_AMP_GT_GT;
	v->a[30065] = anon_sym_LT_AMP;
	v->a[30066] = anon_sym_GT_AMP;
	v->a[30067] = anon_sym_GT_PIPE;
	v->a[30068] = anon_sym_LT_AMP_DASH;
	v->a[30069] = anon_sym_GT_AMP_DASH;
	v->a[30070] = anon_sym_LT_LT;
	v->a[30071] = anon_sym_LT_LT_DASH;
	v->a[30072] = aux_sym_heredoc_redirect_token1;
	v->a[30073] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30074] = anon_sym_AMP;
	v->a[30075] = anon_sym_DOLLAR;
	v->a[30076] = anon_sym_DQUOTE;
	v->a[30077] = sym_raw_string;
	v->a[30078] = sym_number;
	v->a[30079] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1504(v);
}

void	small_parse_table_1504(t_small_parse_table_array *v)
{
	v->a[30080] = anon_sym_DOLLAR_LPAREN;
	v->a[30081] = anon_sym_BQUOTE;
	v->a[30082] = sym_word;
	v->a[30083] = anon_sym_SEMI;
	v->a[30084] = 6;
	v->a[30085] = actions(3);
	v->a[30086] = 1;
	v->a[30087] = sym_comment;
	v->a[30088] = actions(1180);
	v->a[30089] = 1;
	v->a[30090] = aux_sym_concatenation_token1;
	v->a[30091] = actions(1183);
	v->a[30092] = 1;
	v->a[30093] = sym__concat;
	v->a[30094] = state(344);
	v->a[30095] = 1;
	v->a[30096] = aux_sym_concatenation_repeat1;
	v->a[30097] = actions(988);
	v->a[30098] = 2;
	v->a[30099] = sym_file_descriptor;
	small_parse_table_1505(v);
}

/* EOF small_parse_table_300.c */
