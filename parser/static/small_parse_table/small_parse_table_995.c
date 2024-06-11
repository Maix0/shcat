/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_995.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4975(t_small_parse_table_array *v)
{
	v->a[99500] = 1;
	v->a[99501] = sym_comment;
	v->a[99502] = actions(4464);
	v->a[99503] = 1;
	v->a[99504] = sym__heredoc_body_beginning;
	v->a[99505] = actions(4466);
	v->a[99506] = 1;
	v->a[99507] = sym_simple_heredoc_body;
	v->a[99508] = state(1764);
	v->a[99509] = 1;
	v->a[99510] = sym__heredoc_body;
	v->a[99511] = state(1765);
	v->a[99512] = 1;
	v->a[99513] = sym__simple_heredoc_body;
	v->a[99514] = state(2281);
	v->a[99515] = 1;
	v->a[99516] = sym_heredoc_body;
	v->a[99517] = 4;
	v->a[99518] = actions(1094);
	v->a[99519] = 1;
	small_parse_table_4976(v);
}

void	small_parse_table_4976(t_small_parse_table_array *v)
{
	v->a[99520] = sym_comment;
	v->a[99521] = state(2170);
	v->a[99522] = 1;
	v->a[99523] = aux_sym_concatenation_repeat1;
	v->a[99524] = actions(4434);
	v->a[99525] = 2;
	v->a[99526] = sym__concat;
	v->a[99527] = aux_sym_concatenation_token1;
	v->a[99528] = actions(4468);
	v->a[99529] = 2;
	v->a[99530] = anon_sym_PIPE;
	v->a[99531] = anon_sym_RPAREN;
	v->a[99532] = 6;
	v->a[99533] = actions(1094);
	v->a[99534] = 1;
	v->a[99535] = sym_comment;
	v->a[99536] = actions(4464);
	v->a[99537] = 1;
	v->a[99538] = sym__heredoc_body_beginning;
	v->a[99539] = actions(4470);
	small_parse_table_4977(v);
}

void	small_parse_table_4977(t_small_parse_table_array *v)
{
	v->a[99540] = 1;
	v->a[99541] = sym_simple_heredoc_body;
	v->a[99542] = state(1308);
	v->a[99543] = 1;
	v->a[99544] = sym__heredoc_body;
	v->a[99545] = state(1437);
	v->a[99546] = 1;
	v->a[99547] = sym__simple_heredoc_body;
	v->a[99548] = state(2390);
	v->a[99549] = 1;
	v->a[99550] = sym_heredoc_body;
	v->a[99551] = 5;
	v->a[99552] = actions(1094);
	v->a[99553] = 1;
	v->a[99554] = sym_comment;
	v->a[99555] = actions(4464);
	v->a[99556] = 1;
	v->a[99557] = sym__heredoc_body_beginning;
	v->a[99558] = actions(4470);
	v->a[99559] = 1;
	small_parse_table_4978(v);
}

void	small_parse_table_4978(t_small_parse_table_array *v)
{
	v->a[99560] = sym_simple_heredoc_body;
	v->a[99561] = state(2390);
	v->a[99562] = 1;
	v->a[99563] = sym_heredoc_body;
	v->a[99564] = state(1319);
	v->a[99565] = 2;
	v->a[99566] = sym__heredoc_body;
	v->a[99567] = sym__simple_heredoc_body;
	v->a[99568] = 5;
	v->a[99569] = actions(1094);
	v->a[99570] = 1;
	v->a[99571] = sym_comment;
	v->a[99572] = actions(4462);
	v->a[99573] = 1;
	v->a[99574] = sym_simple_heredoc_body;
	v->a[99575] = actions(4464);
	v->a[99576] = 1;
	v->a[99577] = sym__heredoc_body_beginning;
	v->a[99578] = state(2439);
	v->a[99579] = 1;
	small_parse_table_4979(v);
}

void	small_parse_table_4979(t_small_parse_table_array *v)
{
	v->a[99580] = sym_heredoc_body;
	v->a[99581] = state(1503);
	v->a[99582] = 2;
	v->a[99583] = sym__heredoc_body;
	v->a[99584] = sym__simple_heredoc_body;
	v->a[99585] = 5;
	v->a[99586] = actions(1094);
	v->a[99587] = 1;
	v->a[99588] = sym_comment;
	v->a[99589] = actions(4464);
	v->a[99590] = 1;
	v->a[99591] = sym__heredoc_body_beginning;
	v->a[99592] = actions(4466);
	v->a[99593] = 1;
	v->a[99594] = sym_simple_heredoc_body;
	v->a[99595] = state(2281);
	v->a[99596] = 1;
	v->a[99597] = sym_heredoc_body;
	v->a[99598] = state(1752);
	v->a[99599] = 2;
	small_parse_table_4980(v);
}

/* EOF small_parse_table_995.c */
