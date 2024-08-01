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
	v->a[54000] = anon_sym_PIPE;
	v->a[54001] = anon_sym_AMP_AMP;
	v->a[54002] = anon_sym_PIPE_PIPE;
	v->a[54003] = anon_sym_LT_LT;
	v->a[54004] = 8;
	v->a[54005] = actions(1436);
	v->a[54006] = 1;
	v->a[54007] = sym_comment;
	v->a[54008] = actions(2708);
	v->a[54009] = 1;
	v->a[54010] = anon_sym_DOLLAR;
	v->a[54011] = actions(2711);
	v->a[54012] = 1;
	v->a[54013] = anon_sym_DOLLAR_LBRACE;
	v->a[54014] = actions(2714);
	v->a[54015] = 1;
	v->a[54016] = anon_sym_DOLLAR_LPAREN;
	v->a[54017] = actions(2717);
	v->a[54018] = 1;
	v->a[54019] = anon_sym_BQUOTE;
	small_parse_table_2701(v);
}

void	small_parse_table_2701(t_small_parse_table_array *v)
{
	v->a[54020] = actions(2720);
	v->a[54021] = 1;
	v->a[54022] = sym_heredoc_content;
	v->a[54023] = actions(2723);
	v->a[54024] = 1;
	v->a[54025] = sym_heredoc_end;
	v->a[54026] = state(1310);
	v->a[54027] = 4;
	v->a[54028] = sym_simple_expansion;
	v->a[54029] = sym_expansion;
	v->a[54030] = sym_command_substitution;
	v->a[54031] = aux_sym_heredoc_body_repeat1;
	v->a[54032] = 5;
	v->a[54033] = actions(3);
	v->a[54034] = 1;
	v->a[54035] = sym_comment;
	v->a[54036] = actions(2078);
	v->a[54037] = 1;
	v->a[54038] = aux_sym_heredoc_redirect_token1;
	v->a[54039] = state(1311);
	small_parse_table_2702(v);
}

void	small_parse_table_2702(t_small_parse_table_array *v)
{
	v->a[54040] = 2;
	v->a[54041] = sym_file_redirect;
	v->a[54042] = aux_sym_redirected_statement_repeat2;
	v->a[54043] = actions(2725);
	v->a[54044] = 3;
	v->a[54045] = anon_sym_LT;
	v->a[54046] = anon_sym_GT;
	v->a[54047] = anon_sym_GT_GT;
	v->a[54048] = actions(2080);
	v->a[54049] = 4;
	v->a[54050] = anon_sym_PIPE;
	v->a[54051] = anon_sym_AMP_AMP;
	v->a[54052] = anon_sym_PIPE_PIPE;
	v->a[54053] = anon_sym_LT_LT;
	v->a[54054] = 3;
	v->a[54055] = actions(1436);
	v->a[54056] = 1;
	v->a[54057] = sym_comment;
	v->a[54058] = actions(2730);
	v->a[54059] = 2;
	small_parse_table_2703(v);
}

void	small_parse_table_2703(t_small_parse_table_array *v)
{
	v->a[54060] = anon_sym_PLUS;
	v->a[54061] = anon_sym_DASH;
	v->a[54062] = actions(2728);
	v->a[54063] = 8;
	v->a[54064] = anon_sym_RPAREN_RPAREN;
	v->a[54065] = anon_sym_STAR;
	v->a[54066] = anon_sym_SLASH;
	v->a[54067] = anon_sym_PERCENT;
	v->a[54068] = anon_sym_QMARK;
	v->a[54069] = anon_sym_COLON;
	v->a[54070] = anon_sym_PLUS_PLUS;
	v->a[54071] = anon_sym_DASH_DASH;
	v->a[54072] = 5;
	v->a[54073] = actions(3);
	v->a[54074] = 1;
	v->a[54075] = sym_comment;
	v->a[54076] = actions(2093);
	v->a[54077] = 1;
	v->a[54078] = aux_sym_heredoc_redirect_token1;
	v->a[54079] = state(1311);
	small_parse_table_2704(v);
}

void	small_parse_table_2704(t_small_parse_table_array *v)
{
	v->a[54080] = 2;
	v->a[54081] = sym_file_redirect;
	v->a[54082] = aux_sym_redirected_statement_repeat2;
	v->a[54083] = actions(2633);
	v->a[54084] = 3;
	v->a[54085] = anon_sym_LT;
	v->a[54086] = anon_sym_GT;
	v->a[54087] = anon_sym_GT_GT;
	v->a[54088] = actions(2091);
	v->a[54089] = 4;
	v->a[54090] = anon_sym_PIPE;
	v->a[54091] = anon_sym_AMP_AMP;
	v->a[54092] = anon_sym_PIPE_PIPE;
	v->a[54093] = anon_sym_LT_LT;
	v->a[54094] = 5;
	v->a[54095] = actions(1436);
	v->a[54096] = 1;
	v->a[54097] = sym_comment;
	v->a[54098] = actions(2702);
	v->a[54099] = 2;
	small_parse_table_2705(v);
}

/* EOF small_parse_table_540.c */
