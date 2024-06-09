/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_620.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3100(t_small_parse_table_array *v)
{
	v->a[62000] = aux_sym_heredoc_redirect_token1;
	v->a[62001] = actions(1249);
	v->a[62002] = 21;
	v->a[62003] = anon_sym_PIPE;
	v->a[62004] = anon_sym_RPAREN;
	v->a[62005] = anon_sym_SEMI_SEMI;
	v->a[62006] = anon_sym_AMP_AMP;
	v->a[62007] = anon_sym_PIPE_PIPE;
	v->a[62008] = anon_sym_LT;
	v->a[62009] = anon_sym_GT;
	v->a[62010] = anon_sym_GT_GT;
	v->a[62011] = anon_sym_AMP_GT;
	v->a[62012] = anon_sym_AMP_GT_GT;
	v->a[62013] = anon_sym_LT_AMP;
	v->a[62014] = anon_sym_GT_AMP;
	v->a[62015] = anon_sym_GT_PIPE;
	v->a[62016] = anon_sym_LT_AMP_DASH;
	v->a[62017] = anon_sym_GT_AMP_DASH;
	v->a[62018] = anon_sym_LT_LT;
	v->a[62019] = anon_sym_LT_LT_DASH;
	small_parse_table_3101(v);
}

void	small_parse_table_3101(t_small_parse_table_array *v)
{
	v->a[62020] = anon_sym_AMP;
	v->a[62021] = aux_sym_concatenation_token1;
	v->a[62022] = anon_sym_BQUOTE;
	v->a[62023] = anon_sym_SEMI;
	v->a[62024] = 6;
	v->a[62025] = actions(3);
	v->a[62026] = 1;
	v->a[62027] = sym_comment;
	v->a[62028] = actions(2199);
	v->a[62029] = 1;
	v->a[62030] = aux_sym_concatenation_token1;
	v->a[62031] = actions(2209);
	v->a[62032] = 1;
	v->a[62033] = sym__concat;
	v->a[62034] = state(941);
	v->a[62035] = 1;
	v->a[62036] = aux_sym_concatenation_repeat1;
	v->a[62037] = actions(1127);
	v->a[62038] = 4;
	v->a[62039] = sym_file_descriptor;
	small_parse_table_3102(v);
}

void	small_parse_table_3102(t_small_parse_table_array *v)
{
	v->a[62040] = sym_variable_name;
	v->a[62041] = ts_builtin_sym_end;
	v->a[62042] = aux_sym_heredoc_redirect_token1;
	v->a[62043] = actions(1129);
	v->a[62044] = 18;
	v->a[62045] = anon_sym_PIPE;
	v->a[62046] = anon_sym_SEMI_SEMI;
	v->a[62047] = anon_sym_AMP_AMP;
	v->a[62048] = anon_sym_PIPE_PIPE;
	v->a[62049] = anon_sym_LT;
	v->a[62050] = anon_sym_GT;
	v->a[62051] = anon_sym_GT_GT;
	v->a[62052] = anon_sym_AMP_GT;
	v->a[62053] = anon_sym_AMP_GT_GT;
	v->a[62054] = anon_sym_LT_AMP;
	v->a[62055] = anon_sym_GT_AMP;
	v->a[62056] = anon_sym_GT_PIPE;
	v->a[62057] = anon_sym_LT_AMP_DASH;
	v->a[62058] = anon_sym_GT_AMP_DASH;
	v->a[62059] = anon_sym_LT_LT;
	small_parse_table_3103(v);
}

void	small_parse_table_3103(t_small_parse_table_array *v)
{
	v->a[62060] = anon_sym_LT_LT_DASH;
	v->a[62061] = anon_sym_AMP;
	v->a[62062] = anon_sym_SEMI;
	v->a[62063] = 3;
	v->a[62064] = actions(3);
	v->a[62065] = 1;
	v->a[62066] = sym_comment;
	v->a[62067] = actions(1112);
	v->a[62068] = 4;
	v->a[62069] = sym_file_descriptor;
	v->a[62070] = sym__concat;
	v->a[62071] = ts_builtin_sym_end;
	v->a[62072] = aux_sym_heredoc_redirect_token1;
	v->a[62073] = actions(1114);
	v->a[62074] = 21;
	v->a[62075] = anon_sym_PIPE;
	v->a[62076] = anon_sym_RPAREN;
	v->a[62077] = anon_sym_SEMI_SEMI;
	v->a[62078] = anon_sym_AMP_AMP;
	v->a[62079] = anon_sym_PIPE_PIPE;
	small_parse_table_3104(v);
}

void	small_parse_table_3104(t_small_parse_table_array *v)
{
	v->a[62080] = anon_sym_LT;
	v->a[62081] = anon_sym_GT;
	v->a[62082] = anon_sym_GT_GT;
	v->a[62083] = anon_sym_AMP_GT;
	v->a[62084] = anon_sym_AMP_GT_GT;
	v->a[62085] = anon_sym_LT_AMP;
	v->a[62086] = anon_sym_GT_AMP;
	v->a[62087] = anon_sym_GT_PIPE;
	v->a[62088] = anon_sym_LT_AMP_DASH;
	v->a[62089] = anon_sym_GT_AMP_DASH;
	v->a[62090] = anon_sym_LT_LT;
	v->a[62091] = anon_sym_LT_LT_DASH;
	v->a[62092] = anon_sym_AMP;
	v->a[62093] = aux_sym_concatenation_token1;
	v->a[62094] = anon_sym_BQUOTE;
	v->a[62095] = anon_sym_SEMI;
	v->a[62096] = 3;
	v->a[62097] = actions(3);
	v->a[62098] = 1;
	v->a[62099] = sym_comment;
	small_parse_table_3105(v);
}

/* EOF small_parse_table_620.c */
