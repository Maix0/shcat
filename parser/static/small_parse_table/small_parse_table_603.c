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
	v->a[60300] = sym_file_descriptor;
	v->a[60301] = state(804);
	v->a[60302] = 1;
	v->a[60303] = sym_terminator;
	v->a[60304] = actions(754);
	v->a[60305] = 2;
	v->a[60306] = anon_sym_LT_LT;
	v->a[60307] = anon_sym_LT_LT_DASH;
	v->a[60308] = actions(783);
	v->a[60309] = 2;
	v->a[60310] = anon_sym_AMP_AMP;
	v->a[60311] = anon_sym_PIPE_PIPE;
	v->a[60312] = actions(2027);
	v->a[60313] = 2;
	v->a[60314] = anon_sym_LT_AMP_DASH;
	v->a[60315] = anon_sym_GT_AMP_DASH;
	v->a[60316] = actions(781);
	v->a[60317] = 3;
	v->a[60318] = anon_sym_SEMI_SEMI;
	v->a[60319] = anon_sym_AMP;
	small_parse_table_3016(v);
}

void	small_parse_table_3016(t_small_parse_table_array *v)
{
	v->a[60320] = anon_sym_SEMI;
	v->a[60321] = state(1160);
	v->a[60322] = 3;
	v->a[60323] = sym_file_redirect;
	v->a[60324] = sym_heredoc_redirect;
	v->a[60325] = aux_sym_redirected_statement_repeat1;
	v->a[60326] = actions(2025);
	v->a[60327] = 6;
	v->a[60328] = anon_sym_LT;
	v->a[60329] = anon_sym_GT;
	v->a[60330] = anon_sym_GT_GT;
	v->a[60331] = anon_sym_LT_AMP;
	v->a[60332] = anon_sym_GT_AMP;
	v->a[60333] = anon_sym_GT_PIPE;
	v->a[60334] = 12;
	v->a[60335] = actions(3);
	v->a[60336] = 1;
	v->a[60337] = sym_comment;
	v->a[60338] = actions(682);
	v->a[60339] = 1;
	small_parse_table_3017(v);
}

void	small_parse_table_3017(t_small_parse_table_array *v)
{
	v->a[60340] = anon_sym_PIPE;
	v->a[60341] = actions(779);
	v->a[60342] = 1;
	v->a[60343] = ts_builtin_sym_end;
	v->a[60344] = actions(2029);
	v->a[60345] = 1;
	v->a[60346] = aux_sym_heredoc_redirect_token1;
	v->a[60347] = actions(2031);
	v->a[60348] = 1;
	v->a[60349] = sym_file_descriptor;
	v->a[60350] = state(805);
	v->a[60351] = 1;
	v->a[60352] = sym_terminator;
	v->a[60353] = actions(754);
	v->a[60354] = 2;
	v->a[60355] = anon_sym_LT_LT;
	v->a[60356] = anon_sym_LT_LT_DASH;
	v->a[60357] = actions(783);
	v->a[60358] = 2;
	v->a[60359] = anon_sym_AMP_AMP;
	small_parse_table_3018(v);
}

void	small_parse_table_3018(t_small_parse_table_array *v)
{
	v->a[60360] = anon_sym_PIPE_PIPE;
	v->a[60361] = actions(2027);
	v->a[60362] = 2;
	v->a[60363] = anon_sym_LT_AMP_DASH;
	v->a[60364] = anon_sym_GT_AMP_DASH;
	v->a[60365] = actions(781);
	v->a[60366] = 3;
	v->a[60367] = anon_sym_SEMI_SEMI;
	v->a[60368] = anon_sym_AMP;
	v->a[60369] = anon_sym_SEMI;
	v->a[60370] = state(1160);
	v->a[60371] = 3;
	v->a[60372] = sym_file_redirect;
	v->a[60373] = sym_heredoc_redirect;
	v->a[60374] = aux_sym_redirected_statement_repeat1;
	v->a[60375] = actions(2025);
	v->a[60376] = 6;
	v->a[60377] = anon_sym_LT;
	v->a[60378] = anon_sym_GT;
	v->a[60379] = anon_sym_GT_GT;
	small_parse_table_3019(v);
}

void	small_parse_table_3019(t_small_parse_table_array *v)
{
	v->a[60380] = anon_sym_LT_AMP;
	v->a[60381] = anon_sym_GT_AMP;
	v->a[60382] = anon_sym_GT_PIPE;
	v->a[60383] = 12;
	v->a[60384] = actions(3);
	v->a[60385] = 1;
	v->a[60386] = sym_comment;
	v->a[60387] = actions(682);
	v->a[60388] = 1;
	v->a[60389] = anon_sym_PIPE;
	v->a[60390] = actions(779);
	v->a[60391] = 1;
	v->a[60392] = ts_builtin_sym_end;
	v->a[60393] = actions(2029);
	v->a[60394] = 1;
	v->a[60395] = aux_sym_heredoc_redirect_token1;
	v->a[60396] = actions(2031);
	v->a[60397] = 1;
	v->a[60398] = sym_file_descriptor;
	v->a[60399] = state(802);
	small_parse_table_3020(v);
}

/* EOF small_parse_table_603.c */
