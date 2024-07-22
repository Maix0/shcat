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
	v->a[20200] = actions(535);
	v->a[20201] = 21;
	v->a[20202] = anon_sym_AMP_AMP;
	v->a[20203] = anon_sym_PIPE_PIPE;
	v->a[20204] = anon_sym_RPAREN_RPAREN;
	v->a[20205] = anon_sym_PLUS_EQ;
	v->a[20206] = anon_sym_DASH_EQ;
	v->a[20207] = anon_sym_STAR_EQ;
	v->a[20208] = anon_sym_SLASH_EQ;
	v->a[20209] = anon_sym_PERCENT_EQ;
	v->a[20210] = anon_sym_LT_LT_EQ;
	v->a[20211] = anon_sym_GT_GT_EQ;
	v->a[20212] = anon_sym_AMP_EQ;
	v->a[20213] = anon_sym_CARET_EQ;
	v->a[20214] = anon_sym_PIPE_EQ;
	v->a[20215] = anon_sym_EQ_EQ;
	v->a[20216] = anon_sym_BANG_EQ;
	v->a[20217] = anon_sym_LT_EQ;
	v->a[20218] = anon_sym_GT_EQ;
	v->a[20219] = anon_sym_QMARK;
	small_parse_table_1011(v);
}

void	small_parse_table_1011(t_small_parse_table_array *v)
{
	v->a[20220] = anon_sym_COLON;
	v->a[20221] = anon_sym_PLUS_PLUS2;
	v->a[20222] = anon_sym_DASH_DASH2;
	v->a[20223] = 3;
	v->a[20224] = actions(501);
	v->a[20225] = 1;
	v->a[20226] = sym_comment;
	v->a[20227] = actions(537);
	v->a[20228] = 13;
	v->a[20229] = anon_sym_PIPE;
	v->a[20230] = anon_sym_EQ;
	v->a[20231] = anon_sym_LT;
	v->a[20232] = anon_sym_GT;
	v->a[20233] = anon_sym_GT_GT;
	v->a[20234] = anon_sym_LT_LT;
	v->a[20235] = anon_sym_CARET;
	v->a[20236] = anon_sym_AMP;
	v->a[20237] = anon_sym_PLUS;
	v->a[20238] = anon_sym_DASH;
	v->a[20239] = anon_sym_STAR;
	small_parse_table_1012(v);
}

void	small_parse_table_1012(t_small_parse_table_array *v)
{
	v->a[20240] = anon_sym_SLASH;
	v->a[20241] = anon_sym_PERCENT;
	v->a[20242] = actions(539);
	v->a[20243] = 21;
	v->a[20244] = anon_sym_AMP_AMP;
	v->a[20245] = anon_sym_PIPE_PIPE;
	v->a[20246] = anon_sym_RPAREN_RPAREN;
	v->a[20247] = anon_sym_PLUS_EQ;
	v->a[20248] = anon_sym_DASH_EQ;
	v->a[20249] = anon_sym_STAR_EQ;
	v->a[20250] = anon_sym_SLASH_EQ;
	v->a[20251] = anon_sym_PERCENT_EQ;
	v->a[20252] = anon_sym_LT_LT_EQ;
	v->a[20253] = anon_sym_GT_GT_EQ;
	v->a[20254] = anon_sym_AMP_EQ;
	v->a[20255] = anon_sym_CARET_EQ;
	v->a[20256] = anon_sym_PIPE_EQ;
	v->a[20257] = anon_sym_EQ_EQ;
	v->a[20258] = anon_sym_BANG_EQ;
	v->a[20259] = anon_sym_LT_EQ;
	small_parse_table_1013(v);
}

void	small_parse_table_1013(t_small_parse_table_array *v)
{
	v->a[20260] = anon_sym_GT_EQ;
	v->a[20261] = anon_sym_QMARK;
	v->a[20262] = anon_sym_COLON;
	v->a[20263] = anon_sym_PLUS_PLUS2;
	v->a[20264] = anon_sym_DASH_DASH2;
	v->a[20265] = 14;
	v->a[20266] = actions(3);
	v->a[20267] = 1;
	v->a[20268] = sym_comment;
	v->a[20269] = actions(445);
	v->a[20270] = 1;
	v->a[20271] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20272] = actions(447);
	v->a[20273] = 1;
	v->a[20274] = anon_sym_DOLLAR;
	v->a[20275] = actions(449);
	v->a[20276] = 1;
	v->a[20277] = anon_sym_DQUOTE;
	v->a[20278] = actions(451);
	v->a[20279] = 1;
	small_parse_table_1014(v);
}

void	small_parse_table_1014(t_small_parse_table_array *v)
{
	v->a[20280] = anon_sym_DOLLAR_LBRACE;
	v->a[20281] = actions(453);
	v->a[20282] = 1;
	v->a[20283] = anon_sym_DOLLAR_LPAREN;
	v->a[20284] = actions(455);
	v->a[20285] = 1;
	v->a[20286] = anon_sym_BQUOTE;
	v->a[20287] = actions(457);
	v->a[20288] = 1;
	v->a[20289] = sym__bare_dollar;
	v->a[20290] = state(199);
	v->a[20291] = 1;
	v->a[20292] = aux_sym_command_repeat2;
	v->a[20293] = state(694);
	v->a[20294] = 1;
	v->a[20295] = sym_concatenation;
	v->a[20296] = actions(519);
	v->a[20297] = 2;
	v->a[20298] = sym_file_descriptor;
	v->a[20299] = ts_builtin_sym_end;
	small_parse_table_1015(v);
}

/* EOF small_parse_table_202.c */
