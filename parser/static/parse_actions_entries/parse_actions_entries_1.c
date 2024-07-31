/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_actions_entries_1.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_actions_entries.h"

void	parse_actions_entries_5(t_parse_actions_entries_array *v)
{
	v->a[100] = shift(767);
	v->a[101] = entry(1, false);
	v->a[102] = shift(1460);
	v->a[103] = entry(1, false);
	v->a[104] = shift(1377);
	v->a[105] = entry(1, false);
	v->a[106] = shift(341);
	v->a[107] = entry(1, false);
	v->a[108] = shift(1375);
	v->a[109] = entry(1, false);
	v->a[110] = shift(50);
	v->a[111] = entry(1, false);
	v->a[112] = shift(51);
	v->a[113] = entry(1, true);
	v->a[114] = shift(1672);
	v->a[115] = entry(1, false);
	v->a[116] = shift(511);
	v->a[117] = entry(1, false);
	v->a[118] = shift(32);
	v->a[119] = entry(1, false);
	parse_actions_entries_6(v);
}

void	parse_actions_entries_6(t_parse_actions_entries_array *v)
{
	v->a[120] = shift(11);
	v->a[121] = entry(1, false);
	v->a[122] = shift(9);
	v->a[123] = entry(1, false);
	v->a[124] = shift(13);
	v->a[125] = entry(1, false);
	v->a[126] = reduce(sym_elif_clause, 3, 0, 34);
	v->a[127] = entry(1, false);
	v->a[128] = reduce(sym_elif_clause, 4, 0, 46);
	v->a[129] = entry(1, false);
	v->a[130] = shift(15);
	v->a[131] = entry(1, false);
	v->a[132] = shift(33);
	v->a[133] = entry(2, false);
	v->a[134] = reduce(aux_sym__terminated_statement, 2, 0, 13);
	v->a[135] = shift_repeat(340);
	v->a[136] = entry(2, false);
	v->a[137] = reduce(aux_sym__terminated_statement, 2, 0, 13);
	v->a[138] = shift_repeat(1804);
	v->a[139] = entry(2, false);
	parse_actions_entries_7(v);
}

void	parse_actions_entries_7(t_parse_actions_entries_array *v)
{
	v->a[140] = reduce(aux_sym__terminated_statement, 2, 0, 13);
	v->a[141] = shift_repeat(118);
	v->a[142] = entry(2, false);
	v->a[143] = reduce(aux_sym__terminated_statement, 2, 0, 13);
	v->a[144] = shift_repeat(116);
	v->a[145] = entry(1, false);
	v->a[146] = reduce(aux_sym__terminated_statement, 2, 0, 13);
	v->a[147] = entry(2, false);
	v->a[148] = reduce(aux_sym__terminated_statement, 2, 0, 13);
	v->a[149] = shift_repeat(1200);
	v->a[150] = entry(2, false);
	v->a[151] = reduce(aux_sym__terminated_statement, 2, 0, 13);
	v->a[152] = shift_repeat(52);
	v->a[153] = entry(2, false);
	v->a[154] = reduce(aux_sym__terminated_statement, 2, 0, 13);
	v->a[155] = shift_repeat(113);
	v->a[156] = entry(2, false);
	v->a[157] = reduce(aux_sym__terminated_statement, 2, 0, 13);
	v->a[158] = shift_repeat(305);
	v->a[159] = entry(2, false);
	parse_actions_entries_8(v);
}

void	parse_actions_entries_8(t_parse_actions_entries_array *v)
{
	v->a[160] = reduce(aux_sym__terminated_statement, 2, 0, 13);
	v->a[161] = shift_repeat(1150);
	v->a[162] = entry(2, false);
	v->a[163] = reduce(aux_sym__terminated_statement, 2, 0, 13);
	v->a[164] = shift_repeat(769);
	v->a[165] = entry(2, false);
	v->a[166] = reduce(aux_sym__terminated_statement, 2, 0, 13);
	v->a[167] = shift_repeat(1459);
	v->a[168] = entry(2, false);
	v->a[169] = reduce(aux_sym__terminated_statement, 2, 0, 13);
	v->a[170] = shift_repeat(1319);
	v->a[171] = entry(2, false);
	v->a[172] = reduce(aux_sym__terminated_statement, 2, 0, 13);
	v->a[173] = shift_repeat(425);
	v->a[174] = entry(2, false);
	v->a[175] = reduce(aux_sym__terminated_statement, 2, 0, 13);
	v->a[176] = shift_repeat(1321);
	v->a[177] = entry(2, false);
	v->a[178] = reduce(aux_sym__terminated_statement, 2, 0, 13);
	v->a[179] = shift_repeat(81);
	parse_actions_entries_9(v);
}

void	parse_actions_entries_9(t_parse_actions_entries_array *v)
{
	v->a[180] = entry(2, false);
	v->a[181] = reduce(aux_sym__terminated_statement, 2, 0, 13);
	v->a[182] = shift_repeat(82);
	v->a[183] = entry(2, true);
	v->a[184] = reduce(aux_sym__terminated_statement, 2, 0, 13);
	v->a[185] = shift_repeat(1794);
	v->a[186] = entry(1, false);
	v->a[187] = shift(16);
	v->a[188] = entry(1, false);
	v->a[189] = shift(29);
	v->a[190] = entry(1, false);
	v->a[191] = shift(17);
	v->a[192] = entry(1, false);
	v->a[193] = shift(18);
	v->a[194] = entry(1, false);
	v->a[195] = shift(25);
	v->a[196] = entry(1, false);
	v->a[197] = shift(98);
	v->a[198] = entry(1, false);
	v->a[199] = shift(92);
	parse_actions_entries_10(v);
}

/* EOF parse_actions_entries_1.c */
