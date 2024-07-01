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
	v->a[62000] = anon_sym_GT_AMP;
	v->a[62001] = anon_sym_GT_PIPE;
	v->a[62002] = 12;
	v->a[62003] = actions(3);
	v->a[62004] = 1;
	v->a[62005] = sym_comment;
	v->a[62006] = actions(682);
	v->a[62007] = 1;
	v->a[62008] = anon_sym_PIPE;
	v->a[62009] = actions(695);
	v->a[62010] = 1;
	v->a[62011] = anon_sym_RPAREN;
	v->a[62012] = actions(2009);
	v->a[62013] = 1;
	v->a[62014] = aux_sym_heredoc_redirect_token1;
	v->a[62015] = actions(2011);
	v->a[62016] = 1;
	v->a[62017] = sym_file_descriptor;
	v->a[62018] = state(741);
	v->a[62019] = 1;
	small_parse_table_3101(v);
}

void	small_parse_table_3101(t_small_parse_table_array *v)
{
	v->a[62020] = sym_terminator;
	v->a[62021] = actions(752);
	v->a[62022] = 2;
	v->a[62023] = anon_sym_AMP_AMP;
	v->a[62024] = anon_sym_PIPE_PIPE;
	v->a[62025] = actions(754);
	v->a[62026] = 2;
	v->a[62027] = anon_sym_LT_LT;
	v->a[62028] = anon_sym_LT_LT_DASH;
	v->a[62029] = actions(2007);
	v->a[62030] = 2;
	v->a[62031] = anon_sym_LT_AMP_DASH;
	v->a[62032] = anon_sym_GT_AMP_DASH;
	v->a[62033] = actions(750);
	v->a[62034] = 3;
	v->a[62035] = anon_sym_SEMI_SEMI;
	v->a[62036] = anon_sym_AMP;
	v->a[62037] = anon_sym_SEMI;
	v->a[62038] = state(1128);
	v->a[62039] = 3;
	small_parse_table_3102(v);
}

void	small_parse_table_3102(t_small_parse_table_array *v)
{
	v->a[62040] = sym_file_redirect;
	v->a[62041] = sym_heredoc_redirect;
	v->a[62042] = aux_sym_redirected_statement_repeat1;
	v->a[62043] = actions(2005);
	v->a[62044] = 6;
	v->a[62045] = anon_sym_LT;
	v->a[62046] = anon_sym_GT;
	v->a[62047] = anon_sym_GT_GT;
	v->a[62048] = anon_sym_LT_AMP;
	v->a[62049] = anon_sym_GT_AMP;
	v->a[62050] = anon_sym_GT_PIPE;
	v->a[62051] = 12;
	v->a[62052] = actions(3);
	v->a[62053] = 1;
	v->a[62054] = sym_comment;
	v->a[62055] = actions(682);
	v->a[62056] = 1;
	v->a[62057] = anon_sym_PIPE;
	v->a[62058] = actions(695);
	v->a[62059] = 1;
	small_parse_table_3103(v);
}

void	small_parse_table_3103(t_small_parse_table_array *v)
{
	v->a[62060] = anon_sym_RPAREN;
	v->a[62061] = actions(2009);
	v->a[62062] = 1;
	v->a[62063] = aux_sym_heredoc_redirect_token1;
	v->a[62064] = actions(2011);
	v->a[62065] = 1;
	v->a[62066] = sym_file_descriptor;
	v->a[62067] = state(740);
	v->a[62068] = 1;
	v->a[62069] = sym_terminator;
	v->a[62070] = actions(752);
	v->a[62071] = 2;
	v->a[62072] = anon_sym_AMP_AMP;
	v->a[62073] = anon_sym_PIPE_PIPE;
	v->a[62074] = actions(754);
	v->a[62075] = 2;
	v->a[62076] = anon_sym_LT_LT;
	v->a[62077] = anon_sym_LT_LT_DASH;
	v->a[62078] = actions(2007);
	v->a[62079] = 2;
	small_parse_table_3104(v);
}

void	small_parse_table_3104(t_small_parse_table_array *v)
{
	v->a[62080] = anon_sym_LT_AMP_DASH;
	v->a[62081] = anon_sym_GT_AMP_DASH;
	v->a[62082] = actions(750);
	v->a[62083] = 3;
	v->a[62084] = anon_sym_SEMI_SEMI;
	v->a[62085] = anon_sym_AMP;
	v->a[62086] = anon_sym_SEMI;
	v->a[62087] = state(1128);
	v->a[62088] = 3;
	v->a[62089] = sym_file_redirect;
	v->a[62090] = sym_heredoc_redirect;
	v->a[62091] = aux_sym_redirected_statement_repeat1;
	v->a[62092] = actions(2005);
	v->a[62093] = 6;
	v->a[62094] = anon_sym_LT;
	v->a[62095] = anon_sym_GT;
	v->a[62096] = anon_sym_GT_GT;
	v->a[62097] = anon_sym_LT_AMP;
	v->a[62098] = anon_sym_GT_AMP;
	v->a[62099] = anon_sym_GT_PIPE;
	small_parse_table_3105(v);
}

/* EOF small_parse_table_620.c */
