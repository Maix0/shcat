/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2750.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13750(t_small_parse_table_array *v)
{
	v->a[275000] = actions(4692);
	v->a[275001] = 2;
	v->a[275002] = anon_sym_LT_LT;
	v->a[275003] = anon_sym_LT_LT_DASH;
	v->a[275004] = actions(5940);
	v->a[275005] = 2;
	v->a[275006] = anon_sym_PIPE_PIPE;
	v->a[275007] = anon_sym_AMP_AMP;
	v->a[275008] = actions(12346);
	v->a[275009] = 2;
	v->a[275010] = anon_sym_LT_AMP_DASH;
	v->a[275011] = anon_sym_GT_AMP_DASH;
	v->a[275012] = state(5366);
	v->a[275013] = 3;
	v->a[275014] = sym_file_redirect;
	v->a[275015] = sym_heredoc_redirect;
	v->a[275016] = aux_sym_redirected_statement_repeat1;
	v->a[275017] = actions(12344);
	v->a[275018] = 8;
	v->a[275019] = anon_sym_LT;
	small_parse_table_13751(v);
}

void	small_parse_table_13751(t_small_parse_table_array *v)
{
	v->a[275020] = anon_sym_GT;
	v->a[275021] = anon_sym_GT_GT;
	v->a[275022] = anon_sym_AMP_GT;
	v->a[275023] = anon_sym_AMP_GT_GT;
	v->a[275024] = anon_sym_LT_AMP;
	v->a[275025] = anon_sym_GT_AMP;
	v->a[275026] = anon_sym_GT_PIPE;
	v->a[275027] = 11;
	v->a[275028] = actions(3);
	v->a[275029] = 1;
	v->a[275030] = sym_comment;
	v->a[275031] = actions(5942);
	v->a[275032] = 1;
	v->a[275033] = aux_sym_heredoc_redirect_token1;
	v->a[275034] = actions(12317);
	v->a[275035] = 1;
	v->a[275036] = anon_sym_LT_LT_LT;
	v->a[275037] = actions(12348);
	v->a[275038] = 1;
	v->a[275039] = sym_file_descriptor;
	small_parse_table_13752(v);
}

void	small_parse_table_13752(t_small_parse_table_array *v)
{
	v->a[275040] = state(4912);
	v->a[275041] = 1;
	v->a[275042] = sym_herestring_redirect;
	v->a[275043] = actions(4253);
	v->a[275044] = 2;
	v->a[275045] = anon_sym_PIPE;
	v->a[275046] = anon_sym_PIPE_AMP;
	v->a[275047] = actions(4692);
	v->a[275048] = 2;
	v->a[275049] = anon_sym_LT_LT;
	v->a[275050] = anon_sym_LT_LT_DASH;
	v->a[275051] = actions(5940);
	v->a[275052] = 2;
	v->a[275053] = anon_sym_PIPE_PIPE;
	v->a[275054] = anon_sym_AMP_AMP;
	v->a[275055] = actions(12346);
	v->a[275056] = 2;
	v->a[275057] = anon_sym_LT_AMP_DASH;
	v->a[275058] = anon_sym_GT_AMP_DASH;
	v->a[275059] = state(5366);
	small_parse_table_13753(v);
}

void	small_parse_table_13753(t_small_parse_table_array *v)
{
	v->a[275060] = 3;
	v->a[275061] = sym_file_redirect;
	v->a[275062] = sym_heredoc_redirect;
	v->a[275063] = aux_sym_redirected_statement_repeat1;
	v->a[275064] = actions(12344);
	v->a[275065] = 8;
	v->a[275066] = anon_sym_LT;
	v->a[275067] = anon_sym_GT;
	v->a[275068] = anon_sym_GT_GT;
	v->a[275069] = anon_sym_AMP_GT;
	v->a[275070] = anon_sym_AMP_GT_GT;
	v->a[275071] = anon_sym_LT_AMP;
	v->a[275072] = anon_sym_GT_AMP;
	v->a[275073] = anon_sym_GT_PIPE;
	v->a[275074] = 3;
	v->a[275075] = actions(3);
	v->a[275076] = 1;
	v->a[275077] = sym_comment;
	v->a[275078] = actions(12298);
	v->a[275079] = 2;
	small_parse_table_13754(v);
}

void	small_parse_table_13754(t_small_parse_table_array *v)
{
	v->a[275080] = sym_file_descriptor;
	v->a[275081] = aux_sym_heredoc_redirect_token1;
	v->a[275082] = actions(12296);
	v->a[275083] = 21;
	v->a[275084] = anon_sym_SEMI;
	v->a[275085] = anon_sym_PIPE_PIPE;
	v->a[275086] = anon_sym_AMP_AMP;
	v->a[275087] = anon_sym_PIPE;
	v->a[275088] = anon_sym_AMP;
	v->a[275089] = anon_sym_LT;
	v->a[275090] = anon_sym_GT;
	v->a[275091] = anon_sym_LT_LT;
	v->a[275092] = anon_sym_GT_GT;
	v->a[275093] = anon_sym_SEMI_SEMI;
	v->a[275094] = anon_sym_SEMI_AMP;
	v->a[275095] = anon_sym_SEMI_SEMI_AMP;
	v->a[275096] = anon_sym_PIPE_AMP;
	v->a[275097] = anon_sym_AMP_GT;
	v->a[275098] = anon_sym_AMP_GT_GT;
	v->a[275099] = anon_sym_LT_AMP;
	small_parse_table_13755(v);
}

/* EOF small_parse_table_2750.c */
