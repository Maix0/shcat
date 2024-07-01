/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_913.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4565(t_small_parse_table_array *v)
{
	v->a[91300] = 1;
	v->a[91301] = sym_comment;
	v->a[91302] = actions(4018);
	v->a[91303] = 1;
	v->a[91304] = sym__heredoc_body_beginning;
	v->a[91305] = actions(4020);
	v->a[91306] = 1;
	v->a[91307] = sym_simple_heredoc_body;
	v->a[91308] = state(1735);
	v->a[91309] = 1;
	v->a[91310] = sym__heredoc_body;
	v->a[91311] = state(1736);
	v->a[91312] = 1;
	v->a[91313] = sym__simple_heredoc_body;
	v->a[91314] = state(2221);
	v->a[91315] = 1;
	v->a[91316] = sym_heredoc_body;
	v->a[91317] = 6;
	v->a[91318] = actions(870);
	v->a[91319] = 1;
	small_parse_table_4566(v);
}

void	small_parse_table_4566(t_small_parse_table_array *v)
{
	v->a[91320] = sym_comment;
	v->a[91321] = actions(4018);
	v->a[91322] = 1;
	v->a[91323] = sym__heredoc_body_beginning;
	v->a[91324] = actions(4020);
	v->a[91325] = 1;
	v->a[91326] = sym_simple_heredoc_body;
	v->a[91327] = state(1733);
	v->a[91328] = 1;
	v->a[91329] = sym__heredoc_body;
	v->a[91330] = state(1734);
	v->a[91331] = 1;
	v->a[91332] = sym__simple_heredoc_body;
	v->a[91333] = state(2221);
	v->a[91334] = 1;
	v->a[91335] = sym_heredoc_body;
	v->a[91336] = 5;
	v->a[91337] = actions(870);
	v->a[91338] = 1;
	v->a[91339] = sym_comment;
	small_parse_table_4567(v);
}

void	small_parse_table_4567(t_small_parse_table_array *v)
{
	v->a[91340] = actions(4018);
	v->a[91341] = 1;
	v->a[91342] = sym__heredoc_body_beginning;
	v->a[91343] = actions(4020);
	v->a[91344] = 1;
	v->a[91345] = sym_simple_heredoc_body;
	v->a[91346] = state(2221);
	v->a[91347] = 1;
	v->a[91348] = sym_heredoc_body;
	v->a[91349] = state(1730);
	v->a[91350] = 2;
	v->a[91351] = sym__heredoc_body;
	v->a[91352] = sym__simple_heredoc_body;
	v->a[91353] = 5;
	v->a[91354] = actions(870);
	v->a[91355] = 1;
	v->a[91356] = sym_comment;
	v->a[91357] = actions(4018);
	v->a[91358] = 1;
	v->a[91359] = sym__heredoc_body_beginning;
	small_parse_table_4568(v);
}

void	small_parse_table_4568(t_small_parse_table_array *v)
{
	v->a[91360] = actions(4020);
	v->a[91361] = 1;
	v->a[91362] = sym_simple_heredoc_body;
	v->a[91363] = state(2221);
	v->a[91364] = 1;
	v->a[91365] = sym_heredoc_body;
	v->a[91366] = state(1706);
	v->a[91367] = 2;
	v->a[91368] = sym__heredoc_body;
	v->a[91369] = sym__simple_heredoc_body;
	v->a[91370] = 6;
	v->a[91371] = actions(870);
	v->a[91372] = 1;
	v->a[91373] = sym_comment;
	v->a[91374] = actions(4016);
	v->a[91375] = 1;
	v->a[91376] = sym_simple_heredoc_body;
	v->a[91377] = actions(4018);
	v->a[91378] = 1;
	v->a[91379] = sym__heredoc_body_beginning;
	small_parse_table_4569(v);
}

void	small_parse_table_4569(t_small_parse_table_array *v)
{
	v->a[91380] = state(1353);
	v->a[91381] = 1;
	v->a[91382] = sym__simple_heredoc_body;
	v->a[91383] = state(1356);
	v->a[91384] = 1;
	v->a[91385] = sym__heredoc_body;
	v->a[91386] = state(2220);
	v->a[91387] = 1;
	v->a[91388] = sym_heredoc_body;
	v->a[91389] = 2;
	v->a[91390] = actions(870);
	v->a[91391] = 1;
	v->a[91392] = sym_comment;
	v->a[91393] = actions(970);
	v->a[91394] = 5;
	v->a[91395] = sym__concat;
	v->a[91396] = anon_sym_PIPE;
	v->a[91397] = anon_sym_RPAREN;
	v->a[91398] = anon_sym_RBRACE;
	v->a[91399] = aux_sym_concatenation_token1;
	small_parse_table_4570(v);
}

/* EOF small_parse_table_913.c */
