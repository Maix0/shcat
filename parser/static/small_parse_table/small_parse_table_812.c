/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_812.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4060(t_small_parse_table_array *v)
{
	v->a[81200] = state(1533);
	v->a[81201] = 1;
	v->a[81202] = sym__heredoc_body;
	v->a[81203] = state(2018);
	v->a[81204] = 1;
	v->a[81205] = sym_heredoc_body;
	v->a[81206] = 5;
	v->a[81207] = actions(680);
	v->a[81208] = 1;
	v->a[81209] = sym_comment;
	v->a[81210] = actions(3636);
	v->a[81211] = 1;
	v->a[81212] = sym__heredoc_body_beginning;
	v->a[81213] = actions(3643);
	v->a[81214] = 1;
	v->a[81215] = sym_simple_heredoc_body;
	v->a[81216] = state(2107);
	v->a[81217] = 1;
	v->a[81218] = sym_heredoc_body;
	v->a[81219] = state(1194);
	small_parse_table_4061(v);
}

void	small_parse_table_4061(t_small_parse_table_array *v)
{
	v->a[81220] = 2;
	v->a[81221] = sym__heredoc_body;
	v->a[81222] = sym__simple_heredoc_body;
	v->a[81223] = 5;
	v->a[81224] = actions(680);
	v->a[81225] = 1;
	v->a[81226] = sym_comment;
	v->a[81227] = actions(3636);
	v->a[81228] = 1;
	v->a[81229] = sym__heredoc_body_beginning;
	v->a[81230] = actions(3638);
	v->a[81231] = 1;
	v->a[81232] = sym_simple_heredoc_body;
	v->a[81233] = state(2018);
	v->a[81234] = 1;
	v->a[81235] = sym_heredoc_body;
	v->a[81236] = state(1542);
	v->a[81237] = 2;
	v->a[81238] = sym__heredoc_body;
	v->a[81239] = sym__simple_heredoc_body;
	small_parse_table_4062(v);
}

void	small_parse_table_4062(t_small_parse_table_array *v)
{
	v->a[81240] = 5;
	v->a[81241] = actions(680);
	v->a[81242] = 1;
	v->a[81243] = sym_comment;
	v->a[81244] = actions(3606);
	v->a[81245] = 1;
	v->a[81246] = aux_sym_concatenation_token1;
	v->a[81247] = actions(3645);
	v->a[81248] = 1;
	v->a[81249] = sym__concat;
	v->a[81250] = state(1821);
	v->a[81251] = 1;
	v->a[81252] = aux_sym_concatenation_repeat1;
	v->a[81253] = actions(1043);
	v->a[81254] = 2;
	v->a[81255] = anon_sym_PIPE;
	v->a[81256] = anon_sym_RPAREN;
	v->a[81257] = 6;
	v->a[81258] = actions(680);
	v->a[81259] = 1;
	small_parse_table_4063(v);
}

void	small_parse_table_4063(t_small_parse_table_array *v)
{
	v->a[81260] = sym_comment;
	v->a[81261] = actions(3636);
	v->a[81262] = 1;
	v->a[81263] = sym__heredoc_body_beginning;
	v->a[81264] = actions(3643);
	v->a[81265] = 1;
	v->a[81266] = sym_simple_heredoc_body;
	v->a[81267] = state(1195);
	v->a[81268] = 1;
	v->a[81269] = sym__heredoc_body;
	v->a[81270] = state(1197);
	v->a[81271] = 1;
	v->a[81272] = sym__simple_heredoc_body;
	v->a[81273] = state(2107);
	v->a[81274] = 1;
	v->a[81275] = sym_heredoc_body;
	v->a[81276] = 6;
	v->a[81277] = actions(680);
	v->a[81278] = 1;
	v->a[81279] = sym_comment;
	small_parse_table_4064(v);
}

void	small_parse_table_4064(t_small_parse_table_array *v)
{
	v->a[81280] = actions(3634);
	v->a[81281] = 1;
	v->a[81282] = sym_simple_heredoc_body;
	v->a[81283] = actions(3636);
	v->a[81284] = 1;
	v->a[81285] = sym__heredoc_body_beginning;
	v->a[81286] = state(1223);
	v->a[81287] = 1;
	v->a[81288] = sym__simple_heredoc_body;
	v->a[81289] = state(1256);
	v->a[81290] = 1;
	v->a[81291] = sym__heredoc_body;
	v->a[81292] = state(2017);
	v->a[81293] = 1;
	v->a[81294] = sym_heredoc_body;
	v->a[81295] = 6;
	v->a[81296] = actions(680);
	v->a[81297] = 1;
	v->a[81298] = sym_comment;
	v->a[81299] = actions(3634);
	small_parse_table_4065(v);
}

/* EOF small_parse_table_812.c */
