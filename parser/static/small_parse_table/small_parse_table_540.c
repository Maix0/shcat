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
	v->a[54000] = 1;
	v->a[54001] = sym_terminator;
	v->a[54002] = actions(755);
	v->a[54003] = 2;
	v->a[54004] = anon_sym_AMP_AMP;
	v->a[54005] = anon_sym_PIPE_PIPE;
	v->a[54006] = actions(757);
	v->a[54007] = 2;
	v->a[54008] = anon_sym_LT_LT;
	v->a[54009] = anon_sym_LT_LT_DASH;
	v->a[54010] = actions(759);
	v->a[54011] = 2;
	v->a[54012] = anon_sym_AMP;
	v->a[54013] = anon_sym_SEMI;
	v->a[54014] = actions(842);
	v->a[54015] = 2;
	v->a[54016] = anon_sym_esac;
	v->a[54017] = anon_sym_SEMI_SEMI;
	v->a[54018] = state(1094);
	v->a[54019] = 3;
	small_parse_table_2701(v);
}

void	small_parse_table_2701(t_small_parse_table_array *v)
{
	v->a[54020] = sym_file_redirect;
	v->a[54021] = sym_heredoc_redirect;
	v->a[54022] = aux_sym_redirected_statement_repeat1;
	v->a[54023] = actions(1849);
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
	v->a[54036] = actions(736);
	v->a[54037] = 1;
	v->a[54038] = anon_sym_PIPE;
	v->a[54039] = actions(1851);
	small_parse_table_2702(v);
}

void	small_parse_table_2702(t_small_parse_table_array *v)
{
	v->a[54040] = 1;
	v->a[54041] = aux_sym_heredoc_redirect_token1;
	v->a[54042] = actions(1853);
	v->a[54043] = 1;
	v->a[54044] = sym_file_descriptor;
	v->a[54045] = state(695);
	v->a[54046] = 1;
	v->a[54047] = sym_terminator;
	v->a[54048] = actions(755);
	v->a[54049] = 2;
	v->a[54050] = anon_sym_AMP_AMP;
	v->a[54051] = anon_sym_PIPE_PIPE;
	v->a[54052] = actions(757);
	v->a[54053] = 2;
	v->a[54054] = anon_sym_LT_LT;
	v->a[54055] = anon_sym_LT_LT_DASH;
	v->a[54056] = actions(759);
	v->a[54057] = 2;
	v->a[54058] = anon_sym_AMP;
	v->a[54059] = anon_sym_SEMI;
	small_parse_table_2703(v);
}

void	small_parse_table_2703(t_small_parse_table_array *v)
{
	v->a[54060] = actions(842);
	v->a[54061] = 2;
	v->a[54062] = anon_sym_esac;
	v->a[54063] = anon_sym_SEMI_SEMI;
	v->a[54064] = state(1094);
	v->a[54065] = 3;
	v->a[54066] = sym_file_redirect;
	v->a[54067] = sym_heredoc_redirect;
	v->a[54068] = aux_sym_redirected_statement_repeat1;
	v->a[54069] = actions(1849);
	v->a[54070] = 7;
	v->a[54071] = anon_sym_LT;
	v->a[54072] = anon_sym_GT;
	v->a[54073] = anon_sym_GT_GT;
	v->a[54074] = anon_sym_LT_AMP;
	v->a[54075] = anon_sym_GT_AMP;
	v->a[54076] = anon_sym_GT_PIPE;
	v->a[54077] = anon_sym_LT_GT;
	v->a[54078] = 11;
	v->a[54079] = actions(3);
	small_parse_table_2704(v);
}

void	small_parse_table_2704(t_small_parse_table_array *v)
{
	v->a[54080] = 1;
	v->a[54081] = sym_comment;
	v->a[54082] = actions(736);
	v->a[54083] = 1;
	v->a[54084] = anon_sym_PIPE;
	v->a[54085] = actions(1851);
	v->a[54086] = 1;
	v->a[54087] = aux_sym_heredoc_redirect_token1;
	v->a[54088] = actions(1853);
	v->a[54089] = 1;
	v->a[54090] = sym_file_descriptor;
	v->a[54091] = state(696);
	v->a[54092] = 1;
	v->a[54093] = sym_terminator;
	v->a[54094] = actions(755);
	v->a[54095] = 2;
	v->a[54096] = anon_sym_AMP_AMP;
	v->a[54097] = anon_sym_PIPE_PIPE;
	v->a[54098] = actions(757);
	v->a[54099] = 2;
	small_parse_table_2705(v);
}

/* EOF small_parse_table_540.c */
