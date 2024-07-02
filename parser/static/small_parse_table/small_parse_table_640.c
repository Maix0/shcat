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
	v->a[64000] = anon_sym_AMP;
	v->a[64001] = anon_sym_SEMI;
	v->a[64002] = 6;
	v->a[64003] = actions(3);
	v->a[64004] = 1;
	v->a[64005] = sym_comment;
	v->a[64006] = actions(2137);
	v->a[64007] = 1;
	v->a[64008] = aux_sym_heredoc_redirect_token1;
	v->a[64009] = actions(2301);
	v->a[64010] = 1;
	v->a[64011] = sym_file_descriptor;
	v->a[64012] = state(1204);
	v->a[64013] = 2;
	v->a[64014] = sym_file_redirect;
	v->a[64015] = aux_sym_redirected_statement_repeat2;
	v->a[64016] = actions(1942);
	v->a[64017] = 7;
	v->a[64018] = anon_sym_LT;
	v->a[64019] = anon_sym_GT;
	small_parse_table_3201(v);
}

void	small_parse_table_3201(t_small_parse_table_array *v)
{
	v->a[64020] = anon_sym_GT_GT;
	v->a[64021] = anon_sym_LT_AMP;
	v->a[64022] = anon_sym_GT_AMP;
	v->a[64023] = anon_sym_GT_PIPE;
	v->a[64024] = anon_sym_LT_GT;
	v->a[64025] = actions(2139);
	v->a[64026] = 8;
	v->a[64027] = anon_sym_PIPE;
	v->a[64028] = anon_sym_SEMI_SEMI;
	v->a[64029] = anon_sym_AMP_AMP;
	v->a[64030] = anon_sym_PIPE_PIPE;
	v->a[64031] = anon_sym_LT_LT;
	v->a[64032] = anon_sym_LT_LT_DASH;
	v->a[64033] = anon_sym_AMP;
	v->a[64034] = anon_sym_SEMI;
	v->a[64035] = 5;
	v->a[64036] = actions(3);
	v->a[64037] = 1;
	v->a[64038] = sym_comment;
	v->a[64039] = actions(2322);
	small_parse_table_3202(v);
}

void	small_parse_table_3202(t_small_parse_table_array *v)
{
	v->a[64040] = 1;
	v->a[64041] = anon_sym_PIPE;
	v->a[64042] = state(1208);
	v->a[64043] = 1;
	v->a[64044] = aux_sym_pipeline_repeat1;
	v->a[64045] = actions(1918);
	v->a[64046] = 2;
	v->a[64047] = sym_file_descriptor;
	v->a[64048] = aux_sym_heredoc_redirect_token1;
	v->a[64049] = actions(1923);
	v->a[64050] = 15;
	v->a[64051] = anon_sym_esac;
	v->a[64052] = anon_sym_SEMI_SEMI;
	v->a[64053] = anon_sym_AMP_AMP;
	v->a[64054] = anon_sym_PIPE_PIPE;
	v->a[64055] = anon_sym_LT;
	v->a[64056] = anon_sym_GT;
	v->a[64057] = anon_sym_GT_GT;
	v->a[64058] = anon_sym_LT_AMP;
	v->a[64059] = anon_sym_GT_AMP;
	small_parse_table_3203(v);
}

void	small_parse_table_3203(t_small_parse_table_array *v)
{
	v->a[64060] = anon_sym_GT_PIPE;
	v->a[64061] = anon_sym_LT_GT;
	v->a[64062] = anon_sym_LT_LT;
	v->a[64063] = anon_sym_LT_LT_DASH;
	v->a[64064] = anon_sym_AMP;
	v->a[64065] = anon_sym_SEMI;
	v->a[64066] = 5;
	v->a[64067] = actions(3);
	v->a[64068] = 1;
	v->a[64069] = sym_comment;
	v->a[64070] = actions(2325);
	v->a[64071] = 1;
	v->a[64072] = anon_sym_PIPE;
	v->a[64073] = state(1208);
	v->a[64074] = 1;
	v->a[64075] = aux_sym_pipeline_repeat1;
	v->a[64076] = actions(2307);
	v->a[64077] = 2;
	v->a[64078] = sym_file_descriptor;
	v->a[64079] = aux_sym_heredoc_redirect_token1;
	small_parse_table_3204(v);
}

void	small_parse_table_3204(t_small_parse_table_array *v)
{
	v->a[64080] = actions(2305);
	v->a[64081] = 15;
	v->a[64082] = anon_sym_esac;
	v->a[64083] = anon_sym_SEMI_SEMI;
	v->a[64084] = anon_sym_AMP_AMP;
	v->a[64085] = anon_sym_PIPE_PIPE;
	v->a[64086] = anon_sym_LT;
	v->a[64087] = anon_sym_GT;
	v->a[64088] = anon_sym_GT_GT;
	v->a[64089] = anon_sym_LT_AMP;
	v->a[64090] = anon_sym_GT_AMP;
	v->a[64091] = anon_sym_GT_PIPE;
	v->a[64092] = anon_sym_LT_GT;
	v->a[64093] = anon_sym_LT_LT;
	v->a[64094] = anon_sym_LT_LT_DASH;
	v->a[64095] = anon_sym_AMP;
	v->a[64096] = anon_sym_SEMI;
	v->a[64097] = 5;
	v->a[64098] = actions(3);
	v->a[64099] = 1;
	small_parse_table_3205(v);
}

/* EOF small_parse_table_640.c */
