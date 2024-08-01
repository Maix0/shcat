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
	v->a[20200] = state(1538);
	v->a[20201] = 2;
	v->a[20202] = sym_concatenation;
	v->a[20203] = sym__extglob_blob;
	v->a[20204] = actions(774);
	v->a[20205] = 3;
	v->a[20206] = sym_raw_string;
	v->a[20207] = sym_number;
	v->a[20208] = sym_word;
	v->a[20209] = actions(780);
	v->a[20210] = 3;
	v->a[20211] = anon_sym_SEMI_SEMI;
	v->a[20212] = aux_sym_heredoc_redirect_token1;
	v->a[20213] = anon_sym_SEMI;
	v->a[20214] = state(1468);
	v->a[20215] = 5;
	v->a[20216] = sym_arithmetic_expansion;
	v->a[20217] = sym_string;
	v->a[20218] = sym_simple_expansion;
	v->a[20219] = sym_expansion;
	small_parse_table_1011(v);
}

void	small_parse_table_1011(t_small_parse_table_array *v)
{
	v->a[20220] = sym_command_substitution;
	v->a[20221] = 6;
	v->a[20222] = actions(3);
	v->a[20223] = 1;
	v->a[20224] = sym_comment;
	v->a[20225] = actions(599);
	v->a[20226] = 1;
	v->a[20227] = sym_variable_name;
	v->a[20228] = state(963);
	v->a[20229] = 2;
	v->a[20230] = sym_variable_assignment;
	v->a[20231] = aux_sym__variable_assignments_repeat1;
	v->a[20232] = state(916);
	v->a[20233] = 3;
	v->a[20234] = sym_file_redirect;
	v->a[20235] = sym_heredoc_redirect;
	v->a[20236] = aux_sym_redirected_statement_repeat1;
	v->a[20237] = actions(576);
	v->a[20238] = 9;
	v->a[20239] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1012(v);
}

void	small_parse_table_1012(t_small_parse_table_array *v)
{
	v->a[20240] = anon_sym_DOLLAR;
	v->a[20241] = anon_sym_DQUOTE;
	v->a[20242] = sym_raw_string;
	v->a[20243] = sym_number;
	v->a[20244] = anon_sym_DOLLAR_LBRACE;
	v->a[20245] = anon_sym_DOLLAR_LPAREN;
	v->a[20246] = anon_sym_BQUOTE;
	v->a[20247] = sym_word;
	v->a[20248] = actions(580);
	v->a[20249] = 11;
	v->a[20250] = anon_sym_PIPE;
	v->a[20251] = anon_sym_RPAREN;
	v->a[20252] = anon_sym_SEMI_SEMI;
	v->a[20253] = anon_sym_AMP_AMP;
	v->a[20254] = anon_sym_PIPE_PIPE;
	v->a[20255] = anon_sym_LT;
	v->a[20256] = anon_sym_GT;
	v->a[20257] = anon_sym_GT_GT;
	v->a[20258] = anon_sym_LT_LT;
	v->a[20259] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1013(v);
}

void	small_parse_table_1013(t_small_parse_table_array *v)
{
	v->a[20260] = anon_sym_SEMI;
	v->a[20261] = 8;
	v->a[20262] = actions(3);
	v->a[20263] = 1;
	v->a[20264] = sym_comment;
	v->a[20265] = actions(580);
	v->a[20266] = 1;
	v->a[20267] = anon_sym_PIPE;
	v->a[20268] = actions(697);
	v->a[20269] = 1;
	v->a[20270] = sym_variable_name;
	v->a[20271] = actions(827);
	v->a[20272] = 1;
	v->a[20273] = ts_builtin_sym_end;
	v->a[20274] = state(924);
	v->a[20275] = 2;
	v->a[20276] = sym_variable_assignment;
	v->a[20277] = aux_sym__variable_assignments_repeat1;
	v->a[20278] = state(922);
	v->a[20279] = 3;
	small_parse_table_1014(v);
}

void	small_parse_table_1014(t_small_parse_table_array *v)
{
	v->a[20280] = sym_file_redirect;
	v->a[20281] = sym_heredoc_redirect;
	v->a[20282] = aux_sym_redirected_statement_repeat1;
	v->a[20283] = actions(816);
	v->a[20284] = 6;
	v->a[20285] = anon_sym_SEMI_SEMI;
	v->a[20286] = anon_sym_AMP_AMP;
	v->a[20287] = anon_sym_PIPE_PIPE;
	v->a[20288] = anon_sym_LT_LT;
	v->a[20289] = aux_sym_heredoc_redirect_token1;
	v->a[20290] = anon_sym_SEMI;
	v->a[20291] = actions(576);
	v->a[20292] = 12;
	v->a[20293] = anon_sym_LT;
	v->a[20294] = anon_sym_GT;
	v->a[20295] = anon_sym_GT_GT;
	v->a[20296] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20297] = anon_sym_DOLLAR;
	v->a[20298] = anon_sym_DQUOTE;
	v->a[20299] = sym_raw_string;
	small_parse_table_1015(v);
}

/* EOF small_parse_table_202.c */
