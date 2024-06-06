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
	v->a[20200] = anon_sym_DOLLAR_BQUOTE;
	v->a[20201] = sym_word;
	v->a[20202] = anon_sym_SEMI;
	v->a[20203] = 21;
	v->a[20204] = actions(57);
	v->a[20205] = 1;
	v->a[20206] = sym_comment;
	v->a[20207] = actions(2484);
	v->a[20208] = 1;
	v->a[20209] = sym_word;
	v->a[20210] = actions(2486);
	v->a[20211] = 1;
	v->a[20212] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20213] = actions(2488);
	v->a[20214] = 1;
	v->a[20215] = anon_sym_DOLLAR;
	v->a[20216] = actions(2490);
	v->a[20217] = 1;
	v->a[20218] = sym__special_character;
	v->a[20219] = actions(2492);
	small_parse_table_1011(v);
}

void	small_parse_table_1011(t_small_parse_table_array *v)
{
	v->a[20220] = 1;
	v->a[20221] = anon_sym_DQUOTE;
	v->a[20222] = actions(2496);
	v->a[20223] = 1;
	v->a[20224] = aux_sym_number_token1;
	v->a[20225] = actions(2498);
	v->a[20226] = 1;
	v->a[20227] = aux_sym_number_token2;
	v->a[20228] = actions(2500);
	v->a[20229] = 1;
	v->a[20230] = anon_sym_DOLLAR_LBRACE;
	v->a[20231] = actions(2502);
	v->a[20232] = 1;
	v->a[20233] = anon_sym_DOLLAR_LPAREN;
	v->a[20234] = actions(2504);
	v->a[20235] = 1;
	v->a[20236] = anon_sym_BQUOTE;
	v->a[20237] = actions(2506);
	v->a[20238] = 1;
	v->a[20239] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_1012(v);
}

void	small_parse_table_1012(t_small_parse_table_array *v)
{
	v->a[20240] = actions(2508);
	v->a[20241] = 1;
	v->a[20242] = sym__bare_dollar;
	v->a[20243] = actions(2510);
	v->a[20244] = 1;
	v->a[20245] = sym__brace_start;
	v->a[20246] = state(511);
	v->a[20247] = 1;
	v->a[20248] = aux_sym_command_repeat2;
	v->a[20249] = state(1645);
	v->a[20250] = 1;
	v->a[20251] = aux_sym__literal_repeat1;
	v->a[20252] = state(1676);
	v->a[20253] = 1;
	v->a[20254] = sym_concatenation;
	v->a[20255] = actions(2494);
	v->a[20256] = 2;
	v->a[20257] = sym_test_operator;
	v->a[20258] = sym_raw_string;
	v->a[20259] = actions(1337);
	small_parse_table_1013(v);
}

void	small_parse_table_1013(t_small_parse_table_array *v)
{
	v->a[20260] = 7;
	v->a[20261] = anon_sym_PIPE;
	v->a[20262] = anon_sym_LT;
	v->a[20263] = anon_sym_GT;
	v->a[20264] = anon_sym_AMP_GT;
	v->a[20265] = anon_sym_LT_AMP;
	v->a[20266] = anon_sym_GT_AMP;
	v->a[20267] = anon_sym_LT_LT;
	v->a[20268] = state(1452);
	v->a[20269] = 7;
	v->a[20270] = sym_arithmetic_expansion;
	v->a[20271] = sym_brace_expression;
	v->a[20272] = sym_string;
	v->a[20273] = sym_number;
	v->a[20274] = sym_simple_expansion;
	v->a[20275] = sym_expansion;
	v->a[20276] = sym_command_substitution;
	v->a[20277] = actions(1339);
	v->a[20278] = 10;
	v->a[20279] = sym_file_descriptor;
	small_parse_table_1014(v);
}

void	small_parse_table_1014(t_small_parse_table_array *v)
{
	v->a[20280] = anon_sym_PIPE_AMP;
	v->a[20281] = anon_sym_AMP_AMP;
	v->a[20282] = anon_sym_PIPE_PIPE;
	v->a[20283] = anon_sym_GT_GT;
	v->a[20284] = anon_sym_AMP_GT_GT;
	v->a[20285] = anon_sym_GT_PIPE;
	v->a[20286] = anon_sym_LT_AMP_DASH;
	v->a[20287] = anon_sym_GT_AMP_DASH;
	v->a[20288] = anon_sym_LT_LT_DASH;
	v->a[20289] = 19;
	v->a[20290] = actions(3);
	v->a[20291] = 1;
	v->a[20292] = sym_comment;
	v->a[20293] = actions(2205);
	v->a[20294] = 1;
	v->a[20295] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20296] = actions(2208);
	v->a[20297] = 1;
	v->a[20298] = anon_sym_DOLLAR;
	v->a[20299] = actions(2214);
	small_parse_table_1015(v);
}

/* EOF small_parse_table_202.c */
