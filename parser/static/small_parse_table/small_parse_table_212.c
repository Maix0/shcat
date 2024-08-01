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
	v->a[21200] = 1;
	v->a[21201] = anon_sym_DOLLAR_LBRACE;
	v->a[21202] = actions(63);
	v->a[21203] = 1;
	v->a[21204] = anon_sym_DOLLAR_LPAREN;
	v->a[21205] = actions(65);
	v->a[21206] = 1;
	v->a[21207] = anon_sym_BQUOTE;
	v->a[21208] = actions(419);
	v->a[21209] = 1;
	v->a[21210] = sym__bare_dollar;
	v->a[21211] = state(241);
	v->a[21212] = 1;
	v->a[21213] = aux_sym_command_repeat2;
	v->a[21214] = state(570);
	v->a[21215] = 1;
	v->a[21216] = sym_concatenation;
	v->a[21217] = actions(871);
	v->a[21218] = 3;
	v->a[21219] = sym_raw_string;
	small_parse_table_1061(v);
}

void	small_parse_table_1061(t_small_parse_table_array *v)
{
	v->a[21220] = sym_number;
	v->a[21221] = sym_word;
	v->a[21222] = state(574);
	v->a[21223] = 5;
	v->a[21224] = sym_arithmetic_expansion;
	v->a[21225] = sym_string;
	v->a[21226] = sym_simple_expansion;
	v->a[21227] = sym_expansion;
	v->a[21228] = sym_command_substitution;
	v->a[21229] = actions(411);
	v->a[21230] = 8;
	v->a[21231] = anon_sym_PIPE;
	v->a[21232] = anon_sym_AMP_AMP;
	v->a[21233] = anon_sym_PIPE_PIPE;
	v->a[21234] = anon_sym_LT;
	v->a[21235] = anon_sym_GT;
	v->a[21236] = anon_sym_GT_GT;
	v->a[21237] = anon_sym_LT_LT;
	v->a[21238] = aux_sym_heredoc_redirect_token1;
	v->a[21239] = 11;
	small_parse_table_1062(v);
}

void	small_parse_table_1062(t_small_parse_table_array *v)
{
	v->a[21240] = actions(3);
	v->a[21241] = 1;
	v->a[21242] = sym_comment;
	v->a[21243] = actions(607);
	v->a[21244] = 1;
	v->a[21245] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21246] = actions(610);
	v->a[21247] = 1;
	v->a[21248] = anon_sym_DOLLAR;
	v->a[21249] = actions(613);
	v->a[21250] = 1;
	v->a[21251] = anon_sym_DQUOTE;
	v->a[21252] = actions(616);
	v->a[21253] = 1;
	v->a[21254] = anon_sym_DOLLAR_LBRACE;
	v->a[21255] = actions(619);
	v->a[21256] = 1;
	v->a[21257] = anon_sym_DOLLAR_LPAREN;
	v->a[21258] = actions(622);
	v->a[21259] = 1;
	small_parse_table_1063(v);
}

void	small_parse_table_1063(t_small_parse_table_array *v)
{
	v->a[21260] = anon_sym_BQUOTE;
	v->a[21261] = state(256);
	v->a[21262] = 2;
	v->a[21263] = sym_concatenation;
	v->a[21264] = aux_sym_for_statement_repeat1;
	v->a[21265] = actions(873);
	v->a[21266] = 3;
	v->a[21267] = sym_raw_string;
	v->a[21268] = sym_number;
	v->a[21269] = sym_word;
	v->a[21270] = state(593);
	v->a[21271] = 5;
	v->a[21272] = sym_arithmetic_expansion;
	v->a[21273] = sym_string;
	v->a[21274] = sym_simple_expansion;
	v->a[21275] = sym_expansion;
	v->a[21276] = sym_command_substitution;
	v->a[21277] = actions(428);
	v->a[21278] = 8;
	v->a[21279] = anon_sym_PIPE;
	small_parse_table_1064(v);
}

void	small_parse_table_1064(t_small_parse_table_array *v)
{
	v->a[21280] = anon_sym_AMP_AMP;
	v->a[21281] = anon_sym_PIPE_PIPE;
	v->a[21282] = anon_sym_LT;
	v->a[21283] = anon_sym_GT;
	v->a[21284] = anon_sym_GT_GT;
	v->a[21285] = anon_sym_LT_LT;
	v->a[21286] = aux_sym_heredoc_redirect_token1;
	v->a[21287] = 7;
	v->a[21288] = actions(3);
	v->a[21289] = 1;
	v->a[21290] = sym_comment;
	v->a[21291] = actions(841);
	v->a[21292] = 1;
	v->a[21293] = sym__bare_dollar;
	v->a[21294] = actions(857);
	v->a[21295] = 1;
	v->a[21296] = aux_sym_concatenation_token1;
	v->a[21297] = actions(859);
	v->a[21298] = 1;
	v->a[21299] = sym__concat;
	small_parse_table_1065(v);
}

/* EOF small_parse_table_212.c */
