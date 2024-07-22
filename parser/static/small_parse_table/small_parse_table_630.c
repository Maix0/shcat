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
	v->a[63000] = 6;
	v->a[63001] = actions(3);
	v->a[63002] = 1;
	v->a[63003] = sym_comment;
	v->a[63004] = actions(2239);
	v->a[63005] = 1;
	v->a[63006] = sym_file_descriptor;
	v->a[63007] = actions(2061);
	v->a[63008] = 2;
	v->a[63009] = ts_builtin_sym_end;
	v->a[63010] = aux_sym_heredoc_redirect_token1;
	v->a[63011] = state(1146);
	v->a[63012] = 2;
	v->a[63013] = sym_file_redirect;
	v->a[63014] = aux_sym_redirected_statement_repeat2;
	v->a[63015] = actions(1880);
	v->a[63016] = 7;
	v->a[63017] = anon_sym_LT;
	v->a[63018] = anon_sym_GT;
	v->a[63019] = anon_sym_GT_GT;
	small_parse_table_3151(v);
}

void	small_parse_table_3151(t_small_parse_table_array *v)
{
	v->a[63020] = anon_sym_LT_AMP;
	v->a[63021] = anon_sym_GT_AMP;
	v->a[63022] = anon_sym_GT_PIPE;
	v->a[63023] = anon_sym_LT_GT;
	v->a[63024] = actions(2059);
	v->a[63025] = 7;
	v->a[63026] = anon_sym_PIPE;
	v->a[63027] = anon_sym_SEMI_SEMI;
	v->a[63028] = anon_sym_AMP_AMP;
	v->a[63029] = anon_sym_PIPE_PIPE;
	v->a[63030] = anon_sym_LT_LT;
	v->a[63031] = anon_sym_LT_LT_DASH;
	v->a[63032] = anon_sym_SEMI;
	v->a[63033] = 3;
	v->a[63034] = actions(3);
	v->a[63035] = 1;
	v->a[63036] = sym_comment;
	v->a[63037] = actions(2291);
	v->a[63038] = 3;
	v->a[63039] = sym_file_descriptor;
	small_parse_table_3152(v);
}

void	small_parse_table_3152(t_small_parse_table_array *v)
{
	v->a[63040] = ts_builtin_sym_end;
	v->a[63041] = aux_sym_heredoc_redirect_token1;
	v->a[63042] = actions(2293);
	v->a[63043] = 16;
	v->a[63044] = anon_sym_PIPE;
	v->a[63045] = anon_sym_RPAREN;
	v->a[63046] = anon_sym_SEMI_SEMI;
	v->a[63047] = anon_sym_AMP_AMP;
	v->a[63048] = anon_sym_PIPE_PIPE;
	v->a[63049] = anon_sym_LT;
	v->a[63050] = anon_sym_GT;
	v->a[63051] = anon_sym_GT_GT;
	v->a[63052] = anon_sym_LT_AMP;
	v->a[63053] = anon_sym_GT_AMP;
	v->a[63054] = anon_sym_GT_PIPE;
	v->a[63055] = anon_sym_LT_GT;
	v->a[63056] = anon_sym_LT_LT;
	v->a[63057] = anon_sym_LT_LT_DASH;
	v->a[63058] = anon_sym_BQUOTE;
	v->a[63059] = anon_sym_SEMI;
	small_parse_table_3153(v);
}

void	small_parse_table_3153(t_small_parse_table_array *v)
{
	v->a[63060] = 3;
	v->a[63061] = actions(3);
	v->a[63062] = 1;
	v->a[63063] = sym_comment;
	v->a[63064] = actions(2061);
	v->a[63065] = 3;
	v->a[63066] = sym_file_descriptor;
	v->a[63067] = ts_builtin_sym_end;
	v->a[63068] = aux_sym_heredoc_redirect_token1;
	v->a[63069] = actions(2059);
	v->a[63070] = 16;
	v->a[63071] = anon_sym_PIPE;
	v->a[63072] = anon_sym_RPAREN;
	v->a[63073] = anon_sym_SEMI_SEMI;
	v->a[63074] = anon_sym_AMP_AMP;
	v->a[63075] = anon_sym_PIPE_PIPE;
	v->a[63076] = anon_sym_LT;
	v->a[63077] = anon_sym_GT;
	v->a[63078] = anon_sym_GT_GT;
	v->a[63079] = anon_sym_LT_AMP;
	small_parse_table_3154(v);
}

void	small_parse_table_3154(t_small_parse_table_array *v)
{
	v->a[63080] = anon_sym_GT_AMP;
	v->a[63081] = anon_sym_GT_PIPE;
	v->a[63082] = anon_sym_LT_GT;
	v->a[63083] = anon_sym_LT_LT;
	v->a[63084] = anon_sym_LT_LT_DASH;
	v->a[63085] = anon_sym_BQUOTE;
	v->a[63086] = anon_sym_SEMI;
	v->a[63087] = 6;
	v->a[63088] = actions(3);
	v->a[63089] = 1;
	v->a[63090] = sym_comment;
	v->a[63091] = actions(2071);
	v->a[63092] = 1;
	v->a[63093] = aux_sym_heredoc_redirect_token1;
	v->a[63094] = actions(2295);
	v->a[63095] = 1;
	v->a[63096] = sym_file_descriptor;
	v->a[63097] = state(1199);
	v->a[63098] = 2;
	v->a[63099] = sym_file_redirect;
	small_parse_table_3155(v);
}

/* EOF small_parse_table_630.c */
