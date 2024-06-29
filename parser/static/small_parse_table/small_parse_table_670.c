/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_670.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3350(t_small_parse_table_array *v)
{
	v->a[67000] = 2;
	v->a[67001] = anon_sym_AMP_AMP;
	v->a[67002] = anon_sym_PIPE_PIPE;
	v->a[67003] = actions(2064);
	v->a[67004] = 2;
	v->a[67005] = anon_sym_LT_AMP_DASH;
	v->a[67006] = anon_sym_GT_AMP_DASH;
	v->a[67007] = state(1256);
	v->a[67008] = 3;
	v->a[67009] = sym_file_redirect;
	v->a[67010] = sym_heredoc_redirect;
	v->a[67011] = aux_sym_redirected_statement_repeat1;
	v->a[67012] = actions(2062);
	v->a[67013] = 8;
	v->a[67014] = anon_sym_LT;
	v->a[67015] = anon_sym_GT;
	v->a[67016] = anon_sym_GT_GT;
	v->a[67017] = anon_sym_AMP_GT;
	v->a[67018] = anon_sym_AMP_GT_GT;
	v->a[67019] = anon_sym_LT_AMP;
	small_parse_table_3351(v);
}

void	small_parse_table_3351(t_small_parse_table_array *v)
{
	v->a[67020] = anon_sym_GT_AMP;
	v->a[67021] = anon_sym_GT_PIPE;
	v->a[67022] = 6;
	v->a[67023] = actions(3);
	v->a[67024] = 1;
	v->a[67025] = sym_comment;
	v->a[67026] = actions(2101);
	v->a[67027] = 1;
	v->a[67028] = aux_sym_concatenation_token1;
	v->a[67029] = actions(2103);
	v->a[67030] = 1;
	v->a[67031] = sym__concat;
	v->a[67032] = state(1115);
	v->a[67033] = 1;
	v->a[67034] = aux_sym_concatenation_repeat1;
	v->a[67035] = actions(538);
	v->a[67036] = 2;
	v->a[67037] = sym_file_descriptor;
	v->a[67038] = aux_sym_heredoc_redirect_token1;
	v->a[67039] = actions(540);
	small_parse_table_3352(v);
}

void	small_parse_table_3352(t_small_parse_table_array *v)
{
	v->a[67040] = 19;
	v->a[67041] = anon_sym_PIPE;
	v->a[67042] = anon_sym_SEMI_SEMI;
	v->a[67043] = anon_sym_AMP_AMP;
	v->a[67044] = anon_sym_PIPE_PIPE;
	v->a[67045] = anon_sym_LT;
	v->a[67046] = anon_sym_GT;
	v->a[67047] = anon_sym_GT_GT;
	v->a[67048] = anon_sym_AMP_GT;
	v->a[67049] = anon_sym_AMP_GT_GT;
	v->a[67050] = anon_sym_LT_AMP;
	v->a[67051] = anon_sym_GT_AMP;
	v->a[67052] = anon_sym_GT_PIPE;
	v->a[67053] = anon_sym_LT_AMP_DASH;
	v->a[67054] = anon_sym_GT_AMP_DASH;
	v->a[67055] = anon_sym_LT_LT;
	v->a[67056] = anon_sym_LT_LT_DASH;
	v->a[67057] = anon_sym_AMP;
	v->a[67058] = anon_sym_BQUOTE;
	v->a[67059] = anon_sym_SEMI;
	small_parse_table_3353(v);
}

void	small_parse_table_3353(t_small_parse_table_array *v)
{
	v->a[67060] = 12;
	v->a[67061] = actions(3);
	v->a[67062] = 1;
	v->a[67063] = sym_comment;
	v->a[67064] = actions(764);
	v->a[67065] = 1;
	v->a[67066] = anon_sym_SEMI_SEMI;
	v->a[67067] = actions(766);
	v->a[67068] = 1;
	v->a[67069] = anon_sym_PIPE;
	v->a[67070] = actions(2031);
	v->a[67071] = 1;
	v->a[67072] = aux_sym_heredoc_redirect_token1;
	v->a[67073] = actions(2066);
	v->a[67074] = 1;
	v->a[67075] = sym_file_descriptor;
	v->a[67076] = state(738);
	v->a[67077] = 1;
	v->a[67078] = sym_terminator;
	v->a[67079] = actions(800);
	small_parse_table_3354(v);
}

void	small_parse_table_3354(t_small_parse_table_array *v)
{
	v->a[67080] = 2;
	v->a[67081] = anon_sym_AMP;
	v->a[67082] = anon_sym_SEMI;
	v->a[67083] = actions(804);
	v->a[67084] = 2;
	v->a[67085] = anon_sym_LT_LT;
	v->a[67086] = anon_sym_LT_LT_DASH;
	v->a[67087] = actions(893);
	v->a[67088] = 2;
	v->a[67089] = anon_sym_AMP_AMP;
	v->a[67090] = anon_sym_PIPE_PIPE;
	v->a[67091] = actions(2064);
	v->a[67092] = 2;
	v->a[67093] = anon_sym_LT_AMP_DASH;
	v->a[67094] = anon_sym_GT_AMP_DASH;
	v->a[67095] = state(1256);
	v->a[67096] = 3;
	v->a[67097] = sym_file_redirect;
	v->a[67098] = sym_heredoc_redirect;
	v->a[67099] = aux_sym_redirected_statement_repeat1;
	small_parse_table_3355(v);
}

/* EOF small_parse_table_670.c */
