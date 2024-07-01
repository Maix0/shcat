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
	v->a[21200] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21201] = actions(521);
	v->a[21202] = 1;
	v->a[21203] = anon_sym_DOLLAR;
	v->a[21204] = actions(524);
	v->a[21205] = 1;
	v->a[21206] = anon_sym_DQUOTE;
	v->a[21207] = actions(527);
	v->a[21208] = 1;
	v->a[21209] = anon_sym_DOLLAR_LBRACE;
	v->a[21210] = actions(530);
	v->a[21211] = 1;
	v->a[21212] = anon_sym_DOLLAR_LPAREN;
	v->a[21213] = actions(533);
	v->a[21214] = 1;
	v->a[21215] = anon_sym_BQUOTE;
	v->a[21216] = actions(536);
	v->a[21217] = 1;
	v->a[21218] = sym_file_descriptor;
	v->a[21219] = actions(538);
	small_parse_table_1061(v);
}

void	small_parse_table_1061(t_small_parse_table_array *v)
{
	v->a[21220] = 1;
	v->a[21221] = sym__bare_dollar;
	v->a[21222] = state(192);
	v->a[21223] = 1;
	v->a[21224] = aux_sym_command_repeat2;
	v->a[21225] = state(725);
	v->a[21226] = 1;
	v->a[21227] = sym_concatenation;
	v->a[21228] = actions(513);
	v->a[21229] = 3;
	v->a[21230] = sym_raw_string;
	v->a[21231] = sym_number;
	v->a[21232] = sym_word;
	v->a[21233] = state(438);
	v->a[21234] = 5;
	v->a[21235] = sym_arithmetic_expansion;
	v->a[21236] = sym_string;
	v->a[21237] = sym_simple_expansion;
	v->a[21238] = sym_expansion;
	v->a[21239] = sym_command_substitution;
	small_parse_table_1062(v);
}

void	small_parse_table_1062(t_small_parse_table_array *v)
{
	v->a[21240] = actions(516);
	v->a[21241] = 18;
	v->a[21242] = anon_sym_esac;
	v->a[21243] = anon_sym_PIPE;
	v->a[21244] = anon_sym_SEMI_SEMI;
	v->a[21245] = anon_sym_AMP_AMP;
	v->a[21246] = anon_sym_PIPE_PIPE;
	v->a[21247] = anon_sym_LT;
	v->a[21248] = anon_sym_GT;
	v->a[21249] = anon_sym_GT_GT;
	v->a[21250] = anon_sym_LT_AMP;
	v->a[21251] = anon_sym_GT_AMP;
	v->a[21252] = anon_sym_GT_PIPE;
	v->a[21253] = anon_sym_LT_AMP_DASH;
	v->a[21254] = anon_sym_GT_AMP_DASH;
	v->a[21255] = anon_sym_LT_LT;
	v->a[21256] = anon_sym_LT_LT_DASH;
	v->a[21257] = aux_sym_heredoc_redirect_token1;
	v->a[21258] = anon_sym_AMP;
	v->a[21259] = anon_sym_SEMI;
	small_parse_table_1063(v);
}

void	small_parse_table_1063(t_small_parse_table_array *v)
{
	v->a[21260] = 14;
	v->a[21261] = actions(3);
	v->a[21262] = 1;
	v->a[21263] = sym_comment;
	v->a[21264] = actions(497);
	v->a[21265] = 1;
	v->a[21266] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21267] = actions(499);
	v->a[21268] = 1;
	v->a[21269] = anon_sym_DOLLAR;
	v->a[21270] = actions(501);
	v->a[21271] = 1;
	v->a[21272] = anon_sym_DQUOTE;
	v->a[21273] = actions(503);
	v->a[21274] = 1;
	v->a[21275] = anon_sym_DOLLAR_LBRACE;
	v->a[21276] = actions(505);
	v->a[21277] = 1;
	v->a[21278] = anon_sym_DOLLAR_LPAREN;
	v->a[21279] = actions(507);
	small_parse_table_1064(v);
}

void	small_parse_table_1064(t_small_parse_table_array *v)
{
	v->a[21280] = 1;
	v->a[21281] = anon_sym_BQUOTE;
	v->a[21282] = actions(509);
	v->a[21283] = 1;
	v->a[21284] = sym__bare_dollar;
	v->a[21285] = actions(543);
	v->a[21286] = 1;
	v->a[21287] = sym_file_descriptor;
	v->a[21288] = state(192);
	v->a[21289] = 1;
	v->a[21290] = aux_sym_command_repeat2;
	v->a[21291] = state(725);
	v->a[21292] = 1;
	v->a[21293] = sym_concatenation;
	v->a[21294] = actions(495);
	v->a[21295] = 3;
	v->a[21296] = sym_raw_string;
	v->a[21297] = sym_number;
	v->a[21298] = sym_word;
	v->a[21299] = state(438);
	small_parse_table_1065(v);
}

/* EOF small_parse_table_212.c */
