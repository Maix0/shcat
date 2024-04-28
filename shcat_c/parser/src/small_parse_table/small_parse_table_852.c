/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_852.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4260(t_small_parse_table_array *v)
{
	v->a[85200] = sym_file_descriptor;
	v->a[85201] = sym_test_operator;
	v->a[85202] = sym__brace_start;
	v->a[85203] = aux_sym_heredoc_redirect_token1;
	v->a[85204] = actions(1286);
	v->a[85205] = 37;
	v->a[85206] = anon_sym_LPAREN_LPAREN;
	v->a[85207] = anon_sym_SEMI;
	v->a[85208] = anon_sym_PIPE_PIPE;
	v->a[85209] = anon_sym_AMP_AMP;
	v->a[85210] = anon_sym_PIPE;
	v->a[85211] = anon_sym_AMP;
	v->a[85212] = anon_sym_LT;
	v->a[85213] = anon_sym_GT;
	v->a[85214] = anon_sym_LT_LT;
	v->a[85215] = anon_sym_GT_GT;
	v->a[85216] = anon_sym_SEMI_SEMI;
	v->a[85217] = anon_sym_PIPE_AMP;
	v->a[85218] = anon_sym_AMP_GT;
	v->a[85219] = anon_sym_AMP_GT_GT;
	small_parse_table_4261(v);
}

void	small_parse_table_4261(t_small_parse_table_array *v)
{
	v->a[85220] = anon_sym_LT_AMP;
	v->a[85221] = anon_sym_GT_AMP;
	v->a[85222] = anon_sym_GT_PIPE;
	v->a[85223] = anon_sym_LT_AMP_DASH;
	v->a[85224] = anon_sym_GT_AMP_DASH;
	v->a[85225] = anon_sym_LT_LT_DASH;
	v->a[85226] = anon_sym_LT_LT_LT;
	v->a[85227] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[85228] = anon_sym_DOLLAR_LBRACK;
	v->a[85229] = anon_sym_DOLLAR;
	v->a[85230] = sym__special_character;
	v->a[85231] = anon_sym_DQUOTE;
	v->a[85232] = sym_raw_string;
	v->a[85233] = sym_ansi_c_string;
	v->a[85234] = aux_sym_number_token1;
	v->a[85235] = aux_sym_number_token2;
	v->a[85236] = anon_sym_DOLLAR_LBRACE;
	v->a[85237] = anon_sym_DOLLAR_LPAREN;
	v->a[85238] = anon_sym_BQUOTE;
	v->a[85239] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_4262(v);
}

void	small_parse_table_4262(t_small_parse_table_array *v)
{
	v->a[85240] = anon_sym_LT_LPAREN;
	v->a[85241] = anon_sym_GT_LPAREN;
	v->a[85242] = sym_word;
	v->a[85243] = 3;
	v->a[85244] = actions(3);
	v->a[85245] = 1;
	v->a[85246] = sym_comment;
	v->a[85247] = actions(1330);
	v->a[85248] = 5;
	v->a[85249] = sym_file_descriptor;
	v->a[85250] = sym__concat;
	v->a[85251] = sym_test_operator;
	v->a[85252] = sym__brace_start;
	v->a[85253] = aux_sym_heredoc_redirect_token1;
	v->a[85254] = actions(1328);
	v->a[85255] = 39;
	v->a[85256] = anon_sym_LPAREN_LPAREN;
	v->a[85257] = anon_sym_SEMI;
	v->a[85258] = anon_sym_PIPE_PIPE;
	v->a[85259] = anon_sym_AMP_AMP;
	small_parse_table_4263(v);
}

void	small_parse_table_4263(t_small_parse_table_array *v)
{
	v->a[85260] = anon_sym_PIPE;
	v->a[85261] = anon_sym_AMP;
	v->a[85262] = anon_sym_LT;
	v->a[85263] = anon_sym_GT;
	v->a[85264] = anon_sym_LT_LT;
	v->a[85265] = anon_sym_GT_GT;
	v->a[85266] = anon_sym_SEMI_SEMI;
	v->a[85267] = anon_sym_SEMI_AMP;
	v->a[85268] = anon_sym_SEMI_SEMI_AMP;
	v->a[85269] = anon_sym_PIPE_AMP;
	v->a[85270] = anon_sym_AMP_GT;
	v->a[85271] = anon_sym_AMP_GT_GT;
	v->a[85272] = anon_sym_LT_AMP;
	v->a[85273] = anon_sym_GT_AMP;
	v->a[85274] = anon_sym_GT_PIPE;
	v->a[85275] = anon_sym_LT_AMP_DASH;
	v->a[85276] = anon_sym_GT_AMP_DASH;
	v->a[85277] = anon_sym_LT_LT_DASH;
	v->a[85278] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[85279] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_4264(v);
}

void	small_parse_table_4264(t_small_parse_table_array *v)
{
	v->a[85280] = aux_sym_concatenation_token1;
	v->a[85281] = anon_sym_DOLLAR;
	v->a[85282] = sym__special_character;
	v->a[85283] = anon_sym_DQUOTE;
	v->a[85284] = sym_raw_string;
	v->a[85285] = sym_ansi_c_string;
	v->a[85286] = aux_sym_number_token1;
	v->a[85287] = aux_sym_number_token2;
	v->a[85288] = anon_sym_DOLLAR_LBRACE;
	v->a[85289] = anon_sym_DOLLAR_LPAREN;
	v->a[85290] = anon_sym_BQUOTE;
	v->a[85291] = anon_sym_DOLLAR_BQUOTE;
	v->a[85292] = anon_sym_LT_LPAREN;
	v->a[85293] = anon_sym_GT_LPAREN;
	v->a[85294] = sym_word;
	v->a[85295] = 3;
	v->a[85296] = actions(3);
	v->a[85297] = 1;
	v->a[85298] = sym_comment;
	v->a[85299] = actions(1318);
	small_parse_table_4265(v);
}

/* EOF small_parse_table_852.c */
