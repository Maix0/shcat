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
	v->a[21200] = actions(696);
	v->a[21201] = 2;
	v->a[21202] = anon_sym_PIPE;
	v->a[21203] = anon_sym_EQ;
	v->a[21204] = actions(700);
	v->a[21205] = 2;
	v->a[21206] = anon_sym_LT;
	v->a[21207] = anon_sym_GT;
	v->a[21208] = actions(706);
	v->a[21209] = 2;
	v->a[21210] = anon_sym_EQ_EQ;
	v->a[21211] = anon_sym_BANG_EQ;
	v->a[21212] = actions(708);
	v->a[21213] = 2;
	v->a[21214] = anon_sym_LT_EQ;
	v->a[21215] = anon_sym_GT_EQ;
	v->a[21216] = actions(688);
	v->a[21217] = 3;
	v->a[21218] = anon_sym_STAR;
	v->a[21219] = anon_sym_SLASH;
	small_parse_table_1061(v);
}

void	small_parse_table_1061(t_small_parse_table_array *v)
{
	v->a[21220] = anon_sym_PERCENT;
	v->a[21221] = actions(698);
	v->a[21222] = 15;
	v->a[21223] = anon_sym_AMP_AMP;
	v->a[21224] = anon_sym_PIPE_PIPE;
	v->a[21225] = anon_sym_RPAREN_RPAREN;
	v->a[21226] = anon_sym_PLUS_EQ;
	v->a[21227] = anon_sym_DASH_EQ;
	v->a[21228] = anon_sym_STAR_EQ;
	v->a[21229] = anon_sym_SLASH_EQ;
	v->a[21230] = anon_sym_PERCENT_EQ;
	v->a[21231] = anon_sym_LT_LT_EQ;
	v->a[21232] = anon_sym_GT_GT_EQ;
	v->a[21233] = anon_sym_AMP_EQ;
	v->a[21234] = anon_sym_CARET_EQ;
	v->a[21235] = anon_sym_PIPE_EQ;
	v->a[21236] = anon_sym_QMARK;
	v->a[21237] = anon_sym_COLON;
	v->a[21238] = 13;
	v->a[21239] = actions(664);
	small_parse_table_1062(v);
}

void	small_parse_table_1062(t_small_parse_table_array *v)
{
	v->a[21240] = 1;
	v->a[21241] = sym_comment;
	v->a[21242] = actions(696);
	v->a[21243] = 1;
	v->a[21244] = anon_sym_EQ;
	v->a[21245] = actions(702);
	v->a[21246] = 1;
	v->a[21247] = anon_sym_CARET;
	v->a[21248] = actions(704);
	v->a[21249] = 1;
	v->a[21250] = anon_sym_AMP;
	v->a[21251] = actions(710);
	v->a[21252] = 1;
	v->a[21253] = anon_sym_PIPE;
	v->a[21254] = actions(684);
	v->a[21255] = 2;
	v->a[21256] = anon_sym_GT_GT;
	v->a[21257] = anon_sym_LT_LT;
	v->a[21258] = actions(686);
	v->a[21259] = 2;
	small_parse_table_1063(v);
}

void	small_parse_table_1063(t_small_parse_table_array *v)
{
	v->a[21260] = anon_sym_PLUS;
	v->a[21261] = anon_sym_DASH;
	v->a[21262] = actions(690);
	v->a[21263] = 2;
	v->a[21264] = anon_sym_PLUS_PLUS2;
	v->a[21265] = anon_sym_DASH_DASH2;
	v->a[21266] = actions(700);
	v->a[21267] = 2;
	v->a[21268] = anon_sym_LT;
	v->a[21269] = anon_sym_GT;
	v->a[21270] = actions(706);
	v->a[21271] = 2;
	v->a[21272] = anon_sym_EQ_EQ;
	v->a[21273] = anon_sym_BANG_EQ;
	v->a[21274] = actions(708);
	v->a[21275] = 2;
	v->a[21276] = anon_sym_LT_EQ;
	v->a[21277] = anon_sym_GT_EQ;
	v->a[21278] = actions(688);
	v->a[21279] = 3;
	small_parse_table_1064(v);
}

void	small_parse_table_1064(t_small_parse_table_array *v)
{
	v->a[21280] = anon_sym_STAR;
	v->a[21281] = anon_sym_SLASH;
	v->a[21282] = anon_sym_PERCENT;
	v->a[21283] = actions(698);
	v->a[21284] = 15;
	v->a[21285] = anon_sym_AMP_AMP;
	v->a[21286] = anon_sym_PIPE_PIPE;
	v->a[21287] = anon_sym_RPAREN_RPAREN;
	v->a[21288] = anon_sym_PLUS_EQ;
	v->a[21289] = anon_sym_DASH_EQ;
	v->a[21290] = anon_sym_STAR_EQ;
	v->a[21291] = anon_sym_SLASH_EQ;
	v->a[21292] = anon_sym_PERCENT_EQ;
	v->a[21293] = anon_sym_LT_LT_EQ;
	v->a[21294] = anon_sym_GT_GT_EQ;
	v->a[21295] = anon_sym_AMP_EQ;
	v->a[21296] = anon_sym_CARET_EQ;
	v->a[21297] = anon_sym_PIPE_EQ;
	v->a[21298] = anon_sym_QMARK;
	v->a[21299] = anon_sym_COLON;
	small_parse_table_1065(v);
}

/* EOF small_parse_table_212.c */
