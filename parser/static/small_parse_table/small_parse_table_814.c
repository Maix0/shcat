/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_814.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4070(t_small_parse_table_array *v)
{
	v->a[81400] = 1;
	v->a[81401] = sym__heredoc_body_beginning;
	v->a[81402] = actions(3618);
	v->a[81403] = 1;
	v->a[81404] = sym_simple_heredoc_body;
	v->a[81405] = state(1162);
	v->a[81406] = 1;
	v->a[81407] = sym__heredoc_body;
	v->a[81408] = state(1163);
	v->a[81409] = 1;
	v->a[81410] = sym__simple_heredoc_body;
	v->a[81411] = state(2071);
	v->a[81412] = 1;
	v->a[81413] = sym_heredoc_body;
	v->a[81414] = 5;
	v->a[81415] = actions(664);
	v->a[81416] = 1;
	v->a[81417] = sym_comment;
	v->a[81418] = actions(3613);
	v->a[81419] = 1;
	small_parse_table_4071(v);
}

void	small_parse_table_4071(t_small_parse_table_array *v)
{
	v->a[81420] = sym__heredoc_body_beginning;
	v->a[81421] = actions(3620);
	v->a[81422] = 1;
	v->a[81423] = sym_simple_heredoc_body;
	v->a[81424] = state(1960);
	v->a[81425] = 1;
	v->a[81426] = sym_heredoc_body;
	v->a[81427] = state(1551);
	v->a[81428] = 2;
	v->a[81429] = sym__heredoc_body;
	v->a[81430] = sym__simple_heredoc_body;
	v->a[81431] = 6;
	v->a[81432] = actions(664);
	v->a[81433] = 1;
	v->a[81434] = sym_comment;
	v->a[81435] = actions(3613);
	v->a[81436] = 1;
	v->a[81437] = sym__heredoc_body_beginning;
	v->a[81438] = actions(3620);
	v->a[81439] = 1;
	small_parse_table_4072(v);
}

void	small_parse_table_4072(t_small_parse_table_array *v)
{
	v->a[81440] = sym_simple_heredoc_body;
	v->a[81441] = state(1552);
	v->a[81442] = 1;
	v->a[81443] = sym__simple_heredoc_body;
	v->a[81444] = state(1553);
	v->a[81445] = 1;
	v->a[81446] = sym__heredoc_body;
	v->a[81447] = state(1960);
	v->a[81448] = 1;
	v->a[81449] = sym_heredoc_body;
	v->a[81450] = 6;
	v->a[81451] = actions(664);
	v->a[81452] = 1;
	v->a[81453] = sym_comment;
	v->a[81454] = actions(3613);
	v->a[81455] = 1;
	v->a[81456] = sym__heredoc_body_beginning;
	v->a[81457] = actions(3620);
	v->a[81458] = 1;
	v->a[81459] = sym_simple_heredoc_body;
	small_parse_table_4073(v);
}

void	small_parse_table_4073(t_small_parse_table_array *v)
{
	v->a[81460] = state(1554);
	v->a[81461] = 1;
	v->a[81462] = sym__simple_heredoc_body;
	v->a[81463] = state(1555);
	v->a[81464] = 1;
	v->a[81465] = sym__heredoc_body;
	v->a[81466] = state(1960);
	v->a[81467] = 1;
	v->a[81468] = sym_heredoc_body;
	v->a[81469] = 5;
	v->a[81470] = actions(664);
	v->a[81471] = 1;
	v->a[81472] = sym_comment;
	v->a[81473] = actions(3613);
	v->a[81474] = 1;
	v->a[81475] = sym__heredoc_body_beginning;
	v->a[81476] = actions(3620);
	v->a[81477] = 1;
	v->a[81478] = sym_simple_heredoc_body;
	v->a[81479] = state(1960);
	small_parse_table_4074(v);
}

void	small_parse_table_4074(t_small_parse_table_array *v)
{
	v->a[81480] = 1;
	v->a[81481] = sym_heredoc_body;
	v->a[81482] = state(1556);
	v->a[81483] = 2;
	v->a[81484] = sym__heredoc_body;
	v->a[81485] = sym__simple_heredoc_body;
	v->a[81486] = 5;
	v->a[81487] = actions(664);
	v->a[81488] = 1;
	v->a[81489] = sym_comment;
	v->a[81490] = actions(3613);
	v->a[81491] = 1;
	v->a[81492] = sym__heredoc_body_beginning;
	v->a[81493] = actions(3620);
	v->a[81494] = 1;
	v->a[81495] = sym_simple_heredoc_body;
	v->a[81496] = state(1960);
	v->a[81497] = 1;
	v->a[81498] = sym_heredoc_body;
	v->a[81499] = state(1562);
	small_parse_table_4075(v);
}

/* EOF small_parse_table_814.c */
