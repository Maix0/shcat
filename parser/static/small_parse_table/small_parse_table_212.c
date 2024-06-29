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
	v->a[21200] = 3;
	v->a[21201] = sym_raw_string;
	v->a[21202] = sym_number;
	v->a[21203] = sym_word;
	v->a[21204] = state(385);
	v->a[21205] = 5;
	v->a[21206] = sym_arithmetic_expansion;
	v->a[21207] = sym_string;
	v->a[21208] = sym_simple_expansion;
	v->a[21209] = sym_expansion;
	v->a[21210] = sym_command_substitution;
	v->a[21211] = actions(459);
	v->a[21212] = 20;
	v->a[21213] = anon_sym_esac;
	v->a[21214] = anon_sym_PIPE;
	v->a[21215] = anon_sym_SEMI_SEMI;
	v->a[21216] = anon_sym_AMP_AMP;
	v->a[21217] = anon_sym_PIPE_PIPE;
	v->a[21218] = anon_sym_LT;
	v->a[21219] = anon_sym_GT;
	small_parse_table_1061(v);
}

void	small_parse_table_1061(t_small_parse_table_array *v)
{
	v->a[21220] = anon_sym_GT_GT;
	v->a[21221] = anon_sym_AMP_GT;
	v->a[21222] = anon_sym_AMP_GT_GT;
	v->a[21223] = anon_sym_LT_AMP;
	v->a[21224] = anon_sym_GT_AMP;
	v->a[21225] = anon_sym_GT_PIPE;
	v->a[21226] = anon_sym_LT_AMP_DASH;
	v->a[21227] = anon_sym_GT_AMP_DASH;
	v->a[21228] = anon_sym_LT_LT;
	v->a[21229] = anon_sym_LT_LT_DASH;
	v->a[21230] = aux_sym_heredoc_redirect_token1;
	v->a[21231] = anon_sym_AMP;
	v->a[21232] = anon_sym_SEMI;
	v->a[21233] = 15;
	v->a[21234] = actions(3);
	v->a[21235] = 1;
	v->a[21236] = sym_comment;
	v->a[21237] = actions(17);
	v->a[21238] = 1;
	v->a[21239] = anon_sym_LPAREN;
	small_parse_table_1062(v);
}

void	small_parse_table_1062(t_small_parse_table_array *v)
{
	v->a[21240] = actions(455);
	v->a[21241] = 1;
	v->a[21242] = sym_file_descriptor;
	v->a[21243] = actions(477);
	v->a[21244] = 1;
	v->a[21245] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21246] = actions(479);
	v->a[21247] = 1;
	v->a[21248] = anon_sym_DOLLAR;
	v->a[21249] = actions(481);
	v->a[21250] = 1;
	v->a[21251] = anon_sym_DQUOTE;
	v->a[21252] = actions(483);
	v->a[21253] = 1;
	v->a[21254] = anon_sym_DOLLAR_LBRACE;
	v->a[21255] = actions(485);
	v->a[21256] = 1;
	v->a[21257] = anon_sym_DOLLAR_LPAREN;
	v->a[21258] = actions(489);
	v->a[21259] = 1;
	small_parse_table_1063(v);
}

void	small_parse_table_1063(t_small_parse_table_array *v)
{
	v->a[21260] = sym__bare_dollar;
	v->a[21261] = state(242);
	v->a[21262] = 1;
	v->a[21263] = aux_sym_command_repeat2;
	v->a[21264] = state(712);
	v->a[21265] = 1;
	v->a[21266] = sym_concatenation;
	v->a[21267] = state(1204);
	v->a[21268] = 1;
	v->a[21269] = sym_subshell;
	v->a[21270] = actions(511);
	v->a[21271] = 3;
	v->a[21272] = sym_raw_string;
	v->a[21273] = sym_number;
	v->a[21274] = sym_word;
	v->a[21275] = state(479);
	v->a[21276] = 5;
	v->a[21277] = sym_arithmetic_expansion;
	v->a[21278] = sym_string;
	v->a[21279] = sym_simple_expansion;
	small_parse_table_1064(v);
}

void	small_parse_table_1064(t_small_parse_table_array *v)
{
	v->a[21280] = sym_expansion;
	v->a[21281] = sym_command_substitution;
	v->a[21282] = actions(459);
	v->a[21283] = 20;
	v->a[21284] = anon_sym_PIPE;
	v->a[21285] = anon_sym_SEMI_SEMI;
	v->a[21286] = anon_sym_AMP_AMP;
	v->a[21287] = anon_sym_PIPE_PIPE;
	v->a[21288] = anon_sym_LT;
	v->a[21289] = anon_sym_GT;
	v->a[21290] = anon_sym_GT_GT;
	v->a[21291] = anon_sym_AMP_GT;
	v->a[21292] = anon_sym_AMP_GT_GT;
	v->a[21293] = anon_sym_LT_AMP;
	v->a[21294] = anon_sym_GT_AMP;
	v->a[21295] = anon_sym_GT_PIPE;
	v->a[21296] = anon_sym_LT_AMP_DASH;
	v->a[21297] = anon_sym_GT_AMP_DASH;
	v->a[21298] = anon_sym_LT_LT;
	v->a[21299] = anon_sym_LT_LT_DASH;
	small_parse_table_1065(v);
}

/* EOF small_parse_table_212.c */
