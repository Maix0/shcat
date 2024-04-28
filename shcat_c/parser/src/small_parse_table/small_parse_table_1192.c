/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1192.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5960(t_small_parse_table_array *v)
{
	v->a[119200] = anon_sym_LPAREN_LPAREN;
	v->a[119201] = anon_sym_PIPE_PIPE;
	v->a[119202] = anon_sym_AMP_AMP;
	v->a[119203] = anon_sym_GT_GT;
	v->a[119204] = anon_sym_PIPE_AMP;
	v->a[119205] = anon_sym_RBRACK;
	v->a[119206] = anon_sym_AMP_GT_GT;
	v->a[119207] = anon_sym_GT_PIPE;
	v->a[119208] = anon_sym_LT_AMP_DASH;
	v->a[119209] = anon_sym_GT_AMP_DASH;
	v->a[119210] = anon_sym_LT_LT_DASH;
	v->a[119211] = anon_sym_LT_LT_LT;
	v->a[119212] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[119213] = anon_sym_DOLLAR_LBRACK;
	v->a[119214] = anon_sym_DQUOTE;
	v->a[119215] = sym_raw_string;
	v->a[119216] = sym_ansi_c_string;
	v->a[119217] = anon_sym_DOLLAR_LBRACE;
	v->a[119218] = anon_sym_DOLLAR_BQUOTE;
	v->a[119219] = anon_sym_LT_LPAREN;
	small_parse_table_5961(v);
}

void	small_parse_table_5961(t_small_parse_table_array *v)
{
	v->a[119220] = anon_sym_GT_LPAREN;
	v->a[119221] = 6;
	v->a[119222] = actions(3);
	v->a[119223] = 1;
	v->a[119224] = sym_comment;
	v->a[119225] = actions(5638);
	v->a[119226] = 1;
	v->a[119227] = aux_sym_concatenation_token1;
	v->a[119228] = actions(5640);
	v->a[119229] = 1;
	v->a[119230] = sym__concat;
	v->a[119231] = state(2297);
	v->a[119232] = 1;
	v->a[119233] = aux_sym_concatenation_repeat1;
	v->a[119234] = actions(5375);
	v->a[119235] = 5;
	v->a[119236] = sym_file_descriptor;
	v->a[119237] = sym_variable_name;
	v->a[119238] = sym_test_operator;
	v->a[119239] = sym__brace_start;
	small_parse_table_5962(v);
}

void	small_parse_table_5962(t_small_parse_table_array *v)
{
	v->a[119240] = aux_sym_heredoc_redirect_token1;
	v->a[119241] = actions(5373);
	v->a[119242] = 34;
	v->a[119243] = anon_sym_LPAREN_LPAREN;
	v->a[119244] = anon_sym_PIPE_PIPE;
	v->a[119245] = anon_sym_AMP_AMP;
	v->a[119246] = anon_sym_PIPE;
	v->a[119247] = anon_sym_LT;
	v->a[119248] = anon_sym_GT;
	v->a[119249] = anon_sym_LT_LT;
	v->a[119250] = anon_sym_GT_GT;
	v->a[119251] = anon_sym_PIPE_AMP;
	v->a[119252] = anon_sym_AMP_GT;
	v->a[119253] = anon_sym_AMP_GT_GT;
	v->a[119254] = anon_sym_LT_AMP;
	v->a[119255] = anon_sym_GT_AMP;
	v->a[119256] = anon_sym_GT_PIPE;
	v->a[119257] = anon_sym_LT_AMP_DASH;
	v->a[119258] = anon_sym_GT_AMP_DASH;
	v->a[119259] = anon_sym_LT_LT_DASH;
	small_parse_table_5963(v);
}

void	small_parse_table_5963(t_small_parse_table_array *v)
{
	v->a[119260] = anon_sym_LT_LT_LT;
	v->a[119261] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[119262] = anon_sym_DOLLAR_LBRACK;
	v->a[119263] = anon_sym_DOLLAR;
	v->a[119264] = sym__special_character;
	v->a[119265] = anon_sym_DQUOTE;
	v->a[119266] = sym_raw_string;
	v->a[119267] = sym_ansi_c_string;
	v->a[119268] = aux_sym_number_token1;
	v->a[119269] = aux_sym_number_token2;
	v->a[119270] = anon_sym_DOLLAR_LBRACE;
	v->a[119271] = anon_sym_DOLLAR_LPAREN;
	v->a[119272] = anon_sym_BQUOTE;
	v->a[119273] = anon_sym_DOLLAR_BQUOTE;
	v->a[119274] = anon_sym_LT_LPAREN;
	v->a[119275] = anon_sym_GT_LPAREN;
	v->a[119276] = sym_word;
	v->a[119277] = 3;
	v->a[119278] = actions(3);
	v->a[119279] = 1;
	small_parse_table_5964(v);
}

void	small_parse_table_5964(t_small_parse_table_array *v)
{
	v->a[119280] = sym_comment;
	v->a[119281] = actions(1263);
	v->a[119282] = 5;
	v->a[119283] = sym_file_descriptor;
	v->a[119284] = sym_test_operator;
	v->a[119285] = sym__brace_start;
	v->a[119286] = ts_builtin_sym_end;
	v->a[119287] = aux_sym_heredoc_redirect_token1;
	v->a[119288] = actions(1261);
	v->a[119289] = 37;
	v->a[119290] = anon_sym_LPAREN_LPAREN;
	v->a[119291] = anon_sym_SEMI;
	v->a[119292] = anon_sym_PIPE_PIPE;
	v->a[119293] = anon_sym_AMP_AMP;
	v->a[119294] = anon_sym_PIPE;
	v->a[119295] = anon_sym_AMP;
	v->a[119296] = anon_sym_LT;
	v->a[119297] = anon_sym_GT;
	v->a[119298] = anon_sym_LT_LT;
	v->a[119299] = anon_sym_GT_GT;
	small_parse_table_5965(v);
}

/* EOF small_parse_table_1192.c */
