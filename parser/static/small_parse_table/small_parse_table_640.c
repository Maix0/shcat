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
	v->a[64000] = state(1086);
	v->a[64001] = 3;
	v->a[64002] = sym_file_redirect;
	v->a[64003] = sym_heredoc_redirect;
	v->a[64004] = aux_sym_redirected_statement_repeat1;
	v->a[64005] = actions(2302);
	v->a[64006] = 7;
	v->a[64007] = anon_sym_esac;
	v->a[64008] = anon_sym_PIPE;
	v->a[64009] = anon_sym_SEMI_SEMI;
	v->a[64010] = anon_sym_AMP_AMP;
	v->a[64011] = anon_sym_PIPE_PIPE;
	v->a[64012] = anon_sym_AMP;
	v->a[64013] = anon_sym_SEMI;
	v->a[64014] = actions(2304);
	v->a[64015] = 8;
	v->a[64016] = anon_sym_LT;
	v->a[64017] = anon_sym_GT;
	v->a[64018] = anon_sym_GT_GT;
	v->a[64019] = anon_sym_AMP_GT;
	small_parse_table_3201(v);
}

void	small_parse_table_3201(t_small_parse_table_array *v)
{
	v->a[64020] = anon_sym_AMP_GT_GT;
	v->a[64021] = anon_sym_LT_AMP;
	v->a[64022] = anon_sym_GT_AMP;
	v->a[64023] = anon_sym_GT_PIPE;
	v->a[64024] = 6;
	v->a[64025] = actions(3);
	v->a[64026] = 1;
	v->a[64027] = sym_comment;
	v->a[64028] = actions(2199);
	v->a[64029] = 1;
	v->a[64030] = aux_sym_concatenation_token1;
	v->a[64031] = actions(2312);
	v->a[64032] = 1;
	v->a[64033] = sym__concat;
	v->a[64034] = state(941);
	v->a[64035] = 1;
	v->a[64036] = aux_sym_concatenation_repeat1;
	v->a[64037] = actions(1127);
	v->a[64038] = 3;
	v->a[64039] = sym_file_descriptor;
	small_parse_table_3202(v);
}

void	small_parse_table_3202(t_small_parse_table_array *v)
{
	v->a[64040] = sym_variable_name;
	v->a[64041] = aux_sym_heredoc_redirect_token1;
	v->a[64042] = actions(1129);
	v->a[64043] = 18;
	v->a[64044] = anon_sym_PIPE;
	v->a[64045] = anon_sym_SEMI_SEMI;
	v->a[64046] = anon_sym_AMP_AMP;
	v->a[64047] = anon_sym_PIPE_PIPE;
	v->a[64048] = anon_sym_LT;
	v->a[64049] = anon_sym_GT;
	v->a[64050] = anon_sym_GT_GT;
	v->a[64051] = anon_sym_AMP_GT;
	v->a[64052] = anon_sym_AMP_GT_GT;
	v->a[64053] = anon_sym_LT_AMP;
	v->a[64054] = anon_sym_GT_AMP;
	v->a[64055] = anon_sym_GT_PIPE;
	v->a[64056] = anon_sym_LT_AMP_DASH;
	v->a[64057] = anon_sym_GT_AMP_DASH;
	v->a[64058] = anon_sym_LT_LT;
	v->a[64059] = anon_sym_LT_LT_DASH;
	small_parse_table_3203(v);
}

void	small_parse_table_3203(t_small_parse_table_array *v)
{
	v->a[64060] = anon_sym_AMP;
	v->a[64061] = anon_sym_SEMI;
	v->a[64062] = 5;
	v->a[64063] = actions(3);
	v->a[64064] = 1;
	v->a[64065] = sym_comment;
	v->a[64066] = actions(1006);
	v->a[64067] = 1;
	v->a[64068] = sym_file_descriptor;
	v->a[64069] = actions(1559);
	v->a[64070] = 1;
	v->a[64071] = sym_variable_name;
	v->a[64072] = state(1300);
	v->a[64073] = 2;
	v->a[64074] = sym_variable_assignment;
	v->a[64075] = aux_sym_variable_assignments_repeat1;
	v->a[64076] = actions(1000);
	v->a[64077] = 20;
	v->a[64078] = anon_sym_LT;
	v->a[64079] = anon_sym_GT;
	small_parse_table_3204(v);
}

void	small_parse_table_3204(t_small_parse_table_array *v)
{
	v->a[64080] = anon_sym_GT_GT;
	v->a[64081] = anon_sym_AMP_GT;
	v->a[64082] = anon_sym_AMP_GT_GT;
	v->a[64083] = anon_sym_LT_AMP;
	v->a[64084] = anon_sym_GT_AMP;
	v->a[64085] = anon_sym_GT_PIPE;
	v->a[64086] = anon_sym_LT_AMP_DASH;
	v->a[64087] = anon_sym_GT_AMP_DASH;
	v->a[64088] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[64089] = anon_sym_DOLLAR;
	v->a[64090] = anon_sym_DQUOTE;
	v->a[64091] = sym_raw_string;
	v->a[64092] = aux_sym_number_token1;
	v->a[64093] = aux_sym_number_token2;
	v->a[64094] = anon_sym_DOLLAR_LBRACE;
	v->a[64095] = anon_sym_DOLLAR_LPAREN;
	v->a[64096] = anon_sym_BQUOTE;
	v->a[64097] = sym_word;
	v->a[64098] = 18;
	v->a[64099] = actions(3);
	small_parse_table_3205(v);
}

/* EOF small_parse_table_640.c */
