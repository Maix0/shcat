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
	v->a[54000] = actions(1878);
	v->a[54001] = 1;
	v->a[54002] = sym_file_descriptor;
	v->a[54003] = state(615);
	v->a[54004] = 1;
	v->a[54005] = sym_terminator;
	v->a[54006] = actions(784);
	v->a[54007] = 2;
	v->a[54008] = anon_sym_esac;
	v->a[54009] = anon_sym_SEMI_SEMI;
	v->a[54010] = actions(882);
	v->a[54011] = 2;
	v->a[54012] = anon_sym_AMP_AMP;
	v->a[54013] = anon_sym_PIPE_PIPE;
	v->a[54014] = actions(884);
	v->a[54015] = 2;
	v->a[54016] = anon_sym_LT_LT;
	v->a[54017] = anon_sym_LT_LT_DASH;
	v->a[54018] = state(1099);
	v->a[54019] = 3;
	small_parse_table_2701(v);
}

void	small_parse_table_2701(t_small_parse_table_array *v)
{
	v->a[54020] = sym_file_redirect;
	v->a[54021] = sym_heredoc_redirect;
	v->a[54022] = aux_sym_redirected_statement_repeat1;
	v->a[54023] = actions(1874);
	v->a[54024] = 7;
	v->a[54025] = anon_sym_LT;
	v->a[54026] = anon_sym_GT;
	v->a[54027] = anon_sym_GT_GT;
	v->a[54028] = anon_sym_LT_AMP;
	v->a[54029] = anon_sym_GT_AMP;
	v->a[54030] = anon_sym_GT_PIPE;
	v->a[54031] = anon_sym_LT_GT;
	v->a[54032] = 11;
	v->a[54033] = actions(3);
	v->a[54034] = 1;
	v->a[54035] = sym_comment;
	v->a[54036] = actions(782);
	v->a[54037] = 1;
	v->a[54038] = anon_sym_PIPE;
	v->a[54039] = actions(950);
	small_parse_table_2702(v);
}

void	small_parse_table_2702(t_small_parse_table_array *v)
{
	v->a[54040] = 1;
	v->a[54041] = ts_builtin_sym_end;
	v->a[54042] = actions(1882);
	v->a[54043] = 1;
	v->a[54044] = aux_sym_heredoc_redirect_token1;
	v->a[54045] = actions(1884);
	v->a[54046] = 1;
	v->a[54047] = sym_file_descriptor;
	v->a[54048] = state(751);
	v->a[54049] = 1;
	v->a[54050] = sym_terminator;
	v->a[54051] = actions(790);
	v->a[54052] = 2;
	v->a[54053] = anon_sym_LT_LT;
	v->a[54054] = anon_sym_LT_LT_DASH;
	v->a[54055] = actions(808);
	v->a[54056] = 2;
	v->a[54057] = anon_sym_SEMI_SEMI;
	v->a[54058] = anon_sym_SEMI;
	v->a[54059] = actions(810);
	small_parse_table_2703(v);
}

void	small_parse_table_2703(t_small_parse_table_array *v)
{
	v->a[54060] = 2;
	v->a[54061] = anon_sym_AMP_AMP;
	v->a[54062] = anon_sym_PIPE_PIPE;
	v->a[54063] = state(1046);
	v->a[54064] = 3;
	v->a[54065] = sym_file_redirect;
	v->a[54066] = sym_heredoc_redirect;
	v->a[54067] = aux_sym_redirected_statement_repeat1;
	v->a[54068] = actions(1880);
	v->a[54069] = 7;
	v->a[54070] = anon_sym_LT;
	v->a[54071] = anon_sym_GT;
	v->a[54072] = anon_sym_GT_GT;
	v->a[54073] = anon_sym_LT_AMP;
	v->a[54074] = anon_sym_GT_AMP;
	v->a[54075] = anon_sym_GT_PIPE;
	v->a[54076] = anon_sym_LT_GT;
	v->a[54077] = 11;
	v->a[54078] = actions(3);
	v->a[54079] = 1;
	small_parse_table_2704(v);
}

void	small_parse_table_2704(t_small_parse_table_array *v)
{
	v->a[54080] = sym_comment;
	v->a[54081] = actions(782);
	v->a[54082] = 1;
	v->a[54083] = anon_sym_PIPE;
	v->a[54084] = actions(784);
	v->a[54085] = 1;
	v->a[54086] = anon_sym_BQUOTE;
	v->a[54087] = actions(1888);
	v->a[54088] = 1;
	v->a[54089] = aux_sym_heredoc_redirect_token1;
	v->a[54090] = actions(1890);
	v->a[54091] = 1;
	v->a[54092] = sym_file_descriptor;
	v->a[54093] = state(821);
	v->a[54094] = 1;
	v->a[54095] = sym_terminator;
	v->a[54096] = actions(786);
	v->a[54097] = 2;
	v->a[54098] = anon_sym_SEMI_SEMI;
	v->a[54099] = anon_sym_SEMI;
	small_parse_table_2705(v);
}

/* EOF small_parse_table_540.c */
