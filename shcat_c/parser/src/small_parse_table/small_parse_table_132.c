/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_132.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_660(t_small_parse_table_array *v)
{
	v->a[13200] = sym_test_operator;
	v->a[13201] = state(4596);
	v->a[13202] = 1;
	v->a[13203] = aux_sym__literal_repeat1;
	v->a[13204] = state(4914);
	v->a[13205] = 1;
	v->a[13206] = sym_concatenation;
	v->a[13207] = actions(2500);
	v->a[13208] = 2;
	v->a[13209] = sym_file_descriptor;
	v->a[13210] = aux_sym_heredoc_redirect_token1;
	v->a[13211] = actions(3022);
	v->a[13212] = 2;
	v->a[13213] = anon_sym_LPAREN_LPAREN;
	v->a[13214] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[13215] = actions(3044);
	v->a[13216] = 2;
	v->a[13217] = anon_sym_LT_LPAREN;
	v->a[13218] = anon_sym_GT_LPAREN;
	v->a[13219] = actions(3175);
	small_parse_table_661(v);
}

void	small_parse_table_661(t_small_parse_table_array *v)
{
	v->a[13220] = 3;
	v->a[13221] = sym_raw_string;
	v->a[13222] = sym_ansi_c_string;
	v->a[13223] = sym_word;
	v->a[13224] = state(4331);
	v->a[13225] = 9;
	v->a[13226] = sym_arithmetic_expansion;
	v->a[13227] = sym_brace_expression;
	v->a[13228] = sym_string;
	v->a[13229] = sym_translated_string;
	v->a[13230] = sym_number;
	v->a[13231] = sym_simple_expansion;
	v->a[13232] = sym_expansion;
	v->a[13233] = sym_command_substitution;
	v->a[13234] = sym_process_substitution;
	v->a[13235] = actions(2498);
	v->a[13236] = 22;
	v->a[13237] = anon_sym_SEMI;
	v->a[13238] = anon_sym_PIPE_PIPE;
	v->a[13239] = anon_sym_AMP_AMP;
	small_parse_table_662(v);
}

void	small_parse_table_662(t_small_parse_table_array *v)
{
	v->a[13240] = anon_sym_PIPE;
	v->a[13241] = anon_sym_AMP;
	v->a[13242] = anon_sym_LT;
	v->a[13243] = anon_sym_GT;
	v->a[13244] = anon_sym_LT_LT;
	v->a[13245] = anon_sym_GT_GT;
	v->a[13246] = anon_sym_SEMI_SEMI;
	v->a[13247] = anon_sym_SEMI_AMP;
	v->a[13248] = anon_sym_SEMI_SEMI_AMP;
	v->a[13249] = anon_sym_PIPE_AMP;
	v->a[13250] = anon_sym_AMP_GT;
	v->a[13251] = anon_sym_AMP_GT_GT;
	v->a[13252] = anon_sym_LT_AMP;
	v->a[13253] = anon_sym_GT_AMP;
	v->a[13254] = anon_sym_GT_PIPE;
	v->a[13255] = anon_sym_LT_AMP_DASH;
	v->a[13256] = anon_sym_GT_AMP_DASH;
	v->a[13257] = anon_sym_LT_LT_DASH;
	v->a[13258] = anon_sym_LT_LT_LT;
	v->a[13259] = 8;
	small_parse_table_663(v);
}

void	small_parse_table_663(t_small_parse_table_array *v)
{
	v->a[13260] = actions(3);
	v->a[13261] = 1;
	v->a[13262] = sym_comment;
	v->a[13263] = actions(1835);
	v->a[13264] = 1;
	v->a[13265] = anon_sym_DQUOTE;
	v->a[13266] = actions(3125);
	v->a[13267] = 1;
	v->a[13268] = sym_variable_name;
	v->a[13269] = state(1416);
	v->a[13270] = 1;
	v->a[13271] = sym_string;
	v->a[13272] = actions(3123);
	v->a[13273] = 2;
	v->a[13274] = aux_sym__simple_variable_name_token1;
	v->a[13275] = aux_sym__multiline_variable_name_token1;
	v->a[13276] = actions(1241);
	v->a[13277] = 3;
	v->a[13278] = sym_file_descriptor;
	v->a[13279] = sym_test_operator;
	small_parse_table_664(v);
}

void	small_parse_table_664(t_small_parse_table_array *v)
{
	v->a[13280] = sym__brace_start;
	v->a[13281] = actions(3121);
	v->a[13282] = 9;
	v->a[13283] = anon_sym_DASH;
	v->a[13284] = anon_sym_STAR;
	v->a[13285] = anon_sym_BANG;
	v->a[13286] = anon_sym_QMARK;
	v->a[13287] = anon_sym_DOLLAR;
	v->a[13288] = anon_sym_POUND;
	v->a[13289] = anon_sym_AT2;
	v->a[13290] = anon_sym_0;
	v->a[13291] = anon_sym__;
	v->a[13292] = actions(1239);
	v->a[13293] = 37;
	v->a[13294] = anon_sym_LPAREN_LPAREN;
	v->a[13295] = anon_sym_SEMI;
	v->a[13296] = anon_sym_PIPE_PIPE;
	v->a[13297] = anon_sym_AMP_AMP;
	v->a[13298] = anon_sym_PIPE;
	v->a[13299] = anon_sym_AMP;
	small_parse_table_665(v);
}

/* EOF small_parse_table_132.c */
