/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_575.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2875(t_small_parse_table_array *v)
{
	v->a[57500] = state(1492);
	v->a[57501] = 1;
	v->a[57502] = aux_sym_concatenation_repeat1;
	v->a[57503] = actions(2946);
	v->a[57504] = 2;
	v->a[57505] = sym__concat;
	v->a[57506] = aux_sym_concatenation_token1;
	v->a[57507] = actions(2982);
	v->a[57508] = 2;
	v->a[57509] = anon_sym_PIPE;
	v->a[57510] = anon_sym_RPAREN;
	v->a[57511] = 5;
	v->a[57512] = actions(1436);
	v->a[57513] = 1;
	v->a[57514] = sym_comment;
	v->a[57515] = actions(2962);
	v->a[57516] = 1;
	v->a[57517] = sym__heredoc_body_beginning;
	v->a[57518] = actions(2975);
	v->a[57519] = 1;
	small_parse_table_2876(v);
}

void	small_parse_table_2876(t_small_parse_table_array *v)
{
	v->a[57520] = sym_simple_heredoc_body;
	v->a[57521] = state(1756);
	v->a[57522] = 1;
	v->a[57523] = sym_heredoc_body;
	v->a[57524] = state(1420);
	v->a[57525] = 2;
	v->a[57526] = sym__heredoc_body;
	v->a[57527] = sym__simple_heredoc_body;
	v->a[57528] = 5;
	v->a[57529] = actions(3);
	v->a[57530] = 1;
	v->a[57531] = sym_comment;
	v->a[57532] = actions(2889);
	v->a[57533] = 1;
	v->a[57534] = aux_sym_heredoc_redirect_token1;
	v->a[57535] = actions(2984);
	v->a[57536] = 1;
	v->a[57537] = anon_sym_in;
	v->a[57538] = state(1571);
	v->a[57539] = 1;
	small_parse_table_2877(v);
}

void	small_parse_table_2877(t_small_parse_table_array *v)
{
	v->a[57540] = sym_terminator;
	v->a[57541] = actions(1348);
	v->a[57542] = 2;
	v->a[57543] = anon_sym_SEMI_SEMI;
	v->a[57544] = anon_sym_SEMI;
	v->a[57545] = 6;
	v->a[57546] = actions(1436);
	v->a[57547] = 1;
	v->a[57548] = sym_comment;
	v->a[57549] = actions(2962);
	v->a[57550] = 1;
	v->a[57551] = sym__heredoc_body_beginning;
	v->a[57552] = actions(2975);
	v->a[57553] = 1;
	v->a[57554] = sym_simple_heredoc_body;
	v->a[57555] = state(1421);
	v->a[57556] = 1;
	v->a[57557] = sym__heredoc_body;
	v->a[57558] = state(1424);
	v->a[57559] = 1;
	small_parse_table_2878(v);
}

void	small_parse_table_2878(t_small_parse_table_array *v)
{
	v->a[57560] = sym__simple_heredoc_body;
	v->a[57561] = state(1756);
	v->a[57562] = 1;
	v->a[57563] = sym_heredoc_body;
	v->a[57564] = 6;
	v->a[57565] = actions(1436);
	v->a[57566] = 1;
	v->a[57567] = sym_comment;
	v->a[57568] = actions(2962);
	v->a[57569] = 1;
	v->a[57570] = sym__heredoc_body_beginning;
	v->a[57571] = actions(2975);
	v->a[57572] = 1;
	v->a[57573] = sym_simple_heredoc_body;
	v->a[57574] = state(1425);
	v->a[57575] = 1;
	v->a[57576] = sym__heredoc_body;
	v->a[57577] = state(1426);
	v->a[57578] = 1;
	v->a[57579] = sym__simple_heredoc_body;
	small_parse_table_2879(v);
}

void	small_parse_table_2879(t_small_parse_table_array *v)
{
	v->a[57580] = state(1756);
	v->a[57581] = 1;
	v->a[57582] = sym_heredoc_body;
	v->a[57583] = 5;
	v->a[57584] = actions(3);
	v->a[57585] = 1;
	v->a[57586] = sym_comment;
	v->a[57587] = actions(2887);
	v->a[57588] = 1;
	v->a[57589] = anon_sym_in;
	v->a[57590] = actions(2889);
	v->a[57591] = 1;
	v->a[57592] = aux_sym_heredoc_redirect_token1;
	v->a[57593] = state(1599);
	v->a[57594] = 1;
	v->a[57595] = sym_terminator;
	v->a[57596] = actions(1348);
	v->a[57597] = 2;
	v->a[57598] = anon_sym_SEMI_SEMI;
	v->a[57599] = anon_sym_SEMI;
	small_parse_table_2880(v);
}

/* EOF small_parse_table_575.c */
