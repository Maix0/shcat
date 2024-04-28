/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2902.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14510(t_small_parse_table_array *v)
{
	v->a[290200] = sym_file_descriptor;
	v->a[290201] = anon_sym_PIPE_PIPE;
	v->a[290202] = anon_sym_AMP_AMP;
	v->a[290203] = anon_sym_GT_GT;
	v->a[290204] = anon_sym_PIPE_AMP;
	v->a[290205] = anon_sym_RBRACK;
	v->a[290206] = anon_sym_AMP_GT_GT;
	v->a[290207] = anon_sym_GT_PIPE;
	v->a[290208] = anon_sym_LT_AMP_DASH;
	v->a[290209] = anon_sym_GT_AMP_DASH;
	v->a[290210] = anon_sym_LT_LT_DASH;
	v->a[290211] = 3;
	v->a[290212] = actions(71);
	v->a[290213] = 1;
	v->a[290214] = sym_comment;
	v->a[290215] = actions(12101);
	v->a[290216] = 7;
	v->a[290217] = anon_sym_PIPE;
	v->a[290218] = anon_sym_LT;
	v->a[290219] = anon_sym_GT;
	small_parse_table_14511(v);
}

void	small_parse_table_14511(t_small_parse_table_array *v)
{
	v->a[290220] = anon_sym_LT_LT;
	v->a[290221] = anon_sym_AMP_GT;
	v->a[290222] = anon_sym_LT_AMP;
	v->a[290223] = anon_sym_GT_AMP;
	v->a[290224] = actions(12103);
	v->a[290225] = 11;
	v->a[290226] = sym_file_descriptor;
	v->a[290227] = anon_sym_PIPE_PIPE;
	v->a[290228] = anon_sym_AMP_AMP;
	v->a[290229] = anon_sym_GT_GT;
	v->a[290230] = anon_sym_PIPE_AMP;
	v->a[290231] = anon_sym_RBRACK;
	v->a[290232] = anon_sym_AMP_GT_GT;
	v->a[290233] = anon_sym_GT_PIPE;
	v->a[290234] = anon_sym_LT_AMP_DASH;
	v->a[290235] = anon_sym_GT_AMP_DASH;
	v->a[290236] = anon_sym_LT_LT_DASH;
	v->a[290237] = 9;
	v->a[290238] = actions(71);
	v->a[290239] = 1;
	small_parse_table_14512(v);
}

void	small_parse_table_14512(t_small_parse_table_array *v)
{
	v->a[290240] = sym_comment;
	v->a[290241] = actions(4692);
	v->a[290242] = 1;
	v->a[290243] = anon_sym_LT_LT;
	v->a[290244] = actions(11834);
	v->a[290245] = 1;
	v->a[290246] = sym_file_descriptor;
	v->a[290247] = actions(12954);
	v->a[290248] = 1;
	v->a[290249] = anon_sym_LT_LT_DASH;
	v->a[290250] = actions(12962);
	v->a[290251] = 2;
	v->a[290252] = anon_sym_PIPE_PIPE;
	v->a[290253] = anon_sym_AMP_AMP;
	v->a[290254] = actions(12966);
	v->a[290255] = 2;
	v->a[290256] = anon_sym_LT_AMP_DASH;
	v->a[290257] = anon_sym_GT_AMP_DASH;
	v->a[290258] = actions(12964);
	v->a[290259] = 3;
	small_parse_table_14513(v);
}

void	small_parse_table_14513(t_small_parse_table_array *v)
{
	v->a[290260] = anon_sym_GT_GT;
	v->a[290261] = anon_sym_AMP_GT_GT;
	v->a[290262] = anon_sym_GT_PIPE;
	v->a[290263] = state(4650);
	v->a[290264] = 3;
	v->a[290265] = sym_file_redirect;
	v->a[290266] = sym_heredoc_redirect;
	v->a[290267] = aux_sym_redirected_statement_repeat1;
	v->a[290268] = actions(11479);
	v->a[290269] = 5;
	v->a[290270] = anon_sym_LT;
	v->a[290271] = anon_sym_GT;
	v->a[290272] = anon_sym_AMP_GT;
	v->a[290273] = anon_sym_LT_AMP;
	v->a[290274] = anon_sym_GT_AMP;
	v->a[290275] = 9;
	v->a[290276] = actions(71);
	v->a[290277] = 1;
	v->a[290278] = sym_comment;
	v->a[290279] = actions(4692);
	small_parse_table_14514(v);
}

void	small_parse_table_14514(t_small_parse_table_array *v)
{
	v->a[290280] = 1;
	v->a[290281] = anon_sym_LT_LT;
	v->a[290282] = actions(11856);
	v->a[290283] = 1;
	v->a[290284] = sym_file_descriptor;
	v->a[290285] = actions(12954);
	v->a[290286] = 1;
	v->a[290287] = anon_sym_LT_LT_DASH;
	v->a[290288] = actions(12968);
	v->a[290289] = 2;
	v->a[290290] = anon_sym_PIPE_PIPE;
	v->a[290291] = anon_sym_AMP_AMP;
	v->a[290292] = actions(12972);
	v->a[290293] = 2;
	v->a[290294] = anon_sym_LT_AMP_DASH;
	v->a[290295] = anon_sym_GT_AMP_DASH;
	v->a[290296] = actions(12970);
	v->a[290297] = 3;
	v->a[290298] = anon_sym_GT_GT;
	v->a[290299] = anon_sym_AMP_GT_GT;
	small_parse_table_14515(v);
}

/* EOF small_parse_table_2902.c */
