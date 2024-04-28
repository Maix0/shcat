/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_3132.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_15660(t_small_parse_table_array *v)
{
	v->a[313200] = state(7519);
	v->a[313201] = 1;
	v->a[313202] = sym_heredoc_body;
	v->a[313203] = 4;
	v->a[313204] = actions(71);
	v->a[313205] = 1;
	v->a[313206] = sym_comment;
	v->a[313207] = state(6373);
	v->a[313208] = 1;
	v->a[313209] = aux_sym_concatenation_repeat1;
	v->a[313210] = actions(14568);
	v->a[313211] = 2;
	v->a[313212] = sym__concat;
	v->a[313213] = aux_sym_concatenation_token1;
	v->a[313214] = actions(14740);
	v->a[313215] = 2;
	v->a[313216] = anon_sym_PIPE;
	v->a[313217] = anon_sym_RPAREN;
	v->a[313218] = 4;
	v->a[313219] = actions(71);
	small_parse_table_15661(v);
}

void	small_parse_table_15661(t_small_parse_table_array *v)
{
	v->a[313220] = 1;
	v->a[313221] = sym_comment;
	v->a[313222] = actions(14738);
	v->a[313223] = 1;
	v->a[313224] = anon_sym_RBRACE3;
	v->a[313225] = state(6474);
	v->a[313226] = 1;
	v->a[313227] = aux_sym__expansion_body_repeat1;
	v->a[313228] = actions(8050);
	v->a[313229] = 3;
	v->a[313230] = sym__external_expansion_sym_hash;
	v->a[313231] = sym__external_expansion_sym_bang;
	v->a[313232] = sym__external_expansion_sym_equal;
	v->a[313233] = 5;
	v->a[313234] = actions(71);
	v->a[313235] = 1;
	v->a[313236] = sym_comment;
	v->a[313237] = actions(14708);
	v->a[313238] = 1;
	v->a[313239] = sym_simple_heredoc_body;
	small_parse_table_15662(v);
}

void	small_parse_table_15662(t_small_parse_table_array *v)
{
	v->a[313240] = actions(14710);
	v->a[313241] = 1;
	v->a[313242] = sym__heredoc_body_beginning;
	v->a[313243] = state(6796);
	v->a[313244] = 1;
	v->a[313245] = sym_heredoc_body;
	v->a[313246] = state(5101);
	v->a[313247] = 2;
	v->a[313248] = sym__heredoc_body;
	v->a[313249] = sym__simple_heredoc_body;
	v->a[313250] = 6;
	v->a[313251] = actions(71);
	v->a[313252] = 1;
	v->a[313253] = sym_comment;
	v->a[313254] = actions(165);
	v->a[313255] = 1;
	v->a[313256] = anon_sym_LBRACE;
	v->a[313257] = actions(14742);
	v->a[313258] = 1;
	v->a[313259] = anon_sym_SEMI;
	small_parse_table_15663(v);
}

void	small_parse_table_15663(t_small_parse_table_array *v)
{
	v->a[313260] = actions(14744);
	v->a[313261] = 1;
	v->a[313262] = anon_sym_do;
	v->a[313263] = state(5673);
	v->a[313264] = 1;
	v->a[313265] = sym_do_group;
	v->a[313266] = state(5675);
	v->a[313267] = 1;
	v->a[313268] = sym_compound_statement;
	v->a[313269] = 5;
	v->a[313270] = actions(71);
	v->a[313271] = 1;
	v->a[313272] = sym_comment;
	v->a[313273] = actions(14710);
	v->a[313274] = 1;
	v->a[313275] = sym__heredoc_body_beginning;
	v->a[313276] = actions(14724);
	v->a[313277] = 1;
	v->a[313278] = sym_simple_heredoc_body;
	v->a[313279] = state(7519);
	small_parse_table_15664(v);
}

void	small_parse_table_15664(t_small_parse_table_array *v)
{
	v->a[313280] = 1;
	v->a[313281] = sym_heredoc_body;
	v->a[313282] = state(4882);
	v->a[313283] = 2;
	v->a[313284] = sym__heredoc_body;
	v->a[313285] = sym__simple_heredoc_body;
	v->a[313286] = 6;
	v->a[313287] = actions(71);
	v->a[313288] = 1;
	v->a[313289] = sym_comment;
	v->a[313290] = actions(14708);
	v->a[313291] = 1;
	v->a[313292] = sym_simple_heredoc_body;
	v->a[313293] = actions(14710);
	v->a[313294] = 1;
	v->a[313295] = sym__heredoc_body_beginning;
	v->a[313296] = state(5052);
	v->a[313297] = 1;
	v->a[313298] = sym__simple_heredoc_body;
	v->a[313299] = state(5105);
	small_parse_table_15665(v);
}

/* EOF small_parse_table_3132.c */
