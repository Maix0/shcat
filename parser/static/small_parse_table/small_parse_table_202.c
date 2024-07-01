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
	v->a[20200] = anon_sym_LT;
	v->a[20201] = anon_sym_GT;
	v->a[20202] = anon_sym_GT_GT;
	v->a[20203] = anon_sym_LT_AMP;
	v->a[20204] = anon_sym_GT_AMP;
	v->a[20205] = anon_sym_GT_PIPE;
	v->a[20206] = anon_sym_LT_AMP_DASH;
	v->a[20207] = anon_sym_GT_AMP_DASH;
	v->a[20208] = anon_sym_LT_LT;
	v->a[20209] = anon_sym_LT_LT_DASH;
	v->a[20210] = aux_sym_heredoc_redirect_token1;
	v->a[20211] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20212] = anon_sym_AMP;
	v->a[20213] = anon_sym_DQUOTE;
	v->a[20214] = sym_raw_string;
	v->a[20215] = sym_number;
	v->a[20216] = anon_sym_DOLLAR_LBRACE;
	v->a[20217] = anon_sym_DOLLAR_LPAREN;
	v->a[20218] = anon_sym_BQUOTE;
	v->a[20219] = sym_word;
	small_parse_table_1011(v);
}

void	small_parse_table_1011(t_small_parse_table_array *v)
{
	v->a[20220] = anon_sym_SEMI;
	v->a[20221] = 6;
	v->a[20222] = actions(3);
	v->a[20223] = 1;
	v->a[20224] = sym_comment;
	v->a[20225] = actions(417);
	v->a[20226] = 1;
	v->a[20227] = sym_variable_name;
	v->a[20228] = actions(379);
	v->a[20229] = 2;
	v->a[20230] = sym_file_descriptor;
	v->a[20231] = sym__bare_dollar;
	v->a[20232] = actions(415);
	v->a[20233] = 2;
	v->a[20234] = aux_sym__simple_variable_name_token1;
	v->a[20235] = aux_sym__multiline_variable_name_token1;
	v->a[20236] = actions(413);
	v->a[20237] = 9;
	v->a[20238] = anon_sym_BANG;
	v->a[20239] = anon_sym_DASH;
	small_parse_table_1012(v);
}

void	small_parse_table_1012(t_small_parse_table_array *v)
{
	v->a[20240] = anon_sym_STAR;
	v->a[20241] = anon_sym_QMARK;
	v->a[20242] = anon_sym_DOLLAR;
	v->a[20243] = anon_sym_POUND;
	v->a[20244] = anon_sym_AT;
	v->a[20245] = anon_sym_0;
	v->a[20246] = anon_sym__;
	v->a[20247] = actions(381);
	v->a[20248] = 25;
	v->a[20249] = anon_sym_PIPE;
	v->a[20250] = anon_sym_SEMI_SEMI;
	v->a[20251] = anon_sym_AMP_AMP;
	v->a[20252] = anon_sym_PIPE_PIPE;
	v->a[20253] = anon_sym_LT;
	v->a[20254] = anon_sym_GT;
	v->a[20255] = anon_sym_GT_GT;
	v->a[20256] = anon_sym_LT_AMP;
	v->a[20257] = anon_sym_GT_AMP;
	v->a[20258] = anon_sym_GT_PIPE;
	v->a[20259] = anon_sym_LT_AMP_DASH;
	small_parse_table_1013(v);
}

void	small_parse_table_1013(t_small_parse_table_array *v)
{
	v->a[20260] = anon_sym_GT_AMP_DASH;
	v->a[20261] = anon_sym_LT_LT;
	v->a[20262] = anon_sym_LT_LT_DASH;
	v->a[20263] = aux_sym_heredoc_redirect_token1;
	v->a[20264] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20265] = anon_sym_AMP;
	v->a[20266] = anon_sym_DQUOTE;
	v->a[20267] = sym_raw_string;
	v->a[20268] = sym_number;
	v->a[20269] = anon_sym_DOLLAR_LBRACE;
	v->a[20270] = anon_sym_DOLLAR_LPAREN;
	v->a[20271] = anon_sym_BQUOTE;
	v->a[20272] = sym_word;
	v->a[20273] = anon_sym_SEMI;
	v->a[20274] = 6;
	v->a[20275] = actions(3);
	v->a[20276] = 1;
	v->a[20277] = sym_comment;
	v->a[20278] = actions(379);
	v->a[20279] = 1;
	small_parse_table_1014(v);
}

void	small_parse_table_1014(t_small_parse_table_array *v)
{
	v->a[20280] = sym_file_descriptor;
	v->a[20281] = actions(453);
	v->a[20282] = 1;
	v->a[20283] = sym_variable_name;
	v->a[20284] = actions(451);
	v->a[20285] = 2;
	v->a[20286] = aux_sym__simple_variable_name_token1;
	v->a[20287] = aux_sym__multiline_variable_name_token1;
	v->a[20288] = actions(449);
	v->a[20289] = 9;
	v->a[20290] = anon_sym_BANG;
	v->a[20291] = anon_sym_DASH;
	v->a[20292] = anon_sym_STAR;
	v->a[20293] = anon_sym_QMARK;
	v->a[20294] = anon_sym_DOLLAR;
	v->a[20295] = anon_sym_POUND;
	v->a[20296] = anon_sym_AT;
	v->a[20297] = anon_sym_0;
	v->a[20298] = anon_sym__;
	v->a[20299] = actions(381);
	small_parse_table_1015(v);
}

/* EOF small_parse_table_202.c */
