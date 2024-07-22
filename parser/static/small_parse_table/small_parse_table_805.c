/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_805.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4025(t_small_parse_table_array *v)
{
	v->a[80500] = actions(3513);
	v->a[80501] = 1;
	v->a[80502] = aux_sym_heredoc_redirect_token1;
	v->a[80503] = state(1941);
	v->a[80504] = 1;
	v->a[80505] = sym_terminator;
	v->a[80506] = actions(1975);
	v->a[80507] = 2;
	v->a[80508] = anon_sym_SEMI_SEMI;
	v->a[80509] = anon_sym_SEMI;
	v->a[80510] = 6;
	v->a[80511] = actions(501);
	v->a[80512] = 1;
	v->a[80513] = sym_comment;
	v->a[80514] = actions(3628);
	v->a[80515] = 1;
	v->a[80516] = sym_simple_heredoc_body;
	v->a[80517] = actions(3630);
	v->a[80518] = 1;
	v->a[80519] = sym__heredoc_body_beginning;
	small_parse_table_4026(v);
}

void	small_parse_table_4026(t_small_parse_table_array *v)
{
	v->a[80520] = state(1173);
	v->a[80521] = 1;
	v->a[80522] = sym__simple_heredoc_body;
	v->a[80523] = state(1176);
	v->a[80524] = 1;
	v->a[80525] = sym__heredoc_body;
	v->a[80526] = state(2113);
	v->a[80527] = 1;
	v->a[80528] = sym_heredoc_body;
	v->a[80529] = 5;
	v->a[80530] = actions(3);
	v->a[80531] = 1;
	v->a[80532] = sym_comment;
	v->a[80533] = actions(3513);
	v->a[80534] = 1;
	v->a[80535] = aux_sym_heredoc_redirect_token1;
	v->a[80536] = actions(3650);
	v->a[80537] = 1;
	v->a[80538] = anon_sym_in;
	v->a[80539] = state(1926);
	small_parse_table_4027(v);
}

void	small_parse_table_4027(t_small_parse_table_array *v)
{
	v->a[80540] = 1;
	v->a[80541] = sym_terminator;
	v->a[80542] = actions(1975);
	v->a[80543] = 2;
	v->a[80544] = anon_sym_SEMI_SEMI;
	v->a[80545] = anon_sym_SEMI;
	v->a[80546] = 6;
	v->a[80547] = actions(501);
	v->a[80548] = 1;
	v->a[80549] = sym_comment;
	v->a[80550] = actions(3630);
	v->a[80551] = 1;
	v->a[80552] = sym__heredoc_body_beginning;
	v->a[80553] = actions(3645);
	v->a[80554] = 1;
	v->a[80555] = sym_simple_heredoc_body;
	v->a[80556] = state(1282);
	v->a[80557] = 1;
	v->a[80558] = sym__heredoc_body;
	v->a[80559] = state(1285);
	small_parse_table_4028(v);
}

void	small_parse_table_4028(t_small_parse_table_array *v)
{
	v->a[80560] = 1;
	v->a[80561] = sym__simple_heredoc_body;
	v->a[80562] = state(1937);
	v->a[80563] = 1;
	v->a[80564] = sym_heredoc_body;
	v->a[80565] = 6;
	v->a[80566] = actions(501);
	v->a[80567] = 1;
	v->a[80568] = sym_comment;
	v->a[80569] = actions(3630);
	v->a[80570] = 1;
	v->a[80571] = sym__heredoc_body_beginning;
	v->a[80572] = actions(3645);
	v->a[80573] = 1;
	v->a[80574] = sym_simple_heredoc_body;
	v->a[80575] = state(1296);
	v->a[80576] = 1;
	v->a[80577] = sym__heredoc_body;
	v->a[80578] = state(1297);
	v->a[80579] = 1;
	small_parse_table_4029(v);
}

void	small_parse_table_4029(t_small_parse_table_array *v)
{
	v->a[80580] = sym__simple_heredoc_body;
	v->a[80581] = state(1937);
	v->a[80582] = 1;
	v->a[80583] = sym_heredoc_body;
	v->a[80584] = 5;
	v->a[80585] = actions(501);
	v->a[80586] = 1;
	v->a[80587] = sym_comment;
	v->a[80588] = actions(3630);
	v->a[80589] = 1;
	v->a[80590] = sym__heredoc_body_beginning;
	v->a[80591] = actions(3645);
	v->a[80592] = 1;
	v->a[80593] = sym_simple_heredoc_body;
	v->a[80594] = state(1937);
	v->a[80595] = 1;
	v->a[80596] = sym_heredoc_body;
	v->a[80597] = state(1298);
	v->a[80598] = 2;
	v->a[80599] = sym__heredoc_body;
	small_parse_table_4030(v);
}

/* EOF small_parse_table_805.c */
