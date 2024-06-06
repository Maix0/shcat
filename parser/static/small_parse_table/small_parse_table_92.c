/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_92.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_460(t_small_parse_table_array *v)
{
	v->a[9200] = anon_sym_BANG;
	v->a[9201] = anon_sym_DASH;
	v->a[9202] = anon_sym_STAR;
	v->a[9203] = anon_sym_QMARK;
	v->a[9204] = anon_sym_DOLLAR;
	v->a[9205] = anon_sym_POUND;
	v->a[9206] = anon_sym_AT;
	v->a[9207] = anon_sym_0;
	v->a[9208] = anon_sym__;
	v->a[9209] = actions(826);
	v->a[9210] = 32;
	v->a[9211] = anon_sym_PIPE;
	v->a[9212] = anon_sym_RPAREN;
	v->a[9213] = anon_sym_SEMI_SEMI;
	v->a[9214] = anon_sym_PIPE_AMP;
	v->a[9215] = anon_sym_AMP_AMP;
	v->a[9216] = anon_sym_PIPE_PIPE;
	v->a[9217] = anon_sym_LT;
	v->a[9218] = anon_sym_GT;
	v->a[9219] = anon_sym_GT_GT;
	small_parse_table_461(v);
}

void	small_parse_table_461(t_small_parse_table_array *v)
{
	v->a[9220] = anon_sym_AMP_GT;
	v->a[9221] = anon_sym_AMP_GT_GT;
	v->a[9222] = anon_sym_LT_AMP;
	v->a[9223] = anon_sym_GT_AMP;
	v->a[9224] = anon_sym_GT_PIPE;
	v->a[9225] = anon_sym_LT_AMP_DASH;
	v->a[9226] = anon_sym_GT_AMP_DASH;
	v->a[9227] = anon_sym_LT_LT;
	v->a[9228] = anon_sym_LT_LT_DASH;
	v->a[9229] = aux_sym_heredoc_redirect_token1;
	v->a[9230] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[9231] = anon_sym_AMP;
	v->a[9232] = sym__special_character;
	v->a[9233] = anon_sym_DQUOTE;
	v->a[9234] = sym_raw_string;
	v->a[9235] = aux_sym_number_token1;
	v->a[9236] = aux_sym_number_token2;
	v->a[9237] = anon_sym_DOLLAR_LBRACE;
	v->a[9238] = anon_sym_DOLLAR_LPAREN;
	v->a[9239] = anon_sym_BQUOTE;
	small_parse_table_462(v);
}

void	small_parse_table_462(t_small_parse_table_array *v)
{
	v->a[9240] = anon_sym_DOLLAR_BQUOTE;
	v->a[9241] = sym_word;
	v->a[9242] = anon_sym_SEMI;
	v->a[9243] = 6;
	v->a[9244] = actions(3);
	v->a[9245] = 1;
	v->a[9246] = sym_comment;
	v->a[9247] = actions(2048);
	v->a[9248] = 1;
	v->a[9249] = sym_variable_name;
	v->a[9250] = actions(2046);
	v->a[9251] = 2;
	v->a[9252] = aux_sym__simple_variable_name_token1;
	v->a[9253] = aux_sym__multiline_variable_name_token1;
	v->a[9254] = actions(828);
	v->a[9255] = 4;
	v->a[9256] = sym_file_descriptor;
	v->a[9257] = sym_test_operator;
	v->a[9258] = sym__brace_start;
	v->a[9259] = ts_builtin_sym_end;
	small_parse_table_463(v);
}

void	small_parse_table_463(t_small_parse_table_array *v)
{
	v->a[9260] = actions(2044);
	v->a[9261] = 9;
	v->a[9262] = anon_sym_BANG;
	v->a[9263] = anon_sym_DASH;
	v->a[9264] = anon_sym_STAR;
	v->a[9265] = anon_sym_QMARK;
	v->a[9266] = anon_sym_DOLLAR;
	v->a[9267] = anon_sym_POUND;
	v->a[9268] = anon_sym_AT;
	v->a[9269] = anon_sym_0;
	v->a[9270] = anon_sym__;
	v->a[9271] = actions(826);
	v->a[9272] = 31;
	v->a[9273] = anon_sym_PIPE;
	v->a[9274] = anon_sym_SEMI_SEMI;
	v->a[9275] = anon_sym_PIPE_AMP;
	v->a[9276] = anon_sym_AMP_AMP;
	v->a[9277] = anon_sym_PIPE_PIPE;
	v->a[9278] = anon_sym_LT;
	v->a[9279] = anon_sym_GT;
	small_parse_table_464(v);
}

void	small_parse_table_464(t_small_parse_table_array *v)
{
	v->a[9280] = anon_sym_GT_GT;
	v->a[9281] = anon_sym_AMP_GT;
	v->a[9282] = anon_sym_AMP_GT_GT;
	v->a[9283] = anon_sym_LT_AMP;
	v->a[9284] = anon_sym_GT_AMP;
	v->a[9285] = anon_sym_GT_PIPE;
	v->a[9286] = anon_sym_LT_AMP_DASH;
	v->a[9287] = anon_sym_GT_AMP_DASH;
	v->a[9288] = anon_sym_LT_LT;
	v->a[9289] = anon_sym_LT_LT_DASH;
	v->a[9290] = aux_sym_heredoc_redirect_token1;
	v->a[9291] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[9292] = anon_sym_AMP;
	v->a[9293] = sym__special_character;
	v->a[9294] = anon_sym_DQUOTE;
	v->a[9295] = sym_raw_string;
	v->a[9296] = aux_sym_number_token1;
	v->a[9297] = aux_sym_number_token2;
	v->a[9298] = anon_sym_DOLLAR_LBRACE;
	v->a[9299] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_465(v);
}

/* EOF small_parse_table_92.c */
