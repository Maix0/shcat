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
	v->a[21200] = anon_sym_SEMI_SEMI;
	v->a[21201] = anon_sym_AMP_AMP;
	v->a[21202] = anon_sym_PIPE_PIPE;
	v->a[21203] = anon_sym_LT;
	v->a[21204] = anon_sym_GT;
	v->a[21205] = anon_sym_GT_GT;
	v->a[21206] = anon_sym_AMP_GT;
	v->a[21207] = anon_sym_AMP_GT_GT;
	v->a[21208] = anon_sym_LT_AMP;
	v->a[21209] = anon_sym_GT_AMP;
	v->a[21210] = anon_sym_GT_PIPE;
	v->a[21211] = anon_sym_LT_AMP_DASH;
	v->a[21212] = anon_sym_GT_AMP_DASH;
	v->a[21213] = anon_sym_LT_LT;
	v->a[21214] = anon_sym_LT_LT_DASH;
	v->a[21215] = aux_sym_heredoc_redirect_token1;
	v->a[21216] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21217] = anon_sym_AMP;
	v->a[21218] = anon_sym_DQUOTE;
	v->a[21219] = sym_raw_string;
	small_parse_table_1061(v);
}

void	small_parse_table_1061(t_small_parse_table_array *v)
{
	v->a[21220] = aux_sym_number_token1;
	v->a[21221] = aux_sym_number_token2;
	v->a[21222] = anon_sym_DOLLAR_LBRACE;
	v->a[21223] = anon_sym_DOLLAR_LPAREN;
	v->a[21224] = anon_sym_BQUOTE;
	v->a[21225] = sym_word;
	v->a[21226] = anon_sym_SEMI;
	v->a[21227] = 18;
	v->a[21228] = actions(3);
	v->a[21229] = 1;
	v->a[21230] = sym_comment;
	v->a[21231] = actions(105);
	v->a[21232] = 1;
	v->a[21233] = anon_sym_LPAREN;
	v->a[21234] = actions(457);
	v->a[21235] = 1;
	v->a[21236] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21237] = actions(459);
	v->a[21238] = 1;
	v->a[21239] = anon_sym_DOLLAR;
	small_parse_table_1062(v);
}

void	small_parse_table_1062(t_small_parse_table_array *v)
{
	v->a[21240] = actions(461);
	v->a[21241] = 1;
	v->a[21242] = anon_sym_DQUOTE;
	v->a[21243] = actions(463);
	v->a[21244] = 1;
	v->a[21245] = aux_sym_number_token1;
	v->a[21246] = actions(465);
	v->a[21247] = 1;
	v->a[21248] = aux_sym_number_token2;
	v->a[21249] = actions(467);
	v->a[21250] = 1;
	v->a[21251] = anon_sym_DOLLAR_LBRACE;
	v->a[21252] = actions(469);
	v->a[21253] = 1;
	v->a[21254] = anon_sym_DOLLAR_LPAREN;
	v->a[21255] = actions(471);
	v->a[21256] = 1;
	v->a[21257] = anon_sym_BQUOTE;
	v->a[21258] = actions(473);
	v->a[21259] = 1;
	small_parse_table_1063(v);
}

void	small_parse_table_1063(t_small_parse_table_array *v)
{
	v->a[21260] = sym_file_descriptor;
	v->a[21261] = actions(475);
	v->a[21262] = 1;
	v->a[21263] = sym__bare_dollar;
	v->a[21264] = state(203);
	v->a[21265] = 1;
	v->a[21266] = aux_sym_command_repeat2;
	v->a[21267] = state(717);
	v->a[21268] = 1;
	v->a[21269] = sym_concatenation;
	v->a[21270] = state(1293);
	v->a[21271] = 1;
	v->a[21272] = sym_subshell;
	v->a[21273] = actions(453);
	v->a[21274] = 2;
	v->a[21275] = sym_raw_string;
	v->a[21276] = sym_word;
	v->a[21277] = state(358);
	v->a[21278] = 6;
	v->a[21279] = sym_arithmetic_expansion;
	small_parse_table_1064(v);
}

void	small_parse_table_1064(t_small_parse_table_array *v)
{
	v->a[21280] = sym_string;
	v->a[21281] = sym_number;
	v->a[21282] = sym_simple_expansion;
	v->a[21283] = sym_expansion;
	v->a[21284] = sym_command_substitution;
	v->a[21285] = actions(455);
	v->a[21286] = 20;
	v->a[21287] = anon_sym_esac;
	v->a[21288] = anon_sym_PIPE;
	v->a[21289] = anon_sym_SEMI_SEMI;
	v->a[21290] = anon_sym_AMP_AMP;
	v->a[21291] = anon_sym_PIPE_PIPE;
	v->a[21292] = anon_sym_LT;
	v->a[21293] = anon_sym_GT;
	v->a[21294] = anon_sym_GT_GT;
	v->a[21295] = anon_sym_AMP_GT;
	v->a[21296] = anon_sym_AMP_GT_GT;
	v->a[21297] = anon_sym_LT_AMP;
	v->a[21298] = anon_sym_GT_AMP;
	v->a[21299] = anon_sym_GT_PIPE;
	small_parse_table_1065(v);
}

/* EOF small_parse_table_212.c */
