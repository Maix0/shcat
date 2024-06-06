/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1441.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_7205(t_small_parse_table_array *v)
{
	v->a[144100] = 1;
	v->a[144101] = sym_simple_heredoc_body;
	v->a[144102] = state(2287);
	v->a[144103] = 1;
	v->a[144104] = sym__heredoc_body;
	v->a[144105] = state(2288);
	v->a[144106] = 1;
	v->a[144107] = sym__simple_heredoc_body;
	v->a[144108] = state(3977);
	v->a[144109] = 1;
	v->a[144110] = sym_heredoc_body;
	v->a[144111] = 5;
	v->a[144112] = actions(57);
	v->a[144113] = 1;
	v->a[144114] = sym_comment;
	v->a[144115] = actions(8635);
	v->a[144116] = 1;
	v->a[144117] = sym_simple_heredoc_body;
	v->a[144118] = actions(8637);
	v->a[144119] = 1;
	small_parse_table_7206(v);
}

void	small_parse_table_7206(t_small_parse_table_array *v)
{
	v->a[144120] = sym__heredoc_body_beginning;
	v->a[144121] = state(3949);
	v->a[144122] = 1;
	v->a[144123] = sym_heredoc_body;
	v->a[144124] = state(2374);
	v->a[144125] = 2;
	v->a[144126] = sym__heredoc_body;
	v->a[144127] = sym__simple_heredoc_body;
	v->a[144128] = 6;
	v->a[144129] = actions(57);
	v->a[144130] = 1;
	v->a[144131] = sym_comment;
	v->a[144132] = actions(8637);
	v->a[144133] = 1;
	v->a[144134] = sym__heredoc_body_beginning;
	v->a[144135] = actions(8655);
	v->a[144136] = 1;
	v->a[144137] = sym_simple_heredoc_body;
	v->a[144138] = state(2279);
	v->a[144139] = 1;
	small_parse_table_7207(v);
}

void	small_parse_table_7207(t_small_parse_table_array *v)
{
	v->a[144140] = sym__heredoc_body;
	v->a[144141] = state(2283);
	v->a[144142] = 1;
	v->a[144143] = sym__simple_heredoc_body;
	v->a[144144] = state(3977);
	v->a[144145] = 1;
	v->a[144146] = sym_heredoc_body;
	v->a[144147] = 5;
	v->a[144148] = actions(57);
	v->a[144149] = 1;
	v->a[144150] = sym_comment;
	v->a[144151] = actions(8637);
	v->a[144152] = 1;
	v->a[144153] = sym__heredoc_body_beginning;
	v->a[144154] = actions(8655);
	v->a[144155] = 1;
	v->a[144156] = sym_simple_heredoc_body;
	v->a[144157] = state(3977);
	v->a[144158] = 1;
	v->a[144159] = sym_heredoc_body;
	small_parse_table_7208(v);
}

void	small_parse_table_7208(t_small_parse_table_array *v)
{
	v->a[144160] = state(2247);
	v->a[144161] = 2;
	v->a[144162] = sym__heredoc_body;
	v->a[144163] = sym__simple_heredoc_body;
	v->a[144164] = 6;
	v->a[144165] = actions(57);
	v->a[144166] = 1;
	v->a[144167] = sym_comment;
	v->a[144168] = actions(8637);
	v->a[144169] = 1;
	v->a[144170] = sym__heredoc_body_beginning;
	v->a[144171] = actions(8639);
	v->a[144172] = 1;
	v->a[144173] = sym_simple_heredoc_body;
	v->a[144174] = state(2242);
	v->a[144175] = 1;
	v->a[144176] = sym__simple_heredoc_body;
	v->a[144177] = state(2243);
	v->a[144178] = 1;
	v->a[144179] = sym__heredoc_body;
	small_parse_table_7209(v);
}

void	small_parse_table_7209(t_small_parse_table_array *v)
{
	v->a[144180] = state(3852);
	v->a[144181] = 1;
	v->a[144182] = sym_heredoc_body;
	v->a[144183] = 5;
	v->a[144184] = actions(57);
	v->a[144185] = 1;
	v->a[144186] = sym_comment;
	v->a[144187] = actions(8637);
	v->a[144188] = 1;
	v->a[144189] = sym__heredoc_body_beginning;
	v->a[144190] = actions(8639);
	v->a[144191] = 1;
	v->a[144192] = sym_simple_heredoc_body;
	v->a[144193] = state(3852);
	v->a[144194] = 1;
	v->a[144195] = sym_heredoc_body;
	v->a[144196] = state(2277);
	v->a[144197] = 2;
	v->a[144198] = sym__heredoc_body;
	v->a[144199] = sym__simple_heredoc_body;
	small_parse_table_7210(v);
}

/* EOF small_parse_table_1441.c */
