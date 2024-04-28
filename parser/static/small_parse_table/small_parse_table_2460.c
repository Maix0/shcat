/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2460.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_12300(t_small_parse_table_array *v)
{
	v->a[246000] = actions(3);
	v->a[246001] = 1;
	v->a[246002] = sym_comment;
	v->a[246003] = actions(1310);
	v->a[246004] = 5;
	v->a[246005] = sym_file_descriptor;
	v->a[246006] = sym__concat;
	v->a[246007] = sym_variable_name;
	v->a[246008] = ts_builtin_sym_end;
	v->a[246009] = aux_sym_heredoc_redirect_token1;
	v->a[246010] = actions(1308);
	v->a[246011] = 22;
	v->a[246012] = anon_sym_SEMI;
	v->a[246013] = anon_sym_PIPE_PIPE;
	v->a[246014] = anon_sym_AMP_AMP;
	v->a[246015] = anon_sym_PIPE;
	v->a[246016] = anon_sym_AMP;
	v->a[246017] = anon_sym_LT;
	v->a[246018] = anon_sym_GT;
	v->a[246019] = anon_sym_LT_LT;
	small_parse_table_12301(v);
}

void	small_parse_table_12301(t_small_parse_table_array *v)
{
	v->a[246020] = anon_sym_GT_GT;
	v->a[246021] = anon_sym_RPAREN;
	v->a[246022] = anon_sym_SEMI_SEMI;
	v->a[246023] = anon_sym_PIPE_AMP;
	v->a[246024] = anon_sym_AMP_GT;
	v->a[246025] = anon_sym_AMP_GT_GT;
	v->a[246026] = anon_sym_LT_AMP;
	v->a[246027] = anon_sym_GT_AMP;
	v->a[246028] = anon_sym_GT_PIPE;
	v->a[246029] = anon_sym_LT_AMP_DASH;
	v->a[246030] = anon_sym_GT_AMP_DASH;
	v->a[246031] = anon_sym_LT_LT_DASH;
	v->a[246032] = aux_sym_concatenation_token1;
	v->a[246033] = anon_sym_BQUOTE;
	v->a[246034] = 6;
	v->a[246035] = actions(3);
	v->a[246036] = 1;
	v->a[246037] = sym_comment;
	v->a[246038] = actions(11301);
	v->a[246039] = 1;
	small_parse_table_12302(v);
}

void	small_parse_table_12302(t_small_parse_table_array *v)
{
	v->a[246040] = aux_sym_concatenation_token1;
	v->a[246041] = actions(11303);
	v->a[246042] = 1;
	v->a[246043] = sym__concat;
	v->a[246044] = state(4284);
	v->a[246045] = 1;
	v->a[246046] = aux_sym_concatenation_repeat1;
	v->a[246047] = actions(4554);
	v->a[246048] = 2;
	v->a[246049] = sym_file_descriptor;
	v->a[246050] = aux_sym_heredoc_redirect_token1;
	v->a[246051] = actions(4552);
	v->a[246052] = 22;
	v->a[246053] = anon_sym_SEMI;
	v->a[246054] = anon_sym_PIPE_PIPE;
	v->a[246055] = anon_sym_AMP_AMP;
	v->a[246056] = anon_sym_PIPE;
	v->a[246057] = anon_sym_AMP;
	v->a[246058] = anon_sym_LT;
	v->a[246059] = anon_sym_GT;
	small_parse_table_12303(v);
}

void	small_parse_table_12303(t_small_parse_table_array *v)
{
	v->a[246060] = anon_sym_LT_LT;
	v->a[246061] = anon_sym_GT_GT;
	v->a[246062] = anon_sym_SEMI_SEMI;
	v->a[246063] = anon_sym_SEMI_AMP;
	v->a[246064] = anon_sym_SEMI_SEMI_AMP;
	v->a[246065] = anon_sym_PIPE_AMP;
	v->a[246066] = anon_sym_AMP_GT;
	v->a[246067] = anon_sym_AMP_GT_GT;
	v->a[246068] = anon_sym_LT_AMP;
	v->a[246069] = anon_sym_GT_AMP;
	v->a[246070] = anon_sym_GT_PIPE;
	v->a[246071] = anon_sym_LT_AMP_DASH;
	v->a[246072] = anon_sym_GT_AMP_DASH;
	v->a[246073] = anon_sym_LT_LT_DASH;
	v->a[246074] = anon_sym_LT_LT_LT;
	v->a[246075] = 7;
	v->a[246076] = actions(3);
	v->a[246077] = 1;
	v->a[246078] = sym_comment;
	v->a[246079] = actions(11508);
	small_parse_table_12304(v);
}

void	small_parse_table_12304(t_small_parse_table_array *v)
{
	v->a[246080] = 1;
	v->a[246081] = anon_sym_LT_LT_LT;
	v->a[246082] = state(4912);
	v->a[246083] = 1;
	v->a[246084] = sym_herestring_redirect;
	v->a[246085] = actions(4253);
	v->a[246086] = 2;
	v->a[246087] = anon_sym_PIPE;
	v->a[246088] = anon_sym_PIPE_AMP;
	v->a[246089] = actions(4272);
	v->a[246090] = 2;
	v->a[246091] = sym_file_descriptor;
	v->a[246092] = aux_sym_heredoc_redirect_token1;
	v->a[246093] = state(4746);
	v->a[246094] = 3;
	v->a[246095] = sym_file_redirect;
	v->a[246096] = sym_heredoc_redirect;
	v->a[246097] = aux_sym_redirected_statement_repeat1;
	v->a[246098] = actions(4270);
	v->a[246099] = 18;
	small_parse_table_12305(v);
}

/* EOF small_parse_table_2460.c */
