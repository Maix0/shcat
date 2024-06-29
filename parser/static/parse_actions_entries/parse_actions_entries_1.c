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
	v->a[100] = shift(709);
	v->a[101] = entry(1, false);
	v->a[102] = shift(135);
	v->a[103] = entry(1, false);
	v->a[104] = shift(312);
	v->a[105] = entry(1, false);
	v->a[106] = shift(1681);
	v->a[107] = entry(1, false);
	v->a[108] = shift(223);
	v->a[109] = entry(1, false);
	v->a[110] = shift(895);
	v->a[111] = entry(1, false);
	v->a[112] = shift(1892);
	v->a[113] = entry(1, false);
	v->a[114] = shift(1919);
	v->a[115] = entry(1, false);
	v->a[116] = shift(289);
	v->a[117] = entry(1, false);
	v->a[118] = shift(1789);
	v->a[119] = entry(1, false);
	parse_actions_entries_6(v);
}

void	parse_actions_entries_6(t_parse_actions_entries_array *v)
{
	v->a[120] = shift(116);
	v->a[121] = entry(1, false);
	v->a[122] = shift(121);
	v->a[123] = entry(1, true);
	v->a[124] = shift(1946);
	v->a[125] = entry(1, true);
	v->a[126] = shift(2143);
	v->a[127] = entry(1, false);
	v->a[128] = shift(8);
	v->a[129] = entry(1, false);
	v->a[130] = shift(14);
	v->a[131] = entry(1, false);
	v->a[132] = shift(34);
	v->a[133] = entry(1, false);
	v->a[134] = shift(23);
	v->a[135] = entry(1, false);
	v->a[136] = shift(10);
	v->a[137] = entry(1, false);
	v->a[138] = shift(13);
	v->a[139] = entry(1, false);
	parse_actions_entries_7(v);
}

void	parse_actions_entries_7(t_parse_actions_entries_array *v)
{
	v->a[140] = shift(17);
	v->a[141] = entry(2, false);
	v->a[142] = reduce(aux_sym__terminated_statement, 2, 0, 16);
	v->a[143] = shift_repeat(419);
	v->a[144] = entry(2, false);
	v->a[145] = reduce(aux_sym__terminated_statement, 2, 0, 16);
	v->a[146] = shift_repeat(2338);
	v->a[147] = entry(2, false);
	v->a[148] = reduce(aux_sym__terminated_statement, 2, 0, 16);
	v->a[149] = shift_repeat(139);
	v->a[150] = entry(2, false);
	v->a[151] = reduce(aux_sym__terminated_statement, 2, 0, 16);
	v->a[152] = shift_repeat(127);
	v->a[153] = entry(1, false);
	v->a[154] = reduce(aux_sym__terminated_statement, 2, 0, 16);
	v->a[155] = entry(2, false);
	v->a[156] = reduce(aux_sym__terminated_statement, 2, 0, 16);
	v->a[157] = shift_repeat(1700);
	v->a[158] = entry(2, false);
	v->a[159] = reduce(aux_sym__terminated_statement, 2, 0, 16);
	parse_actions_entries_8(v);
}

void	parse_actions_entries_8(t_parse_actions_entries_array *v)
{
	v->a[160] = shift_repeat(53);
	v->a[161] = entry(2, false);
	v->a[162] = reduce(aux_sym__terminated_statement, 2, 0, 16);
	v->a[163] = shift_repeat(126);
	v->a[164] = entry(2, false);
	v->a[165] = reduce(aux_sym__terminated_statement, 2, 0, 16);
	v->a[166] = shift_repeat(366);
	v->a[167] = entry(2, false);
	v->a[168] = reduce(aux_sym__terminated_statement, 2, 0, 16);
	v->a[169] = shift_repeat(1680);
	v->a[170] = entry(2, false);
	v->a[171] = reduce(aux_sym__terminated_statement, 2, 0, 16);
	v->a[172] = shift_repeat(264);
	v->a[173] = entry(2, false);
	v->a[174] = reduce(aux_sym__terminated_statement, 2, 0, 16);
	v->a[175] = shift_repeat(919);
	v->a[176] = entry(2, false);
	v->a[177] = reduce(aux_sym__terminated_statement, 2, 0, 16);
	v->a[178] = shift_repeat(1904);
	v->a[179] = entry(2, false);
	parse_actions_entries_9(v);
}

void	parse_actions_entries_9(t_parse_actions_entries_array *v)
{
	v->a[180] = reduce(aux_sym__terminated_statement, 2, 0, 16);
	v->a[181] = shift_repeat(1898);
	v->a[182] = entry(2, false);
	v->a[183] = reduce(aux_sym__terminated_statement, 2, 0, 16);
	v->a[184] = shift_repeat(420);
	v->a[185] = entry(2, false);
	v->a[186] = reduce(aux_sym__terminated_statement, 2, 0, 16);
	v->a[187] = shift_repeat(1799);
	v->a[188] = entry(2, false);
	v->a[189] = reduce(aux_sym__terminated_statement, 2, 0, 16);
	v->a[190] = shift_repeat(112);
	v->a[191] = entry(2, false);
	v->a[192] = reduce(aux_sym__terminated_statement, 2, 0, 16);
	v->a[193] = shift_repeat(40);
	v->a[194] = entry(2, true);
	v->a[195] = reduce(aux_sym__terminated_statement, 2, 0, 16);
	v->a[196] = shift_repeat(1950);
	v->a[197] = entry(2, true);
	v->a[198] = reduce(aux_sym__terminated_statement, 2, 0, 16);
	v->a[199] = shift_repeat(2186);
	parse_actions_entries_10(v);
}

/* EOF parse_actions_entries_1.c */
