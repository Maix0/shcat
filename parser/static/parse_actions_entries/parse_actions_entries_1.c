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
	v->a[100] = shift(46);
	v->a[101] = entry(1, false);
	v->a[102] = shift(128);
	v->a[103] = entry(1, false);
	v->a[104] = shift(420);
	v->a[105] = entry(1, false);
	v->a[106] = shift(1803);
	v->a[107] = entry(1, false);
	v->a[108] = shift(222);
	v->a[109] = entry(1, false);
	v->a[110] = shift(1053);
	v->a[111] = entry(1, false);
	v->a[112] = shift(2037);
	v->a[113] = entry(1, false);
	v->a[114] = shift(2064);
	v->a[115] = entry(1, false);
	v->a[116] = shift(282);
	v->a[117] = entry(1, false);
	v->a[118] = shift(1920);
	v->a[119] = entry(1, false);
	parse_actions_entries_6(v);
}

void	parse_actions_entries_6(t_parse_actions_entries_array *v)
{
	v->a[120] = shift(92);
	v->a[121] = entry(1, false);
	v->a[122] = shift(93);
	v->a[123] = entry(1, true);
	v->a[124] = shift(2085);
	v->a[125] = entry(1, true);
	v->a[126] = shift(2288);
	v->a[127] = entry(1, false);
	v->a[128] = shift(16);
	v->a[129] = entry(1, false);
	v->a[130] = shift(17);
	v->a[131] = entry(1, false);
	v->a[132] = shift(8);
	v->a[133] = entry(1, false);
	v->a[134] = shift(24);
	v->a[135] = entry(1, false);
	v->a[136] = shift(27);
	v->a[137] = entry(1, false);
	v->a[138] = shift(28);
	v->a[139] = entry(1, false);
	parse_actions_entries_7(v);
}

void	parse_actions_entries_7(t_parse_actions_entries_array *v)
{
	v->a[140] = shift(32);
	v->a[141] = entry(1, false);
	v->a[142] = shift(14);
	v->a[143] = entry(2, false);
	v->a[144] = reduce(aux_sym__terminated_statement, 2, 0, 16);
	v->a[145] = shift_repeat(393);
	v->a[146] = entry(2, false);
	v->a[147] = reduce(aux_sym__terminated_statement, 2, 0, 16);
	v->a[148] = shift_repeat(2476);
	v->a[149] = entry(2, false);
	v->a[150] = reduce(aux_sym__terminated_statement, 2, 0, 16);
	v->a[151] = shift_repeat(141);
	v->a[152] = entry(2, false);
	v->a[153] = reduce(aux_sym__terminated_statement, 2, 0, 16);
	v->a[154] = shift_repeat(139);
	v->a[155] = entry(1, false);
	v->a[156] = reduce(aux_sym__terminated_statement, 2, 0, 16);
	v->a[157] = entry(2, false);
	v->a[158] = reduce(aux_sym__terminated_statement, 2, 0, 16);
	v->a[159] = shift_repeat(1848);
	parse_actions_entries_8(v);
}

void	parse_actions_entries_8(t_parse_actions_entries_array *v)
{
	v->a[160] = entry(2, false);
	v->a[161] = reduce(aux_sym__terminated_statement, 2, 0, 16);
	v->a[162] = shift_repeat(86);
	v->a[163] = entry(2, false);
	v->a[164] = reduce(aux_sym__terminated_statement, 2, 0, 16);
	v->a[165] = shift_repeat(135);
	v->a[166] = entry(2, false);
	v->a[167] = reduce(aux_sym__terminated_statement, 2, 0, 16);
	v->a[168] = shift_repeat(396);
	v->a[169] = entry(2, false);
	v->a[170] = reduce(aux_sym__terminated_statement, 2, 0, 16);
	v->a[171] = shift_repeat(1808);
	v->a[172] = entry(2, false);
	v->a[173] = reduce(aux_sym__terminated_statement, 2, 0, 16);
	v->a[174] = shift_repeat(266);
	v->a[175] = entry(2, false);
	v->a[176] = reduce(aux_sym__terminated_statement, 2, 0, 16);
	v->a[177] = shift_repeat(1054);
	v->a[178] = entry(2, false);
	v->a[179] = reduce(aux_sym__terminated_statement, 2, 0, 16);
	parse_actions_entries_9(v);
}

void	parse_actions_entries_9(t_parse_actions_entries_array *v)
{
	v->a[180] = shift_repeat(2018);
	v->a[181] = entry(2, false);
	v->a[182] = reduce(aux_sym__terminated_statement, 2, 0, 16);
	v->a[183] = shift_repeat(2021);
	v->a[184] = entry(2, false);
	v->a[185] = reduce(aux_sym__terminated_statement, 2, 0, 16);
	v->a[186] = shift_repeat(394);
	v->a[187] = entry(2, false);
	v->a[188] = reduce(aux_sym__terminated_statement, 2, 0, 16);
	v->a[189] = shift_repeat(1932);
	v->a[190] = entry(2, false);
	v->a[191] = reduce(aux_sym__terminated_statement, 2, 0, 16);
	v->a[192] = shift_repeat(42);
	v->a[193] = entry(2, false);
	v->a[194] = reduce(aux_sym__terminated_statement, 2, 0, 16);
	v->a[195] = shift_repeat(43);
	v->a[196] = entry(2, true);
	v->a[197] = reduce(aux_sym__terminated_statement, 2, 0, 16);
	v->a[198] = shift_repeat(2094);
	v->a[199] = entry(2, true);
	parse_actions_entries_10(v);
}

/* EOF parse_actions_entries_1.c */
