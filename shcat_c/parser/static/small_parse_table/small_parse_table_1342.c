/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1342.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6710(t_small_parse_table_array *v)
{
	v->a[134200] = 23;
	v->a[134201] = sym_test_operator;
	v->a[134202] = anon_sym_PLUS_PLUS;
	v->a[134203] = anon_sym_DASH_DASH;
	v->a[134204] = anon_sym_PLUS_EQ;
	v->a[134205] = anon_sym_DASH_EQ;
	v->a[134206] = anon_sym_STAR_EQ;
	v->a[134207] = anon_sym_SLASH_EQ;
	v->a[134208] = anon_sym_PERCENT_EQ;
	v->a[134209] = anon_sym_STAR_STAR_EQ;
	v->a[134210] = anon_sym_LT_LT_EQ;
	v->a[134211] = anon_sym_GT_GT_EQ;
	v->a[134212] = anon_sym_AMP_EQ;
	v->a[134213] = anon_sym_CARET_EQ;
	v->a[134214] = anon_sym_PIPE_EQ;
	v->a[134215] = anon_sym_PIPE_PIPE;
	v->a[134216] = anon_sym_AMP_AMP;
	v->a[134217] = anon_sym_EQ_EQ;
	v->a[134218] = anon_sym_BANG_EQ;
	v->a[134219] = anon_sym_LT_EQ;
	small_parse_table_6711(v);
}

void	small_parse_table_6711(t_small_parse_table_array *v)
{
	v->a[134220] = anon_sym_GT_EQ;
	v->a[134221] = anon_sym_RBRACK;
	v->a[134222] = anon_sym_EQ_TILDE;
	v->a[134223] = anon_sym_QMARK;
	v->a[134224] = 3;
	v->a[134225] = actions(71);
	v->a[134226] = 1;
	v->a[134227] = sym_comment;
	v->a[134228] = actions(4463);
	v->a[134229] = 14;
	v->a[134230] = anon_sym_PIPE;
	v->a[134231] = anon_sym_EQ_EQ;
	v->a[134232] = anon_sym_LT;
	v->a[134233] = anon_sym_GT;
	v->a[134234] = anon_sym_LT_LT;
	v->a[134235] = anon_sym_EQ_TILDE;
	v->a[134236] = anon_sym_AMP_GT;
	v->a[134237] = anon_sym_LT_AMP;
	v->a[134238] = anon_sym_GT_AMP;
	v->a[134239] = anon_sym_DOLLAR;
	small_parse_table_6712(v);
}

void	small_parse_table_6712(t_small_parse_table_array *v)
{
	v->a[134240] = aux_sym_number_token1;
	v->a[134241] = aux_sym_number_token2;
	v->a[134242] = anon_sym_DOLLAR_LPAREN;
	v->a[134243] = sym_word;
	v->a[134244] = actions(4465);
	v->a[134245] = 26;
	v->a[134246] = sym_file_descriptor;
	v->a[134247] = sym_test_operator;
	v->a[134248] = sym__bare_dollar;
	v->a[134249] = sym__brace_start;
	v->a[134250] = anon_sym_LPAREN_LPAREN;
	v->a[134251] = anon_sym_PIPE_PIPE;
	v->a[134252] = anon_sym_AMP_AMP;
	v->a[134253] = anon_sym_GT_GT;
	v->a[134254] = anon_sym_PIPE_AMP;
	v->a[134255] = anon_sym_AMP_GT_GT;
	v->a[134256] = anon_sym_GT_PIPE;
	v->a[134257] = anon_sym_LT_AMP_DASH;
	v->a[134258] = anon_sym_GT_AMP_DASH;
	v->a[134259] = anon_sym_LT_LT_DASH;
	small_parse_table_6713(v);
}

void	small_parse_table_6713(t_small_parse_table_array *v)
{
	v->a[134260] = anon_sym_LT_LT_LT;
	v->a[134261] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[134262] = anon_sym_DOLLAR_LBRACK;
	v->a[134263] = sym__special_character;
	v->a[134264] = anon_sym_DQUOTE;
	v->a[134265] = sym_raw_string;
	v->a[134266] = sym_ansi_c_string;
	v->a[134267] = anon_sym_DOLLAR_LBRACE;
	v->a[134268] = anon_sym_BQUOTE;
	v->a[134269] = anon_sym_DOLLAR_BQUOTE;
	v->a[134270] = anon_sym_LT_LPAREN;
	v->a[134271] = anon_sym_GT_LPAREN;
	v->a[134272] = 5;
	v->a[134273] = actions(71);
	v->a[134274] = 1;
	v->a[134275] = sym_comment;
	v->a[134276] = actions(6746);
	v->a[134277] = 1;
	v->a[134278] = sym__special_character;
	v->a[134279] = state(2557);
	small_parse_table_6714(v);
}

void	small_parse_table_6714(t_small_parse_table_array *v)
{
	v->a[134280] = 1;
	v->a[134281] = aux_sym__literal_repeat1;
	v->a[134282] = actions(1362);
	v->a[134283] = 14;
	v->a[134284] = anon_sym_EQ;
	v->a[134285] = anon_sym_PIPE;
	v->a[134286] = anon_sym_CARET;
	v->a[134287] = anon_sym_AMP;
	v->a[134288] = anon_sym_LT;
	v->a[134289] = anon_sym_GT;
	v->a[134290] = anon_sym_LT_LT;
	v->a[134291] = anon_sym_GT_GT;
	v->a[134292] = anon_sym_PLUS;
	v->a[134293] = anon_sym_DASH;
	v->a[134294] = anon_sym_STAR;
	v->a[134295] = anon_sym_SLASH;
	v->a[134296] = anon_sym_PERCENT;
	v->a[134297] = anon_sym_STAR_STAR;
	v->a[134298] = actions(1364);
	v->a[134299] = 24;
	small_parse_table_6715(v);
}

/* EOF small_parse_table_1342.c */
