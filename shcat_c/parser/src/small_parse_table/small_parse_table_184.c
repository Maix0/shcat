/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_184.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_920(t_small_parse_table_array *v)
{
	v->a[18400] = 1;
	v->a[18401] = sym_test_operator;
	v->a[18402] = actions(3697);
	v->a[18403] = 1;
	v->a[18404] = sym__brace_start;
	v->a[18405] = state(4767);
	v->a[18406] = 1;
	v->a[18407] = aux_sym__literal_repeat1;
	v->a[18408] = state(5114);
	v->a[18409] = 1;
	v->a[18410] = sym_concatenation;
	v->a[18411] = actions(2500);
	v->a[18412] = 2;
	v->a[18413] = sym_file_descriptor;
	v->a[18414] = aux_sym_heredoc_redirect_token1;
	v->a[18415] = actions(3671);
	v->a[18416] = 2;
	v->a[18417] = anon_sym_LPAREN_LPAREN;
	v->a[18418] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18419] = actions(3693);
	small_parse_table_921(v);
}

void	small_parse_table_921(t_small_parse_table_array *v)
{
	v->a[18420] = 2;
	v->a[18421] = anon_sym_LT_LPAREN;
	v->a[18422] = anon_sym_GT_LPAREN;
	v->a[18423] = actions(3669);
	v->a[18424] = 3;
	v->a[18425] = sym_raw_string;
	v->a[18426] = sym_ansi_c_string;
	v->a[18427] = sym_word;
	v->a[18428] = state(4504);
	v->a[18429] = 9;
	v->a[18430] = sym_arithmetic_expansion;
	v->a[18431] = sym_brace_expression;
	v->a[18432] = sym_string;
	v->a[18433] = sym_translated_string;
	v->a[18434] = sym_number;
	v->a[18435] = sym_simple_expansion;
	v->a[18436] = sym_expansion;
	v->a[18437] = sym_command_substitution;
	v->a[18438] = sym_process_substitution;
	v->a[18439] = actions(2498);
	small_parse_table_922(v);
}

void	small_parse_table_922(t_small_parse_table_array *v)
{
	v->a[18440] = 21;
	v->a[18441] = anon_sym_SEMI;
	v->a[18442] = anon_sym_PIPE_PIPE;
	v->a[18443] = anon_sym_AMP_AMP;
	v->a[18444] = anon_sym_PIPE;
	v->a[18445] = anon_sym_AMP;
	v->a[18446] = anon_sym_LT;
	v->a[18447] = anon_sym_GT;
	v->a[18448] = anon_sym_LT_LT;
	v->a[18449] = anon_sym_GT_GT;
	v->a[18450] = anon_sym_SEMI_SEMI;
	v->a[18451] = anon_sym_SEMI_AMP;
	v->a[18452] = anon_sym_SEMI_SEMI_AMP;
	v->a[18453] = anon_sym_PIPE_AMP;
	v->a[18454] = anon_sym_AMP_GT;
	v->a[18455] = anon_sym_AMP_GT_GT;
	v->a[18456] = anon_sym_LT_AMP;
	v->a[18457] = anon_sym_GT_AMP;
	v->a[18458] = anon_sym_GT_PIPE;
	v->a[18459] = anon_sym_LT_AMP_DASH;
	small_parse_table_923(v);
}

void	small_parse_table_923(t_small_parse_table_array *v)
{
	v->a[18460] = anon_sym_GT_AMP_DASH;
	v->a[18461] = anon_sym_LT_LT_DASH;
	v->a[18462] = 8;
	v->a[18463] = actions(3);
	v->a[18464] = 1;
	v->a[18465] = sym_comment;
	v->a[18466] = actions(3701);
	v->a[18467] = 1;
	v->a[18468] = anon_sym_DQUOTE;
	v->a[18469] = actions(3705);
	v->a[18470] = 1;
	v->a[18471] = sym_variable_name;
	v->a[18472] = state(2025);
	v->a[18473] = 1;
	v->a[18474] = sym_string;
	v->a[18475] = actions(3703);
	v->a[18476] = 2;
	v->a[18477] = aux_sym__simple_variable_name_token1;
	v->a[18478] = aux_sym__multiline_variable_name_token1;
	v->a[18479] = actions(1235);
	small_parse_table_924(v);
}

void	small_parse_table_924(t_small_parse_table_array *v)
{
	v->a[18480] = 4;
	v->a[18481] = sym_file_descriptor;
	v->a[18482] = sym_test_operator;
	v->a[18483] = sym__brace_start;
	v->a[18484] = ts_builtin_sym_end;
	v->a[18485] = actions(3699);
	v->a[18486] = 9;
	v->a[18487] = anon_sym_DASH;
	v->a[18488] = anon_sym_STAR;
	v->a[18489] = anon_sym_BANG;
	v->a[18490] = anon_sym_QMARK;
	v->a[18491] = anon_sym_DOLLAR;
	v->a[18492] = anon_sym_POUND;
	v->a[18493] = anon_sym_AT2;
	v->a[18494] = anon_sym_0;
	v->a[18495] = anon_sym__;
	v->a[18496] = actions(1227);
	v->a[18497] = 35;
	v->a[18498] = anon_sym_LPAREN_LPAREN;
	v->a[18499] = anon_sym_SEMI;
	small_parse_table_925(v);
}

/* EOF small_parse_table_184.c */
