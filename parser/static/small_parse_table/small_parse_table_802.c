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
	v->a[80200] = 3;
	v->a[80201] = actions(664);
	v->a[80202] = 1;
	v->a[80203] = sym_comment;
	v->a[80204] = actions(3428);
	v->a[80205] = 2;
	v->a[80206] = anon_sym_LT;
	v->a[80207] = anon_sym_GT;
	v->a[80208] = actions(3430);
	v->a[80209] = 5;
	v->a[80210] = anon_sym_GT_GT;
	v->a[80211] = anon_sym_LT_AMP;
	v->a[80212] = anon_sym_GT_AMP;
	v->a[80213] = anon_sym_GT_PIPE;
	v->a[80214] = anon_sym_LT_GT;
	v->a[80215] = 3;
	v->a[80216] = actions(3);
	v->a[80217] = 1;
	v->a[80218] = sym_comment;
	v->a[80219] = actions(1178);
	small_parse_table_4011(v);
}

void	small_parse_table_4011(t_small_parse_table_array *v)
{
	v->a[80220] = 2;
	v->a[80221] = sym__concat;
	v->a[80222] = aux_sym_heredoc_redirect_token1;
	v->a[80223] = actions(1176);
	v->a[80224] = 5;
	v->a[80225] = anon_sym_in;
	v->a[80226] = anon_sym_SEMI_SEMI;
	v->a[80227] = anon_sym_AMP;
	v->a[80228] = aux_sym_concatenation_token1;
	v->a[80229] = anon_sym_SEMI;
	v->a[80230] = 3;
	v->a[80231] = actions(664);
	v->a[80232] = 1;
	v->a[80233] = sym_comment;
	v->a[80234] = actions(3482);
	v->a[80235] = 2;
	v->a[80236] = anon_sym_LT;
	v->a[80237] = anon_sym_GT;
	v->a[80238] = actions(3484);
	v->a[80239] = 5;
	small_parse_table_4012(v);
}

void	small_parse_table_4012(t_small_parse_table_array *v)
{
	v->a[80240] = anon_sym_GT_GT;
	v->a[80241] = anon_sym_LT_AMP;
	v->a[80242] = anon_sym_GT_AMP;
	v->a[80243] = anon_sym_GT_PIPE;
	v->a[80244] = anon_sym_LT_GT;
	v->a[80245] = 3;
	v->a[80246] = actions(3);
	v->a[80247] = 1;
	v->a[80248] = sym_comment;
	v->a[80249] = actions(908);
	v->a[80250] = 2;
	v->a[80251] = sym__concat;
	v->a[80252] = aux_sym_heredoc_redirect_token1;
	v->a[80253] = actions(906);
	v->a[80254] = 5;
	v->a[80255] = anon_sym_in;
	v->a[80256] = anon_sym_SEMI_SEMI;
	v->a[80257] = anon_sym_AMP;
	v->a[80258] = aux_sym_concatenation_token1;
	v->a[80259] = anon_sym_SEMI;
	small_parse_table_4013(v);
}

void	small_parse_table_4013(t_small_parse_table_array *v)
{
	v->a[80260] = 3;
	v->a[80261] = actions(664);
	v->a[80262] = 1;
	v->a[80263] = sym_comment;
	v->a[80264] = actions(3468);
	v->a[80265] = 2;
	v->a[80266] = anon_sym_LT;
	v->a[80267] = anon_sym_GT;
	v->a[80268] = actions(3470);
	v->a[80269] = 5;
	v->a[80270] = anon_sym_GT_GT;
	v->a[80271] = anon_sym_LT_AMP;
	v->a[80272] = anon_sym_GT_AMP;
	v->a[80273] = anon_sym_GT_PIPE;
	v->a[80274] = anon_sym_LT_GT;
	v->a[80275] = 3;
	v->a[80276] = actions(664);
	v->a[80277] = 1;
	v->a[80278] = sym_comment;
	v->a[80279] = actions(3472);
	small_parse_table_4014(v);
}

void	small_parse_table_4014(t_small_parse_table_array *v)
{
	v->a[80280] = 2;
	v->a[80281] = anon_sym_LT;
	v->a[80282] = anon_sym_GT;
	v->a[80283] = actions(3474);
	v->a[80284] = 5;
	v->a[80285] = anon_sym_GT_GT;
	v->a[80286] = anon_sym_LT_AMP;
	v->a[80287] = anon_sym_GT_AMP;
	v->a[80288] = anon_sym_GT_PIPE;
	v->a[80289] = anon_sym_LT_GT;
	v->a[80290] = 3;
	v->a[80291] = actions(3);
	v->a[80292] = 1;
	v->a[80293] = sym_comment;
	v->a[80294] = actions(802);
	v->a[80295] = 2;
	v->a[80296] = sym__concat;
	v->a[80297] = aux_sym_heredoc_redirect_token1;
	v->a[80298] = actions(800);
	v->a[80299] = 5;
	small_parse_table_4015(v);
}

/* EOF small_parse_table_802.c */
