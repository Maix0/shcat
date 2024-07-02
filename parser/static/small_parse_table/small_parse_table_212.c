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
	v->a[21200] = sym_expansion;
	v->a[21201] = sym_command_substitution;
	v->a[21202] = actions(505);
	v->a[21203] = 16;
	v->a[21204] = anon_sym_PIPE;
	v->a[21205] = anon_sym_SEMI_SEMI;
	v->a[21206] = anon_sym_AMP_AMP;
	v->a[21207] = anon_sym_PIPE_PIPE;
	v->a[21208] = anon_sym_LT;
	v->a[21209] = anon_sym_GT;
	v->a[21210] = anon_sym_GT_GT;
	v->a[21211] = anon_sym_LT_AMP;
	v->a[21212] = anon_sym_GT_AMP;
	v->a[21213] = anon_sym_GT_PIPE;
	v->a[21214] = anon_sym_LT_GT;
	v->a[21215] = anon_sym_LT_LT;
	v->a[21216] = anon_sym_LT_LT_DASH;
	v->a[21217] = aux_sym_heredoc_redirect_token1;
	v->a[21218] = anon_sym_AMP;
	v->a[21219] = anon_sym_SEMI;
	small_parse_table_1061(v);
}

void	small_parse_table_1061(t_small_parse_table_array *v)
{
	v->a[21220] = 3;
	v->a[21221] = actions(680);
	v->a[21222] = 1;
	v->a[21223] = sym_comment;
	v->a[21224] = actions(707);
	v->a[21225] = 13;
	v->a[21226] = anon_sym_PIPE;
	v->a[21227] = anon_sym_EQ;
	v->a[21228] = anon_sym_LT;
	v->a[21229] = anon_sym_GT;
	v->a[21230] = anon_sym_GT_GT;
	v->a[21231] = anon_sym_LT_LT;
	v->a[21232] = anon_sym_CARET;
	v->a[21233] = anon_sym_AMP;
	v->a[21234] = anon_sym_PLUS;
	v->a[21235] = anon_sym_DASH;
	v->a[21236] = anon_sym_STAR;
	v->a[21237] = anon_sym_SLASH;
	v->a[21238] = anon_sym_PERCENT;
	v->a[21239] = actions(709);
	small_parse_table_1062(v);
}

void	small_parse_table_1062(t_small_parse_table_array *v)
{
	v->a[21240] = 21;
	v->a[21241] = anon_sym_AMP_AMP;
	v->a[21242] = anon_sym_PIPE_PIPE;
	v->a[21243] = anon_sym_RPAREN_RPAREN;
	v->a[21244] = anon_sym_PLUS_EQ;
	v->a[21245] = anon_sym_DASH_EQ;
	v->a[21246] = anon_sym_STAR_EQ;
	v->a[21247] = anon_sym_SLASH_EQ;
	v->a[21248] = anon_sym_PERCENT_EQ;
	v->a[21249] = anon_sym_LT_LT_EQ;
	v->a[21250] = anon_sym_GT_GT_EQ;
	v->a[21251] = anon_sym_AMP_EQ;
	v->a[21252] = anon_sym_CARET_EQ;
	v->a[21253] = anon_sym_PIPE_EQ;
	v->a[21254] = anon_sym_EQ_EQ;
	v->a[21255] = anon_sym_BANG_EQ;
	v->a[21256] = anon_sym_LT_EQ;
	v->a[21257] = anon_sym_GT_EQ;
	v->a[21258] = anon_sym_QMARK;
	v->a[21259] = anon_sym_COLON;
	small_parse_table_1063(v);
}

void	small_parse_table_1063(t_small_parse_table_array *v)
{
	v->a[21260] = anon_sym_PLUS_PLUS2;
	v->a[21261] = anon_sym_DASH_DASH2;
	v->a[21262] = 5;
	v->a[21263] = actions(3);
	v->a[21264] = 1;
	v->a[21265] = sym_comment;
	v->a[21266] = actions(511);
	v->a[21267] = 2;
	v->a[21268] = sym_file_descriptor;
	v->a[21269] = sym_variable_name;
	v->a[21270] = state(230);
	v->a[21271] = 2;
	v->a[21272] = sym_concatenation;
	v->a[21273] = aux_sym_for_statement_repeat1;
	v->a[21274] = state(481);
	v->a[21275] = 5;
	v->a[21276] = sym_arithmetic_expansion;
	v->a[21277] = sym_string;
	v->a[21278] = sym_simple_expansion;
	v->a[21279] = sym_expansion;
	small_parse_table_1064(v);
}

void	small_parse_table_1064(t_small_parse_table_array *v)
{
	v->a[21280] = sym_command_substitution;
	v->a[21281] = actions(509);
	v->a[21282] = 25;
	v->a[21283] = anon_sym_PIPE;
	v->a[21284] = anon_sym_SEMI_SEMI;
	v->a[21285] = anon_sym_AMP_AMP;
	v->a[21286] = anon_sym_PIPE_PIPE;
	v->a[21287] = anon_sym_LT;
	v->a[21288] = anon_sym_GT;
	v->a[21289] = anon_sym_GT_GT;
	v->a[21290] = anon_sym_LT_AMP;
	v->a[21291] = anon_sym_GT_AMP;
	v->a[21292] = anon_sym_GT_PIPE;
	v->a[21293] = anon_sym_LT_GT;
	v->a[21294] = anon_sym_LT_LT;
	v->a[21295] = anon_sym_LT_LT_DASH;
	v->a[21296] = aux_sym_heredoc_redirect_token1;
	v->a[21297] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21298] = anon_sym_AMP;
	v->a[21299] = anon_sym_DOLLAR;
	small_parse_table_1065(v);
}

/* EOF small_parse_table_212.c */
