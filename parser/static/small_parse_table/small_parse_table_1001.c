/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1001.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5005(t_small_parse_table_array *v)
{
	v->a[100100] = anon_sym_AMP;
	v->a[100101] = anon_sym_SEMI;
	v->a[100102] = 6;
	v->a[100103] = actions(1094);
	v->a[100104] = 1;
	v->a[100105] = sym_comment;
	v->a[100106] = actions(4462);
	v->a[100107] = 1;
	v->a[100108] = sym_simple_heredoc_body;
	v->a[100109] = actions(4464);
	v->a[100110] = 1;
	v->a[100111] = sym__heredoc_body_beginning;
	v->a[100112] = state(1469);
	v->a[100113] = 1;
	v->a[100114] = sym__heredoc_body;
	v->a[100115] = state(1510);
	v->a[100116] = 1;
	v->a[100117] = sym__simple_heredoc_body;
	v->a[100118] = state(2439);
	v->a[100119] = 1;
	small_parse_table_5006(v);
}

void	small_parse_table_5006(t_small_parse_table_array *v)
{
	v->a[100120] = sym_heredoc_body;
	v->a[100121] = 5;
	v->a[100122] = actions(1094);
	v->a[100123] = 1;
	v->a[100124] = sym_comment;
	v->a[100125] = actions(4462);
	v->a[100126] = 1;
	v->a[100127] = sym_simple_heredoc_body;
	v->a[100128] = actions(4464);
	v->a[100129] = 1;
	v->a[100130] = sym__heredoc_body_beginning;
	v->a[100131] = state(2439);
	v->a[100132] = 1;
	v->a[100133] = sym_heredoc_body;
	v->a[100134] = state(1492);
	v->a[100135] = 2;
	v->a[100136] = sym__heredoc_body;
	v->a[100137] = sym__simple_heredoc_body;
	v->a[100138] = 6;
	v->a[100139] = actions(1094);
	small_parse_table_5007(v);
}

void	small_parse_table_5007(t_small_parse_table_array *v)
{
	v->a[100140] = 1;
	v->a[100141] = sym_comment;
	v->a[100142] = actions(4464);
	v->a[100143] = 1;
	v->a[100144] = sym__heredoc_body_beginning;
	v->a[100145] = actions(4466);
	v->a[100146] = 1;
	v->a[100147] = sym_simple_heredoc_body;
	v->a[100148] = state(1827);
	v->a[100149] = 1;
	v->a[100150] = sym__simple_heredoc_body;
	v->a[100151] = state(1828);
	v->a[100152] = 1;
	v->a[100153] = sym__heredoc_body;
	v->a[100154] = state(2281);
	v->a[100155] = 1;
	v->a[100156] = sym_heredoc_body;
	v->a[100157] = 6;
	v->a[100158] = actions(1094);
	v->a[100159] = 1;
	small_parse_table_5008(v);
}

void	small_parse_table_5008(t_small_parse_table_array *v)
{
	v->a[100160] = sym_comment;
	v->a[100161] = actions(4464);
	v->a[100162] = 1;
	v->a[100163] = sym__heredoc_body_beginning;
	v->a[100164] = actions(4466);
	v->a[100165] = 1;
	v->a[100166] = sym_simple_heredoc_body;
	v->a[100167] = state(1824);
	v->a[100168] = 1;
	v->a[100169] = sym__simple_heredoc_body;
	v->a[100170] = state(1825);
	v->a[100171] = 1;
	v->a[100172] = sym__heredoc_body;
	v->a[100173] = state(2281);
	v->a[100174] = 1;
	v->a[100175] = sym_heredoc_body;
	v->a[100176] = 4;
	v->a[100177] = actions(3);
	v->a[100178] = 1;
	v->a[100179] = sym_comment;
	small_parse_table_5009(v);
}

void	small_parse_table_5009(t_small_parse_table_array *v)
{
	v->a[100180] = actions(4488);
	v->a[100181] = 1;
	v->a[100182] = anon_sym_in;
	v->a[100183] = actions(4492);
	v->a[100184] = 1;
	v->a[100185] = aux_sym_heredoc_redirect_token1;
	v->a[100186] = actions(4490);
	v->a[100187] = 3;
	v->a[100188] = anon_sym_SEMI_SEMI;
	v->a[100189] = anon_sym_AMP;
	v->a[100190] = anon_sym_SEMI;
	v->a[100191] = 4;
	v->a[100192] = actions(3);
	v->a[100193] = 1;
	v->a[100194] = sym_comment;
	v->a[100195] = actions(4494);
	v->a[100196] = 1;
	v->a[100197] = anon_sym_in;
	v->a[100198] = actions(4498);
	v->a[100199] = 1;
	small_parse_table_5010(v);
}

/* EOF small_parse_table_1001.c */
