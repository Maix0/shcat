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
	v->a[81500] = 1;
	v->a[81501] = sym__heredoc_body;
	v->a[81502] = state(1146);
	v->a[81503] = 1;
	v->a[81504] = sym__simple_heredoc_body;
	v->a[81505] = state(2107);
	v->a[81506] = 1;
	v->a[81507] = sym_heredoc_body;
	v->a[81508] = 2;
	v->a[81509] = actions(680);
	v->a[81510] = 1;
	v->a[81511] = sym_comment;
	v->a[81512] = actions(835);
	v->a[81513] = 5;
	v->a[81514] = sym__concat;
	v->a[81515] = anon_sym_PIPE;
	v->a[81516] = anon_sym_RPAREN;
	v->a[81517] = anon_sym_RBRACE;
	v->a[81518] = aux_sym_concatenation_token1;
	v->a[81519] = 2;
	small_parse_table_4076(v);
}

void	small_parse_table_4076(t_small_parse_table_array *v)
{
	v->a[81520] = actions(680);
	v->a[81521] = 1;
	v->a[81522] = sym_comment;
	v->a[81523] = actions(784);
	v->a[81524] = 5;
	v->a[81525] = sym__concat;
	v->a[81526] = anon_sym_PIPE;
	v->a[81527] = anon_sym_RPAREN;
	v->a[81528] = anon_sym_RBRACE;
	v->a[81529] = aux_sym_concatenation_token1;
	v->a[81530] = 2;
	v->a[81531] = actions(680);
	v->a[81532] = 1;
	v->a[81533] = sym_comment;
	v->a[81534] = actions(757);
	v->a[81535] = 5;
	v->a[81536] = sym__concat;
	v->a[81537] = anon_sym_PIPE;
	v->a[81538] = anon_sym_RPAREN;
	v->a[81539] = anon_sym_RBRACE;
	small_parse_table_4077(v);
}

void	small_parse_table_4077(t_small_parse_table_array *v)
{
	v->a[81540] = aux_sym_concatenation_token1;
	v->a[81541] = 6;
	v->a[81542] = actions(680);
	v->a[81543] = 1;
	v->a[81544] = sym_comment;
	v->a[81545] = actions(3634);
	v->a[81546] = 1;
	v->a[81547] = sym_simple_heredoc_body;
	v->a[81548] = actions(3636);
	v->a[81549] = 1;
	v->a[81550] = sym__heredoc_body_beginning;
	v->a[81551] = state(1213);
	v->a[81552] = 1;
	v->a[81553] = sym__simple_heredoc_body;
	v->a[81554] = state(1220);
	v->a[81555] = 1;
	v->a[81556] = sym__heredoc_body;
	v->a[81557] = state(2017);
	v->a[81558] = 1;
	v->a[81559] = sym_heredoc_body;
	small_parse_table_4078(v);
}

void	small_parse_table_4078(t_small_parse_table_array *v)
{
	v->a[81560] = 5;
	v->a[81561] = actions(680);
	v->a[81562] = 1;
	v->a[81563] = sym_comment;
	v->a[81564] = actions(3636);
	v->a[81565] = 1;
	v->a[81566] = sym__heredoc_body_beginning;
	v->a[81567] = actions(3643);
	v->a[81568] = 1;
	v->a[81569] = sym_simple_heredoc_body;
	v->a[81570] = state(2107);
	v->a[81571] = 1;
	v->a[81572] = sym_heredoc_body;
	v->a[81573] = state(1111);
	v->a[81574] = 2;
	v->a[81575] = sym__heredoc_body;
	v->a[81576] = sym__simple_heredoc_body;
	v->a[81577] = 5;
	v->a[81578] = actions(680);
	v->a[81579] = 1;
	small_parse_table_4079(v);
}

void	small_parse_table_4079(t_small_parse_table_array *v)
{
	v->a[81580] = sym_comment;
	v->a[81581] = actions(3636);
	v->a[81582] = 1;
	v->a[81583] = sym__heredoc_body_beginning;
	v->a[81584] = actions(3643);
	v->a[81585] = 1;
	v->a[81586] = sym_simple_heredoc_body;
	v->a[81587] = state(2107);
	v->a[81588] = 1;
	v->a[81589] = sym_heredoc_body;
	v->a[81590] = state(1143);
	v->a[81591] = 2;
	v->a[81592] = sym__heredoc_body;
	v->a[81593] = sym__simple_heredoc_body;
	v->a[81594] = 4;
	v->a[81595] = actions(680);
	v->a[81596] = 1;
	v->a[81597] = sym_comment;
	v->a[81598] = actions(3651);
	v->a[81599] = 1;
	small_parse_table_4080(v);
}

/* EOF small_parse_table_815.c */
