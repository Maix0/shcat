/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1280.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6400(t_small_parse_table_array *v)
{
	v->a[128000] = anon_sym_LT_AMP_DASH;
	v->a[128001] = anon_sym_GT_AMP_DASH;
	v->a[128002] = anon_sym_LT_LT_DASH;
	v->a[128003] = 8;
	v->a[128004] = actions(3);
	v->a[128005] = 1;
	v->a[128006] = sym_comment;
	v->a[128007] = actions(2478);
	v->a[128008] = 1;
	v->a[128009] = sym_file_descriptor;
	v->a[128010] = actions(7362);
	v->a[128011] = 1;
	v->a[128012] = aux_sym_heredoc_redirect_token1;
	v->a[128013] = state(3596);
	v->a[128014] = 1;
	v->a[128015] = sym__heredoc_expression;
	v->a[128016] = actions(2450);
	v->a[128017] = 2;
	v->a[128018] = anon_sym_AMP_AMP;
	v->a[128019] = anon_sym_PIPE_PIPE;
	small_parse_table_6401(v);
}

void	small_parse_table_6401(t_small_parse_table_array *v)
{
	v->a[128020] = actions(2454);
	v->a[128021] = 2;
	v->a[128022] = anon_sym_LT_AMP_DASH;
	v->a[128023] = anon_sym_GT_AMP_DASH;
	v->a[128024] = state(2874);
	v->a[128025] = 2;
	v->a[128026] = sym_file_redirect;
	v->a[128027] = aux_sym_redirected_statement_repeat2;
	v->a[128028] = actions(2452);
	v->a[128029] = 8;
	v->a[128030] = anon_sym_LT;
	v->a[128031] = anon_sym_GT;
	v->a[128032] = anon_sym_GT_GT;
	v->a[128033] = anon_sym_AMP_GT;
	v->a[128034] = anon_sym_AMP_GT_GT;
	v->a[128035] = anon_sym_LT_AMP;
	v->a[128036] = anon_sym_GT_AMP;
	v->a[128037] = anon_sym_GT_PIPE;
	v->a[128038] = 3;
	v->a[128039] = actions(57);
	small_parse_table_6402(v);
}

void	small_parse_table_6402(t_small_parse_table_array *v)
{
	v->a[128040] = 1;
	v->a[128041] = sym_comment;
	v->a[128042] = actions(6063);
	v->a[128043] = 7;
	v->a[128044] = anon_sym_PIPE;
	v->a[128045] = anon_sym_LT;
	v->a[128046] = anon_sym_GT;
	v->a[128047] = anon_sym_AMP_GT;
	v->a[128048] = anon_sym_LT_AMP;
	v->a[128049] = anon_sym_GT_AMP;
	v->a[128050] = anon_sym_LT_LT;
	v->a[128051] = actions(6065);
	v->a[128052] = 10;
	v->a[128053] = sym_file_descriptor;
	v->a[128054] = anon_sym_PIPE_AMP;
	v->a[128055] = anon_sym_AMP_AMP;
	v->a[128056] = anon_sym_PIPE_PIPE;
	v->a[128057] = anon_sym_GT_GT;
	v->a[128058] = anon_sym_AMP_GT_GT;
	v->a[128059] = anon_sym_GT_PIPE;
	small_parse_table_6403(v);
}

void	small_parse_table_6403(t_small_parse_table_array *v)
{
	v->a[128060] = anon_sym_LT_AMP_DASH;
	v->a[128061] = anon_sym_GT_AMP_DASH;
	v->a[128062] = anon_sym_LT_LT_DASH;
	v->a[128063] = 3;
	v->a[128064] = actions(57);
	v->a[128065] = 1;
	v->a[128066] = sym_comment;
	v->a[128067] = actions(6083);
	v->a[128068] = 7;
	v->a[128069] = anon_sym_PIPE;
	v->a[128070] = anon_sym_LT;
	v->a[128071] = anon_sym_GT;
	v->a[128072] = anon_sym_AMP_GT;
	v->a[128073] = anon_sym_LT_AMP;
	v->a[128074] = anon_sym_GT_AMP;
	v->a[128075] = anon_sym_LT_LT;
	v->a[128076] = actions(6081);
	v->a[128077] = 10;
	v->a[128078] = sym_file_descriptor;
	v->a[128079] = anon_sym_PIPE_AMP;
	small_parse_table_6404(v);
}

void	small_parse_table_6404(t_small_parse_table_array *v)
{
	v->a[128080] = anon_sym_AMP_AMP;
	v->a[128081] = anon_sym_PIPE_PIPE;
	v->a[128082] = anon_sym_GT_GT;
	v->a[128083] = anon_sym_AMP_GT_GT;
	v->a[128084] = anon_sym_GT_PIPE;
	v->a[128085] = anon_sym_LT_AMP_DASH;
	v->a[128086] = anon_sym_GT_AMP_DASH;
	v->a[128087] = anon_sym_LT_LT_DASH;
	v->a[128088] = 4;
	v->a[128089] = actions(57);
	v->a[128090] = 1;
	v->a[128091] = sym_comment;
	v->a[128092] = actions(7358);
	v->a[128093] = 1;
	v->a[128094] = anon_sym_esac;
	v->a[128095] = actions(7356);
	v->a[128096] = 5;
	v->a[128097] = anon_sym_DOLLAR;
	v->a[128098] = aux_sym_number_token1;
	v->a[128099] = aux_sym_number_token2;
	small_parse_table_6405(v);
}

/* EOF small_parse_table_1280.c */
