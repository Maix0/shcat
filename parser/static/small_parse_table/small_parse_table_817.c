/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_817.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4085(t_small_parse_table_array *v)
{
	v->a[81700] = 1;
	v->a[81701] = sym_comment;
	v->a[81702] = actions(3636);
	v->a[81703] = 1;
	v->a[81704] = sym__heredoc_body_beginning;
	v->a[81705] = actions(3638);
	v->a[81706] = 1;
	v->a[81707] = sym_simple_heredoc_body;
	v->a[81708] = state(1538);
	v->a[81709] = 1;
	v->a[81710] = sym__simple_heredoc_body;
	v->a[81711] = state(1539);
	v->a[81712] = 1;
	v->a[81713] = sym__heredoc_body;
	v->a[81714] = state(2018);
	v->a[81715] = 1;
	v->a[81716] = sym_heredoc_body;
	v->a[81717] = 2;
	v->a[81718] = actions(680);
	v->a[81719] = 1;
	small_parse_table_4086(v);
}

void	small_parse_table_4086(t_small_parse_table_array *v)
{
	v->a[81720] = sym_comment;
	v->a[81721] = actions(709);
	v->a[81722] = 5;
	v->a[81723] = sym__concat;
	v->a[81724] = anon_sym_PIPE;
	v->a[81725] = anon_sym_RPAREN;
	v->a[81726] = anon_sym_RBRACE;
	v->a[81727] = aux_sym_concatenation_token1;
	v->a[81728] = 5;
	v->a[81729] = actions(680);
	v->a[81730] = 1;
	v->a[81731] = sym_comment;
	v->a[81732] = actions(3636);
	v->a[81733] = 1;
	v->a[81734] = sym__heredoc_body_beginning;
	v->a[81735] = actions(3638);
	v->a[81736] = 1;
	v->a[81737] = sym_simple_heredoc_body;
	v->a[81738] = state(2018);
	v->a[81739] = 1;
	small_parse_table_4087(v);
}

void	small_parse_table_4087(t_small_parse_table_array *v)
{
	v->a[81740] = sym_heredoc_body;
	v->a[81741] = state(1552);
	v->a[81742] = 2;
	v->a[81743] = sym__heredoc_body;
	v->a[81744] = sym__simple_heredoc_body;
	v->a[81745] = 6;
	v->a[81746] = actions(680);
	v->a[81747] = 1;
	v->a[81748] = sym_comment;
	v->a[81749] = actions(3636);
	v->a[81750] = 1;
	v->a[81751] = sym__heredoc_body_beginning;
	v->a[81752] = actions(3643);
	v->a[81753] = 1;
	v->a[81754] = sym_simple_heredoc_body;
	v->a[81755] = state(1126);
	v->a[81756] = 1;
	v->a[81757] = sym__heredoc_body;
	v->a[81758] = state(1127);
	v->a[81759] = 1;
	small_parse_table_4088(v);
}

void	small_parse_table_4088(t_small_parse_table_array *v)
{
	v->a[81760] = sym__simple_heredoc_body;
	v->a[81761] = state(2107);
	v->a[81762] = 1;
	v->a[81763] = sym_heredoc_body;
	v->a[81764] = 2;
	v->a[81765] = actions(680);
	v->a[81766] = 1;
	v->a[81767] = sym_comment;
	v->a[81768] = actions(713);
	v->a[81769] = 5;
	v->a[81770] = sym__concat;
	v->a[81771] = anon_sym_PIPE;
	v->a[81772] = anon_sym_RPAREN;
	v->a[81773] = anon_sym_RBRACE;
	v->a[81774] = aux_sym_concatenation_token1;
	v->a[81775] = 5;
	v->a[81776] = actions(680);
	v->a[81777] = 1;
	v->a[81778] = sym_comment;
	v->a[81779] = actions(3634);
	small_parse_table_4089(v);
}

void	small_parse_table_4089(t_small_parse_table_array *v)
{
	v->a[81780] = 1;
	v->a[81781] = sym_simple_heredoc_body;
	v->a[81782] = actions(3636);
	v->a[81783] = 1;
	v->a[81784] = sym__heredoc_body_beginning;
	v->a[81785] = state(2017);
	v->a[81786] = 1;
	v->a[81787] = sym_heredoc_body;
	v->a[81788] = state(1249);
	v->a[81789] = 2;
	v->a[81790] = sym__heredoc_body;
	v->a[81791] = sym__simple_heredoc_body;
	v->a[81792] = 6;
	v->a[81793] = actions(680);
	v->a[81794] = 1;
	v->a[81795] = sym_comment;
	v->a[81796] = actions(3636);
	v->a[81797] = 1;
	v->a[81798] = sym__heredoc_body_beginning;
	v->a[81799] = actions(3638);
	small_parse_table_4090(v);
}

/* EOF small_parse_table_817.c */
