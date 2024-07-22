/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_803.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4015(t_small_parse_table_array *v)
{
	v->a[80300] = 1;
	v->a[80301] = sym_comment;
	v->a[80302] = actions(3630);
	v->a[80303] = 1;
	v->a[80304] = sym__heredoc_body_beginning;
	v->a[80305] = actions(3634);
	v->a[80306] = 1;
	v->a[80307] = sym_simple_heredoc_body;
	v->a[80308] = state(1508);
	v->a[80309] = 1;
	v->a[80310] = sym__simple_heredoc_body;
	v->a[80311] = state(1576);
	v->a[80312] = 1;
	v->a[80313] = sym__heredoc_body;
	v->a[80314] = state(2102);
	v->a[80315] = 1;
	v->a[80316] = sym_heredoc_body;
	v->a[80317] = 6;
	v->a[80318] = actions(501);
	v->a[80319] = 1;
	small_parse_table_4016(v);
}

void	small_parse_table_4016(t_small_parse_table_array *v)
{
	v->a[80320] = sym_comment;
	v->a[80321] = actions(3630);
	v->a[80322] = 1;
	v->a[80323] = sym__heredoc_body_beginning;
	v->a[80324] = actions(3634);
	v->a[80325] = 1;
	v->a[80326] = sym_simple_heredoc_body;
	v->a[80327] = state(1512);
	v->a[80328] = 1;
	v->a[80329] = sym__heredoc_body;
	v->a[80330] = state(1518);
	v->a[80331] = 1;
	v->a[80332] = sym__simple_heredoc_body;
	v->a[80333] = state(2102);
	v->a[80334] = 1;
	v->a[80335] = sym_heredoc_body;
	v->a[80336] = 6;
	v->a[80337] = actions(501);
	v->a[80338] = 1;
	v->a[80339] = sym_comment;
	small_parse_table_4017(v);
}

void	small_parse_table_4017(t_small_parse_table_array *v)
{
	v->a[80340] = actions(3628);
	v->a[80341] = 1;
	v->a[80342] = sym_simple_heredoc_body;
	v->a[80343] = actions(3630);
	v->a[80344] = 1;
	v->a[80345] = sym__heredoc_body_beginning;
	v->a[80346] = state(1127);
	v->a[80347] = 1;
	v->a[80348] = sym__heredoc_body;
	v->a[80349] = state(1139);
	v->a[80350] = 1;
	v->a[80351] = sym__simple_heredoc_body;
	v->a[80352] = state(2113);
	v->a[80353] = 1;
	v->a[80354] = sym_heredoc_body;
	v->a[80355] = 5;
	v->a[80356] = actions(501);
	v->a[80357] = 1;
	v->a[80358] = sym_comment;
	v->a[80359] = actions(3630);
	small_parse_table_4018(v);
}

void	small_parse_table_4018(t_small_parse_table_array *v)
{
	v->a[80360] = 1;
	v->a[80361] = sym__heredoc_body_beginning;
	v->a[80362] = actions(3634);
	v->a[80363] = 1;
	v->a[80364] = sym_simple_heredoc_body;
	v->a[80365] = state(2102);
	v->a[80366] = 1;
	v->a[80367] = sym_heredoc_body;
	v->a[80368] = state(1531);
	v->a[80369] = 2;
	v->a[80370] = sym__heredoc_body;
	v->a[80371] = sym__simple_heredoc_body;
	v->a[80372] = 6;
	v->a[80373] = actions(501);
	v->a[80374] = 1;
	v->a[80375] = sym_comment;
	v->a[80376] = actions(3630);
	v->a[80377] = 1;
	v->a[80378] = sym__heredoc_body_beginning;
	v->a[80379] = actions(3634);
	small_parse_table_4019(v);
}

void	small_parse_table_4019(t_small_parse_table_array *v)
{
	v->a[80380] = 1;
	v->a[80381] = sym_simple_heredoc_body;
	v->a[80382] = state(1502);
	v->a[80383] = 1;
	v->a[80384] = sym__simple_heredoc_body;
	v->a[80385] = state(1547);
	v->a[80386] = 1;
	v->a[80387] = sym__heredoc_body;
	v->a[80388] = state(2102);
	v->a[80389] = 1;
	v->a[80390] = sym_heredoc_body;
	v->a[80391] = 5;
	v->a[80392] = actions(501);
	v->a[80393] = 1;
	v->a[80394] = sym_comment;
	v->a[80395] = actions(3630);
	v->a[80396] = 1;
	v->a[80397] = sym__heredoc_body_beginning;
	v->a[80398] = actions(3645);
	v->a[80399] = 1;
	small_parse_table_4020(v);
}

/* EOF small_parse_table_803.c */
