/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_3140.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_15700(t_small_parse_table_array *v)
{
	v->a[314000] = sym__heredoc_body;
	v->a[314001] = state(4908);
	v->a[314002] = 1;
	v->a[314003] = sym__simple_heredoc_body;
	v->a[314004] = state(7519);
	v->a[314005] = 1;
	v->a[314006] = sym_heredoc_body;
	v->a[314007] = 6;
	v->a[314008] = actions(71);
	v->a[314009] = 1;
	v->a[314010] = sym_comment;
	v->a[314011] = actions(433);
	v->a[314012] = 1;
	v->a[314013] = anon_sym_LBRACE;
	v->a[314014] = actions(14788);
	v->a[314015] = 1;
	v->a[314016] = anon_sym_SEMI;
	v->a[314017] = actions(14790);
	v->a[314018] = 1;
	v->a[314019] = anon_sym_do;
	small_parse_table_15701(v);
}

void	small_parse_table_15701(t_small_parse_table_array *v)
{
	v->a[314020] = state(4916);
	v->a[314021] = 1;
	v->a[314022] = sym_do_group;
	v->a[314023] = state(4927);
	v->a[314024] = 1;
	v->a[314025] = sym_compound_statement;
	v->a[314026] = 5;
	v->a[314027] = actions(71);
	v->a[314028] = 1;
	v->a[314029] = sym_comment;
	v->a[314030] = actions(14710);
	v->a[314031] = 1;
	v->a[314032] = sym__heredoc_body_beginning;
	v->a[314033] = actions(14722);
	v->a[314034] = 1;
	v->a[314035] = sym_simple_heredoc_body;
	v->a[314036] = state(6845);
	v->a[314037] = 1;
	v->a[314038] = sym_heredoc_body;
	v->a[314039] = state(4989);
	small_parse_table_15702(v);
}

void	small_parse_table_15702(t_small_parse_table_array *v)
{
	v->a[314040] = 2;
	v->a[314041] = sym__heredoc_body;
	v->a[314042] = sym__simple_heredoc_body;
	v->a[314043] = 4;
	v->a[314044] = actions(3);
	v->a[314045] = 1;
	v->a[314046] = sym_comment;
	v->a[314047] = actions(14792);
	v->a[314048] = 1;
	v->a[314049] = anon_sym_in;
	v->a[314050] = actions(14796);
	v->a[314051] = 1;
	v->a[314052] = aux_sym_heredoc_redirect_token1;
	v->a[314053] = actions(14794);
	v->a[314054] = 3;
	v->a[314055] = anon_sym_SEMI;
	v->a[314056] = anon_sym_AMP;
	v->a[314057] = anon_sym_SEMI_SEMI;
	v->a[314058] = 6;
	v->a[314059] = actions(71);
	small_parse_table_15703(v);
}

void	small_parse_table_15703(t_small_parse_table_array *v)
{
	v->a[314060] = 1;
	v->a[314061] = sym_comment;
	v->a[314062] = actions(14710);
	v->a[314063] = 1;
	v->a[314064] = sym__heredoc_body_beginning;
	v->a[314065] = actions(14724);
	v->a[314066] = 1;
	v->a[314067] = sym_simple_heredoc_body;
	v->a[314068] = state(4956);
	v->a[314069] = 1;
	v->a[314070] = sym__heredoc_body;
	v->a[314071] = state(4957);
	v->a[314072] = 1;
	v->a[314073] = sym__simple_heredoc_body;
	v->a[314074] = state(7519);
	v->a[314075] = 1;
	v->a[314076] = sym_heredoc_body;
	v->a[314077] = 5;
	v->a[314078] = actions(71);
	v->a[314079] = 1;
	small_parse_table_15704(v);
}

void	small_parse_table_15704(t_small_parse_table_array *v)
{
	v->a[314080] = sym_comment;
	v->a[314081] = actions(14708);
	v->a[314082] = 1;
	v->a[314083] = sym_simple_heredoc_body;
	v->a[314084] = actions(14710);
	v->a[314085] = 1;
	v->a[314086] = sym__heredoc_body_beginning;
	v->a[314087] = state(6796);
	v->a[314088] = 1;
	v->a[314089] = sym_heredoc_body;
	v->a[314090] = state(5080);
	v->a[314091] = 2;
	v->a[314092] = sym__heredoc_body;
	v->a[314093] = sym__simple_heredoc_body;
	v->a[314094] = 6;
	v->a[314095] = actions(71);
	v->a[314096] = 1;
	v->a[314097] = sym_comment;
	v->a[314098] = actions(14710);
	v->a[314099] = 1;
	small_parse_table_15705(v);
}

/* EOF small_parse_table_3140.c */
