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
	v->a[119200] = 1;
	v->a[119201] = anon_sym_DOLLAR_LBRACE;
	v->a[119202] = actions(6893);
	v->a[119203] = 1;
	v->a[119204] = anon_sym_BQUOTE;
	v->a[119205] = actions(6895);
	v->a[119206] = 1;
	v->a[119207] = anon_sym_DOLLAR_BQUOTE;
	v->a[119208] = actions(6897);
	v->a[119209] = 1;
	v->a[119210] = sym__comment_word;
	v->a[119211] = actions(6975);
	v->a[119212] = 1;
	v->a[119213] = anon_sym_DOLLAR;
	v->a[119214] = actions(6889);
	v->a[119215] = 3;
	v->a[119216] = sym_test_operator;
	v->a[119217] = sym__bare_dollar;
	v->a[119218] = sym_raw_string;
	v->a[119219] = state(1005);
	small_parse_table_5961(v);
}

void	small_parse_table_5961(t_small_parse_table_array *v)
{
	v->a[119220] = 7;
	v->a[119221] = sym_arithmetic_expansion;
	v->a[119222] = sym_brace_expression;
	v->a[119223] = sym_string;
	v->a[119224] = sym_number;
	v->a[119225] = sym_simple_expansion;
	v->a[119226] = sym_expansion;
	v->a[119227] = sym_command_substitution;
	v->a[119228] = 5;
	v->a[119229] = actions(3);
	v->a[119230] = 1;
	v->a[119231] = sym_comment;
	v->a[119232] = state(2573);
	v->a[119233] = 1;
	v->a[119234] = aux_sym_pipeline_repeat1;
	v->a[119235] = actions(5439);
	v->a[119236] = 2;
	v->a[119237] = sym_file_descriptor;
	v->a[119238] = aux_sym_heredoc_redirect_token1;
	v->a[119239] = actions(6977);
	small_parse_table_5962(v);
}

void	small_parse_table_5962(t_small_parse_table_array *v)
{
	v->a[119240] = 2;
	v->a[119241] = anon_sym_PIPE;
	v->a[119242] = anon_sym_PIPE_AMP;
	v->a[119243] = actions(5435);
	v->a[119244] = 18;
	v->a[119245] = anon_sym_SEMI_SEMI;
	v->a[119246] = anon_sym_AMP_AMP;
	v->a[119247] = anon_sym_PIPE_PIPE;
	v->a[119248] = anon_sym_LT;
	v->a[119249] = anon_sym_GT;
	v->a[119250] = anon_sym_GT_GT;
	v->a[119251] = anon_sym_AMP_GT;
	v->a[119252] = anon_sym_AMP_GT_GT;
	v->a[119253] = anon_sym_LT_AMP;
	v->a[119254] = anon_sym_GT_AMP;
	v->a[119255] = anon_sym_GT_PIPE;
	v->a[119256] = anon_sym_LT_AMP_DASH;
	v->a[119257] = anon_sym_GT_AMP_DASH;
	v->a[119258] = anon_sym_LT_LT;
	v->a[119259] = anon_sym_LT_LT_DASH;
	small_parse_table_5963(v);
}

void	small_parse_table_5963(t_small_parse_table_array *v)
{
	v->a[119260] = anon_sym_AMP;
	v->a[119261] = anon_sym_BQUOTE;
	v->a[119262] = anon_sym_SEMI;
	v->a[119263] = 16;
	v->a[119264] = actions(3);
	v->a[119265] = 1;
	v->a[119266] = sym_comment;
	v->a[119267] = actions(5722);
	v->a[119268] = 1;
	v->a[119269] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[119270] = actions(5724);
	v->a[119271] = 1;
	v->a[119272] = anon_sym_DOLLAR;
	v->a[119273] = actions(5728);
	v->a[119274] = 1;
	v->a[119275] = anon_sym_DQUOTE;
	v->a[119276] = actions(5732);
	v->a[119277] = 1;
	v->a[119278] = aux_sym_number_token1;
	v->a[119279] = actions(5734);
	small_parse_table_5964(v);
}

void	small_parse_table_5964(t_small_parse_table_array *v)
{
	v->a[119280] = 1;
	v->a[119281] = aux_sym_number_token2;
	v->a[119282] = actions(5736);
	v->a[119283] = 1;
	v->a[119284] = anon_sym_DOLLAR_LBRACE;
	v->a[119285] = actions(5738);
	v->a[119286] = 1;
	v->a[119287] = anon_sym_DOLLAR_LPAREN;
	v->a[119288] = actions(5740);
	v->a[119289] = 1;
	v->a[119290] = anon_sym_BQUOTE;
	v->a[119291] = actions(5742);
	v->a[119292] = 1;
	v->a[119293] = anon_sym_DOLLAR_BQUOTE;
	v->a[119294] = actions(5748);
	v->a[119295] = 1;
	v->a[119296] = sym__brace_start;
	v->a[119297] = actions(6422);
	v->a[119298] = 1;
	v->a[119299] = sym_word;
	small_parse_table_5965(v);
}

/* EOF small_parse_table_1192.c */
