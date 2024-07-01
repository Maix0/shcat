/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_590.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2950(t_small_parse_table_array *v)
{
	v->a[59000] = 3;
	v->a[59001] = sym_file_redirect;
	v->a[59002] = sym_heredoc_redirect;
	v->a[59003] = aux_sym_redirected_statement_repeat1;
	v->a[59004] = actions(960);
	v->a[59005] = 15;
	v->a[59006] = anon_sym_SEMI_SEMI;
	v->a[59007] = anon_sym_AMP_AMP;
	v->a[59008] = anon_sym_PIPE_PIPE;
	v->a[59009] = anon_sym_LT;
	v->a[59010] = anon_sym_GT;
	v->a[59011] = anon_sym_GT_GT;
	v->a[59012] = anon_sym_LT_AMP;
	v->a[59013] = anon_sym_GT_AMP;
	v->a[59014] = anon_sym_GT_PIPE;
	v->a[59015] = anon_sym_LT_GT;
	v->a[59016] = anon_sym_LT_LT;
	v->a[59017] = anon_sym_LT_LT_DASH;
	v->a[59018] = anon_sym_AMP;
	v->a[59019] = anon_sym_BQUOTE;
	small_parse_table_2951(v);
}

void	small_parse_table_2951(t_small_parse_table_array *v)
{
	v->a[59020] = anon_sym_SEMI;
	v->a[59021] = 7;
	v->a[59022] = actions(3);
	v->a[59023] = 1;
	v->a[59024] = sym_comment;
	v->a[59025] = actions(1867);
	v->a[59026] = 1;
	v->a[59027] = sym_file_descriptor;
	v->a[59028] = actions(1955);
	v->a[59029] = 1;
	v->a[59030] = aux_sym_heredoc_redirect_token1;
	v->a[59031] = actions(744);
	v->a[59032] = 2;
	v->a[59033] = anon_sym_LT_LT;
	v->a[59034] = anon_sym_LT_LT_DASH;
	v->a[59035] = state(1054);
	v->a[59036] = 3;
	v->a[59037] = sym_file_redirect;
	v->a[59038] = sym_heredoc_redirect;
	v->a[59039] = aux_sym_redirected_statement_repeat1;
	small_parse_table_2952(v);
}

void	small_parse_table_2952(t_small_parse_table_array *v)
{
	v->a[59040] = actions(1863);
	v->a[59041] = 7;
	v->a[59042] = anon_sym_LT;
	v->a[59043] = anon_sym_GT;
	v->a[59044] = anon_sym_GT_GT;
	v->a[59045] = anon_sym_LT_AMP;
	v->a[59046] = anon_sym_GT_AMP;
	v->a[59047] = anon_sym_GT_PIPE;
	v->a[59048] = anon_sym_LT_GT;
	v->a[59049] = actions(1953);
	v->a[59050] = 7;
	v->a[59051] = anon_sym_PIPE;
	v->a[59052] = anon_sym_SEMI_SEMI;
	v->a[59053] = anon_sym_AMP_AMP;
	v->a[59054] = anon_sym_PIPE_PIPE;
	v->a[59055] = anon_sym_AMP;
	v->a[59056] = anon_sym_BQUOTE;
	v->a[59057] = anon_sym_SEMI;
	v->a[59058] = 10;
	v->a[59059] = actions(3);
	small_parse_table_2953(v);
}

void	small_parse_table_2953(t_small_parse_table_array *v)
{
	v->a[59060] = 1;
	v->a[59061] = sym_comment;
	v->a[59062] = actions(904);
	v->a[59063] = 1;
	v->a[59064] = ts_builtin_sym_end;
	v->a[59065] = actions(1839);
	v->a[59066] = 1;
	v->a[59067] = aux_sym_heredoc_redirect_token1;
	v->a[59068] = actions(1841);
	v->a[59069] = 1;
	v->a[59070] = sym_file_descriptor;
	v->a[59071] = state(756);
	v->a[59072] = 1;
	v->a[59073] = sym_terminator;
	v->a[59074] = actions(744);
	v->a[59075] = 2;
	v->a[59076] = anon_sym_LT_LT;
	v->a[59077] = anon_sym_LT_LT_DASH;
	v->a[59078] = actions(808);
	v->a[59079] = 2;
	small_parse_table_2954(v);
}

void	small_parse_table_2954(t_small_parse_table_array *v)
{
	v->a[59080] = anon_sym_AMP_AMP;
	v->a[59081] = anon_sym_PIPE_PIPE;
	v->a[59082] = actions(806);
	v->a[59083] = 3;
	v->a[59084] = anon_sym_SEMI_SEMI;
	v->a[59085] = anon_sym_AMP;
	v->a[59086] = anon_sym_SEMI;
	v->a[59087] = state(1073);
	v->a[59088] = 3;
	v->a[59089] = sym_file_redirect;
	v->a[59090] = sym_heredoc_redirect;
	v->a[59091] = aux_sym_redirected_statement_repeat1;
	v->a[59092] = actions(1837);
	v->a[59093] = 7;
	v->a[59094] = anon_sym_LT;
	v->a[59095] = anon_sym_GT;
	v->a[59096] = anon_sym_GT_GT;
	v->a[59097] = anon_sym_LT_AMP;
	v->a[59098] = anon_sym_GT_AMP;
	v->a[59099] = anon_sym_GT_PIPE;
	small_parse_table_2955(v);
}

/* EOF small_parse_table_590.c */
