/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_212.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1060(t_small_parse_table_array *v)
{
	v->a[21200] = anon_sym_PIPE_EQ;
	v->a[21201] = anon_sym_QMARK;
	v->a[21202] = 12;
	v->a[21203] = actions(407);
	v->a[21204] = 1;
	v->a[21205] = sym_comment;
	v->a[21206] = actions(583);
	v->a[21207] = 1;
	v->a[21208] = anon_sym_CARET;
	v->a[21209] = actions(585);
	v->a[21210] = 1;
	v->a[21211] = anon_sym_AMP;
	v->a[21212] = actions(459);
	v->a[21213] = 2;
	v->a[21214] = anon_sym_PIPE;
	v->a[21215] = anon_sym_EQ;
	v->a[21216] = actions(577);
	v->a[21217] = 2;
	v->a[21218] = anon_sym_LT;
	v->a[21219] = anon_sym_GT;
	small_parse_table_1061(v);
}

void	small_parse_table_1061(t_small_parse_table_array *v)
{
	v->a[21220] = actions(579);
	v->a[21221] = 2;
	v->a[21222] = anon_sym_GT_GT;
	v->a[21223] = anon_sym_LT_LT;
	v->a[21224] = actions(587);
	v->a[21225] = 2;
	v->a[21226] = anon_sym_EQ_EQ;
	v->a[21227] = anon_sym_BANG_EQ;
	v->a[21228] = actions(589);
	v->a[21229] = 2;
	v->a[21230] = anon_sym_LT_EQ;
	v->a[21231] = anon_sym_GT_EQ;
	v->a[21232] = actions(591);
	v->a[21233] = 2;
	v->a[21234] = anon_sym_PLUS;
	v->a[21235] = anon_sym_DASH;
	v->a[21236] = actions(597);
	v->a[21237] = 2;
	v->a[21238] = anon_sym_PLUS_PLUS2;
	v->a[21239] = anon_sym_DASH_DASH2;
	small_parse_table_1062(v);
}

void	small_parse_table_1062(t_small_parse_table_array *v)
{
	v->a[21240] = actions(593);
	v->a[21241] = 3;
	v->a[21242] = anon_sym_STAR;
	v->a[21243] = anon_sym_SLASH;
	v->a[21244] = anon_sym_PERCENT;
	v->a[21245] = actions(461);
	v->a[21246] = 14;
	v->a[21247] = anon_sym_RPAREN;
	v->a[21248] = anon_sym_AMP_AMP;
	v->a[21249] = anon_sym_PIPE_PIPE;
	v->a[21250] = anon_sym_PLUS_EQ;
	v->a[21251] = anon_sym_DASH_EQ;
	v->a[21252] = anon_sym_STAR_EQ;
	v->a[21253] = anon_sym_SLASH_EQ;
	v->a[21254] = anon_sym_PERCENT_EQ;
	v->a[21255] = anon_sym_LT_LT_EQ;
	v->a[21256] = anon_sym_GT_GT_EQ;
	v->a[21257] = anon_sym_AMP_EQ;
	v->a[21258] = anon_sym_CARET_EQ;
	v->a[21259] = anon_sym_PIPE_EQ;
	small_parse_table_1063(v);
}

void	small_parse_table_1063(t_small_parse_table_array *v)
{
	v->a[21260] = anon_sym_QMARK;
	v->a[21261] = 13;
	v->a[21262] = actions(3);
	v->a[21263] = 1;
	v->a[21264] = sym_comment;
	v->a[21265] = actions(699);
	v->a[21266] = 1;
	v->a[21267] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21268] = actions(702);
	v->a[21269] = 1;
	v->a[21270] = anon_sym_DOLLAR;
	v->a[21271] = actions(705);
	v->a[21272] = 1;
	v->a[21273] = anon_sym_DQUOTE;
	v->a[21274] = actions(708);
	v->a[21275] = 1;
	v->a[21276] = anon_sym_DOLLAR_LBRACE;
	v->a[21277] = actions(711);
	v->a[21278] = 1;
	v->a[21279] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1064(v);
}

void	small_parse_table_1064(t_small_parse_table_array *v)
{
	v->a[21280] = actions(714);
	v->a[21281] = 1;
	v->a[21282] = anon_sym_BQUOTE;
	v->a[21283] = actions(717);
	v->a[21284] = 1;
	v->a[21285] = sym__bare_dollar;
	v->a[21286] = state(239);
	v->a[21287] = 1;
	v->a[21288] = aux_sym_command_repeat2;
	v->a[21289] = state(592);
	v->a[21290] = 1;
	v->a[21291] = sym_concatenation;
	v->a[21292] = actions(696);
	v->a[21293] = 3;
	v->a[21294] = sym_raw_string;
	v->a[21295] = sym_number;
	v->a[21296] = sym_word;
	v->a[21297] = state(357);
	v->a[21298] = 5;
	v->a[21299] = sym_arithmetic_expansion;
	small_parse_table_1065(v);
}

/* EOF small_parse_table_212.c */
