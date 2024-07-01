/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_640.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3200(t_small_parse_table_array *v)
{
	v->a[64000] = aux_sym_heredoc_redirect_token1;
	v->a[64001] = actions(2111);
	v->a[64002] = 1;
	v->a[64003] = sym_file_descriptor;
	v->a[64004] = actions(2084);
	v->a[64005] = 2;
	v->a[64006] = anon_sym_LT_LT;
	v->a[64007] = anon_sym_LT_LT_DASH;
	v->a[64008] = actions(2108);
	v->a[64009] = 2;
	v->a[64010] = anon_sym_LT_AMP_DASH;
	v->a[64011] = anon_sym_GT_AMP_DASH;
	v->a[64012] = state(1125);
	v->a[64013] = 3;
	v->a[64014] = sym_file_redirect;
	v->a[64015] = sym_heredoc_redirect;
	v->a[64016] = aux_sym_redirected_statement_repeat1;
	v->a[64017] = actions(2105);
	v->a[64018] = 6;
	v->a[64019] = anon_sym_LT;
	small_parse_table_3201(v);
}

void	small_parse_table_3201(t_small_parse_table_array *v)
{
	v->a[64020] = anon_sym_GT;
	v->a[64021] = anon_sym_GT_GT;
	v->a[64022] = anon_sym_LT_AMP;
	v->a[64023] = anon_sym_GT_AMP;
	v->a[64024] = anon_sym_GT_PIPE;
	v->a[64025] = actions(2076);
	v->a[64026] = 7;
	v->a[64027] = anon_sym_PIPE;
	v->a[64028] = anon_sym_RPAREN;
	v->a[64029] = anon_sym_SEMI_SEMI;
	v->a[64030] = anon_sym_AMP_AMP;
	v->a[64031] = anon_sym_PIPE_PIPE;
	v->a[64032] = anon_sym_AMP;
	v->a[64033] = anon_sym_SEMI;
	v->a[64034] = 4;
	v->a[64035] = actions(3);
	v->a[64036] = 1;
	v->a[64037] = sym_comment;
	v->a[64038] = actions(984);
	v->a[64039] = 2;
	small_parse_table_3202(v);
}

void	small_parse_table_3202(t_small_parse_table_array *v)
{
	v->a[64040] = sym_file_descriptor;
	v->a[64041] = aux_sym_heredoc_redirect_token1;
	v->a[64042] = state(1128);
	v->a[64043] = 3;
	v->a[64044] = sym_file_redirect;
	v->a[64045] = sym_heredoc_redirect;
	v->a[64046] = aux_sym_redirected_statement_repeat1;
	v->a[64047] = actions(935);
	v->a[64048] = 17;
	v->a[64049] = anon_sym_PIPE;
	v->a[64050] = anon_sym_RPAREN;
	v->a[64051] = anon_sym_SEMI_SEMI;
	v->a[64052] = anon_sym_AMP_AMP;
	v->a[64053] = anon_sym_PIPE_PIPE;
	v->a[64054] = anon_sym_LT;
	v->a[64055] = anon_sym_GT;
	v->a[64056] = anon_sym_GT_GT;
	v->a[64057] = anon_sym_LT_AMP;
	v->a[64058] = anon_sym_GT_AMP;
	v->a[64059] = anon_sym_GT_PIPE;
	small_parse_table_3203(v);
}

void	small_parse_table_3203(t_small_parse_table_array *v)
{
	v->a[64060] = anon_sym_LT_AMP_DASH;
	v->a[64061] = anon_sym_GT_AMP_DASH;
	v->a[64062] = anon_sym_LT_LT;
	v->a[64063] = anon_sym_LT_LT_DASH;
	v->a[64064] = anon_sym_AMP;
	v->a[64065] = anon_sym_SEMI;
	v->a[64066] = 5;
	v->a[64067] = actions(3);
	v->a[64068] = 1;
	v->a[64069] = sym_comment;
	v->a[64070] = actions(682);
	v->a[64071] = 1;
	v->a[64072] = anon_sym_PIPE;
	v->a[64073] = actions(984);
	v->a[64074] = 2;
	v->a[64075] = sym_file_descriptor;
	v->a[64076] = aux_sym_heredoc_redirect_token1;
	v->a[64077] = state(1128);
	v->a[64078] = 3;
	v->a[64079] = sym_file_redirect;
	small_parse_table_3204(v);
}

void	small_parse_table_3204(t_small_parse_table_array *v)
{
	v->a[64080] = sym_heredoc_redirect;
	v->a[64081] = aux_sym_redirected_statement_repeat1;
	v->a[64082] = actions(935);
	v->a[64083] = 16;
	v->a[64084] = anon_sym_RPAREN;
	v->a[64085] = anon_sym_SEMI_SEMI;
	v->a[64086] = anon_sym_AMP_AMP;
	v->a[64087] = anon_sym_PIPE_PIPE;
	v->a[64088] = anon_sym_LT;
	v->a[64089] = anon_sym_GT;
	v->a[64090] = anon_sym_GT_GT;
	v->a[64091] = anon_sym_LT_AMP;
	v->a[64092] = anon_sym_GT_AMP;
	v->a[64093] = anon_sym_GT_PIPE;
	v->a[64094] = anon_sym_LT_AMP_DASH;
	v->a[64095] = anon_sym_GT_AMP_DASH;
	v->a[64096] = anon_sym_LT_LT;
	v->a[64097] = anon_sym_LT_LT_DASH;
	v->a[64098] = anon_sym_AMP;
	v->a[64099] = anon_sym_SEMI;
	small_parse_table_3205(v);
}

/* EOF small_parse_table_640.c */
