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
	v->a[81200] = actions(3627);
	v->a[81201] = 2;
	v->a[81202] = anon_sym_PIPE;
	v->a[81203] = anon_sym_RPAREN;
	v->a[81204] = 6;
	v->a[81205] = actions(664);
	v->a[81206] = 1;
	v->a[81207] = sym_comment;
	v->a[81208] = actions(3611);
	v->a[81209] = 1;
	v->a[81210] = sym_simple_heredoc_body;
	v->a[81211] = actions(3613);
	v->a[81212] = 1;
	v->a[81213] = sym__heredoc_body_beginning;
	v->a[81214] = state(1247);
	v->a[81215] = 1;
	v->a[81216] = sym__heredoc_body;
	v->a[81217] = state(1250);
	v->a[81218] = 1;
	v->a[81219] = sym__simple_heredoc_body;
	small_parse_table_4061(v);
}

void	small_parse_table_4061(t_small_parse_table_array *v)
{
	v->a[81220] = state(1927);
	v->a[81221] = 1;
	v->a[81222] = sym_heredoc_body;
	v->a[81223] = 5;
	v->a[81224] = actions(664);
	v->a[81225] = 1;
	v->a[81226] = sym_comment;
	v->a[81227] = actions(3613);
	v->a[81228] = 1;
	v->a[81229] = sym__heredoc_body_beginning;
	v->a[81230] = actions(3620);
	v->a[81231] = 1;
	v->a[81232] = sym_simple_heredoc_body;
	v->a[81233] = state(1960);
	v->a[81234] = 1;
	v->a[81235] = sym_heredoc_body;
	v->a[81236] = state(1536);
	v->a[81237] = 2;
	v->a[81238] = sym__heredoc_body;
	v->a[81239] = sym__simple_heredoc_body;
	small_parse_table_4062(v);
}

void	small_parse_table_4062(t_small_parse_table_array *v)
{
	v->a[81240] = 6;
	v->a[81241] = actions(664);
	v->a[81242] = 1;
	v->a[81243] = sym_comment;
	v->a[81244] = actions(3613);
	v->a[81245] = 1;
	v->a[81246] = sym__heredoc_body_beginning;
	v->a[81247] = actions(3620);
	v->a[81248] = 1;
	v->a[81249] = sym_simple_heredoc_body;
	v->a[81250] = state(1538);
	v->a[81251] = 1;
	v->a[81252] = sym__simple_heredoc_body;
	v->a[81253] = state(1539);
	v->a[81254] = 1;
	v->a[81255] = sym__heredoc_body;
	v->a[81256] = state(1960);
	v->a[81257] = 1;
	v->a[81258] = sym_heredoc_body;
	v->a[81259] = 6;
	small_parse_table_4063(v);
}

void	small_parse_table_4063(t_small_parse_table_array *v)
{
	v->a[81260] = actions(664);
	v->a[81261] = 1;
	v->a[81262] = sym_comment;
	v->a[81263] = actions(3613);
	v->a[81264] = 1;
	v->a[81265] = sym__heredoc_body_beginning;
	v->a[81266] = actions(3620);
	v->a[81267] = 1;
	v->a[81268] = sym_simple_heredoc_body;
	v->a[81269] = state(1541);
	v->a[81270] = 1;
	v->a[81271] = sym__simple_heredoc_body;
	v->a[81272] = state(1542);
	v->a[81273] = 1;
	v->a[81274] = sym__heredoc_body;
	v->a[81275] = state(1960);
	v->a[81276] = 1;
	v->a[81277] = sym_heredoc_body;
	v->a[81278] = 5;
	v->a[81279] = actions(664);
	small_parse_table_4064(v);
}

void	small_parse_table_4064(t_small_parse_table_array *v)
{
	v->a[81280] = 1;
	v->a[81281] = sym_comment;
	v->a[81282] = actions(3613);
	v->a[81283] = 1;
	v->a[81284] = sym__heredoc_body_beginning;
	v->a[81285] = actions(3620);
	v->a[81286] = 1;
	v->a[81287] = sym_simple_heredoc_body;
	v->a[81288] = state(1960);
	v->a[81289] = 1;
	v->a[81290] = sym_heredoc_body;
	v->a[81291] = state(1543);
	v->a[81292] = 2;
	v->a[81293] = sym__heredoc_body;
	v->a[81294] = sym__simple_heredoc_body;
	v->a[81295] = 5;
	v->a[81296] = actions(664);
	v->a[81297] = 1;
	v->a[81298] = sym_comment;
	v->a[81299] = actions(3587);
	small_parse_table_4065(v);
}

/* EOF small_parse_table_812.c */
