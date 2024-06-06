/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1445.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_7225(t_small_parse_table_array *v)
{
	v->a[144500] = sym__simple_heredoc_body;
	v->a[144501] = 4;
	v->a[144502] = actions(3);
	v->a[144503] = 1;
	v->a[144504] = sym_comment;
	v->a[144505] = actions(8661);
	v->a[144506] = 1;
	v->a[144507] = anon_sym_in;
	v->a[144508] = actions(8665);
	v->a[144509] = 1;
	v->a[144510] = aux_sym_heredoc_redirect_token1;
	v->a[144511] = actions(8663);
	v->a[144512] = 3;
	v->a[144513] = anon_sym_SEMI_SEMI;
	v->a[144514] = anon_sym_AMP;
	v->a[144515] = anon_sym_SEMI;
	v->a[144516] = 5;
	v->a[144517] = actions(57);
	v->a[144518] = 1;
	v->a[144519] = sym_comment;
	small_parse_table_7226(v);
}

void	small_parse_table_7226(t_small_parse_table_array *v)
{
	v->a[144520] = actions(8637);
	v->a[144521] = 1;
	v->a[144522] = sym__heredoc_body_beginning;
	v->a[144523] = actions(8653);
	v->a[144524] = 1;
	v->a[144525] = sym_simple_heredoc_body;
	v->a[144526] = state(3836);
	v->a[144527] = 1;
	v->a[144528] = sym_heredoc_body;
	v->a[144529] = state(2788);
	v->a[144530] = 2;
	v->a[144531] = sym__heredoc_body;
	v->a[144532] = sym__simple_heredoc_body;
	v->a[144533] = 6;
	v->a[144534] = actions(57);
	v->a[144535] = 1;
	v->a[144536] = sym_comment;
	v->a[144537] = actions(8637);
	v->a[144538] = 1;
	v->a[144539] = sym__heredoc_body_beginning;
	small_parse_table_7227(v);
}

void	small_parse_table_7227(t_small_parse_table_array *v)
{
	v->a[144540] = actions(8655);
	v->a[144541] = 1;
	v->a[144542] = sym_simple_heredoc_body;
	v->a[144543] = state(2253);
	v->a[144544] = 1;
	v->a[144545] = sym__heredoc_body;
	v->a[144546] = state(2254);
	v->a[144547] = 1;
	v->a[144548] = sym__simple_heredoc_body;
	v->a[144549] = state(3977);
	v->a[144550] = 1;
	v->a[144551] = sym_heredoc_body;
	v->a[144552] = 6;
	v->a[144553] = actions(57);
	v->a[144554] = 1;
	v->a[144555] = sym_comment;
	v->a[144556] = actions(8637);
	v->a[144557] = 1;
	v->a[144558] = sym__heredoc_body_beginning;
	v->a[144559] = actions(8653);
	small_parse_table_7228(v);
}

void	small_parse_table_7228(t_small_parse_table_array *v)
{
	v->a[144560] = 1;
	v->a[144561] = sym_simple_heredoc_body;
	v->a[144562] = state(2789);
	v->a[144563] = 1;
	v->a[144564] = sym__simple_heredoc_body;
	v->a[144565] = state(2790);
	v->a[144566] = 1;
	v->a[144567] = sym__heredoc_body;
	v->a[144568] = state(3836);
	v->a[144569] = 1;
	v->a[144570] = sym_heredoc_body;
	v->a[144571] = 6;
	v->a[144572] = actions(57);
	v->a[144573] = 1;
	v->a[144574] = sym_comment;
	v->a[144575] = actions(8637);
	v->a[144576] = 1;
	v->a[144577] = sym__heredoc_body_beginning;
	v->a[144578] = actions(8655);
	v->a[144579] = 1;
	small_parse_table_7229(v);
}

void	small_parse_table_7229(t_small_parse_table_array *v)
{
	v->a[144580] = sym_simple_heredoc_body;
	v->a[144581] = state(2255);
	v->a[144582] = 1;
	v->a[144583] = sym__heredoc_body;
	v->a[144584] = state(2256);
	v->a[144585] = 1;
	v->a[144586] = sym__simple_heredoc_body;
	v->a[144587] = state(3977);
	v->a[144588] = 1;
	v->a[144589] = sym_heredoc_body;
	v->a[144590] = 6;
	v->a[144591] = actions(57);
	v->a[144592] = 1;
	v->a[144593] = sym_comment;
	v->a[144594] = actions(8545);
	v->a[144595] = 1;
	v->a[144596] = anon_sym_PIPE;
	v->a[144597] = actions(8667);
	v->a[144598] = 1;
	v->a[144599] = anon_sym_RPAREN;
	small_parse_table_7230(v);
}

/* EOF small_parse_table_1445.c */
