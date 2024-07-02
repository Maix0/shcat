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
	v->a[20200] = anon_sym_DQUOTE;
	v->a[20201] = actions(556);
	v->a[20202] = 1;
	v->a[20203] = anon_sym_DOLLAR_LBRACE;
	v->a[20204] = actions(559);
	v->a[20205] = 1;
	v->a[20206] = anon_sym_DOLLAR_LPAREN;
	v->a[20207] = actions(562);
	v->a[20208] = 1;
	v->a[20209] = anon_sym_BQUOTE;
	v->a[20210] = actions(565);
	v->a[20211] = 1;
	v->a[20212] = sym_file_descriptor;
	v->a[20213] = actions(567);
	v->a[20214] = 1;
	v->a[20215] = sym__bare_dollar;
	v->a[20216] = state(192);
	v->a[20217] = 1;
	v->a[20218] = aux_sym_command_repeat2;
	v->a[20219] = state(662);
	small_parse_table_1011(v);
}

void	small_parse_table_1011(t_small_parse_table_array *v)
{
	v->a[20220] = 1;
	v->a[20221] = sym_concatenation;
	v->a[20222] = actions(542);
	v->a[20223] = 3;
	v->a[20224] = sym_raw_string;
	v->a[20225] = sym_number;
	v->a[20226] = sym_word;
	v->a[20227] = state(430);
	v->a[20228] = 5;
	v->a[20229] = sym_arithmetic_expansion;
	v->a[20230] = sym_string;
	v->a[20231] = sym_simple_expansion;
	v->a[20232] = sym_expansion;
	v->a[20233] = sym_command_substitution;
	v->a[20234] = actions(545);
	v->a[20235] = 17;
	v->a[20236] = anon_sym_PIPE;
	v->a[20237] = anon_sym_RPAREN;
	v->a[20238] = anon_sym_SEMI_SEMI;
	v->a[20239] = anon_sym_AMP_AMP;
	small_parse_table_1012(v);
}

void	small_parse_table_1012(t_small_parse_table_array *v)
{
	v->a[20240] = anon_sym_PIPE_PIPE;
	v->a[20241] = anon_sym_LT;
	v->a[20242] = anon_sym_GT;
	v->a[20243] = anon_sym_GT_GT;
	v->a[20244] = anon_sym_LT_AMP;
	v->a[20245] = anon_sym_GT_AMP;
	v->a[20246] = anon_sym_GT_PIPE;
	v->a[20247] = anon_sym_LT_GT;
	v->a[20248] = anon_sym_LT_LT;
	v->a[20249] = anon_sym_LT_LT_DASH;
	v->a[20250] = aux_sym_heredoc_redirect_token1;
	v->a[20251] = anon_sym_AMP;
	v->a[20252] = anon_sym_SEMI;
	v->a[20253] = 14;
	v->a[20254] = actions(3);
	v->a[20255] = 1;
	v->a[20256] = sym_comment;
	v->a[20257] = actions(479);
	v->a[20258] = 1;
	v->a[20259] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1013(v);
}

void	small_parse_table_1013(t_small_parse_table_array *v)
{
	v->a[20260] = actions(481);
	v->a[20261] = 1;
	v->a[20262] = anon_sym_DOLLAR;
	v->a[20263] = actions(483);
	v->a[20264] = 1;
	v->a[20265] = anon_sym_DQUOTE;
	v->a[20266] = actions(485);
	v->a[20267] = 1;
	v->a[20268] = anon_sym_DOLLAR_LBRACE;
	v->a[20269] = actions(487);
	v->a[20270] = 1;
	v->a[20271] = anon_sym_DOLLAR_LPAREN;
	v->a[20272] = actions(489);
	v->a[20273] = 1;
	v->a[20274] = anon_sym_BQUOTE;
	v->a[20275] = actions(491);
	v->a[20276] = 1;
	v->a[20277] = sym__bare_dollar;
	v->a[20278] = state(194);
	v->a[20279] = 1;
	small_parse_table_1014(v);
}

void	small_parse_table_1014(t_small_parse_table_array *v)
{
	v->a[20280] = aux_sym_command_repeat2;
	v->a[20281] = state(637);
	v->a[20282] = 1;
	v->a[20283] = sym_concatenation;
	v->a[20284] = actions(503);
	v->a[20285] = 2;
	v->a[20286] = sym_file_descriptor;
	v->a[20287] = ts_builtin_sym_end;
	v->a[20288] = actions(477);
	v->a[20289] = 3;
	v->a[20290] = sym_raw_string;
	v->a[20291] = sym_number;
	v->a[20292] = sym_word;
	v->a[20293] = state(431);
	v->a[20294] = 5;
	v->a[20295] = sym_arithmetic_expansion;
	v->a[20296] = sym_string;
	v->a[20297] = sym_simple_expansion;
	v->a[20298] = sym_expansion;
	v->a[20299] = sym_command_substitution;
	small_parse_table_1015(v);
}

/* EOF small_parse_table_202.c */
