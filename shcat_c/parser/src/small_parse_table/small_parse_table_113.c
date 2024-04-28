/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_113.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_565(t_small_parse_table_array *v)
{
	v->a[11300] = 1;
	v->a[11301] = sym_command;
	v->a[11302] = state(6759);
	v->a[11303] = 1;
	v->a[11304] = sym_subscript;
	v->a[11305] = actions(336);
	v->a[11306] = 2;
	v->a[11307] = anon_sym_LT_LPAREN;
	v->a[11308] = anon_sym_GT_LPAREN;
	v->a[11309] = actions(1017);
	v->a[11310] = 2;
	v->a[11311] = sym_raw_string;
	v->a[11312] = sym_ansi_c_string;
	v->a[11313] = actions(1392);
	v->a[11314] = 2;
	v->a[11315] = anon_sym_LT_AMP_DASH;
	v->a[11316] = anon_sym_GT_AMP_DASH;
	v->a[11317] = state(3581);
	v->a[11318] = 2;
	v->a[11319] = sym_file_redirect;
	small_parse_table_566(v);
}

void	small_parse_table_566(t_small_parse_table_array *v)
{
	v->a[11320] = sym_herestring_redirect;
	v->a[11321] = state(5014);
	v->a[11322] = 2;
	v->a[11323] = sym_subshell;
	v->a[11324] = sym_test_command;
	v->a[11325] = actions(1390);
	v->a[11326] = 3;
	v->a[11327] = anon_sym_GT_GT;
	v->a[11328] = anon_sym_AMP_GT_GT;
	v->a[11329] = anon_sym_GT_PIPE;
	v->a[11330] = actions(1388);
	v->a[11331] = 5;
	v->a[11332] = anon_sym_LT;
	v->a[11333] = anon_sym_GT;
	v->a[11334] = anon_sym_AMP_GT;
	v->a[11335] = anon_sym_LT_AMP;
	v->a[11336] = anon_sym_GT_AMP;
	v->a[11337] = state(1717);
	v->a[11338] = 9;
	v->a[11339] = sym_arithmetic_expansion;
	small_parse_table_567(v);
}

void	small_parse_table_567(t_small_parse_table_array *v)
{
	v->a[11340] = sym_brace_expression;
	v->a[11341] = sym_string;
	v->a[11342] = sym_translated_string;
	v->a[11343] = sym_number;
	v->a[11344] = sym_simple_expansion;
	v->a[11345] = sym_expansion;
	v->a[11346] = sym_command_substitution;
	v->a[11347] = sym_process_substitution;
	v->a[11348] = 6;
	v->a[11349] = actions(3);
	v->a[11350] = 1;
	v->a[11351] = sym_comment;
	v->a[11352] = state(1643);
	v->a[11353] = 1;
	v->a[11354] = aux_sym__literal_repeat1;
	v->a[11355] = state(1776);
	v->a[11356] = 1;
	v->a[11357] = sym_concatenation;
	v->a[11358] = actions(2500);
	v->a[11359] = 5;
	small_parse_table_568(v);
}

void	small_parse_table_568(t_small_parse_table_array *v)
{
	v->a[11360] = sym_file_descriptor;
	v->a[11361] = sym_variable_name;
	v->a[11362] = sym_test_operator;
	v->a[11363] = sym__brace_start;
	v->a[11364] = aux_sym_heredoc_redirect_token1;
	v->a[11365] = state(1184);
	v->a[11366] = 9;
	v->a[11367] = sym_arithmetic_expansion;
	v->a[11368] = sym_brace_expression;
	v->a[11369] = sym_string;
	v->a[11370] = sym_translated_string;
	v->a[11371] = sym_number;
	v->a[11372] = sym_simple_expansion;
	v->a[11373] = sym_expansion;
	v->a[11374] = sym_command_substitution;
	v->a[11375] = sym_process_substitution;
	v->a[11376] = actions(2498);
	v->a[11377] = 39;
	v->a[11378] = anon_sym_LPAREN_LPAREN;
	v->a[11379] = anon_sym_SEMI;
	small_parse_table_569(v);
}

void	small_parse_table_569(t_small_parse_table_array *v)
{
	v->a[11380] = anon_sym_PIPE_PIPE;
	v->a[11381] = anon_sym_AMP_AMP;
	v->a[11382] = anon_sym_PIPE;
	v->a[11383] = anon_sym_AMP;
	v->a[11384] = anon_sym_LT;
	v->a[11385] = anon_sym_GT;
	v->a[11386] = anon_sym_LT_LT;
	v->a[11387] = anon_sym_GT_GT;
	v->a[11388] = anon_sym_SEMI_SEMI;
	v->a[11389] = anon_sym_SEMI_AMP;
	v->a[11390] = anon_sym_SEMI_SEMI_AMP;
	v->a[11391] = anon_sym_PIPE_AMP;
	v->a[11392] = anon_sym_AMP_GT;
	v->a[11393] = anon_sym_AMP_GT_GT;
	v->a[11394] = anon_sym_LT_AMP;
	v->a[11395] = anon_sym_GT_AMP;
	v->a[11396] = anon_sym_GT_PIPE;
	v->a[11397] = anon_sym_LT_AMP_DASH;
	v->a[11398] = anon_sym_GT_AMP_DASH;
	v->a[11399] = anon_sym_LT_LT_DASH;
	small_parse_table_570(v);
}

/* EOF small_parse_table_113.c */
