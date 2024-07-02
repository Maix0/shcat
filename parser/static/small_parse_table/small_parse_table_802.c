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
	v->a[80200] = actions(680);
	v->a[80201] = 1;
	v->a[80202] = sym_comment;
	v->a[80203] = actions(3505);
	v->a[80204] = 2;
	v->a[80205] = anon_sym_LT;
	v->a[80206] = anon_sym_GT;
	v->a[80207] = actions(3507);
	v->a[80208] = 5;
	v->a[80209] = anon_sym_GT_GT;
	v->a[80210] = anon_sym_LT_AMP;
	v->a[80211] = anon_sym_GT_AMP;
	v->a[80212] = anon_sym_GT_PIPE;
	v->a[80213] = anon_sym_LT_GT;
	v->a[80214] = 3;
	v->a[80215] = actions(3);
	v->a[80216] = 1;
	v->a[80217] = sym_comment;
	v->a[80218] = actions(757);
	v->a[80219] = 2;
	small_parse_table_4011(v);
}

void	small_parse_table_4011(t_small_parse_table_array *v)
{
	v->a[80220] = sym__concat;
	v->a[80221] = aux_sym_heredoc_redirect_token1;
	v->a[80222] = actions(755);
	v->a[80223] = 5;
	v->a[80224] = anon_sym_in;
	v->a[80225] = anon_sym_SEMI_SEMI;
	v->a[80226] = anon_sym_AMP;
	v->a[80227] = aux_sym_concatenation_token1;
	v->a[80228] = anon_sym_SEMI;
	v->a[80229] = 3;
	v->a[80230] = actions(680);
	v->a[80231] = 1;
	v->a[80232] = sym_comment;
	v->a[80233] = actions(3564);
	v->a[80234] = 2;
	v->a[80235] = anon_sym_LT;
	v->a[80236] = anon_sym_GT;
	v->a[80237] = actions(3566);
	v->a[80238] = 5;
	v->a[80239] = anon_sym_GT_GT;
	small_parse_table_4012(v);
}

void	small_parse_table_4012(t_small_parse_table_array *v)
{
	v->a[80240] = anon_sym_LT_AMP;
	v->a[80241] = anon_sym_GT_AMP;
	v->a[80242] = anon_sym_GT_PIPE;
	v->a[80243] = anon_sym_LT_GT;
	v->a[80244] = 3;
	v->a[80245] = actions(680);
	v->a[80246] = 1;
	v->a[80247] = sym_comment;
	v->a[80248] = actions(3568);
	v->a[80249] = 2;
	v->a[80250] = anon_sym_LT;
	v->a[80251] = anon_sym_GT;
	v->a[80252] = actions(3570);
	v->a[80253] = 5;
	v->a[80254] = anon_sym_GT_GT;
	v->a[80255] = anon_sym_LT_AMP;
	v->a[80256] = anon_sym_GT_AMP;
	v->a[80257] = anon_sym_GT_PIPE;
	v->a[80258] = anon_sym_LT_GT;
	v->a[80259] = 3;
	small_parse_table_4013(v);
}

void	small_parse_table_4013(t_small_parse_table_array *v)
{
	v->a[80260] = actions(3);
	v->a[80261] = 1;
	v->a[80262] = sym_comment;
	v->a[80263] = actions(784);
	v->a[80264] = 2;
	v->a[80265] = sym__concat;
	v->a[80266] = aux_sym_heredoc_redirect_token1;
	v->a[80267] = actions(782);
	v->a[80268] = 5;
	v->a[80269] = anon_sym_in;
	v->a[80270] = anon_sym_SEMI_SEMI;
	v->a[80271] = anon_sym_AMP;
	v->a[80272] = aux_sym_concatenation_token1;
	v->a[80273] = anon_sym_SEMI;
	v->a[80274] = 3;
	v->a[80275] = actions(680);
	v->a[80276] = 1;
	v->a[80277] = sym_comment;
	v->a[80278] = actions(3572);
	v->a[80279] = 2;
	small_parse_table_4014(v);
}

void	small_parse_table_4014(t_small_parse_table_array *v)
{
	v->a[80280] = anon_sym_LT;
	v->a[80281] = anon_sym_GT;
	v->a[80282] = actions(3574);
	v->a[80283] = 5;
	v->a[80284] = anon_sym_GT_GT;
	v->a[80285] = anon_sym_LT_AMP;
	v->a[80286] = anon_sym_GT_AMP;
	v->a[80287] = anon_sym_GT_PIPE;
	v->a[80288] = anon_sym_LT_GT;
	v->a[80289] = 3;
	v->a[80290] = actions(3);
	v->a[80291] = 1;
	v->a[80292] = sym_comment;
	v->a[80293] = actions(1200);
	v->a[80294] = 2;
	v->a[80295] = sym__concat;
	v->a[80296] = aux_sym_heredoc_redirect_token1;
	v->a[80297] = actions(1198);
	v->a[80298] = 5;
	v->a[80299] = anon_sym_in;
	small_parse_table_4015(v);
}

/* EOF small_parse_table_802.c */
