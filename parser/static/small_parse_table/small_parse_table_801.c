/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_801.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4005(t_small_parse_table_array *v)
{
	v->a[80100] = state(1910);
	v->a[80101] = 1;
	v->a[80102] = sym_terminator;
	v->a[80103] = actions(1975);
	v->a[80104] = 2;
	v->a[80105] = anon_sym_SEMI_SEMI;
	v->a[80106] = anon_sym_SEMI;
	v->a[80107] = 5;
	v->a[80108] = actions(501);
	v->a[80109] = 1;
	v->a[80110] = sym_comment;
	v->a[80111] = actions(3628);
	v->a[80112] = 1;
	v->a[80113] = sym_simple_heredoc_body;
	v->a[80114] = actions(3630);
	v->a[80115] = 1;
	v->a[80116] = sym__heredoc_body_beginning;
	v->a[80117] = state(2113);
	v->a[80118] = 1;
	v->a[80119] = sym_heredoc_body;
	small_parse_table_4006(v);
}

void	small_parse_table_4006(t_small_parse_table_array *v)
{
	v->a[80120] = state(1156);
	v->a[80121] = 2;
	v->a[80122] = sym__heredoc_body;
	v->a[80123] = sym__simple_heredoc_body;
	v->a[80124] = 6;
	v->a[80125] = actions(501);
	v->a[80126] = 1;
	v->a[80127] = sym_comment;
	v->a[80128] = actions(3628);
	v->a[80129] = 1;
	v->a[80130] = sym_simple_heredoc_body;
	v->a[80131] = actions(3630);
	v->a[80132] = 1;
	v->a[80133] = sym__heredoc_body_beginning;
	v->a[80134] = state(1140);
	v->a[80135] = 1;
	v->a[80136] = sym__heredoc_body;
	v->a[80137] = state(1150);
	v->a[80138] = 1;
	v->a[80139] = sym__simple_heredoc_body;
	small_parse_table_4007(v);
}

void	small_parse_table_4007(t_small_parse_table_array *v)
{
	v->a[80140] = state(2113);
	v->a[80141] = 1;
	v->a[80142] = sym_heredoc_body;
	v->a[80143] = 6;
	v->a[80144] = actions(501);
	v->a[80145] = 1;
	v->a[80146] = sym_comment;
	v->a[80147] = actions(3630);
	v->a[80148] = 1;
	v->a[80149] = sym__heredoc_body_beginning;
	v->a[80150] = actions(3634);
	v->a[80151] = 1;
	v->a[80152] = sym_simple_heredoc_body;
	v->a[80153] = state(1483);
	v->a[80154] = 1;
	v->a[80155] = sym__simple_heredoc_body;
	v->a[80156] = state(1493);
	v->a[80157] = 1;
	v->a[80158] = sym__heredoc_body;
	v->a[80159] = state(2102);
	small_parse_table_4008(v);
}

void	small_parse_table_4008(t_small_parse_table_array *v)
{
	v->a[80160] = 1;
	v->a[80161] = sym_heredoc_body;
	v->a[80162] = 4;
	v->a[80163] = actions(501);
	v->a[80164] = 1;
	v->a[80165] = sym_comment;
	v->a[80166] = actions(3638);
	v->a[80167] = 1;
	v->a[80168] = anon_sym_elif;
	v->a[80169] = actions(3636);
	v->a[80170] = 2;
	v->a[80171] = anon_sym_fi;
	v->a[80172] = anon_sym_else;
	v->a[80173] = state(1811);
	v->a[80174] = 2;
	v->a[80175] = sym_elif_clause;
	v->a[80176] = aux_sym_if_statement_repeat1;
	v->a[80177] = 5;
	v->a[80178] = actions(501);
	v->a[80179] = 1;
	small_parse_table_4009(v);
}

void	small_parse_table_4009(t_small_parse_table_array *v)
{
	v->a[80180] = sym_comment;
	v->a[80181] = actions(3628);
	v->a[80182] = 1;
	v->a[80183] = sym_simple_heredoc_body;
	v->a[80184] = actions(3630);
	v->a[80185] = 1;
	v->a[80186] = sym__heredoc_body_beginning;
	v->a[80187] = state(2113);
	v->a[80188] = 1;
	v->a[80189] = sym_heredoc_body;
	v->a[80190] = state(1164);
	v->a[80191] = 2;
	v->a[80192] = sym__heredoc_body;
	v->a[80193] = sym__simple_heredoc_body;
	v->a[80194] = 6;
	v->a[80195] = actions(501);
	v->a[80196] = 1;
	v->a[80197] = sym_comment;
	v->a[80198] = actions(3630);
	v->a[80199] = 1;
	small_parse_table_4010(v);
}

/* EOF small_parse_table_801.c */
