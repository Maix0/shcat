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
	v->a[20200] = anon_sym_DOLLAR_LBRACE;
	v->a[20201] = actions(3858);
	v->a[20202] = 1;
	v->a[20203] = anon_sym_DOLLAR_LPAREN;
	v->a[20204] = actions(3861);
	v->a[20205] = 1;
	v->a[20206] = anon_sym_BQUOTE;
	v->a[20207] = actions(3864);
	v->a[20208] = 1;
	v->a[20209] = anon_sym_DOLLAR_BQUOTE;
	v->a[20210] = actions(3870);
	v->a[20211] = 1;
	v->a[20212] = sym_test_operator;
	v->a[20213] = actions(3873);
	v->a[20214] = 1;
	v->a[20215] = sym__brace_start;
	v->a[20216] = state(2270);
	v->a[20217] = 1;
	v->a[20218] = aux_sym__literal_repeat1;
	v->a[20219] = actions(2216);
	small_parse_table_1011(v);
}

void	small_parse_table_1011(t_small_parse_table_array *v)
{
	v->a[20220] = 2;
	v->a[20221] = sym_file_descriptor;
	v->a[20222] = aux_sym_heredoc_redirect_token1;
	v->a[20223] = actions(3834);
	v->a[20224] = 2;
	v->a[20225] = anon_sym_LPAREN_LPAREN;
	v->a[20226] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20227] = actions(3867);
	v->a[20228] = 2;
	v->a[20229] = anon_sym_LT_LPAREN;
	v->a[20230] = anon_sym_GT_LPAREN;
	v->a[20231] = state(741);
	v->a[20232] = 2;
	v->a[20233] = sym_concatenation;
	v->a[20234] = aux_sym_for_statement_repeat1;
	v->a[20235] = actions(3831);
	v->a[20236] = 3;
	v->a[20237] = sym_raw_string;
	v->a[20238] = sym_ansi_c_string;
	v->a[20239] = sym_word;
	small_parse_table_1012(v);
}

void	small_parse_table_1012(t_small_parse_table_array *v)
{
	v->a[20240] = state(1839);
	v->a[20241] = 9;
	v->a[20242] = sym_arithmetic_expansion;
	v->a[20243] = sym_brace_expression;
	v->a[20244] = sym_string;
	v->a[20245] = sym_translated_string;
	v->a[20246] = sym_number;
	v->a[20247] = sym_simple_expansion;
	v->a[20248] = sym_expansion;
	v->a[20249] = sym_command_substitution;
	v->a[20250] = sym_process_substitution;
	v->a[20251] = actions(2214);
	v->a[20252] = 20;
	v->a[20253] = anon_sym_SEMI;
	v->a[20254] = anon_sym_PIPE_PIPE;
	v->a[20255] = anon_sym_AMP_AMP;
	v->a[20256] = anon_sym_PIPE;
	v->a[20257] = anon_sym_AMP;
	v->a[20258] = anon_sym_LT;
	v->a[20259] = anon_sym_GT;
	small_parse_table_1013(v);
}

void	small_parse_table_1013(t_small_parse_table_array *v)
{
	v->a[20260] = anon_sym_LT_LT;
	v->a[20261] = anon_sym_GT_GT;
	v->a[20262] = anon_sym_RPAREN;
	v->a[20263] = anon_sym_SEMI_SEMI;
	v->a[20264] = anon_sym_PIPE_AMP;
	v->a[20265] = anon_sym_AMP_GT;
	v->a[20266] = anon_sym_AMP_GT_GT;
	v->a[20267] = anon_sym_LT_AMP;
	v->a[20268] = anon_sym_GT_AMP;
	v->a[20269] = anon_sym_GT_PIPE;
	v->a[20270] = anon_sym_LT_AMP_DASH;
	v->a[20271] = anon_sym_GT_AMP_DASH;
	v->a[20272] = anon_sym_LT_LT_DASH;
	v->a[20273] = 21;
	v->a[20274] = actions(3);
	v->a[20275] = 1;
	v->a[20276] = sym_comment;
	v->a[20277] = actions(3701);
	v->a[20278] = 1;
	v->a[20279] = anon_sym_DQUOTE;
	small_parse_table_1014(v);
}

void	small_parse_table_1014(t_small_parse_table_array *v)
{
	v->a[20280] = actions(3880);
	v->a[20281] = 1;
	v->a[20282] = anon_sym_DOLLAR_LBRACK;
	v->a[20283] = actions(3882);
	v->a[20284] = 1;
	v->a[20285] = anon_sym_DOLLAR;
	v->a[20286] = actions(3884);
	v->a[20287] = 1;
	v->a[20288] = sym__special_character;
	v->a[20289] = actions(3886);
	v->a[20290] = 1;
	v->a[20291] = aux_sym_number_token1;
	v->a[20292] = actions(3888);
	v->a[20293] = 1;
	v->a[20294] = aux_sym_number_token2;
	v->a[20295] = actions(3890);
	v->a[20296] = 1;
	v->a[20297] = anon_sym_DOLLAR_LBRACE;
	v->a[20298] = actions(3892);
	v->a[20299] = 1;
	small_parse_table_1015(v);
}

/* EOF small_parse_table_202.c */
