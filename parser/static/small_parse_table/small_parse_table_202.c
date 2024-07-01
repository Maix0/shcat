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
	v->a[20200] = anon_sym_LT_GT;
	v->a[20201] = anon_sym_LT_LT;
	v->a[20202] = anon_sym_LT_LT_DASH;
	v->a[20203] = aux_sym_heredoc_redirect_token1;
	v->a[20204] = anon_sym_AMP;
	v->a[20205] = anon_sym_SEMI;
	v->a[20206] = 14;
	v->a[20207] = actions(3);
	v->a[20208] = 1;
	v->a[20209] = sym_comment;
	v->a[20210] = actions(459);
	v->a[20211] = 1;
	v->a[20212] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20213] = actions(461);
	v->a[20214] = 1;
	v->a[20215] = anon_sym_DOLLAR;
	v->a[20216] = actions(463);
	v->a[20217] = 1;
	v->a[20218] = anon_sym_DQUOTE;
	v->a[20219] = actions(465);
	small_parse_table_1011(v);
}

void	small_parse_table_1011(t_small_parse_table_array *v)
{
	v->a[20220] = 1;
	v->a[20221] = anon_sym_DOLLAR_LBRACE;
	v->a[20222] = actions(467);
	v->a[20223] = 1;
	v->a[20224] = anon_sym_DOLLAR_LPAREN;
	v->a[20225] = actions(469);
	v->a[20226] = 1;
	v->a[20227] = anon_sym_BQUOTE;
	v->a[20228] = actions(471);
	v->a[20229] = 1;
	v->a[20230] = sym__bare_dollar;
	v->a[20231] = actions(560);
	v->a[20232] = 1;
	v->a[20233] = sym_file_descriptor;
	v->a[20234] = state(193);
	v->a[20235] = 1;
	v->a[20236] = aux_sym_command_repeat2;
	v->a[20237] = state(627);
	v->a[20238] = 1;
	v->a[20239] = sym_concatenation;
	small_parse_table_1012(v);
}

void	small_parse_table_1012(t_small_parse_table_array *v)
{
	v->a[20240] = actions(457);
	v->a[20241] = 3;
	v->a[20242] = sym_raw_string;
	v->a[20243] = sym_number;
	v->a[20244] = sym_word;
	v->a[20245] = state(373);
	v->a[20246] = 5;
	v->a[20247] = sym_arithmetic_expansion;
	v->a[20248] = sym_string;
	v->a[20249] = sym_simple_expansion;
	v->a[20250] = sym_expansion;
	v->a[20251] = sym_command_substitution;
	v->a[20252] = actions(562);
	v->a[20253] = 17;
	v->a[20254] = anon_sym_PIPE;
	v->a[20255] = anon_sym_RPAREN;
	v->a[20256] = anon_sym_SEMI_SEMI;
	v->a[20257] = anon_sym_AMP_AMP;
	v->a[20258] = anon_sym_PIPE_PIPE;
	v->a[20259] = anon_sym_LT;
	small_parse_table_1013(v);
}

void	small_parse_table_1013(t_small_parse_table_array *v)
{
	v->a[20260] = anon_sym_GT;
	v->a[20261] = anon_sym_GT_GT;
	v->a[20262] = anon_sym_LT_AMP;
	v->a[20263] = anon_sym_GT_AMP;
	v->a[20264] = anon_sym_GT_PIPE;
	v->a[20265] = anon_sym_LT_GT;
	v->a[20266] = anon_sym_LT_LT;
	v->a[20267] = anon_sym_LT_LT_DASH;
	v->a[20268] = aux_sym_heredoc_redirect_token1;
	v->a[20269] = anon_sym_AMP;
	v->a[20270] = anon_sym_SEMI;
	v->a[20271] = 14;
	v->a[20272] = actions(3);
	v->a[20273] = 1;
	v->a[20274] = sym_comment;
	v->a[20275] = actions(524);
	v->a[20276] = 1;
	v->a[20277] = sym_file_descriptor;
	v->a[20278] = actions(591);
	v->a[20279] = 1;
	small_parse_table_1014(v);
}

void	small_parse_table_1014(t_small_parse_table_array *v)
{
	v->a[20280] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20281] = actions(594);
	v->a[20282] = 1;
	v->a[20283] = anon_sym_DOLLAR;
	v->a[20284] = actions(597);
	v->a[20285] = 1;
	v->a[20286] = anon_sym_DQUOTE;
	v->a[20287] = actions(600);
	v->a[20288] = 1;
	v->a[20289] = anon_sym_DOLLAR_LBRACE;
	v->a[20290] = actions(603);
	v->a[20291] = 1;
	v->a[20292] = anon_sym_DOLLAR_LPAREN;
	v->a[20293] = actions(606);
	v->a[20294] = 1;
	v->a[20295] = anon_sym_BQUOTE;
	v->a[20296] = actions(609);
	v->a[20297] = 1;
	v->a[20298] = sym__bare_dollar;
	v->a[20299] = state(193);
	small_parse_table_1015(v);
}

/* EOF small_parse_table_202.c */
