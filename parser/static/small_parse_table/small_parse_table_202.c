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
	v->a[20200] = 9;
	v->a[20201] = anon_sym_BANG;
	v->a[20202] = anon_sym_DASH;
	v->a[20203] = anon_sym_STAR;
	v->a[20204] = anon_sym_QMARK;
	v->a[20205] = anon_sym_DOLLAR;
	v->a[20206] = anon_sym_POUND;
	v->a[20207] = anon_sym_AT;
	v->a[20208] = anon_sym_0;
	v->a[20209] = anon_sym__;
	v->a[20210] = actions(381);
	v->a[20211] = 28;
	v->a[20212] = anon_sym_LPAREN;
	v->a[20213] = anon_sym_PIPE;
	v->a[20214] = anon_sym_SEMI_SEMI;
	v->a[20215] = anon_sym_AMP_AMP;
	v->a[20216] = anon_sym_PIPE_PIPE;
	v->a[20217] = anon_sym_LT;
	v->a[20218] = anon_sym_GT;
	v->a[20219] = anon_sym_GT_GT;
	small_parse_table_1011(v);
}

void	small_parse_table_1011(t_small_parse_table_array *v)
{
	v->a[20220] = anon_sym_AMP_GT;
	v->a[20221] = anon_sym_AMP_GT_GT;
	v->a[20222] = anon_sym_LT_AMP;
	v->a[20223] = anon_sym_GT_AMP;
	v->a[20224] = anon_sym_GT_PIPE;
	v->a[20225] = anon_sym_LT_AMP_DASH;
	v->a[20226] = anon_sym_GT_AMP_DASH;
	v->a[20227] = anon_sym_LT_LT;
	v->a[20228] = anon_sym_LT_LT_DASH;
	v->a[20229] = aux_sym_heredoc_redirect_token1;
	v->a[20230] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20231] = anon_sym_AMP;
	v->a[20232] = anon_sym_DQUOTE;
	v->a[20233] = sym_raw_string;
	v->a[20234] = sym_number;
	v->a[20235] = anon_sym_DOLLAR_LBRACE;
	v->a[20236] = anon_sym_DOLLAR_LPAREN;
	v->a[20237] = anon_sym_BQUOTE;
	v->a[20238] = sym_word;
	v->a[20239] = anon_sym_SEMI;
	small_parse_table_1012(v);
}

void	small_parse_table_1012(t_small_parse_table_array *v)
{
	v->a[20240] = 6;
	v->a[20241] = actions(3);
	v->a[20242] = 1;
	v->a[20243] = sym_comment;
	v->a[20244] = actions(417);
	v->a[20245] = 1;
	v->a[20246] = sym_variable_name;
	v->a[20247] = actions(415);
	v->a[20248] = 2;
	v->a[20249] = aux_sym__simple_variable_name_token1;
	v->a[20250] = aux_sym__multiline_variable_name_token1;
	v->a[20251] = actions(379);
	v->a[20252] = 3;
	v->a[20253] = sym_file_descriptor;
	v->a[20254] = sym__bare_dollar;
	v->a[20255] = ts_builtin_sym_end;
	v->a[20256] = actions(413);
	v->a[20257] = 9;
	v->a[20258] = anon_sym_BANG;
	v->a[20259] = anon_sym_DASH;
	small_parse_table_1013(v);
}

void	small_parse_table_1013(t_small_parse_table_array *v)
{
	v->a[20260] = anon_sym_STAR;
	v->a[20261] = anon_sym_QMARK;
	v->a[20262] = anon_sym_DOLLAR;
	v->a[20263] = anon_sym_POUND;
	v->a[20264] = anon_sym_AT;
	v->a[20265] = anon_sym_0;
	v->a[20266] = anon_sym__;
	v->a[20267] = actions(381);
	v->a[20268] = 27;
	v->a[20269] = anon_sym_PIPE;
	v->a[20270] = anon_sym_SEMI_SEMI;
	v->a[20271] = anon_sym_AMP_AMP;
	v->a[20272] = anon_sym_PIPE_PIPE;
	v->a[20273] = anon_sym_LT;
	v->a[20274] = anon_sym_GT;
	v->a[20275] = anon_sym_GT_GT;
	v->a[20276] = anon_sym_AMP_GT;
	v->a[20277] = anon_sym_AMP_GT_GT;
	v->a[20278] = anon_sym_LT_AMP;
	v->a[20279] = anon_sym_GT_AMP;
	small_parse_table_1014(v);
}

void	small_parse_table_1014(t_small_parse_table_array *v)
{
	v->a[20280] = anon_sym_GT_PIPE;
	v->a[20281] = anon_sym_LT_AMP_DASH;
	v->a[20282] = anon_sym_GT_AMP_DASH;
	v->a[20283] = anon_sym_LT_LT;
	v->a[20284] = anon_sym_LT_LT_DASH;
	v->a[20285] = aux_sym_heredoc_redirect_token1;
	v->a[20286] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20287] = anon_sym_AMP;
	v->a[20288] = anon_sym_DQUOTE;
	v->a[20289] = sym_raw_string;
	v->a[20290] = sym_number;
	v->a[20291] = anon_sym_DOLLAR_LBRACE;
	v->a[20292] = anon_sym_DOLLAR_LPAREN;
	v->a[20293] = anon_sym_BQUOTE;
	v->a[20294] = sym_word;
	v->a[20295] = anon_sym_SEMI;
	v->a[20296] = 6;
	v->a[20297] = actions(3);
	v->a[20298] = 1;
	v->a[20299] = sym_comment;
	small_parse_table_1015(v);
}

/* EOF small_parse_table_202.c */
