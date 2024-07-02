/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_813.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4065(t_small_parse_table_array *v)
{
	v->a[81300] = 1;
	v->a[81301] = sym_simple_heredoc_body;
	v->a[81302] = actions(3636);
	v->a[81303] = 1;
	v->a[81304] = sym__heredoc_body_beginning;
	v->a[81305] = state(1240);
	v->a[81306] = 1;
	v->a[81307] = sym__heredoc_body;
	v->a[81308] = state(1251);
	v->a[81309] = 1;
	v->a[81310] = sym__simple_heredoc_body;
	v->a[81311] = state(2017);
	v->a[81312] = 1;
	v->a[81313] = sym_heredoc_body;
	v->a[81314] = 6;
	v->a[81315] = actions(680);
	v->a[81316] = 1;
	v->a[81317] = sym_comment;
	v->a[81318] = actions(3636);
	v->a[81319] = 1;
	small_parse_table_4066(v);
}

void	small_parse_table_4066(t_small_parse_table_array *v)
{
	v->a[81320] = sym__heredoc_body_beginning;
	v->a[81321] = actions(3643);
	v->a[81322] = 1;
	v->a[81323] = sym_simple_heredoc_body;
	v->a[81324] = state(1176);
	v->a[81325] = 1;
	v->a[81326] = sym__simple_heredoc_body;
	v->a[81327] = state(1190);
	v->a[81328] = 1;
	v->a[81329] = sym__heredoc_body;
	v->a[81330] = state(2107);
	v->a[81331] = 1;
	v->a[81332] = sym_heredoc_body;
	v->a[81333] = 6;
	v->a[81334] = actions(680);
	v->a[81335] = 1;
	v->a[81336] = sym_comment;
	v->a[81337] = actions(3634);
	v->a[81338] = 1;
	v->a[81339] = sym_simple_heredoc_body;
	small_parse_table_4067(v);
}

void	small_parse_table_4067(t_small_parse_table_array *v)
{
	v->a[81340] = actions(3636);
	v->a[81341] = 1;
	v->a[81342] = sym__heredoc_body_beginning;
	v->a[81343] = state(1246);
	v->a[81344] = 1;
	v->a[81345] = sym__simple_heredoc_body;
	v->a[81346] = state(1261);
	v->a[81347] = 1;
	v->a[81348] = sym__heredoc_body;
	v->a[81349] = state(2017);
	v->a[81350] = 1;
	v->a[81351] = sym_heredoc_body;
	v->a[81352] = 5;
	v->a[81353] = actions(680);
	v->a[81354] = 1;
	v->a[81355] = sym_comment;
	v->a[81356] = actions(3636);
	v->a[81357] = 1;
	v->a[81358] = sym__heredoc_body_beginning;
	v->a[81359] = actions(3643);
	small_parse_table_4068(v);
}

void	small_parse_table_4068(t_small_parse_table_array *v)
{
	v->a[81360] = 1;
	v->a[81361] = sym_simple_heredoc_body;
	v->a[81362] = state(2107);
	v->a[81363] = 1;
	v->a[81364] = sym_heredoc_body;
	v->a[81365] = state(1124);
	v->a[81366] = 2;
	v->a[81367] = sym__heredoc_body;
	v->a[81368] = sym__simple_heredoc_body;
	v->a[81369] = 6;
	v->a[81370] = actions(680);
	v->a[81371] = 1;
	v->a[81372] = sym_comment;
	v->a[81373] = actions(3634);
	v->a[81374] = 1;
	v->a[81375] = sym_simple_heredoc_body;
	v->a[81376] = actions(3636);
	v->a[81377] = 1;
	v->a[81378] = sym__heredoc_body_beginning;
	v->a[81379] = state(1247);
	small_parse_table_4069(v);
}

void	small_parse_table_4069(t_small_parse_table_array *v)
{
	v->a[81380] = 1;
	v->a[81381] = sym__heredoc_body;
	v->a[81382] = state(1248);
	v->a[81383] = 1;
	v->a[81384] = sym__simple_heredoc_body;
	v->a[81385] = state(2017);
	v->a[81386] = 1;
	v->a[81387] = sym_heredoc_body;
	v->a[81388] = 6;
	v->a[81389] = actions(680);
	v->a[81390] = 1;
	v->a[81391] = sym_comment;
	v->a[81392] = actions(3636);
	v->a[81393] = 1;
	v->a[81394] = sym__heredoc_body_beginning;
	v->a[81395] = actions(3643);
	v->a[81396] = 1;
	v->a[81397] = sym_simple_heredoc_body;
	v->a[81398] = state(1117);
	v->a[81399] = 1;
	small_parse_table_4070(v);
}

/* EOF small_parse_table_813.c */
