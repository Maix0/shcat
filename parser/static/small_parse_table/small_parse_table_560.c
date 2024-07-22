/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_560.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2800(t_small_parse_table_array *v)
{
	v->a[56000] = sym_file_descriptor;
	v->a[56001] = state(581);
	v->a[56002] = 1;
	v->a[56003] = sym_terminator;
	v->a[56004] = actions(786);
	v->a[56005] = 2;
	v->a[56006] = anon_sym_SEMI_SEMI;
	v->a[56007] = anon_sym_SEMI;
	v->a[56008] = actions(788);
	v->a[56009] = 2;
	v->a[56010] = anon_sym_AMP_AMP;
	v->a[56011] = anon_sym_PIPE_PIPE;
	v->a[56012] = actions(790);
	v->a[56013] = 2;
	v->a[56014] = anon_sym_LT_LT;
	v->a[56015] = anon_sym_LT_LT_DASH;
	v->a[56016] = state(1034);
	v->a[56017] = 3;
	v->a[56018] = sym_file_redirect;
	v->a[56019] = sym_heredoc_redirect;
	small_parse_table_2801(v);
}

void	small_parse_table_2801(t_small_parse_table_array *v)
{
	v->a[56020] = aux_sym_redirected_statement_repeat1;
	v->a[56021] = actions(1931);
	v->a[56022] = 7;
	v->a[56023] = anon_sym_LT;
	v->a[56024] = anon_sym_GT;
	v->a[56025] = anon_sym_GT_GT;
	v->a[56026] = anon_sym_LT_AMP;
	v->a[56027] = anon_sym_GT_AMP;
	v->a[56028] = anon_sym_GT_PIPE;
	v->a[56029] = anon_sym_LT_GT;
	v->a[56030] = 6;
	v->a[56031] = actions(3);
	v->a[56032] = 1;
	v->a[56033] = sym_comment;
	v->a[56034] = actions(1902);
	v->a[56035] = 1;
	v->a[56036] = aux_sym_concatenation_token1;
	v->a[56037] = actions(1935);
	v->a[56038] = 1;
	v->a[56039] = sym__concat;
	small_parse_table_2802(v);
}

void	small_parse_table_2802(t_small_parse_table_array *v)
{
	v->a[56040] = state(1002);
	v->a[56041] = 1;
	v->a[56042] = aux_sym_concatenation_repeat1;
	v->a[56043] = actions(1200);
	v->a[56044] = 4;
	v->a[56045] = sym_file_descriptor;
	v->a[56046] = sym_variable_name;
	v->a[56047] = ts_builtin_sym_end;
	v->a[56048] = aux_sym_heredoc_redirect_token1;
	v->a[56049] = actions(1202);
	v->a[56050] = 14;
	v->a[56051] = anon_sym_PIPE;
	v->a[56052] = anon_sym_SEMI_SEMI;
	v->a[56053] = anon_sym_AMP_AMP;
	v->a[56054] = anon_sym_PIPE_PIPE;
	v->a[56055] = anon_sym_LT;
	v->a[56056] = anon_sym_GT;
	v->a[56057] = anon_sym_GT_GT;
	v->a[56058] = anon_sym_LT_AMP;
	v->a[56059] = anon_sym_GT_AMP;
	small_parse_table_2803(v);
}

void	small_parse_table_2803(t_small_parse_table_array *v)
{
	v->a[56060] = anon_sym_GT_PIPE;
	v->a[56061] = anon_sym_LT_GT;
	v->a[56062] = anon_sym_LT_LT;
	v->a[56063] = anon_sym_LT_LT_DASH;
	v->a[56064] = anon_sym_SEMI;
	v->a[56065] = 11;
	v->a[56066] = actions(3);
	v->a[56067] = 1;
	v->a[56068] = sym_comment;
	v->a[56069] = actions(782);
	v->a[56070] = 1;
	v->a[56071] = anon_sym_PIPE;
	v->a[56072] = actions(950);
	v->a[56073] = 1;
	v->a[56074] = ts_builtin_sym_end;
	v->a[56075] = actions(1882);
	v->a[56076] = 1;
	v->a[56077] = aux_sym_heredoc_redirect_token1;
	v->a[56078] = actions(1884);
	v->a[56079] = 1;
	small_parse_table_2804(v);
}

void	small_parse_table_2804(t_small_parse_table_array *v)
{
	v->a[56080] = sym_file_descriptor;
	v->a[56081] = state(722);
	v->a[56082] = 1;
	v->a[56083] = sym_terminator;
	v->a[56084] = actions(790);
	v->a[56085] = 2;
	v->a[56086] = anon_sym_LT_LT;
	v->a[56087] = anon_sym_LT_LT_DASH;
	v->a[56088] = actions(808);
	v->a[56089] = 2;
	v->a[56090] = anon_sym_SEMI_SEMI;
	v->a[56091] = anon_sym_SEMI;
	v->a[56092] = actions(810);
	v->a[56093] = 2;
	v->a[56094] = anon_sym_AMP_AMP;
	v->a[56095] = anon_sym_PIPE_PIPE;
	v->a[56096] = state(1046);
	v->a[56097] = 3;
	v->a[56098] = sym_file_redirect;
	v->a[56099] = sym_heredoc_redirect;
	small_parse_table_2805(v);
}

/* EOF small_parse_table_560.c */
