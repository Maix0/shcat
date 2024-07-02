/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_603.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3015(t_small_parse_table_array *v)
{
	v->a[60300] = anon_sym_LT_GT;
	v->a[60301] = 10;
	v->a[60302] = actions(3);
	v->a[60303] = 1;
	v->a[60304] = sym_comment;
	v->a[60305] = actions(692);
	v->a[60306] = 1;
	v->a[60307] = anon_sym_PIPE;
	v->a[60308] = actions(1946);
	v->a[60309] = 1;
	v->a[60310] = sym_file_descriptor;
	v->a[60311] = actions(2030);
	v->a[60312] = 1;
	v->a[60313] = aux_sym_heredoc_redirect_token1;
	v->a[60314] = state(576);
	v->a[60315] = 1;
	v->a[60316] = sym_terminator;
	v->a[60317] = actions(700);
	v->a[60318] = 2;
	v->a[60319] = anon_sym_LT_LT;
	small_parse_table_3016(v);
}

void	small_parse_table_3016(t_small_parse_table_array *v)
{
	v->a[60320] = anon_sym_LT_LT_DASH;
	v->a[60321] = actions(914);
	v->a[60322] = 2;
	v->a[60323] = anon_sym_AMP_AMP;
	v->a[60324] = anon_sym_PIPE_PIPE;
	v->a[60325] = actions(1039);
	v->a[60326] = 3;
	v->a[60327] = anon_sym_SEMI_SEMI;
	v->a[60328] = anon_sym_AMP;
	v->a[60329] = anon_sym_SEMI;
	v->a[60330] = state(1134);
	v->a[60331] = 3;
	v->a[60332] = sym_file_redirect;
	v->a[60333] = sym_heredoc_redirect;
	v->a[60334] = aux_sym_redirected_statement_repeat1;
	v->a[60335] = actions(1942);
	v->a[60336] = 7;
	v->a[60337] = anon_sym_LT;
	v->a[60338] = anon_sym_GT;
	v->a[60339] = anon_sym_GT_GT;
	small_parse_table_3017(v);
}

void	small_parse_table_3017(t_small_parse_table_array *v)
{
	v->a[60340] = anon_sym_LT_AMP;
	v->a[60341] = anon_sym_GT_AMP;
	v->a[60342] = anon_sym_GT_PIPE;
	v->a[60343] = anon_sym_LT_GT;
	v->a[60344] = 11;
	v->a[60345] = actions(3);
	v->a[60346] = 1;
	v->a[60347] = sym_comment;
	v->a[60348] = actions(692);
	v->a[60349] = 1;
	v->a[60350] = anon_sym_PIPE;
	v->a[60351] = actions(724);
	v->a[60352] = 1;
	v->a[60353] = anon_sym_SEMI_SEMI;
	v->a[60354] = actions(1857);
	v->a[60355] = 1;
	v->a[60356] = aux_sym_heredoc_redirect_token1;
	v->a[60357] = actions(1946);
	v->a[60358] = 1;
	v->a[60359] = sym_file_descriptor;
	small_parse_table_3018(v);
}

void	small_parse_table_3018(t_small_parse_table_array *v)
{
	v->a[60360] = state(691);
	v->a[60361] = 1;
	v->a[60362] = sym_terminator;
	v->a[60363] = actions(696);
	v->a[60364] = 2;
	v->a[60365] = anon_sym_AMP;
	v->a[60366] = anon_sym_SEMI;
	v->a[60367] = actions(700);
	v->a[60368] = 2;
	v->a[60369] = anon_sym_LT_LT;
	v->a[60370] = anon_sym_LT_LT_DASH;
	v->a[60371] = actions(914);
	v->a[60372] = 2;
	v->a[60373] = anon_sym_AMP_AMP;
	v->a[60374] = anon_sym_PIPE_PIPE;
	v->a[60375] = state(1134);
	v->a[60376] = 3;
	v->a[60377] = sym_file_redirect;
	v->a[60378] = sym_heredoc_redirect;
	v->a[60379] = aux_sym_redirected_statement_repeat1;
	small_parse_table_3019(v);
}

void	small_parse_table_3019(t_small_parse_table_array *v)
{
	v->a[60380] = actions(1942);
	v->a[60381] = 7;
	v->a[60382] = anon_sym_LT;
	v->a[60383] = anon_sym_GT;
	v->a[60384] = anon_sym_GT_GT;
	v->a[60385] = anon_sym_LT_AMP;
	v->a[60386] = anon_sym_GT_AMP;
	v->a[60387] = anon_sym_GT_PIPE;
	v->a[60388] = anon_sym_LT_GT;
	v->a[60389] = 11;
	v->a[60390] = actions(3);
	v->a[60391] = 1;
	v->a[60392] = sym_comment;
	v->a[60393] = actions(692);
	v->a[60394] = 1;
	v->a[60395] = anon_sym_PIPE;
	v->a[60396] = actions(724);
	v->a[60397] = 1;
	v->a[60398] = anon_sym_SEMI_SEMI;
	v->a[60399] = actions(1857);
	small_parse_table_3020(v);
}

/* EOF small_parse_table_603.c */
