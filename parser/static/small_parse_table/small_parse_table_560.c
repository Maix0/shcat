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
	v->a[56000] = state(1080);
	v->a[56001] = 3;
	v->a[56002] = sym_file_redirect;
	v->a[56003] = sym_heredoc_redirect;
	v->a[56004] = aux_sym_redirected_statement_repeat1;
	v->a[56005] = actions(1879);
	v->a[56006] = 7;
	v->a[56007] = anon_sym_LT;
	v->a[56008] = anon_sym_GT;
	v->a[56009] = anon_sym_GT_GT;
	v->a[56010] = anon_sym_LT_AMP;
	v->a[56011] = anon_sym_GT_AMP;
	v->a[56012] = anon_sym_GT_PIPE;
	v->a[56013] = anon_sym_LT_GT;
	v->a[56014] = 11;
	v->a[56015] = actions(3);
	v->a[56016] = 1;
	v->a[56017] = sym_comment;
	v->a[56018] = actions(736);
	v->a[56019] = 1;
	small_parse_table_2801(v);
}

void	small_parse_table_2801(t_small_parse_table_array *v)
{
	v->a[56020] = anon_sym_PIPE;
	v->a[56021] = actions(842);
	v->a[56022] = 1;
	v->a[56023] = anon_sym_BQUOTE;
	v->a[56024] = actions(1865);
	v->a[56025] = 1;
	v->a[56026] = aux_sym_heredoc_redirect_token1;
	v->a[56027] = actions(1867);
	v->a[56028] = 1;
	v->a[56029] = sym_file_descriptor;
	v->a[56030] = state(814);
	v->a[56031] = 1;
	v->a[56032] = sym_terminator;
	v->a[56033] = actions(744);
	v->a[56034] = 2;
	v->a[56035] = anon_sym_LT_LT;
	v->a[56036] = anon_sym_LT_LT_DASH;
	v->a[56037] = actions(990);
	v->a[56038] = 2;
	v->a[56039] = anon_sym_AMP_AMP;
	small_parse_table_2802(v);
}

void	small_parse_table_2802(t_small_parse_table_array *v)
{
	v->a[56040] = anon_sym_PIPE_PIPE;
	v->a[56041] = actions(740);
	v->a[56042] = 3;
	v->a[56043] = anon_sym_SEMI_SEMI;
	v->a[56044] = anon_sym_AMP;
	v->a[56045] = anon_sym_SEMI;
	v->a[56046] = state(1059);
	v->a[56047] = 3;
	v->a[56048] = sym_file_redirect;
	v->a[56049] = sym_heredoc_redirect;
	v->a[56050] = aux_sym_redirected_statement_repeat1;
	v->a[56051] = actions(1863);
	v->a[56052] = 7;
	v->a[56053] = anon_sym_LT;
	v->a[56054] = anon_sym_GT;
	v->a[56055] = anon_sym_GT_GT;
	v->a[56056] = anon_sym_LT_AMP;
	v->a[56057] = anon_sym_GT_AMP;
	v->a[56058] = anon_sym_GT_PIPE;
	v->a[56059] = anon_sym_LT_GT;
	small_parse_table_2803(v);
}

void	small_parse_table_2803(t_small_parse_table_array *v)
{
	v->a[56060] = 11;
	v->a[56061] = actions(3);
	v->a[56062] = 1;
	v->a[56063] = sym_comment;
	v->a[56064] = actions(736);
	v->a[56065] = 1;
	v->a[56066] = anon_sym_PIPE;
	v->a[56067] = actions(842);
	v->a[56068] = 1;
	v->a[56069] = anon_sym_BQUOTE;
	v->a[56070] = actions(1865);
	v->a[56071] = 1;
	v->a[56072] = aux_sym_heredoc_redirect_token1;
	v->a[56073] = actions(1867);
	v->a[56074] = 1;
	v->a[56075] = sym_file_descriptor;
	v->a[56076] = state(815);
	v->a[56077] = 1;
	v->a[56078] = sym_terminator;
	v->a[56079] = actions(744);
	small_parse_table_2804(v);
}

void	small_parse_table_2804(t_small_parse_table_array *v)
{
	v->a[56080] = 2;
	v->a[56081] = anon_sym_LT_LT;
	v->a[56082] = anon_sym_LT_LT_DASH;
	v->a[56083] = actions(990);
	v->a[56084] = 2;
	v->a[56085] = anon_sym_AMP_AMP;
	v->a[56086] = anon_sym_PIPE_PIPE;
	v->a[56087] = actions(740);
	v->a[56088] = 3;
	v->a[56089] = anon_sym_SEMI_SEMI;
	v->a[56090] = anon_sym_AMP;
	v->a[56091] = anon_sym_SEMI;
	v->a[56092] = state(1059);
	v->a[56093] = 3;
	v->a[56094] = sym_file_redirect;
	v->a[56095] = sym_heredoc_redirect;
	v->a[56096] = aux_sym_redirected_statement_repeat1;
	v->a[56097] = actions(1863);
	v->a[56098] = 7;
	v->a[56099] = anon_sym_LT;
	small_parse_table_2805(v);
}

/* EOF small_parse_table_560.c */
