/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1682.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_8410(t_small_parse_table_array *v)
{
	v->a[168200] = 1;
	v->a[168201] = anon_sym_EQ_TILDE;
	v->a[168202] = actions(7202);
	v->a[168203] = 1;
	v->a[168204] = anon_sym_QMARK;
	v->a[168205] = actions(7206);
	v->a[168206] = 1;
	v->a[168207] = sym_test_operator;
	v->a[168208] = actions(7559);
	v->a[168209] = 1;
	v->a[168210] = anon_sym_COLON;
	v->a[168211] = actions(6793);
	v->a[168212] = 2;
	v->a[168213] = anon_sym_PLUS_PLUS;
	v->a[168214] = anon_sym_DASH_DASH;
	v->a[168215] = actions(7186);
	v->a[168216] = 2;
	v->a[168217] = anon_sym_EQ_EQ;
	v->a[168218] = anon_sym_BANG_EQ;
	v->a[168219] = actions(7188);
	small_parse_table_8411(v);
}

void	small_parse_table_8411(t_small_parse_table_array *v)
{
	v->a[168220] = 2;
	v->a[168221] = anon_sym_LT;
	v->a[168222] = anon_sym_GT;
	v->a[168223] = actions(7190);
	v->a[168224] = 2;
	v->a[168225] = anon_sym_LT_EQ;
	v->a[168226] = anon_sym_GT_EQ;
	v->a[168227] = actions(7192);
	v->a[168228] = 2;
	v->a[168229] = anon_sym_LT_LT;
	v->a[168230] = anon_sym_GT_GT;
	v->a[168231] = actions(7194);
	v->a[168232] = 2;
	v->a[168233] = anon_sym_PLUS;
	v->a[168234] = anon_sym_DASH;
	v->a[168235] = actions(7196);
	v->a[168236] = 3;
	v->a[168237] = anon_sym_STAR;
	v->a[168238] = anon_sym_SLASH;
	v->a[168239] = anon_sym_PERCENT;
	small_parse_table_8412(v);
}

void	small_parse_table_8412(t_small_parse_table_array *v)
{
	v->a[168240] = actions(7174);
	v->a[168241] = 11;
	v->a[168242] = anon_sym_PLUS_EQ;
	v->a[168243] = anon_sym_DASH_EQ;
	v->a[168244] = anon_sym_STAR_EQ;
	v->a[168245] = anon_sym_SLASH_EQ;
	v->a[168246] = anon_sym_PERCENT_EQ;
	v->a[168247] = anon_sym_STAR_STAR_EQ;
	v->a[168248] = anon_sym_LT_LT_EQ;
	v->a[168249] = anon_sym_GT_GT_EQ;
	v->a[168250] = anon_sym_AMP_EQ;
	v->a[168251] = anon_sym_CARET_EQ;
	v->a[168252] = anon_sym_PIPE_EQ;
	v->a[168253] = 3;
	v->a[168254] = actions(71);
	v->a[168255] = 1;
	v->a[168256] = sym_comment;
	v->a[168257] = actions(1261);
	v->a[168258] = 13;
	v->a[168259] = anon_sym_PIPE;
	small_parse_table_8413(v);
}

void	small_parse_table_8413(t_small_parse_table_array *v)
{
	v->a[168260] = anon_sym_LT;
	v->a[168261] = anon_sym_GT;
	v->a[168262] = anon_sym_LT_LT;
	v->a[168263] = anon_sym_AMP_GT;
	v->a[168264] = anon_sym_LT_AMP;
	v->a[168265] = anon_sym_GT_AMP;
	v->a[168266] = anon_sym_DOLLAR;
	v->a[168267] = sym__special_character;
	v->a[168268] = aux_sym_number_token1;
	v->a[168269] = aux_sym_number_token2;
	v->a[168270] = anon_sym_DOLLAR_LPAREN;
	v->a[168271] = sym_word;
	v->a[168272] = actions(1263);
	v->a[168273] = 24;
	v->a[168274] = sym_file_descriptor;
	v->a[168275] = sym_test_operator;
	v->a[168276] = sym__brace_start;
	v->a[168277] = anon_sym_LPAREN_LPAREN;
	v->a[168278] = anon_sym_PIPE_PIPE;
	v->a[168279] = anon_sym_AMP_AMP;
	small_parse_table_8414(v);
}

void	small_parse_table_8414(t_small_parse_table_array *v)
{
	v->a[168280] = anon_sym_GT_GT;
	v->a[168281] = anon_sym_PIPE_AMP;
	v->a[168282] = anon_sym_RBRACK;
	v->a[168283] = anon_sym_AMP_GT_GT;
	v->a[168284] = anon_sym_GT_PIPE;
	v->a[168285] = anon_sym_LT_AMP_DASH;
	v->a[168286] = anon_sym_GT_AMP_DASH;
	v->a[168287] = anon_sym_LT_LT_DASH;
	v->a[168288] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[168289] = anon_sym_DOLLAR_LBRACK;
	v->a[168290] = anon_sym_DQUOTE;
	v->a[168291] = sym_raw_string;
	v->a[168292] = sym_ansi_c_string;
	v->a[168293] = anon_sym_DOLLAR_LBRACE;
	v->a[168294] = anon_sym_BQUOTE;
	v->a[168295] = anon_sym_DOLLAR_BQUOTE;
	v->a[168296] = anon_sym_LT_LPAREN;
	v->a[168297] = anon_sym_GT_LPAREN;
	v->a[168298] = 20;
	v->a[168299] = actions(71);
	small_parse_table_8415(v);
}

/* EOF small_parse_table_1682.c */
