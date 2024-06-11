/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_822.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4110(t_small_parse_table_array *v)
{
	v->a[82200] = actions(3029);
	v->a[82201] = 8;
	v->a[82202] = anon_sym_LT;
	v->a[82203] = anon_sym_GT;
	v->a[82204] = anon_sym_GT_GT;
	v->a[82205] = anon_sym_AMP_GT;
	v->a[82206] = anon_sym_AMP_GT_GT;
	v->a[82207] = anon_sym_LT_AMP;
	v->a[82208] = anon_sym_GT_AMP;
	v->a[82209] = anon_sym_GT_PIPE;
	v->a[82210] = 3;
	v->a[82211] = actions(1094);
	v->a[82212] = 1;
	v->a[82213] = sym_comment;
	v->a[82214] = actions(1203);
	v->a[82215] = 7;
	v->a[82216] = anon_sym_PIPE;
	v->a[82217] = anon_sym_LT;
	v->a[82218] = anon_sym_GT;
	v->a[82219] = anon_sym_AMP_GT;
	small_parse_table_4111(v);
}

void	small_parse_table_4111(t_small_parse_table_array *v)
{
	v->a[82220] = anon_sym_LT_AMP;
	v->a[82221] = anon_sym_GT_AMP;
	v->a[82222] = anon_sym_LT_LT;
	v->a[82223] = actions(1205);
	v->a[82224] = 12;
	v->a[82225] = sym_file_descriptor;
	v->a[82226] = sym__concat;
	v->a[82227] = sym_variable_name;
	v->a[82228] = anon_sym_AMP_AMP;
	v->a[82229] = anon_sym_PIPE_PIPE;
	v->a[82230] = anon_sym_GT_GT;
	v->a[82231] = anon_sym_AMP_GT_GT;
	v->a[82232] = anon_sym_GT_PIPE;
	v->a[82233] = anon_sym_LT_AMP_DASH;
	v->a[82234] = anon_sym_GT_AMP_DASH;
	v->a[82235] = anon_sym_LT_LT_DASH;
	v->a[82236] = aux_sym_concatenation_token1;
	v->a[82237] = 5;
	v->a[82238] = actions(1094);
	v->a[82239] = 1;
	small_parse_table_4112(v);
}

void	small_parse_table_4112(t_small_parse_table_array *v)
{
	v->a[82240] = sym_comment;
	v->a[82241] = state(1567);
	v->a[82242] = 1;
	v->a[82243] = aux_sym_concatenation_repeat1;
	v->a[82244] = actions(3038);
	v->a[82245] = 2;
	v->a[82246] = sym__concat;
	v->a[82247] = aux_sym_concatenation_token1;
	v->a[82248] = actions(999);
	v->a[82249] = 7;
	v->a[82250] = anon_sym_PIPE;
	v->a[82251] = anon_sym_LT;
	v->a[82252] = anon_sym_GT;
	v->a[82253] = anon_sym_AMP_GT;
	v->a[82254] = anon_sym_LT_AMP;
	v->a[82255] = anon_sym_GT_AMP;
	v->a[82256] = anon_sym_LT_LT;
	v->a[82257] = actions(1004);
	v->a[82258] = 9;
	v->a[82259] = sym_file_descriptor;
	small_parse_table_4113(v);
}

void	small_parse_table_4113(t_small_parse_table_array *v)
{
	v->a[82260] = anon_sym_AMP_AMP;
	v->a[82261] = anon_sym_PIPE_PIPE;
	v->a[82262] = anon_sym_GT_GT;
	v->a[82263] = anon_sym_AMP_GT_GT;
	v->a[82264] = anon_sym_GT_PIPE;
	v->a[82265] = anon_sym_LT_AMP_DASH;
	v->a[82266] = anon_sym_GT_AMP_DASH;
	v->a[82267] = anon_sym_LT_LT_DASH;
	v->a[82268] = 3;
	v->a[82269] = actions(1094);
	v->a[82270] = 1;
	v->a[82271] = sym_comment;
	v->a[82272] = actions(1102);
	v->a[82273] = 7;
	v->a[82274] = anon_sym_PIPE;
	v->a[82275] = anon_sym_LT;
	v->a[82276] = anon_sym_GT;
	v->a[82277] = anon_sym_AMP_GT;
	v->a[82278] = anon_sym_LT_AMP;
	v->a[82279] = anon_sym_GT_AMP;
	small_parse_table_4114(v);
}

void	small_parse_table_4114(t_small_parse_table_array *v)
{
	v->a[82280] = anon_sym_LT_LT;
	v->a[82281] = actions(1100);
	v->a[82282] = 12;
	v->a[82283] = sym_file_descriptor;
	v->a[82284] = sym__concat;
	v->a[82285] = sym_variable_name;
	v->a[82286] = anon_sym_AMP_AMP;
	v->a[82287] = anon_sym_PIPE_PIPE;
	v->a[82288] = anon_sym_GT_GT;
	v->a[82289] = anon_sym_AMP_GT_GT;
	v->a[82290] = anon_sym_GT_PIPE;
	v->a[82291] = anon_sym_LT_AMP_DASH;
	v->a[82292] = anon_sym_GT_AMP_DASH;
	v->a[82293] = anon_sym_LT_LT_DASH;
	v->a[82294] = aux_sym_concatenation_token1;
	v->a[82295] = 3;
	v->a[82296] = actions(1094);
	v->a[82297] = 1;
	v->a[82298] = sym_comment;
	v->a[82299] = actions(1143);
	small_parse_table_4115(v);
}

/* EOF small_parse_table_822.c */
