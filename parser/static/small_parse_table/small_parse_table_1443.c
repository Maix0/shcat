/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1443.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_7215(t_small_parse_table_array *v)
{
	v->a[144300] = 1;
	v->a[144301] = sym__heredoc_body;
	v->a[144302] = state(2399);
	v->a[144303] = 1;
	v->a[144304] = sym__simple_heredoc_body;
	v->a[144305] = state(3949);
	v->a[144306] = 1;
	v->a[144307] = sym_heredoc_body;
	v->a[144308] = 5;
	v->a[144309] = actions(57);
	v->a[144310] = 1;
	v->a[144311] = sym_comment;
	v->a[144312] = actions(8635);
	v->a[144313] = 1;
	v->a[144314] = sym_simple_heredoc_body;
	v->a[144315] = actions(8637);
	v->a[144316] = 1;
	v->a[144317] = sym__heredoc_body_beginning;
	v->a[144318] = state(3949);
	v->a[144319] = 1;
	small_parse_table_7216(v);
}

void	small_parse_table_7216(t_small_parse_table_array *v)
{
	v->a[144320] = sym_heredoc_body;
	v->a[144321] = state(2400);
	v->a[144322] = 2;
	v->a[144323] = sym__heredoc_body;
	v->a[144324] = sym__simple_heredoc_body;
	v->a[144325] = 5;
	v->a[144326] = actions(57);
	v->a[144327] = 1;
	v->a[144328] = sym_comment;
	v->a[144329] = actions(8637);
	v->a[144330] = 1;
	v->a[144331] = sym__heredoc_body_beginning;
	v->a[144332] = actions(8653);
	v->a[144333] = 1;
	v->a[144334] = sym_simple_heredoc_body;
	v->a[144335] = state(3836);
	v->a[144336] = 1;
	v->a[144337] = sym_heredoc_body;
	v->a[144338] = state(2787);
	v->a[144339] = 2;
	small_parse_table_7217(v);
}

void	small_parse_table_7217(t_small_parse_table_array *v)
{
	v->a[144340] = sym__heredoc_body;
	v->a[144341] = sym__simple_heredoc_body;
	v->a[144342] = 6;
	v->a[144343] = actions(57);
	v->a[144344] = 1;
	v->a[144345] = sym_comment;
	v->a[144346] = actions(8637);
	v->a[144347] = 1;
	v->a[144348] = sym__heredoc_body_beginning;
	v->a[144349] = actions(8639);
	v->a[144350] = 1;
	v->a[144351] = sym_simple_heredoc_body;
	v->a[144352] = state(2225);
	v->a[144353] = 1;
	v->a[144354] = sym__simple_heredoc_body;
	v->a[144355] = state(2233);
	v->a[144356] = 1;
	v->a[144357] = sym__heredoc_body;
	v->a[144358] = state(3852);
	v->a[144359] = 1;
	small_parse_table_7218(v);
}

void	small_parse_table_7218(t_small_parse_table_array *v)
{
	v->a[144360] = sym_heredoc_body;
	v->a[144361] = 5;
	v->a[144362] = actions(57);
	v->a[144363] = 1;
	v->a[144364] = sym_comment;
	v->a[144365] = actions(8637);
	v->a[144366] = 1;
	v->a[144367] = sym__heredoc_body_beginning;
	v->a[144368] = actions(8655);
	v->a[144369] = 1;
	v->a[144370] = sym_simple_heredoc_body;
	v->a[144371] = state(3977);
	v->a[144372] = 1;
	v->a[144373] = sym_heredoc_body;
	v->a[144374] = state(2257);
	v->a[144375] = 2;
	v->a[144376] = sym__heredoc_body;
	v->a[144377] = sym__simple_heredoc_body;
	v->a[144378] = 5;
	v->a[144379] = actions(57);
	small_parse_table_7219(v);
}

void	small_parse_table_7219(t_small_parse_table_array *v)
{
	v->a[144380] = 1;
	v->a[144381] = sym_comment;
	v->a[144382] = actions(8635);
	v->a[144383] = 1;
	v->a[144384] = sym_simple_heredoc_body;
	v->a[144385] = actions(8637);
	v->a[144386] = 1;
	v->a[144387] = sym__heredoc_body_beginning;
	v->a[144388] = state(3949);
	v->a[144389] = 1;
	v->a[144390] = sym_heredoc_body;
	v->a[144391] = state(2348);
	v->a[144392] = 2;
	v->a[144393] = sym__heredoc_body;
	v->a[144394] = sym__simple_heredoc_body;
	v->a[144395] = 5;
	v->a[144396] = actions(57);
	v->a[144397] = 1;
	v->a[144398] = sym_comment;
	v->a[144399] = actions(8549);
	small_parse_table_7220(v);
}

/* EOF small_parse_table_1443.c */
