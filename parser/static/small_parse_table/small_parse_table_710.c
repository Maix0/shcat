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
	v->a[71000] = anon_sym_PIPE_PIPE;
	v->a[71001] = actions(861);
	v->a[71002] = 2;
	v->a[71003] = anon_sym_LT_LT;
	v->a[71004] = anon_sym_LT_LT_DASH;
	v->a[71005] = actions(2079);
	v->a[71006] = 2;
	v->a[71007] = anon_sym_LT_AMP_DASH;
	v->a[71008] = anon_sym_GT_AMP_DASH;
	v->a[71009] = state(1283);
	v->a[71010] = 3;
	v->a[71011] = sym_file_redirect;
	v->a[71012] = sym_heredoc_redirect;
	v->a[71013] = aux_sym_redirected_statement_repeat1;
	v->a[71014] = actions(2077);
	v->a[71015] = 8;
	v->a[71016] = anon_sym_LT;
	v->a[71017] = anon_sym_GT;
	v->a[71018] = anon_sym_GT_GT;
	v->a[71019] = anon_sym_AMP_GT;
	small_parse_table_3551(v);
}

void	small_parse_table_3551(t_small_parse_table_array *v)
{
	v->a[71020] = anon_sym_AMP_GT_GT;
	v->a[71021] = anon_sym_LT_AMP;
	v->a[71022] = anon_sym_GT_AMP;
	v->a[71023] = anon_sym_GT_PIPE;
	v->a[71024] = 13;
	v->a[71025] = actions(3);
	v->a[71026] = 1;
	v->a[71027] = sym_comment;
	v->a[71028] = actions(807);
	v->a[71029] = 1;
	v->a[71030] = anon_sym_PIPE;
	v->a[71031] = actions(951);
	v->a[71032] = 1;
	v->a[71033] = ts_builtin_sym_end;
	v->a[71034] = actions(2075);
	v->a[71035] = 1;
	v->a[71036] = sym_file_descriptor;
	v->a[71037] = actions(2450);
	v->a[71038] = 1;
	v->a[71039] = anon_sym_SEMI_SEMI;
	small_parse_table_3552(v);
}

void	small_parse_table_3552(t_small_parse_table_array *v)
{
	v->a[71040] = actions(2452);
	v->a[71041] = 1;
	v->a[71042] = aux_sym_heredoc_redirect_token1;
	v->a[71043] = actions(2454);
	v->a[71044] = 1;
	v->a[71045] = anon_sym_AMP;
	v->a[71046] = actions(2456);
	v->a[71047] = 1;
	v->a[71048] = anon_sym_SEMI;
	v->a[71049] = actions(861);
	v->a[71050] = 2;
	v->a[71051] = anon_sym_LT_LT;
	v->a[71052] = anon_sym_LT_LT_DASH;
	v->a[71053] = actions(934);
	v->a[71054] = 2;
	v->a[71055] = anon_sym_AMP_AMP;
	v->a[71056] = anon_sym_PIPE_PIPE;
	v->a[71057] = actions(2067);
	v->a[71058] = 2;
	v->a[71059] = anon_sym_LT_AMP_DASH;
	small_parse_table_3553(v);
}

void	small_parse_table_3553(t_small_parse_table_array *v)
{
	v->a[71060] = anon_sym_GT_AMP_DASH;
	v->a[71061] = state(1289);
	v->a[71062] = 3;
	v->a[71063] = sym_file_redirect;
	v->a[71064] = sym_heredoc_redirect;
	v->a[71065] = aux_sym_redirected_statement_repeat1;
	v->a[71066] = actions(2065);
	v->a[71067] = 8;
	v->a[71068] = anon_sym_LT;
	v->a[71069] = anon_sym_GT;
	v->a[71070] = anon_sym_GT_GT;
	v->a[71071] = anon_sym_AMP_GT;
	v->a[71072] = anon_sym_AMP_GT_GT;
	v->a[71073] = anon_sym_LT_AMP;
	v->a[71074] = anon_sym_GT_AMP;
	v->a[71075] = anon_sym_GT_PIPE;
	v->a[71076] = 5;
	v->a[71077] = actions(3);
	v->a[71078] = 1;
	v->a[71079] = sym_comment;
	small_parse_table_3554(v);
}

void	small_parse_table_3554(t_small_parse_table_array *v)
{
	v->a[71080] = actions(807);
	v->a[71081] = 1;
	v->a[71082] = anon_sym_PIPE;
	v->a[71083] = actions(803);
	v->a[71084] = 2;
	v->a[71085] = sym_file_descriptor;
	v->a[71086] = aux_sym_heredoc_redirect_token1;
	v->a[71087] = state(1297);
	v->a[71088] = 3;
	v->a[71089] = sym_file_redirect;
	v->a[71090] = sym_heredoc_redirect;
	v->a[71091] = aux_sym_redirected_statement_repeat1;
	v->a[71092] = actions(809);
	v->a[71093] = 18;
	v->a[71094] = anon_sym_SEMI_SEMI;
	v->a[71095] = anon_sym_AMP_AMP;
	v->a[71096] = anon_sym_PIPE_PIPE;
	v->a[71097] = anon_sym_LT;
	v->a[71098] = anon_sym_GT;
	v->a[71099] = anon_sym_GT_GT;
	small_parse_table_3555(v);
}

/* EOF small_parse_table_710.c */
