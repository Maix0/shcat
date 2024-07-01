/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_815.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4075(t_small_parse_table_array *v)
{
	v->a[81500] = 2;
	v->a[81501] = sym__heredoc_body;
	v->a[81502] = sym__simple_heredoc_body;
	v->a[81503] = 5;
	v->a[81504] = actions(664);
	v->a[81505] = 1;
	v->a[81506] = sym_comment;
	v->a[81507] = actions(3613);
	v->a[81508] = 1;
	v->a[81509] = sym__heredoc_body_beginning;
	v->a[81510] = actions(3620);
	v->a[81511] = 1;
	v->a[81512] = sym_simple_heredoc_body;
	v->a[81513] = state(1960);
	v->a[81514] = 1;
	v->a[81515] = sym_heredoc_body;
	v->a[81516] = state(1577);
	v->a[81517] = 2;
	v->a[81518] = sym__heredoc_body;
	v->a[81519] = sym__simple_heredoc_body;
	small_parse_table_4076(v);
}

void	small_parse_table_4076(t_small_parse_table_array *v)
{
	v->a[81520] = 2;
	v->a[81521] = actions(664);
	v->a[81522] = 1;
	v->a[81523] = sym_comment;
	v->a[81524] = actions(662);
	v->a[81525] = 5;
	v->a[81526] = sym__concat;
	v->a[81527] = anon_sym_PIPE;
	v->a[81528] = anon_sym_RPAREN;
	v->a[81529] = anon_sym_RBRACE;
	v->a[81530] = aux_sym_concatenation_token1;
	v->a[81531] = 6;
	v->a[81532] = actions(664);
	v->a[81533] = 1;
	v->a[81534] = sym_comment;
	v->a[81535] = actions(3613);
	v->a[81536] = 1;
	v->a[81537] = sym__heredoc_body_beginning;
	v->a[81538] = actions(3618);
	v->a[81539] = 1;
	small_parse_table_4077(v);
}

void	small_parse_table_4077(t_small_parse_table_array *v)
{
	v->a[81540] = sym_simple_heredoc_body;
	v->a[81541] = state(1192);
	v->a[81542] = 1;
	v->a[81543] = sym__heredoc_body;
	v->a[81544] = state(1193);
	v->a[81545] = 1;
	v->a[81546] = sym__simple_heredoc_body;
	v->a[81547] = state(2071);
	v->a[81548] = 1;
	v->a[81549] = sym_heredoc_body;
	v->a[81550] = 2;
	v->a[81551] = actions(664);
	v->a[81552] = 1;
	v->a[81553] = sym_comment;
	v->a[81554] = actions(770);
	v->a[81555] = 5;
	v->a[81556] = sym__concat;
	v->a[81557] = anon_sym_PIPE;
	v->a[81558] = anon_sym_RPAREN;
	v->a[81559] = anon_sym_RBRACE;
	small_parse_table_4078(v);
}

void	small_parse_table_4078(t_small_parse_table_array *v)
{
	v->a[81560] = aux_sym_concatenation_token1;
	v->a[81561] = 2;
	v->a[81562] = actions(664);
	v->a[81563] = 1;
	v->a[81564] = sym_comment;
	v->a[81565] = actions(753);
	v->a[81566] = 5;
	v->a[81567] = sym__concat;
	v->a[81568] = anon_sym_PIPE;
	v->a[81569] = anon_sym_RPAREN;
	v->a[81570] = anon_sym_RBRACE;
	v->a[81571] = aux_sym_concatenation_token1;
	v->a[81572] = 2;
	v->a[81573] = actions(664);
	v->a[81574] = 1;
	v->a[81575] = sym_comment;
	v->a[81576] = actions(662);
	v->a[81577] = 5;
	v->a[81578] = sym__concat;
	v->a[81579] = anon_sym_PIPE;
	small_parse_table_4079(v);
}

void	small_parse_table_4079(t_small_parse_table_array *v)
{
	v->a[81580] = anon_sym_RPAREN;
	v->a[81581] = anon_sym_RBRACE;
	v->a[81582] = aux_sym_concatenation_token1;
	v->a[81583] = 2;
	v->a[81584] = actions(664);
	v->a[81585] = 1;
	v->a[81586] = sym_comment;
	v->a[81587] = actions(766);
	v->a[81588] = 5;
	v->a[81589] = sym__concat;
	v->a[81590] = anon_sym_PIPE;
	v->a[81591] = anon_sym_RPAREN;
	v->a[81592] = anon_sym_RBRACE;
	v->a[81593] = aux_sym_concatenation_token1;
	v->a[81594] = 2;
	v->a[81595] = actions(664);
	v->a[81596] = 1;
	v->a[81597] = sym_comment;
	v->a[81598] = actions(895);
	v->a[81599] = 5;
	small_parse_table_4080(v);
}

/* EOF small_parse_table_815.c */
