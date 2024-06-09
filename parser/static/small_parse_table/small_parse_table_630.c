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
	v->a[63000] = anon_sym_LT_LT;
	v->a[63001] = anon_sym_LT_LT_DASH;
	v->a[63002] = anon_sym_AMP;
	v->a[63003] = anon_sym_SEMI;
	v->a[63004] = 5;
	v->a[63005] = actions(3);
	v->a[63006] = 1;
	v->a[63007] = sym_comment;
	v->a[63008] = actions(2249);
	v->a[63009] = 1;
	v->a[63010] = anon_sym_PIPE;
	v->a[63011] = state(1506);
	v->a[63012] = 1;
	v->a[63013] = aux_sym_pipeline_repeat1;
	v->a[63014] = actions(2247);
	v->a[63015] = 3;
	v->a[63016] = sym_file_descriptor;
	v->a[63017] = ts_builtin_sym_end;
	v->a[63018] = aux_sym_heredoc_redirect_token1;
	v->a[63019] = actions(2252);
	small_parse_table_3151(v);
}

void	small_parse_table_3151(t_small_parse_table_array *v)
{
	v->a[63020] = 19;
	v->a[63021] = anon_sym_RPAREN;
	v->a[63022] = anon_sym_SEMI_SEMI;
	v->a[63023] = anon_sym_AMP_AMP;
	v->a[63024] = anon_sym_PIPE_PIPE;
	v->a[63025] = anon_sym_LT;
	v->a[63026] = anon_sym_GT;
	v->a[63027] = anon_sym_GT_GT;
	v->a[63028] = anon_sym_AMP_GT;
	v->a[63029] = anon_sym_AMP_GT_GT;
	v->a[63030] = anon_sym_LT_AMP;
	v->a[63031] = anon_sym_GT_AMP;
	v->a[63032] = anon_sym_GT_PIPE;
	v->a[63033] = anon_sym_LT_AMP_DASH;
	v->a[63034] = anon_sym_GT_AMP_DASH;
	v->a[63035] = anon_sym_LT_LT;
	v->a[63036] = anon_sym_LT_LT_DASH;
	v->a[63037] = anon_sym_AMP;
	v->a[63038] = anon_sym_BQUOTE;
	v->a[63039] = anon_sym_SEMI;
	small_parse_table_3152(v);
}

void	small_parse_table_3152(t_small_parse_table_array *v)
{
	v->a[63040] = 5;
	v->a[63041] = actions(3);
	v->a[63042] = 1;
	v->a[63043] = sym_comment;
	v->a[63044] = actions(1006);
	v->a[63045] = 1;
	v->a[63046] = sym_file_descriptor;
	v->a[63047] = actions(1124);
	v->a[63048] = 1;
	v->a[63049] = sym_variable_name;
	v->a[63050] = state(1011);
	v->a[63051] = 2;
	v->a[63052] = sym_variable_assignment;
	v->a[63053] = aux_sym_variable_assignments_repeat1;
	v->a[63054] = actions(1000);
	v->a[63055] = 20;
	v->a[63056] = anon_sym_LT;
	v->a[63057] = anon_sym_GT;
	v->a[63058] = anon_sym_GT_GT;
	v->a[63059] = anon_sym_AMP_GT;
	small_parse_table_3153(v);
}

void	small_parse_table_3153(t_small_parse_table_array *v)
{
	v->a[63060] = anon_sym_AMP_GT_GT;
	v->a[63061] = anon_sym_LT_AMP;
	v->a[63062] = anon_sym_GT_AMP;
	v->a[63063] = anon_sym_GT_PIPE;
	v->a[63064] = anon_sym_LT_AMP_DASH;
	v->a[63065] = anon_sym_GT_AMP_DASH;
	v->a[63066] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[63067] = anon_sym_DOLLAR;
	v->a[63068] = anon_sym_DQUOTE;
	v->a[63069] = sym_raw_string;
	v->a[63070] = aux_sym_number_token1;
	v->a[63071] = aux_sym_number_token2;
	v->a[63072] = anon_sym_DOLLAR_LBRACE;
	v->a[63073] = anon_sym_DOLLAR_LPAREN;
	v->a[63074] = anon_sym_BQUOTE;
	v->a[63075] = sym_word;
	v->a[63076] = 5;
	v->a[63077] = actions(3);
	v->a[63078] = 1;
	v->a[63079] = sym_comment;
	small_parse_table_3154(v);
}

void	small_parse_table_3154(t_small_parse_table_array *v)
{
	v->a[63080] = actions(2258);
	v->a[63081] = 1;
	v->a[63082] = sym_variable_name;
	v->a[63083] = actions(2256);
	v->a[63084] = 2;
	v->a[63085] = sym_file_descriptor;
	v->a[63086] = aux_sym_heredoc_redirect_token1;
	v->a[63087] = state(1009);
	v->a[63088] = 2;
	v->a[63089] = sym_variable_assignment;
	v->a[63090] = aux_sym_variable_assignments_repeat1;
	v->a[63091] = actions(2254);
	v->a[63092] = 19;
	v->a[63093] = anon_sym_PIPE;
	v->a[63094] = anon_sym_SEMI_SEMI;
	v->a[63095] = anon_sym_AMP_AMP;
	v->a[63096] = anon_sym_PIPE_PIPE;
	v->a[63097] = anon_sym_LT;
	v->a[63098] = anon_sym_GT;
	v->a[63099] = anon_sym_GT_GT;
	small_parse_table_3155(v);
}

/* EOF small_parse_table_630.c */
