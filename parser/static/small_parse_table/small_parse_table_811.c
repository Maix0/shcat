/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_811.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4055(t_small_parse_table_array *v)
{
	v->a[81100] = sym_comment;
	v->a[81101] = actions(792);
	v->a[81102] = 5;
	v->a[81103] = sym__concat;
	v->a[81104] = anon_sym_PIPE;
	v->a[81105] = anon_sym_RPAREN;
	v->a[81106] = anon_sym_RBRACE;
	v->a[81107] = aux_sym_concatenation_token1;
	v->a[81108] = 5;
	v->a[81109] = actions(680);
	v->a[81110] = 1;
	v->a[81111] = sym_comment;
	v->a[81112] = actions(3636);
	v->a[81113] = 1;
	v->a[81114] = sym__heredoc_body_beginning;
	v->a[81115] = actions(3638);
	v->a[81116] = 1;
	v->a[81117] = sym_simple_heredoc_body;
	v->a[81118] = state(2018);
	v->a[81119] = 1;
	small_parse_table_4056(v);
}

void	small_parse_table_4056(t_small_parse_table_array *v)
{
	v->a[81120] = sym_heredoc_body;
	v->a[81121] = state(1565);
	v->a[81122] = 2;
	v->a[81123] = sym__heredoc_body;
	v->a[81124] = sym__simple_heredoc_body;
	v->a[81125] = 6;
	v->a[81126] = actions(680);
	v->a[81127] = 1;
	v->a[81128] = sym_comment;
	v->a[81129] = actions(3636);
	v->a[81130] = 1;
	v->a[81131] = sym__heredoc_body_beginning;
	v->a[81132] = actions(3638);
	v->a[81133] = 1;
	v->a[81134] = sym_simple_heredoc_body;
	v->a[81135] = state(1540);
	v->a[81136] = 1;
	v->a[81137] = sym__simple_heredoc_body;
	v->a[81138] = state(1541);
	v->a[81139] = 1;
	small_parse_table_4057(v);
}

void	small_parse_table_4057(t_small_parse_table_array *v)
{
	v->a[81140] = sym__heredoc_body;
	v->a[81141] = state(2018);
	v->a[81142] = 1;
	v->a[81143] = sym_heredoc_body;
	v->a[81144] = 5;
	v->a[81145] = actions(680);
	v->a[81146] = 1;
	v->a[81147] = sym_comment;
	v->a[81148] = actions(3634);
	v->a[81149] = 1;
	v->a[81150] = sym_simple_heredoc_body;
	v->a[81151] = actions(3636);
	v->a[81152] = 1;
	v->a[81153] = sym__heredoc_body_beginning;
	v->a[81154] = state(2017);
	v->a[81155] = 1;
	v->a[81156] = sym_heredoc_body;
	v->a[81157] = state(1243);
	v->a[81158] = 2;
	v->a[81159] = sym__heredoc_body;
	small_parse_table_4058(v);
}

void	small_parse_table_4058(t_small_parse_table_array *v)
{
	v->a[81160] = sym__simple_heredoc_body;
	v->a[81161] = 2;
	v->a[81162] = actions(680);
	v->a[81163] = 1;
	v->a[81164] = sym_comment;
	v->a[81165] = actions(688);
	v->a[81166] = 5;
	v->a[81167] = sym__concat;
	v->a[81168] = anon_sym_PIPE;
	v->a[81169] = anon_sym_RPAREN;
	v->a[81170] = anon_sym_RBRACE;
	v->a[81171] = aux_sym_concatenation_token1;
	v->a[81172] = 4;
	v->a[81173] = actions(680);
	v->a[81174] = 1;
	v->a[81175] = sym_comment;
	v->a[81176] = state(1821);
	v->a[81177] = 1;
	v->a[81178] = aux_sym_concatenation_repeat1;
	v->a[81179] = actions(1092);
	small_parse_table_4059(v);
}

void	small_parse_table_4059(t_small_parse_table_array *v)
{
	v->a[81180] = 2;
	v->a[81181] = anon_sym_PIPE;
	v->a[81182] = anon_sym_RPAREN;
	v->a[81183] = actions(3640);
	v->a[81184] = 2;
	v->a[81185] = sym__concat;
	v->a[81186] = aux_sym_concatenation_token1;
	v->a[81187] = 6;
	v->a[81188] = actions(680);
	v->a[81189] = 1;
	v->a[81190] = sym_comment;
	v->a[81191] = actions(3636);
	v->a[81192] = 1;
	v->a[81193] = sym__heredoc_body_beginning;
	v->a[81194] = actions(3638);
	v->a[81195] = 1;
	v->a[81196] = sym_simple_heredoc_body;
	v->a[81197] = state(1532);
	v->a[81198] = 1;
	v->a[81199] = sym__simple_heredoc_body;
	small_parse_table_4060(v);
}

/* EOF small_parse_table_811.c */
