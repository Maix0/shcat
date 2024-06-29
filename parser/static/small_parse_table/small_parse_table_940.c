/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_940.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4700(t_small_parse_table_array *v)
{
	v->a[94000] = state(1394);
	v->a[94001] = 2;
	v->a[94002] = sym__heredoc_body;
	v->a[94003] = sym__simple_heredoc_body;
	v->a[94004] = 6;
	v->a[94005] = actions(1074);
	v->a[94006] = 1;
	v->a[94007] = sym_comment;
	v->a[94008] = actions(4018);
	v->a[94009] = 1;
	v->a[94010] = sym__heredoc_body_beginning;
	v->a[94011] = actions(4020);
	v->a[94012] = 1;
	v->a[94013] = sym_simple_heredoc_body;
	v->a[94014] = state(1385);
	v->a[94015] = 1;
	v->a[94016] = sym__simple_heredoc_body;
	v->a[94017] = state(1392);
	v->a[94018] = 1;
	v->a[94019] = sym__heredoc_body;
	small_parse_table_4701(v);
}

void	small_parse_table_4701(t_small_parse_table_array *v)
{
	v->a[94020] = state(2136);
	v->a[94021] = 1;
	v->a[94022] = sym_heredoc_body;
	v->a[94023] = 6;
	v->a[94024] = actions(1074);
	v->a[94025] = 1;
	v->a[94026] = sym_comment;
	v->a[94027] = actions(4018);
	v->a[94028] = 1;
	v->a[94029] = sym__heredoc_body_beginning;
	v->a[94030] = actions(4020);
	v->a[94031] = 1;
	v->a[94032] = sym_simple_heredoc_body;
	v->a[94033] = state(1353);
	v->a[94034] = 1;
	v->a[94035] = sym__simple_heredoc_body;
	v->a[94036] = state(1367);
	v->a[94037] = 1;
	v->a[94038] = sym__heredoc_body;
	v->a[94039] = state(2136);
	small_parse_table_4702(v);
}

void	small_parse_table_4702(t_small_parse_table_array *v)
{
	v->a[94040] = 1;
	v->a[94041] = sym_heredoc_body;
	v->a[94042] = 4;
	v->a[94043] = actions(1074);
	v->a[94044] = 1;
	v->a[94045] = sym_comment;
	v->a[94046] = state(2031);
	v->a[94047] = 1;
	v->a[94048] = aux_sym_concatenation_repeat1;
	v->a[94049] = actions(3990);
	v->a[94050] = 2;
	v->a[94051] = sym__concat;
	v->a[94052] = aux_sym_concatenation_token1;
	v->a[94053] = actions(4026);
	v->a[94054] = 2;
	v->a[94055] = anon_sym_PIPE;
	v->a[94056] = anon_sym_RPAREN;
	v->a[94057] = 6;
	v->a[94058] = actions(1074);
	v->a[94059] = 1;
	small_parse_table_4703(v);
}

void	small_parse_table_4703(t_small_parse_table_array *v)
{
	v->a[94060] = sym_comment;
	v->a[94061] = actions(4016);
	v->a[94062] = 1;
	v->a[94063] = sym_simple_heredoc_body;
	v->a[94064] = actions(4018);
	v->a[94065] = 1;
	v->a[94066] = sym__heredoc_body_beginning;
	v->a[94067] = state(1277);
	v->a[94068] = 1;
	v->a[94069] = sym__heredoc_body;
	v->a[94070] = state(1278);
	v->a[94071] = 1;
	v->a[94072] = sym__simple_heredoc_body;
	v->a[94073] = state(2239);
	v->a[94074] = 1;
	v->a[94075] = sym_heredoc_body;
	v->a[94076] = 6;
	v->a[94077] = actions(1074);
	v->a[94078] = 1;
	v->a[94079] = sym_comment;
	small_parse_table_4704(v);
}

void	small_parse_table_4704(t_small_parse_table_array *v)
{
	v->a[94080] = actions(4018);
	v->a[94081] = 1;
	v->a[94082] = sym__heredoc_body_beginning;
	v->a[94083] = actions(4020);
	v->a[94084] = 1;
	v->a[94085] = sym_simple_heredoc_body;
	v->a[94086] = state(1334);
	v->a[94087] = 1;
	v->a[94088] = sym__heredoc_body;
	v->a[94089] = state(1351);
	v->a[94090] = 1;
	v->a[94091] = sym__simple_heredoc_body;
	v->a[94092] = state(2136);
	v->a[94093] = 1;
	v->a[94094] = sym_heredoc_body;
	v->a[94095] = 6;
	v->a[94096] = actions(1074);
	v->a[94097] = 1;
	v->a[94098] = sym_comment;
	v->a[94099] = actions(4018);
	small_parse_table_4705(v);
}

/* EOF small_parse_table_940.c */
