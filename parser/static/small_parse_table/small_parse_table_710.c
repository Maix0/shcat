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
	v->a[71000] = anon_sym_PIPE;
	v->a[71001] = anon_sym_RPAREN;
	v->a[71002] = anon_sym_SEMI_SEMI;
	v->a[71003] = anon_sym_AMP_AMP;
	v->a[71004] = anon_sym_PIPE_PIPE;
	v->a[71005] = anon_sym_LT;
	v->a[71006] = anon_sym_GT;
	v->a[71007] = anon_sym_GT_GT;
	v->a[71008] = anon_sym_AMP_GT;
	v->a[71009] = anon_sym_AMP_GT_GT;
	v->a[71010] = anon_sym_LT_AMP;
	v->a[71011] = anon_sym_GT_AMP;
	v->a[71012] = anon_sym_GT_PIPE;
	v->a[71013] = anon_sym_LT_AMP_DASH;
	v->a[71014] = anon_sym_GT_AMP_DASH;
	v->a[71015] = anon_sym_LT_LT;
	v->a[71016] = anon_sym_LT_LT_DASH;
	v->a[71017] = anon_sym_AMP;
	v->a[71018] = anon_sym_BQUOTE;
	v->a[71019] = anon_sym_SEMI;
	small_parse_table_3551(v);
}

void	small_parse_table_3551(t_small_parse_table_array *v)
{
	v->a[71020] = 5;
	v->a[71021] = actions(3);
	v->a[71022] = 1;
	v->a[71023] = sym_comment;
	v->a[71024] = actions(766);
	v->a[71025] = 1;
	v->a[71026] = anon_sym_PIPE;
	v->a[71027] = actions(927);
	v->a[71028] = 2;
	v->a[71029] = sym_file_descriptor;
	v->a[71030] = aux_sym_heredoc_redirect_token1;
	v->a[71031] = state(1256);
	v->a[71032] = 3;
	v->a[71033] = sym_file_redirect;
	v->a[71034] = sym_heredoc_redirect;
	v->a[71035] = aux_sym_redirected_statement_repeat1;
	v->a[71036] = actions(900);
	v->a[71037] = 17;
	v->a[71038] = anon_sym_SEMI_SEMI;
	v->a[71039] = anon_sym_AMP_AMP;
	small_parse_table_3552(v);
}

void	small_parse_table_3552(t_small_parse_table_array *v)
{
	v->a[71040] = anon_sym_PIPE_PIPE;
	v->a[71041] = anon_sym_LT;
	v->a[71042] = anon_sym_GT;
	v->a[71043] = anon_sym_GT_GT;
	v->a[71044] = anon_sym_AMP_GT;
	v->a[71045] = anon_sym_AMP_GT_GT;
	v->a[71046] = anon_sym_LT_AMP;
	v->a[71047] = anon_sym_GT_AMP;
	v->a[71048] = anon_sym_GT_PIPE;
	v->a[71049] = anon_sym_LT_AMP_DASH;
	v->a[71050] = anon_sym_GT_AMP_DASH;
	v->a[71051] = anon_sym_LT_LT;
	v->a[71052] = anon_sym_LT_LT_DASH;
	v->a[71053] = anon_sym_AMP;
	v->a[71054] = anon_sym_SEMI;
	v->a[71055] = 4;
	v->a[71056] = actions(3);
	v->a[71057] = 1;
	v->a[71058] = sym_comment;
	v->a[71059] = actions(927);
	small_parse_table_3553(v);
}

void	small_parse_table_3553(t_small_parse_table_array *v)
{
	v->a[71060] = 2;
	v->a[71061] = sym_file_descriptor;
	v->a[71062] = aux_sym_heredoc_redirect_token1;
	v->a[71063] = state(1256);
	v->a[71064] = 3;
	v->a[71065] = sym_file_redirect;
	v->a[71066] = sym_heredoc_redirect;
	v->a[71067] = aux_sym_redirected_statement_repeat1;
	v->a[71068] = actions(900);
	v->a[71069] = 18;
	v->a[71070] = anon_sym_PIPE;
	v->a[71071] = anon_sym_SEMI_SEMI;
	v->a[71072] = anon_sym_AMP_AMP;
	v->a[71073] = anon_sym_PIPE_PIPE;
	v->a[71074] = anon_sym_LT;
	v->a[71075] = anon_sym_GT;
	v->a[71076] = anon_sym_GT_GT;
	v->a[71077] = anon_sym_AMP_GT;
	v->a[71078] = anon_sym_AMP_GT_GT;
	v->a[71079] = anon_sym_LT_AMP;
	small_parse_table_3554(v);
}

void	small_parse_table_3554(t_small_parse_table_array *v)
{
	v->a[71080] = anon_sym_GT_AMP;
	v->a[71081] = anon_sym_GT_PIPE;
	v->a[71082] = anon_sym_LT_AMP_DASH;
	v->a[71083] = anon_sym_GT_AMP_DASH;
	v->a[71084] = anon_sym_LT_LT;
	v->a[71085] = anon_sym_LT_LT_DASH;
	v->a[71086] = anon_sym_AMP;
	v->a[71087] = anon_sym_SEMI;
	v->a[71088] = 7;
	v->a[71089] = actions(3);
	v->a[71090] = 1;
	v->a[71091] = sym_comment;
	v->a[71092] = actions(2304);
	v->a[71093] = 1;
	v->a[71094] = sym_file_descriptor;
	v->a[71095] = actions(2015);
	v->a[71096] = 2;
	v->a[71097] = anon_sym_LT_AMP_DASH;
	v->a[71098] = anon_sym_GT_AMP_DASH;
	v->a[71099] = actions(2352);
	small_parse_table_3555(v);
}

/* EOF small_parse_table_710.c */
