/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_550.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2750(t_small_parse_table_array *v)
{
	v->a[55000] = aux_sym_redirected_statement_repeat1;
	v->a[55001] = actions(1837);
	v->a[55002] = 7;
	v->a[55003] = anon_sym_LT;
	v->a[55004] = anon_sym_GT;
	v->a[55005] = anon_sym_GT_GT;
	v->a[55006] = anon_sym_LT_AMP;
	v->a[55007] = anon_sym_GT_AMP;
	v->a[55008] = anon_sym_GT_PIPE;
	v->a[55009] = anon_sym_LT_GT;
	v->a[55010] = 11;
	v->a[55011] = actions(3);
	v->a[55012] = 1;
	v->a[55013] = sym_comment;
	v->a[55014] = actions(736);
	v->a[55015] = 1;
	v->a[55016] = anon_sym_PIPE;
	v->a[55017] = actions(804);
	v->a[55018] = 1;
	v->a[55019] = ts_builtin_sym_end;
	small_parse_table_2751(v);
}

void	small_parse_table_2751(t_small_parse_table_array *v)
{
	v->a[55020] = actions(1839);
	v->a[55021] = 1;
	v->a[55022] = aux_sym_heredoc_redirect_token1;
	v->a[55023] = actions(1841);
	v->a[55024] = 1;
	v->a[55025] = sym_file_descriptor;
	v->a[55026] = state(748);
	v->a[55027] = 1;
	v->a[55028] = sym_terminator;
	v->a[55029] = actions(744);
	v->a[55030] = 2;
	v->a[55031] = anon_sym_LT_LT;
	v->a[55032] = anon_sym_LT_LT_DASH;
	v->a[55033] = actions(808);
	v->a[55034] = 2;
	v->a[55035] = anon_sym_AMP_AMP;
	v->a[55036] = anon_sym_PIPE_PIPE;
	v->a[55037] = actions(806);
	v->a[55038] = 3;
	v->a[55039] = anon_sym_SEMI_SEMI;
	small_parse_table_2752(v);
}

void	small_parse_table_2752(t_small_parse_table_array *v)
{
	v->a[55040] = anon_sym_AMP;
	v->a[55041] = anon_sym_SEMI;
	v->a[55042] = state(1073);
	v->a[55043] = 3;
	v->a[55044] = sym_file_redirect;
	v->a[55045] = sym_heredoc_redirect;
	v->a[55046] = aux_sym_redirected_statement_repeat1;
	v->a[55047] = actions(1837);
	v->a[55048] = 7;
	v->a[55049] = anon_sym_LT;
	v->a[55050] = anon_sym_GT;
	v->a[55051] = anon_sym_GT_GT;
	v->a[55052] = anon_sym_LT_AMP;
	v->a[55053] = anon_sym_GT_AMP;
	v->a[55054] = anon_sym_GT_PIPE;
	v->a[55055] = anon_sym_LT_GT;
	v->a[55056] = 11;
	v->a[55057] = actions(3);
	v->a[55058] = 1;
	v->a[55059] = sym_comment;
	small_parse_table_2753(v);
}

void	small_parse_table_2753(t_small_parse_table_array *v)
{
	v->a[55060] = actions(736);
	v->a[55061] = 1;
	v->a[55062] = anon_sym_PIPE;
	v->a[55063] = actions(804);
	v->a[55064] = 1;
	v->a[55065] = ts_builtin_sym_end;
	v->a[55066] = actions(1839);
	v->a[55067] = 1;
	v->a[55068] = aux_sym_heredoc_redirect_token1;
	v->a[55069] = actions(1841);
	v->a[55070] = 1;
	v->a[55071] = sym_file_descriptor;
	v->a[55072] = state(750);
	v->a[55073] = 1;
	v->a[55074] = sym_terminator;
	v->a[55075] = actions(744);
	v->a[55076] = 2;
	v->a[55077] = anon_sym_LT_LT;
	v->a[55078] = anon_sym_LT_LT_DASH;
	v->a[55079] = actions(808);
	small_parse_table_2754(v);
}

void	small_parse_table_2754(t_small_parse_table_array *v)
{
	v->a[55080] = 2;
	v->a[55081] = anon_sym_AMP_AMP;
	v->a[55082] = anon_sym_PIPE_PIPE;
	v->a[55083] = actions(806);
	v->a[55084] = 3;
	v->a[55085] = anon_sym_SEMI_SEMI;
	v->a[55086] = anon_sym_AMP;
	v->a[55087] = anon_sym_SEMI;
	v->a[55088] = state(1073);
	v->a[55089] = 3;
	v->a[55090] = sym_file_redirect;
	v->a[55091] = sym_heredoc_redirect;
	v->a[55092] = aux_sym_redirected_statement_repeat1;
	v->a[55093] = actions(1837);
	v->a[55094] = 7;
	v->a[55095] = anon_sym_LT;
	v->a[55096] = anon_sym_GT;
	v->a[55097] = anon_sym_GT_GT;
	v->a[55098] = anon_sym_LT_AMP;
	v->a[55099] = anon_sym_GT_AMP;
	small_parse_table_2755(v);
}

/* EOF small_parse_table_550.c */
