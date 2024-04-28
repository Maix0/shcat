/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_3133.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_15665(t_small_parse_table_array *v)
{
	v->a[313300] = 1;
	v->a[313301] = sym__heredoc_body;
	v->a[313302] = state(6796);
	v->a[313303] = 1;
	v->a[313304] = sym_heredoc_body;
	v->a[313305] = 5;
	v->a[313306] = actions(71);
	v->a[313307] = 1;
	v->a[313308] = sym_comment;
	v->a[313309] = actions(14710);
	v->a[313310] = 1;
	v->a[313311] = sym__heredoc_body_beginning;
	v->a[313312] = actions(14712);
	v->a[313313] = 1;
	v->a[313314] = sym_simple_heredoc_body;
	v->a[313315] = state(7466);
	v->a[313316] = 1;
	v->a[313317] = sym_heredoc_body;
	v->a[313318] = state(5633);
	v->a[313319] = 2;
	small_parse_table_15666(v);
}

void	small_parse_table_15666(t_small_parse_table_array *v)
{
	v->a[313320] = sym__heredoc_body;
	v->a[313321] = sym__simple_heredoc_body;
	v->a[313322] = 4;
	v->a[313323] = actions(71);
	v->a[313324] = 1;
	v->a[313325] = sym_comment;
	v->a[313326] = actions(14748);
	v->a[313327] = 1;
	v->a[313328] = anon_sym_elif;
	v->a[313329] = actions(14746);
	v->a[313330] = 2;
	v->a[313331] = anon_sym_fi;
	v->a[313332] = anon_sym_else;
	v->a[313333] = state(6400);
	v->a[313334] = 2;
	v->a[313335] = sym_elif_clause;
	v->a[313336] = aux_sym_if_statement_repeat1;
	v->a[313337] = 6;
	v->a[313338] = actions(71);
	v->a[313339] = 1;
	small_parse_table_15667(v);
}

void	small_parse_table_15667(t_small_parse_table_array *v)
{
	v->a[313340] = sym_comment;
	v->a[313341] = actions(14710);
	v->a[313342] = 1;
	v->a[313343] = sym__heredoc_body_beginning;
	v->a[313344] = actions(14724);
	v->a[313345] = 1;
	v->a[313346] = sym_simple_heredoc_body;
	v->a[313347] = state(4929);
	v->a[313348] = 1;
	v->a[313349] = sym__heredoc_body;
	v->a[313350] = state(4936);
	v->a[313351] = 1;
	v->a[313352] = sym__simple_heredoc_body;
	v->a[313353] = state(7519);
	v->a[313354] = 1;
	v->a[313355] = sym_heredoc_body;
	v->a[313356] = 4;
	v->a[313357] = actions(71);
	v->a[313358] = 1;
	v->a[313359] = sym_comment;
	small_parse_table_15668(v);
}

void	small_parse_table_15668(t_small_parse_table_array *v)
{
	v->a[313360] = actions(14751);
	v->a[313361] = 1;
	v->a[313362] = anon_sym_RBRACE3;
	v->a[313363] = state(6474);
	v->a[313364] = 1;
	v->a[313365] = aux_sym__expansion_body_repeat1;
	v->a[313366] = actions(8050);
	v->a[313367] = 3;
	v->a[313368] = sym__external_expansion_sym_hash;
	v->a[313369] = sym__external_expansion_sym_bang;
	v->a[313370] = sym__external_expansion_sym_equal;
	v->a[313371] = 3;
	v->a[313372] = actions(71);
	v->a[313373] = 1;
	v->a[313374] = sym_comment;
	v->a[313375] = actions(14753);
	v->a[313376] = 1;
	v->a[313377] = sym__concat;
	v->a[313378] = actions(6827);
	v->a[313379] = 4;
	small_parse_table_15669(v);
}

void	small_parse_table_15669(t_small_parse_table_array *v)
{
	v->a[313380] = sym__external_expansion_sym_hash;
	v->a[313381] = sym__external_expansion_sym_bang;
	v->a[313382] = sym__external_expansion_sym_equal;
	v->a[313383] = anon_sym_RBRACE3;
	v->a[313384] = 5;
	v->a[313385] = actions(71);
	v->a[313386] = 1;
	v->a[313387] = sym_comment;
	v->a[313388] = actions(14708);
	v->a[313389] = 1;
	v->a[313390] = sym_simple_heredoc_body;
	v->a[313391] = actions(14710);
	v->a[313392] = 1;
	v->a[313393] = sym__heredoc_body_beginning;
	v->a[313394] = state(6796);
	v->a[313395] = 1;
	v->a[313396] = sym_heredoc_body;
	v->a[313397] = state(5103);
	v->a[313398] = 2;
	v->a[313399] = sym__heredoc_body;
	small_parse_table_15670(v);
}

/* EOF small_parse_table_3133.c */
