/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_941.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4705(t_small_parse_table_array *v)
{
	v->a[94100] = 1;
	v->a[94101] = sym__heredoc_body_beginning;
	v->a[94102] = actions(4020);
	v->a[94103] = 1;
	v->a[94104] = sym_simple_heredoc_body;
	v->a[94105] = state(1346);
	v->a[94106] = 1;
	v->a[94107] = sym__simple_heredoc_body;
	v->a[94108] = state(1347);
	v->a[94109] = 1;
	v->a[94110] = sym__heredoc_body;
	v->a[94111] = state(2136);
	v->a[94112] = 1;
	v->a[94113] = sym_heredoc_body;
	v->a[94114] = 6;
	v->a[94115] = actions(1074);
	v->a[94116] = 1;
	v->a[94117] = sym_comment;
	v->a[94118] = actions(4016);
	v->a[94119] = 1;
	small_parse_table_4706(v);
}

void	small_parse_table_4706(t_small_parse_table_array *v)
{
	v->a[94120] = sym_simple_heredoc_body;
	v->a[94121] = actions(4018);
	v->a[94122] = 1;
	v->a[94123] = sym__heredoc_body_beginning;
	v->a[94124] = state(1279);
	v->a[94125] = 1;
	v->a[94126] = sym__heredoc_body;
	v->a[94127] = state(1280);
	v->a[94128] = 1;
	v->a[94129] = sym__simple_heredoc_body;
	v->a[94130] = state(2239);
	v->a[94131] = 1;
	v->a[94132] = sym_heredoc_body;
	v->a[94133] = 5;
	v->a[94134] = actions(1074);
	v->a[94135] = 1;
	v->a[94136] = sym_comment;
	v->a[94137] = actions(4018);
	v->a[94138] = 1;
	v->a[94139] = sym__heredoc_body_beginning;
	small_parse_table_4707(v);
}

void	small_parse_table_4707(t_small_parse_table_array *v)
{
	v->a[94140] = actions(4022);
	v->a[94141] = 1;
	v->a[94142] = sym_simple_heredoc_body;
	v->a[94143] = state(2167);
	v->a[94144] = 1;
	v->a[94145] = sym_heredoc_body;
	v->a[94146] = state(1625);
	v->a[94147] = 2;
	v->a[94148] = sym__heredoc_body;
	v->a[94149] = sym__simple_heredoc_body;
	v->a[94150] = 5;
	v->a[94151] = actions(1074);
	v->a[94152] = 1;
	v->a[94153] = sym_comment;
	v->a[94154] = actions(4018);
	v->a[94155] = 1;
	v->a[94156] = sym__heredoc_body_beginning;
	v->a[94157] = actions(4022);
	v->a[94158] = 1;
	v->a[94159] = sym_simple_heredoc_body;
	small_parse_table_4708(v);
}

void	small_parse_table_4708(t_small_parse_table_array *v)
{
	v->a[94160] = state(2167);
	v->a[94161] = 1;
	v->a[94162] = sym_heredoc_body;
	v->a[94163] = state(1660);
	v->a[94164] = 2;
	v->a[94165] = sym__heredoc_body;
	v->a[94166] = sym__simple_heredoc_body;
	v->a[94167] = 5;
	v->a[94168] = actions(1074);
	v->a[94169] = 1;
	v->a[94170] = sym_comment;
	v->a[94171] = actions(4016);
	v->a[94172] = 1;
	v->a[94173] = sym_simple_heredoc_body;
	v->a[94174] = actions(4018);
	v->a[94175] = 1;
	v->a[94176] = sym__heredoc_body_beginning;
	v->a[94177] = state(2239);
	v->a[94178] = 1;
	v->a[94179] = sym_heredoc_body;
	small_parse_table_4709(v);
}

void	small_parse_table_4709(t_small_parse_table_array *v)
{
	v->a[94180] = state(1236);
	v->a[94181] = 2;
	v->a[94182] = sym__heredoc_body;
	v->a[94183] = sym__simple_heredoc_body;
	v->a[94184] = 6;
	v->a[94185] = actions(1074);
	v->a[94186] = 1;
	v->a[94187] = sym_comment;
	v->a[94188] = actions(4016);
	v->a[94189] = 1;
	v->a[94190] = sym_simple_heredoc_body;
	v->a[94191] = actions(4018);
	v->a[94192] = 1;
	v->a[94193] = sym__heredoc_body_beginning;
	v->a[94194] = state(1232);
	v->a[94195] = 1;
	v->a[94196] = sym__heredoc_body;
	v->a[94197] = state(1233);
	v->a[94198] = 1;
	v->a[94199] = sym__simple_heredoc_body;
	small_parse_table_4710(v);
}

/* EOF small_parse_table_941.c */
