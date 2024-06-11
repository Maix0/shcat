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
	v->a[76000] = 20;
	v->a[76001] = anon_sym_esac;
	v->a[76002] = anon_sym_PIPE;
	v->a[76003] = anon_sym_SEMI_SEMI;
	v->a[76004] = anon_sym_AMP_AMP;
	v->a[76005] = anon_sym_PIPE_PIPE;
	v->a[76006] = anon_sym_LT;
	v->a[76007] = anon_sym_GT;
	v->a[76008] = anon_sym_GT_GT;
	v->a[76009] = anon_sym_AMP_GT;
	v->a[76010] = anon_sym_AMP_GT_GT;
	v->a[76011] = anon_sym_LT_AMP;
	v->a[76012] = anon_sym_GT_AMP;
	v->a[76013] = anon_sym_GT_PIPE;
	v->a[76014] = anon_sym_LT_AMP_DASH;
	v->a[76015] = anon_sym_GT_AMP_DASH;
	v->a[76016] = anon_sym_LT_LT;
	v->a[76017] = anon_sym_LT_LT_DASH;
	v->a[76018] = anon_sym_AMP;
	v->a[76019] = aux_sym_concatenation_token1;
	small_parse_table_3801(v);
}

void	small_parse_table_3801(t_small_parse_table_array *v)
{
	v->a[76020] = anon_sym_SEMI;
	v->a[76021] = 12;
	v->a[76022] = actions(3);
	v->a[76023] = 1;
	v->a[76024] = sym_comment;
	v->a[76025] = actions(807);
	v->a[76026] = 1;
	v->a[76027] = anon_sym_PIPE;
	v->a[76028] = actions(840);
	v->a[76029] = 1;
	v->a[76030] = anon_sym_SEMI_SEMI;
	v->a[76031] = actions(2514);
	v->a[76032] = 1;
	v->a[76033] = aux_sym_heredoc_redirect_token1;
	v->a[76034] = actions(2516);
	v->a[76035] = 1;
	v->a[76036] = anon_sym_AMP;
	v->a[76037] = actions(2518);
	v->a[76038] = 1;
	v->a[76039] = anon_sym_SEMI;
	small_parse_table_3802(v);
}

void	small_parse_table_3802(t_small_parse_table_array *v)
{
	v->a[76040] = actions(2602);
	v->a[76041] = 1;
	v->a[76042] = sym_file_descriptor;
	v->a[76043] = actions(861);
	v->a[76044] = 2;
	v->a[76045] = anon_sym_LT_LT;
	v->a[76046] = anon_sym_LT_LT_DASH;
	v->a[76047] = actions(965);
	v->a[76048] = 2;
	v->a[76049] = anon_sym_AMP_AMP;
	v->a[76050] = anon_sym_PIPE_PIPE;
	v->a[76051] = actions(2598);
	v->a[76052] = 2;
	v->a[76053] = anon_sym_LT_AMP_DASH;
	v->a[76054] = anon_sym_GT_AMP_DASH;
	v->a[76055] = state(1322);
	v->a[76056] = 3;
	v->a[76057] = sym_file_redirect;
	v->a[76058] = sym_heredoc_redirect;
	v->a[76059] = aux_sym_redirected_statement_repeat1;
	small_parse_table_3803(v);
}

void	small_parse_table_3803(t_small_parse_table_array *v)
{
	v->a[76060] = actions(2596);
	v->a[76061] = 8;
	v->a[76062] = anon_sym_LT;
	v->a[76063] = anon_sym_GT;
	v->a[76064] = anon_sym_GT_GT;
	v->a[76065] = anon_sym_AMP_GT;
	v->a[76066] = anon_sym_AMP_GT_GT;
	v->a[76067] = anon_sym_LT_AMP;
	v->a[76068] = anon_sym_GT_AMP;
	v->a[76069] = anon_sym_GT_PIPE;
	v->a[76070] = 12;
	v->a[76071] = actions(3);
	v->a[76072] = 1;
	v->a[76073] = sym_comment;
	v->a[76074] = actions(807);
	v->a[76075] = 1;
	v->a[76076] = anon_sym_PIPE;
	v->a[76077] = actions(840);
	v->a[76078] = 1;
	v->a[76079] = anon_sym_SEMI_SEMI;
	small_parse_table_3804(v);
}

void	small_parse_table_3804(t_small_parse_table_array *v)
{
	v->a[76080] = actions(2444);
	v->a[76081] = 1;
	v->a[76082] = aux_sym_heredoc_redirect_token1;
	v->a[76083] = actions(2446);
	v->a[76084] = 1;
	v->a[76085] = anon_sym_AMP;
	v->a[76086] = actions(2448);
	v->a[76087] = 1;
	v->a[76088] = anon_sym_SEMI;
	v->a[76089] = actions(2602);
	v->a[76090] = 1;
	v->a[76091] = sym_file_descriptor;
	v->a[76092] = actions(861);
	v->a[76093] = 2;
	v->a[76094] = anon_sym_LT_LT;
	v->a[76095] = anon_sym_LT_LT_DASH;
	v->a[76096] = actions(965);
	v->a[76097] = 2;
	v->a[76098] = anon_sym_AMP_AMP;
	v->a[76099] = anon_sym_PIPE_PIPE;
	small_parse_table_3805(v);
}

/* EOF small_parse_table_760.c */
