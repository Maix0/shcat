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
	v->a[13200] = sym_concatenation;
	v->a[13201] = aux_sym_declaration_command_repeat1;
	v->a[13202] = state(1298);
	v->a[13203] = 7;
	v->a[13204] = sym_arithmetic_expansion;
	v->a[13205] = sym_brace_expression;
	v->a[13206] = sym_string;
	v->a[13207] = sym_number;
	v->a[13208] = sym_simple_expansion;
	v->a[13209] = sym_expansion;
	v->a[13210] = sym_command_substitution;
	v->a[13211] = actions(820);
	v->a[13212] = 16;
	v->a[13213] = anon_sym_PIPE;
	v->a[13214] = anon_sym_PIPE_AMP;
	v->a[13215] = anon_sym_AMP_AMP;
	v->a[13216] = anon_sym_PIPE_PIPE;
	v->a[13217] = anon_sym_LT;
	v->a[13218] = anon_sym_GT;
	v->a[13219] = anon_sym_GT_GT;
	small_parse_table_661(v);
}

void	small_parse_table_661(t_small_parse_table_array *v)
{
	v->a[13220] = anon_sym_AMP_GT;
	v->a[13221] = anon_sym_AMP_GT_GT;
	v->a[13222] = anon_sym_LT_AMP;
	v->a[13223] = anon_sym_GT_AMP;
	v->a[13224] = anon_sym_GT_PIPE;
	v->a[13225] = anon_sym_LT_AMP_DASH;
	v->a[13226] = anon_sym_GT_AMP_DASH;
	v->a[13227] = anon_sym_LT_LT;
	v->a[13228] = anon_sym_LT_LT_DASH;
	v->a[13229] = 6;
	v->a[13230] = actions(3);
	v->a[13231] = 1;
	v->a[13232] = sym_comment;
	v->a[13233] = actions(1178);
	v->a[13234] = 1;
	v->a[13235] = sym_variable_name;
	v->a[13236] = actions(1176);
	v->a[13237] = 2;
	v->a[13238] = aux_sym__simple_variable_name_token1;
	v->a[13239] = aux_sym__multiline_variable_name_token1;
	small_parse_table_662(v);
}

void	small_parse_table_662(t_small_parse_table_array *v)
{
	v->a[13240] = actions(816);
	v->a[13241] = 4;
	v->a[13242] = sym_file_descriptor;
	v->a[13243] = sym_test_operator;
	v->a[13244] = sym__bare_dollar;
	v->a[13245] = sym__brace_start;
	v->a[13246] = actions(1174);
	v->a[13247] = 9;
	v->a[13248] = anon_sym_BANG;
	v->a[13249] = anon_sym_DASH;
	v->a[13250] = anon_sym_STAR;
	v->a[13251] = anon_sym_QMARK;
	v->a[13252] = anon_sym_DOLLAR;
	v->a[13253] = anon_sym_POUND;
	v->a[13254] = anon_sym_AT;
	v->a[13255] = anon_sym_0;
	v->a[13256] = anon_sym__;
	v->a[13257] = actions(810);
	v->a[13258] = 29;
	v->a[13259] = anon_sym_LPAREN;
	small_parse_table_663(v);
}

void	small_parse_table_663(t_small_parse_table_array *v)
{
	v->a[13260] = anon_sym_PIPE;
	v->a[13261] = anon_sym_PIPE_AMP;
	v->a[13262] = anon_sym_AMP_AMP;
	v->a[13263] = anon_sym_PIPE_PIPE;
	v->a[13264] = anon_sym_LT;
	v->a[13265] = anon_sym_GT;
	v->a[13266] = anon_sym_GT_GT;
	v->a[13267] = anon_sym_AMP_GT;
	v->a[13268] = anon_sym_AMP_GT_GT;
	v->a[13269] = anon_sym_LT_AMP;
	v->a[13270] = anon_sym_GT_AMP;
	v->a[13271] = anon_sym_GT_PIPE;
	v->a[13272] = anon_sym_LT_AMP_DASH;
	v->a[13273] = anon_sym_GT_AMP_DASH;
	v->a[13274] = anon_sym_LT_LT;
	v->a[13275] = anon_sym_LT_LT_DASH;
	v->a[13276] = aux_sym_heredoc_redirect_token1;
	v->a[13277] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[13278] = sym__special_character;
	v->a[13279] = anon_sym_DQUOTE;
	small_parse_table_664(v);
}

void	small_parse_table_664(t_small_parse_table_array *v)
{
	v->a[13280] = sym_raw_string;
	v->a[13281] = aux_sym_number_token1;
	v->a[13282] = aux_sym_number_token2;
	v->a[13283] = anon_sym_DOLLAR_LBRACE;
	v->a[13284] = anon_sym_DOLLAR_LPAREN;
	v->a[13285] = anon_sym_BQUOTE;
	v->a[13286] = anon_sym_DOLLAR_BQUOTE;
	v->a[13287] = sym_word;
	v->a[13288] = 18;
	v->a[13289] = actions(3);
	v->a[13290] = 1;
	v->a[13291] = sym_comment;
	v->a[13292] = actions(2152);
	v->a[13293] = 1;
	v->a[13294] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[13295] = actions(2154);
	v->a[13296] = 1;
	v->a[13297] = anon_sym_DOLLAR;
	v->a[13298] = actions(2158);
	v->a[13299] = 1;
	small_parse_table_665(v);
}

/* EOF small_parse_table_132.c */
