/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_540.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2700(t_small_parse_table_array *v)
{
	v->a[54000] = actions(719);
	v->a[54001] = 2;
	v->a[54002] = anon_sym_AMP_AMP;
	v->a[54003] = anon_sym_PIPE_PIPE;
	v->a[54004] = actions(717);
	v->a[54005] = 3;
	v->a[54006] = anon_sym_SEMI_SEMI;
	v->a[54007] = anon_sym_AMP;
	v->a[54008] = anon_sym_SEMI;
	v->a[54009] = state(1086);
	v->a[54010] = 3;
	v->a[54011] = sym_file_redirect;
	v->a[54012] = sym_heredoc_redirect;
	v->a[54013] = aux_sym_redirected_statement_repeat1;
	v->a[54014] = actions(1861);
	v->a[54015] = 7;
	v->a[54016] = anon_sym_LT;
	v->a[54017] = anon_sym_GT;
	v->a[54018] = anon_sym_GT_GT;
	v->a[54019] = anon_sym_LT_AMP;
	small_parse_table_2701(v);
}

void	small_parse_table_2701(t_small_parse_table_array *v)
{
	v->a[54020] = anon_sym_GT_AMP;
	v->a[54021] = anon_sym_GT_PIPE;
	v->a[54022] = anon_sym_LT_GT;
	v->a[54023] = 11;
	v->a[54024] = actions(3);
	v->a[54025] = 1;
	v->a[54026] = sym_comment;
	v->a[54027] = actions(692);
	v->a[54028] = 1;
	v->a[54029] = anon_sym_PIPE;
	v->a[54030] = actions(694);
	v->a[54031] = 1;
	v->a[54032] = anon_sym_BQUOTE;
	v->a[54033] = actions(1857);
	v->a[54034] = 1;
	v->a[54035] = aux_sym_heredoc_redirect_token1;
	v->a[54036] = actions(1871);
	v->a[54037] = 1;
	v->a[54038] = sym_file_descriptor;
	v->a[54039] = state(832);
	small_parse_table_2702(v);
}

void	small_parse_table_2702(t_small_parse_table_array *v)
{
	v->a[54040] = 1;
	v->a[54041] = sym_terminator;
	v->a[54042] = actions(700);
	v->a[54043] = 2;
	v->a[54044] = anon_sym_LT_LT;
	v->a[54045] = anon_sym_LT_LT_DASH;
	v->a[54046] = actions(936);
	v->a[54047] = 2;
	v->a[54048] = anon_sym_AMP_AMP;
	v->a[54049] = anon_sym_PIPE_PIPE;
	v->a[54050] = actions(696);
	v->a[54051] = 3;
	v->a[54052] = anon_sym_SEMI_SEMI;
	v->a[54053] = anon_sym_AMP;
	v->a[54054] = anon_sym_SEMI;
	v->a[54055] = state(1034);
	v->a[54056] = 3;
	v->a[54057] = sym_file_redirect;
	v->a[54058] = sym_heredoc_redirect;
	v->a[54059] = aux_sym_redirected_statement_repeat1;
	small_parse_table_2703(v);
}

void	small_parse_table_2703(t_small_parse_table_array *v)
{
	v->a[54060] = actions(1869);
	v->a[54061] = 7;
	v->a[54062] = anon_sym_LT;
	v->a[54063] = anon_sym_GT;
	v->a[54064] = anon_sym_GT_GT;
	v->a[54065] = anon_sym_LT_AMP;
	v->a[54066] = anon_sym_GT_AMP;
	v->a[54067] = anon_sym_GT_PIPE;
	v->a[54068] = anon_sym_LT_GT;
	v->a[54069] = 11;
	v->a[54070] = actions(3);
	v->a[54071] = 1;
	v->a[54072] = sym_comment;
	v->a[54073] = actions(692);
	v->a[54074] = 1;
	v->a[54075] = anon_sym_PIPE;
	v->a[54076] = actions(724);
	v->a[54077] = 1;
	v->a[54078] = anon_sym_BQUOTE;
	v->a[54079] = actions(1857);
	small_parse_table_2704(v);
}

void	small_parse_table_2704(t_small_parse_table_array *v)
{
	v->a[54080] = 1;
	v->a[54081] = aux_sym_heredoc_redirect_token1;
	v->a[54082] = actions(1871);
	v->a[54083] = 1;
	v->a[54084] = sym_file_descriptor;
	v->a[54085] = state(842);
	v->a[54086] = 1;
	v->a[54087] = sym_terminator;
	v->a[54088] = actions(700);
	v->a[54089] = 2;
	v->a[54090] = anon_sym_LT_LT;
	v->a[54091] = anon_sym_LT_LT_DASH;
	v->a[54092] = actions(936);
	v->a[54093] = 2;
	v->a[54094] = anon_sym_AMP_AMP;
	v->a[54095] = anon_sym_PIPE_PIPE;
	v->a[54096] = actions(696);
	v->a[54097] = 3;
	v->a[54098] = anon_sym_SEMI_SEMI;
	v->a[54099] = anon_sym_AMP;
	small_parse_table_2705(v);
}

/* EOF small_parse_table_540.c */
