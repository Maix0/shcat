/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_670.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3350(t_small_parse_table_array *v)
{
	v->a[67000] = aux_sym_concatenation_token1;
	v->a[67001] = 5;
	v->a[67002] = actions(3);
	v->a[67003] = 1;
	v->a[67004] = sym_comment;
	v->a[67005] = actions(2936);
	v->a[67006] = 1;
	v->a[67007] = anon_sym_in;
	v->a[67008] = actions(2938);
	v->a[67009] = 1;
	v->a[67010] = aux_sym_heredoc_redirect_token1;
	v->a[67011] = state(1768);
	v->a[67012] = 1;
	v->a[67013] = sym_terminator;
	v->a[67014] = actions(1609);
	v->a[67015] = 2;
	v->a[67016] = anon_sym_SEMI_SEMI;
	v->a[67017] = anon_sym_SEMI;
	v->a[67018] = 6;
	v->a[67019] = actions(407);
	small_parse_table_3351(v);
}

void	small_parse_table_3351(t_small_parse_table_array *v)
{
	v->a[67020] = 1;
	v->a[67021] = sym_comment;
	v->a[67022] = actions(3021);
	v->a[67023] = 1;
	v->a[67024] = sym_simple_heredoc_body;
	v->a[67025] = actions(3023);
	v->a[67026] = 1;
	v->a[67027] = sym__heredoc_body_beginning;
	v->a[67028] = state(1149);
	v->a[67029] = 1;
	v->a[67030] = sym__heredoc_body;
	v->a[67031] = state(1152);
	v->a[67032] = 1;
	v->a[67033] = sym__simple_heredoc_body;
	v->a[67034] = state(1734);
	v->a[67035] = 1;
	v->a[67036] = sym_heredoc_body;
	v->a[67037] = 5;
	v->a[67038] = actions(3);
	v->a[67039] = 1;
	small_parse_table_3352(v);
}

void	small_parse_table_3352(t_small_parse_table_array *v)
{
	v->a[67040] = sym_comment;
	v->a[67041] = actions(2938);
	v->a[67042] = 1;
	v->a[67043] = aux_sym_heredoc_redirect_token1;
	v->a[67044] = actions(2977);
	v->a[67045] = 1;
	v->a[67046] = anon_sym_in;
	v->a[67047] = state(1714);
	v->a[67048] = 1;
	v->a[67049] = sym_terminator;
	v->a[67050] = actions(1609);
	v->a[67051] = 2;
	v->a[67052] = anon_sym_SEMI_SEMI;
	v->a[67053] = anon_sym_SEMI;
	v->a[67054] = 2;
	v->a[67055] = actions(407);
	v->a[67056] = 1;
	v->a[67057] = sym_comment;
	v->a[67058] = actions(473);
	v->a[67059] = 5;
	small_parse_table_3353(v);
}

void	small_parse_table_3353(t_small_parse_table_array *v)
{
	v->a[67060] = sym__concat;
	v->a[67061] = anon_sym_PIPE;
	v->a[67062] = anon_sym_RPAREN;
	v->a[67063] = anon_sym_RBRACE;
	v->a[67064] = aux_sym_concatenation_token1;
	v->a[67065] = 5;
	v->a[67066] = actions(407);
	v->a[67067] = 1;
	v->a[67068] = sym_comment;
	v->a[67069] = actions(3023);
	v->a[67070] = 1;
	v->a[67071] = sym__heredoc_body_beginning;
	v->a[67072] = actions(3036);
	v->a[67073] = 1;
	v->a[67074] = sym_simple_heredoc_body;
	v->a[67075] = state(1685);
	v->a[67076] = 1;
	v->a[67077] = sym_heredoc_body;
	v->a[67078] = state(1008);
	v->a[67079] = 2;
	small_parse_table_3354(v);
}

void	small_parse_table_3354(t_small_parse_table_array *v)
{
	v->a[67080] = sym__heredoc_body;
	v->a[67081] = sym__simple_heredoc_body;
	v->a[67082] = 2;
	v->a[67083] = actions(407);
	v->a[67084] = 1;
	v->a[67085] = sym_comment;
	v->a[67086] = actions(449);
	v->a[67087] = 5;
	v->a[67088] = sym__concat;
	v->a[67089] = anon_sym_PIPE;
	v->a[67090] = anon_sym_RPAREN;
	v->a[67091] = anon_sym_RBRACE;
	v->a[67092] = aux_sym_concatenation_token1;
	v->a[67093] = 2;
	v->a[67094] = actions(407);
	v->a[67095] = 1;
	v->a[67096] = sym_comment;
	v->a[67097] = actions(483);
	v->a[67098] = 5;
	v->a[67099] = sym__concat;
	small_parse_table_3355(v);
}

/* EOF small_parse_table_670.c */
