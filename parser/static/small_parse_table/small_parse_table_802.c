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
	v->a[80200] = sym__heredoc_body_beginning;
	v->a[80201] = actions(3634);
	v->a[80202] = 1;
	v->a[80203] = sym_simple_heredoc_body;
	v->a[80204] = state(1480);
	v->a[80205] = 1;
	v->a[80206] = sym__simple_heredoc_body;
	v->a[80207] = state(1481);
	v->a[80208] = 1;
	v->a[80209] = sym__heredoc_body;
	v->a[80210] = state(2102);
	v->a[80211] = 1;
	v->a[80212] = sym_heredoc_body;
	v->a[80213] = 5;
	v->a[80214] = actions(501);
	v->a[80215] = 1;
	v->a[80216] = sym_comment;
	v->a[80217] = actions(3630);
	v->a[80218] = 1;
	v->a[80219] = sym__heredoc_body_beginning;
	small_parse_table_4011(v);
}

void	small_parse_table_4011(t_small_parse_table_array *v)
{
	v->a[80220] = actions(3634);
	v->a[80221] = 1;
	v->a[80222] = sym_simple_heredoc_body;
	v->a[80223] = state(2102);
	v->a[80224] = 1;
	v->a[80225] = sym_heredoc_body;
	v->a[80226] = state(1479);
	v->a[80227] = 2;
	v->a[80228] = sym__heredoc_body;
	v->a[80229] = sym__simple_heredoc_body;
	v->a[80230] = 5;
	v->a[80231] = actions(3);
	v->a[80232] = 1;
	v->a[80233] = sym_comment;
	v->a[80234] = actions(3513);
	v->a[80235] = 1;
	v->a[80236] = aux_sym_heredoc_redirect_token1;
	v->a[80237] = actions(3641);
	v->a[80238] = 1;
	v->a[80239] = anon_sym_in;
	small_parse_table_4012(v);
}

void	small_parse_table_4012(t_small_parse_table_array *v)
{
	v->a[80240] = state(1907);
	v->a[80241] = 1;
	v->a[80242] = sym_terminator;
	v->a[80243] = actions(1975);
	v->a[80244] = 2;
	v->a[80245] = anon_sym_SEMI_SEMI;
	v->a[80246] = anon_sym_SEMI;
	v->a[80247] = 5;
	v->a[80248] = actions(3);
	v->a[80249] = 1;
	v->a[80250] = sym_comment;
	v->a[80251] = actions(3513);
	v->a[80252] = 1;
	v->a[80253] = aux_sym_heredoc_redirect_token1;
	v->a[80254] = actions(3546);
	v->a[80255] = 1;
	v->a[80256] = anon_sym_in;
	v->a[80257] = state(2024);
	v->a[80258] = 1;
	v->a[80259] = sym_terminator;
	small_parse_table_4013(v);
}

void	small_parse_table_4013(t_small_parse_table_array *v)
{
	v->a[80260] = actions(1975);
	v->a[80261] = 2;
	v->a[80262] = anon_sym_SEMI_SEMI;
	v->a[80263] = anon_sym_SEMI;
	v->a[80264] = 5;
	v->a[80265] = actions(501);
	v->a[80266] = 1;
	v->a[80267] = sym_comment;
	v->a[80268] = actions(3600);
	v->a[80269] = 1;
	v->a[80270] = aux_sym_concatenation_token1;
	v->a[80271] = actions(3643);
	v->a[80272] = 1;
	v->a[80273] = sym__concat;
	v->a[80274] = state(1827);
	v->a[80275] = 1;
	v->a[80276] = aux_sym_concatenation_repeat1;
	v->a[80277] = actions(1097);
	v->a[80278] = 2;
	v->a[80279] = anon_sym_PIPE;
	small_parse_table_4014(v);
}

void	small_parse_table_4014(t_small_parse_table_array *v)
{
	v->a[80280] = anon_sym_RPAREN;
	v->a[80281] = 5;
	v->a[80282] = actions(501);
	v->a[80283] = 1;
	v->a[80284] = sym_comment;
	v->a[80285] = actions(3630);
	v->a[80286] = 1;
	v->a[80287] = sym__heredoc_body_beginning;
	v->a[80288] = actions(3634);
	v->a[80289] = 1;
	v->a[80290] = sym_simple_heredoc_body;
	v->a[80291] = state(2102);
	v->a[80292] = 1;
	v->a[80293] = sym_heredoc_body;
	v->a[80294] = state(1473);
	v->a[80295] = 2;
	v->a[80296] = sym__heredoc_body;
	v->a[80297] = sym__simple_heredoc_body;
	v->a[80298] = 6;
	v->a[80299] = actions(501);
	small_parse_table_4015(v);
}

/* EOF small_parse_table_802.c */
