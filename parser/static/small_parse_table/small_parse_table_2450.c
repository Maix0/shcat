/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2450.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_12250(t_small_parse_table_array *v)
{
	v->a[245000] = actions(3);
	v->a[245001] = 1;
	v->a[245002] = sym_comment;
	v->a[245003] = actions(1338);
	v->a[245004] = 4;
	v->a[245005] = sym_file_descriptor;
	v->a[245006] = sym__concat;
	v->a[245007] = ts_builtin_sym_end;
	v->a[245008] = aux_sym_heredoc_redirect_token1;
	v->a[245009] = actions(1336);
	v->a[245010] = 23;
	v->a[245011] = anon_sym_SEMI;
	v->a[245012] = anon_sym_PIPE_PIPE;
	v->a[245013] = anon_sym_AMP_AMP;
	v->a[245014] = anon_sym_PIPE;
	v->a[245015] = anon_sym_AMP;
	v->a[245016] = anon_sym_LT;
	v->a[245017] = anon_sym_GT;
	v->a[245018] = anon_sym_LT_LT;
	v->a[245019] = anon_sym_GT_GT;
	small_parse_table_12251(v);
}

void	small_parse_table_12251(t_small_parse_table_array *v)
{
	v->a[245020] = anon_sym_RPAREN;
	v->a[245021] = anon_sym_SEMI_SEMI;
	v->a[245022] = anon_sym_PIPE_AMP;
	v->a[245023] = anon_sym_AMP_GT;
	v->a[245024] = anon_sym_AMP_GT_GT;
	v->a[245025] = anon_sym_LT_AMP;
	v->a[245026] = anon_sym_GT_AMP;
	v->a[245027] = anon_sym_GT_PIPE;
	v->a[245028] = anon_sym_LT_AMP_DASH;
	v->a[245029] = anon_sym_GT_AMP_DASH;
	v->a[245030] = anon_sym_LT_LT_DASH;
	v->a[245031] = anon_sym_LT_LT_LT;
	v->a[245032] = aux_sym_concatenation_token1;
	v->a[245033] = anon_sym_BQUOTE;
	v->a[245034] = 11;
	v->a[245035] = actions(3);
	v->a[245036] = 1;
	v->a[245037] = sym_comment;
	v->a[245038] = actions(4259);
	v->a[245039] = 1;
	small_parse_table_12252(v);
}

void	small_parse_table_12252(t_small_parse_table_array *v)
{
	v->a[245040] = aux_sym_heredoc_redirect_token1;
	v->a[245041] = actions(11457);
	v->a[245042] = 1;
	v->a[245043] = sym_file_descriptor;
	v->a[245044] = actions(4249);
	v->a[245045] = 2;
	v->a[245046] = anon_sym_SEMI;
	v->a[245047] = anon_sym_AMP;
	v->a[245048] = actions(4251);
	v->a[245049] = 2;
	v->a[245050] = anon_sym_PIPE_PIPE;
	v->a[245051] = anon_sym_AMP_AMP;
	v->a[245052] = actions(4253);
	v->a[245053] = 2;
	v->a[245054] = anon_sym_PIPE;
	v->a[245055] = anon_sym_PIPE_AMP;
	v->a[245056] = actions(4255);
	v->a[245057] = 2;
	v->a[245058] = anon_sym_LT_LT;
	v->a[245059] = anon_sym_LT_LT_DASH;
	small_parse_table_12253(v);
}

void	small_parse_table_12253(t_small_parse_table_array *v)
{
	v->a[245060] = actions(11282);
	v->a[245061] = 2;
	v->a[245062] = anon_sym_LT_AMP_DASH;
	v->a[245063] = anon_sym_GT_AMP_DASH;
	v->a[245064] = state(4283);
	v->a[245065] = 3;
	v->a[245066] = sym_file_redirect;
	v->a[245067] = sym_heredoc_redirect;
	v->a[245068] = aux_sym_redirected_statement_repeat1;
	v->a[245069] = actions(4257);
	v->a[245070] = 4;
	v->a[245071] = anon_sym_esac;
	v->a[245072] = anon_sym_SEMI_SEMI;
	v->a[245073] = anon_sym_SEMI_AMP;
	v->a[245074] = anon_sym_SEMI_SEMI_AMP;
	v->a[245075] = actions(11280);
	v->a[245076] = 8;
	v->a[245077] = anon_sym_LT;
	v->a[245078] = anon_sym_GT;
	v->a[245079] = anon_sym_GT_GT;
	small_parse_table_12254(v);
}

void	small_parse_table_12254(t_small_parse_table_array *v)
{
	v->a[245080] = anon_sym_AMP_GT;
	v->a[245081] = anon_sym_AMP_GT_GT;
	v->a[245082] = anon_sym_LT_AMP;
	v->a[245083] = anon_sym_GT_AMP;
	v->a[245084] = anon_sym_GT_PIPE;
	v->a[245085] = 6;
	v->a[245086] = actions(3);
	v->a[245087] = 1;
	v->a[245088] = sym_comment;
	v->a[245089] = actions(11500);
	v->a[245090] = 1;
	v->a[245091] = aux_sym_concatenation_token1;
	v->a[245092] = actions(11502);
	v->a[245093] = 1;
	v->a[245094] = sym__concat;
	v->a[245095] = state(4511);
	v->a[245096] = 1;
	v->a[245097] = aux_sym_concatenation_repeat1;
	v->a[245098] = actions(1263);
	v->a[245099] = 4;
	small_parse_table_12255(v);
}

/* EOF small_parse_table_2450.c */
