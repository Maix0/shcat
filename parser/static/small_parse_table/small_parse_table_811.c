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
	v->a[81100] = 1;
	v->a[81101] = sym_comment;
	v->a[81102] = actions(3613);
	v->a[81103] = 1;
	v->a[81104] = sym__heredoc_body_beginning;
	v->a[81105] = actions(3618);
	v->a[81106] = 1;
	v->a[81107] = sym_simple_heredoc_body;
	v->a[81108] = state(1107);
	v->a[81109] = 1;
	v->a[81110] = sym__heredoc_body;
	v->a[81111] = state(1108);
	v->a[81112] = 1;
	v->a[81113] = sym__simple_heredoc_body;
	v->a[81114] = state(2071);
	v->a[81115] = 1;
	v->a[81116] = sym_heredoc_body;
	v->a[81117] = 5;
	v->a[81118] = actions(664);
	v->a[81119] = 1;
	small_parse_table_4056(v);
}

void	small_parse_table_4056(t_small_parse_table_array *v)
{
	v->a[81120] = sym_comment;
	v->a[81121] = actions(3613);
	v->a[81122] = 1;
	v->a[81123] = sym__heredoc_body_beginning;
	v->a[81124] = actions(3618);
	v->a[81125] = 1;
	v->a[81126] = sym_simple_heredoc_body;
	v->a[81127] = state(2071);
	v->a[81128] = 1;
	v->a[81129] = sym_heredoc_body;
	v->a[81130] = state(1109);
	v->a[81131] = 2;
	v->a[81132] = sym__heredoc_body;
	v->a[81133] = sym__simple_heredoc_body;
	v->a[81134] = 5;
	v->a[81135] = actions(664);
	v->a[81136] = 1;
	v->a[81137] = sym_comment;
	v->a[81138] = actions(3611);
	v->a[81139] = 1;
	small_parse_table_4057(v);
}

void	small_parse_table_4057(t_small_parse_table_array *v)
{
	v->a[81140] = sym_simple_heredoc_body;
	v->a[81141] = actions(3613);
	v->a[81142] = 1;
	v->a[81143] = sym__heredoc_body_beginning;
	v->a[81144] = state(1927);
	v->a[81145] = 1;
	v->a[81146] = sym_heredoc_body;
	v->a[81147] = state(1223);
	v->a[81148] = 2;
	v->a[81149] = sym__heredoc_body;
	v->a[81150] = sym__simple_heredoc_body;
	v->a[81151] = 6;
	v->a[81152] = actions(664);
	v->a[81153] = 1;
	v->a[81154] = sym_comment;
	v->a[81155] = actions(3611);
	v->a[81156] = 1;
	v->a[81157] = sym_simple_heredoc_body;
	v->a[81158] = actions(3613);
	v->a[81159] = 1;
	small_parse_table_4058(v);
}

void	small_parse_table_4058(t_small_parse_table_array *v)
{
	v->a[81160] = sym__heredoc_body_beginning;
	v->a[81161] = state(1241);
	v->a[81162] = 1;
	v->a[81163] = sym__heredoc_body;
	v->a[81164] = state(1244);
	v->a[81165] = 1;
	v->a[81166] = sym__simple_heredoc_body;
	v->a[81167] = state(1927);
	v->a[81168] = 1;
	v->a[81169] = sym_heredoc_body;
	v->a[81170] = 6;
	v->a[81171] = actions(664);
	v->a[81172] = 1;
	v->a[81173] = sym_comment;
	v->a[81174] = actions(3613);
	v->a[81175] = 1;
	v->a[81176] = sym__heredoc_body_beginning;
	v->a[81177] = actions(3620);
	v->a[81178] = 1;
	v->a[81179] = sym_simple_heredoc_body;
	small_parse_table_4059(v);
}

void	small_parse_table_4059(t_small_parse_table_array *v)
{
	v->a[81180] = state(1534);
	v->a[81181] = 1;
	v->a[81182] = sym__simple_heredoc_body;
	v->a[81183] = state(1535);
	v->a[81184] = 1;
	v->a[81185] = sym__heredoc_body;
	v->a[81186] = state(1960);
	v->a[81187] = 1;
	v->a[81188] = sym_heredoc_body;
	v->a[81189] = 4;
	v->a[81190] = actions(664);
	v->a[81191] = 1;
	v->a[81192] = sym_comment;
	v->a[81193] = state(1837);
	v->a[81194] = 1;
	v->a[81195] = aux_sym_concatenation_repeat1;
	v->a[81196] = actions(3587);
	v->a[81197] = 2;
	v->a[81198] = sym__concat;
	v->a[81199] = aux_sym_concatenation_token1;
	small_parse_table_4060(v);
}

/* EOF small_parse_table_811.c */
