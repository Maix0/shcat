/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_630.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3150(t_small_parse_table_array *v)
{
	v->a[63000] = sym_comment;
	v->a[63001] = actions(764);
	v->a[63002] = 1;
	v->a[63003] = anon_sym_RPAREN;
	v->a[63004] = actions(766);
	v->a[63005] = 1;
	v->a[63006] = anon_sym_PIPE;
	v->a[63007] = actions(2031);
	v->a[63008] = 1;
	v->a[63009] = aux_sym_heredoc_redirect_token1;
	v->a[63010] = actions(2043);
	v->a[63011] = 1;
	v->a[63012] = sym_file_descriptor;
	v->a[63013] = state(739);
	v->a[63014] = 1;
	v->a[63015] = sym_terminator;
	v->a[63016] = actions(802);
	v->a[63017] = 2;
	v->a[63018] = anon_sym_AMP_AMP;
	v->a[63019] = anon_sym_PIPE_PIPE;
	small_parse_table_3151(v);
}

void	small_parse_table_3151(t_small_parse_table_array *v)
{
	v->a[63020] = actions(804);
	v->a[63021] = 2;
	v->a[63022] = anon_sym_LT_LT;
	v->a[63023] = anon_sym_LT_LT_DASH;
	v->a[63024] = actions(2041);
	v->a[63025] = 2;
	v->a[63026] = anon_sym_LT_AMP_DASH;
	v->a[63027] = anon_sym_GT_AMP_DASH;
	v->a[63028] = actions(800);
	v->a[63029] = 3;
	v->a[63030] = anon_sym_SEMI_SEMI;
	v->a[63031] = anon_sym_AMP;
	v->a[63032] = anon_sym_SEMI;
	v->a[63033] = state(1137);
	v->a[63034] = 3;
	v->a[63035] = sym_file_redirect;
	v->a[63036] = sym_heredoc_redirect;
	v->a[63037] = aux_sym_redirected_statement_repeat1;
	v->a[63038] = actions(2039);
	v->a[63039] = 8;
	small_parse_table_3152(v);
}

void	small_parse_table_3152(t_small_parse_table_array *v)
{
	v->a[63040] = anon_sym_LT;
	v->a[63041] = anon_sym_GT;
	v->a[63042] = anon_sym_GT_GT;
	v->a[63043] = anon_sym_AMP_GT;
	v->a[63044] = anon_sym_AMP_GT_GT;
	v->a[63045] = anon_sym_LT_AMP;
	v->a[63046] = anon_sym_GT_AMP;
	v->a[63047] = anon_sym_GT_PIPE;
	v->a[63048] = 12;
	v->a[63049] = actions(3);
	v->a[63050] = 1;
	v->a[63051] = sym_comment;
	v->a[63052] = actions(764);
	v->a[63053] = 1;
	v->a[63054] = anon_sym_RPAREN;
	v->a[63055] = actions(766);
	v->a[63056] = 1;
	v->a[63057] = anon_sym_PIPE;
	v->a[63058] = actions(2031);
	v->a[63059] = 1;
	small_parse_table_3153(v);
}

void	small_parse_table_3153(t_small_parse_table_array *v)
{
	v->a[63060] = aux_sym_heredoc_redirect_token1;
	v->a[63061] = actions(2043);
	v->a[63062] = 1;
	v->a[63063] = sym_file_descriptor;
	v->a[63064] = state(738);
	v->a[63065] = 1;
	v->a[63066] = sym_terminator;
	v->a[63067] = actions(802);
	v->a[63068] = 2;
	v->a[63069] = anon_sym_AMP_AMP;
	v->a[63070] = anon_sym_PIPE_PIPE;
	v->a[63071] = actions(804);
	v->a[63072] = 2;
	v->a[63073] = anon_sym_LT_LT;
	v->a[63074] = anon_sym_LT_LT_DASH;
	v->a[63075] = actions(2041);
	v->a[63076] = 2;
	v->a[63077] = anon_sym_LT_AMP_DASH;
	v->a[63078] = anon_sym_GT_AMP_DASH;
	v->a[63079] = actions(800);
	small_parse_table_3154(v);
}

void	small_parse_table_3154(t_small_parse_table_array *v)
{
	v->a[63080] = 3;
	v->a[63081] = anon_sym_SEMI_SEMI;
	v->a[63082] = anon_sym_AMP;
	v->a[63083] = anon_sym_SEMI;
	v->a[63084] = state(1137);
	v->a[63085] = 3;
	v->a[63086] = sym_file_redirect;
	v->a[63087] = sym_heredoc_redirect;
	v->a[63088] = aux_sym_redirected_statement_repeat1;
	v->a[63089] = actions(2039);
	v->a[63090] = 8;
	v->a[63091] = anon_sym_LT;
	v->a[63092] = anon_sym_GT;
	v->a[63093] = anon_sym_GT_GT;
	v->a[63094] = anon_sym_AMP_GT;
	v->a[63095] = anon_sym_AMP_GT_GT;
	v->a[63096] = anon_sym_LT_AMP;
	v->a[63097] = anon_sym_GT_AMP;
	v->a[63098] = anon_sym_GT_PIPE;
	v->a[63099] = 12;
	small_parse_table_3155(v);
}

/* EOF small_parse_table_630.c */
