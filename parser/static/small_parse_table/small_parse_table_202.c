/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_202.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1010(t_small_parse_table_array *v)
{
	v->a[20200] = 1;
	v->a[20201] = anon_sym_AMP;
	v->a[20202] = actions(479);
	v->a[20203] = 1;
	v->a[20204] = anon_sym_QMARK;
	v->a[20205] = actions(485);
	v->a[20206] = 1;
	v->a[20207] = anon_sym_EQ;
	v->a[20208] = actions(686);
	v->a[20209] = 1;
	v->a[20210] = anon_sym_COLON;
	v->a[20211] = actions(405);
	v->a[20212] = 2;
	v->a[20213] = anon_sym_PLUS_PLUS2;
	v->a[20214] = anon_sym_DASH_DASH2;
	v->a[20215] = actions(417);
	v->a[20216] = 2;
	v->a[20217] = anon_sym_LT;
	v->a[20218] = anon_sym_GT;
	v->a[20219] = actions(419);
	small_parse_table_1011(v);
}

void	small_parse_table_1011(t_small_parse_table_array *v)
{
	v->a[20220] = 2;
	v->a[20221] = anon_sym_GT_GT;
	v->a[20222] = anon_sym_LT_LT;
	v->a[20223] = actions(427);
	v->a[20224] = 2;
	v->a[20225] = anon_sym_EQ_EQ;
	v->a[20226] = anon_sym_BANG_EQ;
	v->a[20227] = actions(429);
	v->a[20228] = 2;
	v->a[20229] = anon_sym_LT_EQ;
	v->a[20230] = anon_sym_GT_EQ;
	v->a[20231] = actions(431);
	v->a[20232] = 2;
	v->a[20233] = anon_sym_PLUS;
	v->a[20234] = anon_sym_DASH;
	v->a[20235] = actions(433);
	v->a[20236] = 3;
	v->a[20237] = anon_sym_STAR;
	v->a[20238] = anon_sym_SLASH;
	v->a[20239] = anon_sym_PERCENT;
	small_parse_table_1012(v);
}

void	small_parse_table_1012(t_small_parse_table_array *v)
{
	v->a[20240] = actions(493);
	v->a[20241] = 10;
	v->a[20242] = anon_sym_PLUS_EQ;
	v->a[20243] = anon_sym_DASH_EQ;
	v->a[20244] = anon_sym_STAR_EQ;
	v->a[20245] = anon_sym_SLASH_EQ;
	v->a[20246] = anon_sym_PERCENT_EQ;
	v->a[20247] = anon_sym_LT_LT_EQ;
	v->a[20248] = anon_sym_GT_GT_EQ;
	v->a[20249] = anon_sym_AMP_EQ;
	v->a[20250] = anon_sym_CARET_EQ;
	v->a[20251] = anon_sym_PIPE_EQ;
	v->a[20252] = 11;
	v->a[20253] = actions(407);
	v->a[20254] = 1;
	v->a[20255] = sym_comment;
	v->a[20256] = actions(585);
	v->a[20257] = 1;
	v->a[20258] = anon_sym_AMP;
	v->a[20259] = actions(577);
	small_parse_table_1013(v);
}

void	small_parse_table_1013(t_small_parse_table_array *v)
{
	v->a[20260] = 2;
	v->a[20261] = anon_sym_LT;
	v->a[20262] = anon_sym_GT;
	v->a[20263] = actions(579);
	v->a[20264] = 2;
	v->a[20265] = anon_sym_GT_GT;
	v->a[20266] = anon_sym_LT_LT;
	v->a[20267] = actions(587);
	v->a[20268] = 2;
	v->a[20269] = anon_sym_EQ_EQ;
	v->a[20270] = anon_sym_BANG_EQ;
	v->a[20271] = actions(589);
	v->a[20272] = 2;
	v->a[20273] = anon_sym_LT_EQ;
	v->a[20274] = anon_sym_GT_EQ;
	v->a[20275] = actions(591);
	v->a[20276] = 2;
	v->a[20277] = anon_sym_PLUS;
	v->a[20278] = anon_sym_DASH;
	v->a[20279] = actions(597);
	small_parse_table_1014(v);
}

void	small_parse_table_1014(t_small_parse_table_array *v)
{
	v->a[20280] = 2;
	v->a[20281] = anon_sym_PLUS_PLUS2;
	v->a[20282] = anon_sym_DASH_DASH2;
	v->a[20283] = actions(459);
	v->a[20284] = 3;
	v->a[20285] = anon_sym_PIPE;
	v->a[20286] = anon_sym_EQ;
	v->a[20287] = anon_sym_CARET;
	v->a[20288] = actions(593);
	v->a[20289] = 3;
	v->a[20290] = anon_sym_STAR;
	v->a[20291] = anon_sym_SLASH;
	v->a[20292] = anon_sym_PERCENT;
	v->a[20293] = actions(461);
	v->a[20294] = 14;
	v->a[20295] = anon_sym_RPAREN;
	v->a[20296] = anon_sym_AMP_AMP;
	v->a[20297] = anon_sym_PIPE_PIPE;
	v->a[20298] = anon_sym_PLUS_EQ;
	v->a[20299] = anon_sym_DASH_EQ;
	small_parse_table_1015(v);
}

/* EOF small_parse_table_202.c */
