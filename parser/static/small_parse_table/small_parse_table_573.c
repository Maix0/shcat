/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_573.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2865(t_small_parse_table_array *v)
{
	v->a[57300] = anon_sym_PIPE;
	v->a[57301] = anon_sym_RPAREN;
	v->a[57302] = 2;
	v->a[57303] = actions(1436);
	v->a[57304] = 1;
	v->a[57305] = sym_comment;
	v->a[57306] = actions(1046);
	v->a[57307] = 5;
	v->a[57308] = sym__concat;
	v->a[57309] = anon_sym_PIPE;
	v->a[57310] = anon_sym_RPAREN;
	v->a[57311] = anon_sym_RBRACE;
	v->a[57312] = aux_sym_concatenation_token1;
	v->a[57313] = 5;
	v->a[57314] = actions(3);
	v->a[57315] = 1;
	v->a[57316] = sym_comment;
	v->a[57317] = actions(2889);
	v->a[57318] = 1;
	v->a[57319] = aux_sym_heredoc_redirect_token1;
	small_parse_table_2866(v);
}

void	small_parse_table_2866(t_small_parse_table_array *v)
{
	v->a[57320] = actions(2901);
	v->a[57321] = 1;
	v->a[57322] = anon_sym_in;
	v->a[57323] = state(1579);
	v->a[57324] = 1;
	v->a[57325] = sym_terminator;
	v->a[57326] = actions(1348);
	v->a[57327] = 2;
	v->a[57328] = anon_sym_SEMI_SEMI;
	v->a[57329] = anon_sym_SEMI;
	v->a[57330] = 6;
	v->a[57331] = actions(1436);
	v->a[57332] = 1;
	v->a[57333] = sym_comment;
	v->a[57334] = actions(2962);
	v->a[57335] = 1;
	v->a[57336] = sym__heredoc_body_beginning;
	v->a[57337] = actions(2964);
	v->a[57338] = 1;
	v->a[57339] = sym_simple_heredoc_body;
	small_parse_table_2867(v);
}

void	small_parse_table_2867(t_small_parse_table_array *v)
{
	v->a[57340] = state(1271);
	v->a[57341] = 1;
	v->a[57342] = sym__heredoc_body;
	v->a[57343] = state(1272);
	v->a[57344] = 1;
	v->a[57345] = sym__simple_heredoc_body;
	v->a[57346] = state(1662);
	v->a[57347] = 1;
	v->a[57348] = sym_heredoc_body;
	v->a[57349] = 5;
	v->a[57350] = actions(3);
	v->a[57351] = 1;
	v->a[57352] = sym_comment;
	v->a[57353] = actions(2889);
	v->a[57354] = 1;
	v->a[57355] = aux_sym_heredoc_redirect_token1;
	v->a[57356] = actions(2971);
	v->a[57357] = 1;
	v->a[57358] = anon_sym_in;
	v->a[57359] = state(1554);
	small_parse_table_2868(v);
}

void	small_parse_table_2868(t_small_parse_table_array *v)
{
	v->a[57360] = 1;
	v->a[57361] = sym_terminator;
	v->a[57362] = actions(1348);
	v->a[57363] = 2;
	v->a[57364] = anon_sym_SEMI_SEMI;
	v->a[57365] = anon_sym_SEMI;
	v->a[57366] = 5;
	v->a[57367] = actions(3);
	v->a[57368] = 1;
	v->a[57369] = sym_comment;
	v->a[57370] = actions(2889);
	v->a[57371] = 1;
	v->a[57372] = aux_sym_heredoc_redirect_token1;
	v->a[57373] = actions(2973);
	v->a[57374] = 1;
	v->a[57375] = anon_sym_in;
	v->a[57376] = state(1565);
	v->a[57377] = 1;
	v->a[57378] = sym_terminator;
	v->a[57379] = actions(1348);
	small_parse_table_2869(v);
}

void	small_parse_table_2869(t_small_parse_table_array *v)
{
	v->a[57380] = 2;
	v->a[57381] = anon_sym_SEMI_SEMI;
	v->a[57382] = anon_sym_SEMI;
	v->a[57383] = 5;
	v->a[57384] = actions(1436);
	v->a[57385] = 1;
	v->a[57386] = sym_comment;
	v->a[57387] = actions(2960);
	v->a[57388] = 1;
	v->a[57389] = sym_simple_heredoc_body;
	v->a[57390] = actions(2962);
	v->a[57391] = 1;
	v->a[57392] = sym__heredoc_body_beginning;
	v->a[57393] = state(1664);
	v->a[57394] = 1;
	v->a[57395] = sym_heredoc_body;
	v->a[57396] = state(1043);
	v->a[57397] = 2;
	v->a[57398] = sym__heredoc_body;
	v->a[57399] = sym__simple_heredoc_body;
	small_parse_table_2870(v);
}

/* EOF small_parse_table_573.c */
