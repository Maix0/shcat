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
	v->a[10200] = anon_sym_GT_PIPE;
	v->a[10201] = anon_sym_LT_AMP_DASH;
	v->a[10202] = anon_sym_GT_AMP_DASH;
	v->a[10203] = anon_sym_LT_LT_DASH;
	v->a[10204] = anon_sym_LT_LT_LT;
	v->a[10205] = 22;
	v->a[10206] = actions(3);
	v->a[10207] = 1;
	v->a[10208] = sym_comment;
	v->a[10209] = actions(2784);
	v->a[10210] = 1;
	v->a[10211] = anon_sym_DOLLAR_LBRACK;
	v->a[10212] = actions(2786);
	v->a[10213] = 1;
	v->a[10214] = anon_sym_DOLLAR;
	v->a[10215] = actions(2788);
	v->a[10216] = 1;
	v->a[10217] = sym__special_character;
	v->a[10218] = actions(2790);
	v->a[10219] = 1;
	small_parse_table_511(v);
}

void	small_parse_table_511(t_small_parse_table_array *v)
{
	v->a[10220] = anon_sym_DQUOTE;
	v->a[10221] = actions(2792);
	v->a[10222] = 1;
	v->a[10223] = aux_sym_number_token1;
	v->a[10224] = actions(2794);
	v->a[10225] = 1;
	v->a[10226] = aux_sym_number_token2;
	v->a[10227] = actions(2796);
	v->a[10228] = 1;
	v->a[10229] = anon_sym_DOLLAR_LBRACE;
	v->a[10230] = actions(2798);
	v->a[10231] = 1;
	v->a[10232] = anon_sym_DOLLAR_LPAREN;
	v->a[10233] = actions(2800);
	v->a[10234] = 1;
	v->a[10235] = anon_sym_BQUOTE;
	v->a[10236] = actions(2802);
	v->a[10237] = 1;
	v->a[10238] = anon_sym_DOLLAR_BQUOTE;
	v->a[10239] = actions(2808);
	small_parse_table_512(v);
}

void	small_parse_table_512(t_small_parse_table_array *v)
{
	v->a[10240] = 1;
	v->a[10241] = sym_test_operator;
	v->a[10242] = actions(2810);
	v->a[10243] = 1;
	v->a[10244] = sym__brace_start;
	v->a[10245] = actions(2887);
	v->a[10246] = 1;
	v->a[10247] = aux_sym__simple_variable_name_token1;
	v->a[10248] = state(1860);
	v->a[10249] = 1;
	v->a[10250] = aux_sym__literal_repeat1;
	v->a[10251] = actions(2299);
	v->a[10252] = 2;
	v->a[10253] = sym_file_descriptor;
	v->a[10254] = aux_sym_heredoc_redirect_token1;
	v->a[10255] = actions(2782);
	v->a[10256] = 2;
	v->a[10257] = anon_sym_LPAREN_LPAREN;
	v->a[10258] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[10259] = actions(2804);
	small_parse_table_513(v);
}

void	small_parse_table_513(t_small_parse_table_array *v)
{
	v->a[10260] = 2;
	v->a[10261] = anon_sym_LT_LPAREN;
	v->a[10262] = anon_sym_GT_LPAREN;
	v->a[10263] = state(629);
	v->a[10264] = 2;
	v->a[10265] = sym_concatenation;
	v->a[10266] = aux_sym_unset_command_repeat1;
	v->a[10267] = actions(2780);
	v->a[10268] = 3;
	v->a[10269] = sym_raw_string;
	v->a[10270] = sym_ansi_c_string;
	v->a[10271] = sym_word;
	v->a[10272] = state(1326);
	v->a[10273] = 9;
	v->a[10274] = sym_arithmetic_expansion;
	v->a[10275] = sym_brace_expression;
	v->a[10276] = sym_string;
	v->a[10277] = sym_translated_string;
	v->a[10278] = sym_number;
	v->a[10279] = sym_simple_expansion;
	small_parse_table_514(v);
}

void	small_parse_table_514(t_small_parse_table_array *v)
{
	v->a[10280] = sym_expansion;
	v->a[10281] = sym_command_substitution;
	v->a[10282] = sym_process_substitution;
	v->a[10283] = actions(2297);
	v->a[10284] = 21;
	v->a[10285] = anon_sym_SEMI;
	v->a[10286] = anon_sym_PIPE_PIPE;
	v->a[10287] = anon_sym_AMP_AMP;
	v->a[10288] = anon_sym_PIPE;
	v->a[10289] = anon_sym_AMP;
	v->a[10290] = anon_sym_LT;
	v->a[10291] = anon_sym_GT;
	v->a[10292] = anon_sym_LT_LT;
	v->a[10293] = anon_sym_GT_GT;
	v->a[10294] = anon_sym_SEMI_SEMI;
	v->a[10295] = anon_sym_SEMI_AMP;
	v->a[10296] = anon_sym_SEMI_SEMI_AMP;
	v->a[10297] = anon_sym_PIPE_AMP;
	v->a[10298] = anon_sym_AMP_GT;
	v->a[10299] = anon_sym_AMP_GT_GT;
	small_parse_table_515(v);
}

/* EOF small_parse_table_102.c */
