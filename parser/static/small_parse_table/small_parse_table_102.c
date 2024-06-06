/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_102.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_510(t_small_parse_table_array *v)
{
	v->a[10200] = sym_file_descriptor;
	v->a[10201] = aux_sym_heredoc_redirect_token1;
	v->a[10202] = actions(2108);
	v->a[10203] = 2;
	v->a[10204] = sym_raw_string;
	v->a[10205] = sym_word;
	v->a[10206] = state(770);
	v->a[10207] = 7;
	v->a[10208] = sym_arithmetic_expansion;
	v->a[10209] = sym_brace_expression;
	v->a[10210] = sym_string;
	v->a[10211] = sym_number;
	v->a[10212] = sym_simple_expansion;
	v->a[10213] = sym_expansion;
	v->a[10214] = sym_command_substitution;
	v->a[10215] = actions(1193);
	v->a[10216] = 20;
	v->a[10217] = anon_sym_PIPE;
	v->a[10218] = anon_sym_RPAREN;
	v->a[10219] = anon_sym_SEMI_SEMI;
	small_parse_table_511(v);
}

void	small_parse_table_511(t_small_parse_table_array *v)
{
	v->a[10220] = anon_sym_PIPE_AMP;
	v->a[10221] = anon_sym_AMP_AMP;
	v->a[10222] = anon_sym_PIPE_PIPE;
	v->a[10223] = anon_sym_LT;
	v->a[10224] = anon_sym_GT;
	v->a[10225] = anon_sym_GT_GT;
	v->a[10226] = anon_sym_AMP_GT;
	v->a[10227] = anon_sym_AMP_GT_GT;
	v->a[10228] = anon_sym_LT_AMP;
	v->a[10229] = anon_sym_GT_AMP;
	v->a[10230] = anon_sym_GT_PIPE;
	v->a[10231] = anon_sym_LT_AMP_DASH;
	v->a[10232] = anon_sym_GT_AMP_DASH;
	v->a[10233] = anon_sym_LT_LT;
	v->a[10234] = anon_sym_LT_LT_DASH;
	v->a[10235] = anon_sym_AMP;
	v->a[10236] = anon_sym_SEMI;
	v->a[10237] = 19;
	v->a[10238] = actions(3);
	v->a[10239] = 1;
	small_parse_table_512(v);
}

void	small_parse_table_512(t_small_parse_table_array *v)
{
	v->a[10240] = sym_comment;
	v->a[10241] = actions(2152);
	v->a[10242] = 1;
	v->a[10243] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[10244] = actions(2154);
	v->a[10245] = 1;
	v->a[10246] = anon_sym_DOLLAR;
	v->a[10247] = actions(2156);
	v->a[10248] = 1;
	v->a[10249] = sym__special_character;
	v->a[10250] = actions(2158);
	v->a[10251] = 1;
	v->a[10252] = anon_sym_DQUOTE;
	v->a[10253] = actions(2160);
	v->a[10254] = 1;
	v->a[10255] = aux_sym_number_token1;
	v->a[10256] = actions(2162);
	v->a[10257] = 1;
	v->a[10258] = aux_sym_number_token2;
	v->a[10259] = actions(2164);
	small_parse_table_513(v);
}

void	small_parse_table_513(t_small_parse_table_array *v)
{
	v->a[10260] = 1;
	v->a[10261] = anon_sym_DOLLAR_LBRACE;
	v->a[10262] = actions(2166);
	v->a[10263] = 1;
	v->a[10264] = anon_sym_DOLLAR_LPAREN;
	v->a[10265] = actions(2168);
	v->a[10266] = 1;
	v->a[10267] = anon_sym_BQUOTE;
	v->a[10268] = actions(2170);
	v->a[10269] = 1;
	v->a[10270] = anon_sym_DOLLAR_BQUOTE;
	v->a[10271] = actions(2172);
	v->a[10272] = 1;
	v->a[10273] = sym_test_operator;
	v->a[10274] = actions(2174);
	v->a[10275] = 1;
	v->a[10276] = sym__brace_start;
	v->a[10277] = state(1270);
	v->a[10278] = 1;
	v->a[10279] = aux_sym__literal_repeat1;
	small_parse_table_514(v);
}

void	small_parse_table_514(t_small_parse_table_array *v)
{
	v->a[10280] = actions(1182);
	v->a[10281] = 2;
	v->a[10282] = sym_file_descriptor;
	v->a[10283] = aux_sym_heredoc_redirect_token1;
	v->a[10284] = actions(2150);
	v->a[10285] = 2;
	v->a[10286] = sym_raw_string;
	v->a[10287] = sym_word;
	v->a[10288] = state(393);
	v->a[10289] = 2;
	v->a[10290] = sym_concatenation;
	v->a[10291] = aux_sym_for_statement_repeat1;
	v->a[10292] = state(1069);
	v->a[10293] = 7;
	v->a[10294] = sym_arithmetic_expansion;
	v->a[10295] = sym_brace_expression;
	v->a[10296] = sym_string;
	v->a[10297] = sym_number;
	v->a[10298] = sym_simple_expansion;
	v->a[10299] = sym_expansion;
	small_parse_table_515(v);
}

/* EOF small_parse_table_102.c */
