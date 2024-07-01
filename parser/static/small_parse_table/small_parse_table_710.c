/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_710.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3550(t_small_parse_table_array *v)
{
	v->a[71000] = 3;
	v->a[71001] = sym_file_descriptor;
	v->a[71002] = ts_builtin_sym_end;
	v->a[71003] = aux_sym_heredoc_redirect_token1;
	v->a[71004] = actions(2401);
	v->a[71005] = 18;
	v->a[71006] = anon_sym_PIPE;
	v->a[71007] = anon_sym_RPAREN;
	v->a[71008] = anon_sym_SEMI_SEMI;
	v->a[71009] = anon_sym_AMP_AMP;
	v->a[71010] = anon_sym_PIPE_PIPE;
	v->a[71011] = anon_sym_LT;
	v->a[71012] = anon_sym_GT;
	v->a[71013] = anon_sym_GT_GT;
	v->a[71014] = anon_sym_LT_AMP;
	v->a[71015] = anon_sym_GT_AMP;
	v->a[71016] = anon_sym_GT_PIPE;
	v->a[71017] = anon_sym_LT_AMP_DASH;
	v->a[71018] = anon_sym_GT_AMP_DASH;
	v->a[71019] = anon_sym_LT_LT;
	small_parse_table_3551(v);
}

void	small_parse_table_3551(t_small_parse_table_array *v)
{
	v->a[71020] = anon_sym_LT_LT_DASH;
	v->a[71021] = anon_sym_AMP;
	v->a[71022] = anon_sym_BQUOTE;
	v->a[71023] = anon_sym_SEMI;
	v->a[71024] = 5;
	v->a[71025] = actions(3);
	v->a[71026] = 1;
	v->a[71027] = sym_comment;
	v->a[71028] = actions(682);
	v->a[71029] = 1;
	v->a[71030] = anon_sym_PIPE;
	v->a[71031] = actions(984);
	v->a[71032] = 2;
	v->a[71033] = sym_file_descriptor;
	v->a[71034] = aux_sym_heredoc_redirect_token1;
	v->a[71035] = state(1268);
	v->a[71036] = 3;
	v->a[71037] = sym_file_redirect;
	v->a[71038] = sym_heredoc_redirect;
	v->a[71039] = aux_sym_redirected_statement_repeat1;
	small_parse_table_3552(v);
}

void	small_parse_table_3552(t_small_parse_table_array *v)
{
	v->a[71040] = actions(935);
	v->a[71041] = 15;
	v->a[71042] = anon_sym_SEMI_SEMI;
	v->a[71043] = anon_sym_AMP_AMP;
	v->a[71044] = anon_sym_PIPE_PIPE;
	v->a[71045] = anon_sym_LT;
	v->a[71046] = anon_sym_GT;
	v->a[71047] = anon_sym_GT_GT;
	v->a[71048] = anon_sym_LT_AMP;
	v->a[71049] = anon_sym_GT_AMP;
	v->a[71050] = anon_sym_GT_PIPE;
	v->a[71051] = anon_sym_LT_AMP_DASH;
	v->a[71052] = anon_sym_GT_AMP_DASH;
	v->a[71053] = anon_sym_LT_LT;
	v->a[71054] = anon_sym_LT_LT_DASH;
	v->a[71055] = anon_sym_AMP;
	v->a[71056] = anon_sym_SEMI;
	v->a[71057] = 7;
	v->a[71058] = actions(3);
	v->a[71059] = 1;
	small_parse_table_3553(v);
}

void	small_parse_table_3553(t_small_parse_table_array *v)
{
	v->a[71060] = sym_comment;
	v->a[71061] = actions(2216);
	v->a[71062] = 1;
	v->a[71063] = aux_sym_heredoc_redirect_token1;
	v->a[71064] = actions(2448);
	v->a[71065] = 1;
	v->a[71066] = sym_file_descriptor;
	v->a[71067] = actions(2063);
	v->a[71068] = 2;
	v->a[71069] = anon_sym_LT_AMP_DASH;
	v->a[71070] = anon_sym_GT_AMP_DASH;
	v->a[71071] = state(1322);
	v->a[71072] = 2;
	v->a[71073] = sym_file_redirect;
	v->a[71074] = aux_sym_redirected_statement_repeat2;
	v->a[71075] = actions(2061);
	v->a[71076] = 6;
	v->a[71077] = anon_sym_LT;
	v->a[71078] = anon_sym_GT;
	v->a[71079] = anon_sym_GT_GT;
	small_parse_table_3554(v);
}

void	small_parse_table_3554(t_small_parse_table_array *v)
{
	v->a[71080] = anon_sym_LT_AMP;
	v->a[71081] = anon_sym_GT_AMP;
	v->a[71082] = anon_sym_GT_PIPE;
	v->a[71083] = actions(2218);
	v->a[71084] = 8;
	v->a[71085] = anon_sym_PIPE;
	v->a[71086] = anon_sym_SEMI_SEMI;
	v->a[71087] = anon_sym_AMP_AMP;
	v->a[71088] = anon_sym_PIPE_PIPE;
	v->a[71089] = anon_sym_LT_LT;
	v->a[71090] = anon_sym_LT_LT_DASH;
	v->a[71091] = anon_sym_AMP;
	v->a[71092] = anon_sym_SEMI;
	v->a[71093] = 7;
	v->a[71094] = actions(3);
	v->a[71095] = 1;
	v->a[71096] = sym_comment;
	v->a[71097] = actions(2255);
	v->a[71098] = 1;
	v->a[71099] = aux_sym_heredoc_redirect_token1;
	small_parse_table_3555(v);
}

/* EOF small_parse_table_710.c */
