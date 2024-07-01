/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_802.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4010(t_small_parse_table_array *v)
{
	v->a[80200] = sym_arithmetic_expansion;
	v->a[80201] = sym_string;
	v->a[80202] = sym_simple_expansion;
	v->a[80203] = sym_expansion;
	v->a[80204] = sym_command_substitution;
	v->a[80205] = 3;
	v->a[80206] = actions(870);
	v->a[80207] = 1;
	v->a[80208] = sym_comment;
	v->a[80209] = actions(1035);
	v->a[80210] = 6;
	v->a[80211] = anon_sym_PIPE;
	v->a[80212] = anon_sym_LT;
	v->a[80213] = anon_sym_GT;
	v->a[80214] = anon_sym_LT_AMP;
	v->a[80215] = anon_sym_GT_AMP;
	v->a[80216] = anon_sym_LT_LT;
	v->a[80217] = actions(1037);
	v->a[80218] = 10;
	v->a[80219] = sym_file_descriptor;
	small_parse_table_4011(v);
}

void	small_parse_table_4011(t_small_parse_table_array *v)
{
	v->a[80220] = sym__concat;
	v->a[80221] = anon_sym_AMP_AMP;
	v->a[80222] = anon_sym_PIPE_PIPE;
	v->a[80223] = anon_sym_GT_GT;
	v->a[80224] = anon_sym_GT_PIPE;
	v->a[80225] = anon_sym_LT_AMP_DASH;
	v->a[80226] = anon_sym_GT_AMP_DASH;
	v->a[80227] = anon_sym_LT_LT_DASH;
	v->a[80228] = aux_sym_concatenation_token1;
	v->a[80229] = 3;
	v->a[80230] = actions(870);
	v->a[80231] = 1;
	v->a[80232] = sym_comment;
	v->a[80233] = actions(1031);
	v->a[80234] = 6;
	v->a[80235] = anon_sym_PIPE;
	v->a[80236] = anon_sym_LT;
	v->a[80237] = anon_sym_GT;
	v->a[80238] = anon_sym_LT_AMP;
	v->a[80239] = anon_sym_GT_AMP;
	small_parse_table_4012(v);
}

void	small_parse_table_4012(t_small_parse_table_array *v)
{
	v->a[80240] = anon_sym_LT_LT;
	v->a[80241] = actions(1033);
	v->a[80242] = 10;
	v->a[80243] = sym_file_descriptor;
	v->a[80244] = sym__concat;
	v->a[80245] = anon_sym_AMP_AMP;
	v->a[80246] = anon_sym_PIPE_PIPE;
	v->a[80247] = anon_sym_GT_GT;
	v->a[80248] = anon_sym_GT_PIPE;
	v->a[80249] = anon_sym_LT_AMP_DASH;
	v->a[80250] = anon_sym_GT_AMP_DASH;
	v->a[80251] = anon_sym_LT_LT_DASH;
	v->a[80252] = aux_sym_concatenation_token1;
	v->a[80253] = 3;
	v->a[80254] = actions(870);
	v->a[80255] = 1;
	v->a[80256] = sym_comment;
	v->a[80257] = actions(1007);
	v->a[80258] = 6;
	v->a[80259] = anon_sym_PIPE;
	small_parse_table_4013(v);
}

void	small_parse_table_4013(t_small_parse_table_array *v)
{
	v->a[80260] = anon_sym_LT;
	v->a[80261] = anon_sym_GT;
	v->a[80262] = anon_sym_LT_AMP;
	v->a[80263] = anon_sym_GT_AMP;
	v->a[80264] = anon_sym_LT_LT;
	v->a[80265] = actions(1009);
	v->a[80266] = 10;
	v->a[80267] = sym_file_descriptor;
	v->a[80268] = sym__concat;
	v->a[80269] = anon_sym_AMP_AMP;
	v->a[80270] = anon_sym_PIPE_PIPE;
	v->a[80271] = anon_sym_GT_GT;
	v->a[80272] = anon_sym_GT_PIPE;
	v->a[80273] = anon_sym_LT_AMP_DASH;
	v->a[80274] = anon_sym_GT_AMP_DASH;
	v->a[80275] = anon_sym_LT_LT_DASH;
	v->a[80276] = aux_sym_concatenation_token1;
	v->a[80277] = 3;
	v->a[80278] = actions(870);
	v->a[80279] = 1;
	small_parse_table_4014(v);
}

void	small_parse_table_4014(t_small_parse_table_array *v)
{
	v->a[80280] = sym_comment;
	v->a[80281] = actions(1003);
	v->a[80282] = 6;
	v->a[80283] = anon_sym_PIPE;
	v->a[80284] = anon_sym_LT;
	v->a[80285] = anon_sym_GT;
	v->a[80286] = anon_sym_LT_AMP;
	v->a[80287] = anon_sym_GT_AMP;
	v->a[80288] = anon_sym_LT_LT;
	v->a[80289] = actions(1005);
	v->a[80290] = 10;
	v->a[80291] = sym_file_descriptor;
	v->a[80292] = sym__concat;
	v->a[80293] = anon_sym_AMP_AMP;
	v->a[80294] = anon_sym_PIPE_PIPE;
	v->a[80295] = anon_sym_GT_GT;
	v->a[80296] = anon_sym_GT_PIPE;
	v->a[80297] = anon_sym_LT_AMP_DASH;
	v->a[80298] = anon_sym_GT_AMP_DASH;
	v->a[80299] = anon_sym_LT_LT_DASH;
	small_parse_table_4015(v);
}

/* EOF small_parse_table_802.c */
