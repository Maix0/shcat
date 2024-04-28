/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_882.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4410(t_small_parse_table_array *v)
{
	v->a[88200] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88201] = anon_sym_DOLLAR_LBRACK;
	v->a[88202] = sym__special_character;
	v->a[88203] = anon_sym_DQUOTE;
	v->a[88204] = sym_raw_string;
	v->a[88205] = sym_ansi_c_string;
	v->a[88206] = anon_sym_DOLLAR_LBRACE;
	v->a[88207] = anon_sym_BQUOTE;
	v->a[88208] = anon_sym_DOLLAR_BQUOTE;
	v->a[88209] = anon_sym_LT_LPAREN;
	v->a[88210] = anon_sym_GT_LPAREN;
	v->a[88211] = 6;
	v->a[88212] = actions(3);
	v->a[88213] = 1;
	v->a[88214] = sym_comment;
	v->a[88215] = actions(6013);
	v->a[88216] = 1;
	v->a[88217] = aux_sym_concatenation_token1;
	v->a[88218] = actions(6015);
	v->a[88219] = 1;
	small_parse_table_4411(v);
}

void	small_parse_table_4411(t_small_parse_table_array *v)
{
	v->a[88220] = sym__concat;
	v->a[88221] = state(1894);
	v->a[88222] = 1;
	v->a[88223] = aux_sym_concatenation_repeat1;
	v->a[88224] = actions(1263);
	v->a[88225] = 4;
	v->a[88226] = sym_file_descriptor;
	v->a[88227] = sym_test_operator;
	v->a[88228] = sym__brace_start;
	v->a[88229] = aux_sym_heredoc_redirect_token1;
	v->a[88230] = actions(1261);
	v->a[88231] = 37;
	v->a[88232] = anon_sym_LPAREN_LPAREN;
	v->a[88233] = anon_sym_SEMI;
	v->a[88234] = anon_sym_PIPE_PIPE;
	v->a[88235] = anon_sym_AMP_AMP;
	v->a[88236] = anon_sym_PIPE;
	v->a[88237] = anon_sym_AMP;
	v->a[88238] = anon_sym_LT;
	v->a[88239] = anon_sym_GT;
	small_parse_table_4412(v);
}

void	small_parse_table_4412(t_small_parse_table_array *v)
{
	v->a[88240] = anon_sym_LT_LT;
	v->a[88241] = anon_sym_GT_GT;
	v->a[88242] = anon_sym_RPAREN;
	v->a[88243] = anon_sym_SEMI_SEMI;
	v->a[88244] = anon_sym_PIPE_AMP;
	v->a[88245] = anon_sym_AMP_GT;
	v->a[88246] = anon_sym_AMP_GT_GT;
	v->a[88247] = anon_sym_LT_AMP;
	v->a[88248] = anon_sym_GT_AMP;
	v->a[88249] = anon_sym_GT_PIPE;
	v->a[88250] = anon_sym_LT_AMP_DASH;
	v->a[88251] = anon_sym_GT_AMP_DASH;
	v->a[88252] = anon_sym_LT_LT_DASH;
	v->a[88253] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88254] = anon_sym_DOLLAR_LBRACK;
	v->a[88255] = anon_sym_DOLLAR;
	v->a[88256] = sym__special_character;
	v->a[88257] = anon_sym_DQUOTE;
	v->a[88258] = sym_raw_string;
	v->a[88259] = sym_ansi_c_string;
	small_parse_table_4413(v);
}

void	small_parse_table_4413(t_small_parse_table_array *v)
{
	v->a[88260] = aux_sym_number_token1;
	v->a[88261] = aux_sym_number_token2;
	v->a[88262] = anon_sym_DOLLAR_LBRACE;
	v->a[88263] = anon_sym_DOLLAR_LPAREN;
	v->a[88264] = anon_sym_BQUOTE;
	v->a[88265] = anon_sym_DOLLAR_BQUOTE;
	v->a[88266] = anon_sym_LT_LPAREN;
	v->a[88267] = anon_sym_GT_LPAREN;
	v->a[88268] = sym_word;
	v->a[88269] = 3;
	v->a[88270] = actions(3);
	v->a[88271] = 1;
	v->a[88272] = sym_comment;
	v->a[88273] = actions(1302);
	v->a[88274] = 5;
	v->a[88275] = sym_file_descriptor;
	v->a[88276] = sym__concat;
	v->a[88277] = sym_test_operator;
	v->a[88278] = sym__brace_start;
	v->a[88279] = aux_sym_heredoc_redirect_token1;
	small_parse_table_4414(v);
}

void	small_parse_table_4414(t_small_parse_table_array *v)
{
	v->a[88280] = actions(1300);
	v->a[88281] = 39;
	v->a[88282] = anon_sym_LPAREN_LPAREN;
	v->a[88283] = anon_sym_SEMI;
	v->a[88284] = anon_sym_PIPE_PIPE;
	v->a[88285] = anon_sym_AMP_AMP;
	v->a[88286] = anon_sym_PIPE;
	v->a[88287] = anon_sym_AMP;
	v->a[88288] = anon_sym_LT;
	v->a[88289] = anon_sym_GT;
	v->a[88290] = anon_sym_LT_LT;
	v->a[88291] = anon_sym_GT_GT;
	v->a[88292] = anon_sym_RPAREN;
	v->a[88293] = anon_sym_SEMI_SEMI;
	v->a[88294] = anon_sym_PIPE_AMP;
	v->a[88295] = anon_sym_AMP_GT;
	v->a[88296] = anon_sym_AMP_GT_GT;
	v->a[88297] = anon_sym_LT_AMP;
	v->a[88298] = anon_sym_GT_AMP;
	v->a[88299] = anon_sym_GT_PIPE;
	small_parse_table_4415(v);
}

/* EOF small_parse_table_882.c */
