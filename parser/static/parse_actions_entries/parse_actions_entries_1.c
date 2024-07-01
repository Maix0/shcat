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
	v->a[100] = shift_repeat(141);
	v->a[101] = entry(1, false);
	v->a[102] = reduce(aux_sym__terminated_statement, 2, 0, 16);
	v->a[103] = entry(2, false);
	v->a[104] = reduce(aux_sym__terminated_statement, 2, 0, 16);
	v->a[105] = shift_repeat(1627);
	v->a[106] = entry(2, false);
	v->a[107] = reduce(aux_sym__terminated_statement, 2, 0, 16);
	v->a[108] = shift_repeat(69);
	v->a[109] = entry(2, false);
	v->a[110] = reduce(aux_sym__terminated_statement, 2, 0, 16);
	v->a[111] = shift_repeat(128);
	v->a[112] = entry(2, false);
	v->a[113] = reduce(aux_sym__terminated_statement, 2, 0, 16);
	v->a[114] = shift_repeat(449);
	v->a[115] = entry(2, false);
	v->a[116] = reduce(aux_sym__terminated_statement, 2, 0, 16);
	v->a[117] = shift_repeat(1597);
	v->a[118] = entry(2, false);
	v->a[119] = reduce(aux_sym__terminated_statement, 2, 0, 16);
	parse_actions_entries_6(v);
}

void	parse_actions_entries_6(t_parse_actions_entries_array *v)
{
	v->a[120] = shift_repeat(257);
	v->a[121] = entry(2, false);
	v->a[122] = reduce(aux_sym__terminated_statement, 2, 0, 16);
	v->a[123] = shift_repeat(873);
	v->a[124] = entry(2, false);
	v->a[125] = reduce(aux_sym__terminated_statement, 2, 0, 16);
	v->a[126] = shift_repeat(1856);
	v->a[127] = entry(2, false);
	v->a[128] = reduce(aux_sym__terminated_statement, 2, 0, 16);
	v->a[129] = shift_repeat(1852);
	v->a[130] = entry(2, false);
	v->a[131] = reduce(aux_sym__terminated_statement, 2, 0, 16);
	v->a[132] = shift_repeat(443);
	v->a[133] = entry(2, false);
	v->a[134] = reduce(aux_sym__terminated_statement, 2, 0, 16);
	v->a[135] = shift_repeat(1788);
	v->a[136] = entry(2, false);
	v->a[137] = reduce(aux_sym__terminated_statement, 2, 0, 16);
	v->a[138] = shift_repeat(48);
	v->a[139] = entry(2, false);
	parse_actions_entries_7(v);
}

void	parse_actions_entries_7(t_parse_actions_entries_array *v)
{
	v->a[140] = reduce(aux_sym__terminated_statement, 2, 0, 16);
	v->a[141] = shift_repeat(44);
	v->a[142] = entry(2, true);
	v->a[143] = reduce(aux_sym__terminated_statement, 2, 0, 16);
	v->a[144] = shift_repeat(1970);
	v->a[145] = entry(2, true);
	v->a[146] = reduce(aux_sym__terminated_statement, 2, 0, 16);
	v->a[147] = shift_repeat(2199);
	v->a[148] = entry(1, false);
	v->a[149] = shift(16);
	v->a[150] = entry(1, false);
	v->a[151] = shift(17);
	v->a[152] = entry(1, false);
	v->a[153] = shift(8);
	v->a[154] = entry(1, false);
	v->a[155] = shift(19);
	v->a[156] = entry(1, false);
	v->a[157] = shift(386);
	v->a[158] = entry(1, false);
	v->a[159] = shift(2252);
	parse_actions_entries_8(v);
}

void	parse_actions_entries_8(t_parse_actions_entries_array *v)
{
	v->a[160] = entry(1, false);
	v->a[161] = shift(130);
	v->a[162] = entry(1, false);
	v->a[163] = shift(129);
	v->a[164] = entry(1, false);
	v->a[165] = shift(1612);
	v->a[166] = entry(1, false);
	v->a[167] = shift(120);
	v->a[168] = entry(1, false);
	v->a[169] = shift(132);
	v->a[170] = entry(1, false);
	v->a[171] = shift(413);
	v->a[172] = entry(1, false);
	v->a[173] = shift(1550);
	v->a[174] = entry(1, false);
	v->a[175] = shift(233);
	v->a[176] = entry(1, false);
	v->a[177] = shift(838);
	v->a[178] = entry(1, false);
	v->a[179] = shift(1892);
	parse_actions_entries_9(v);
}

void	parse_actions_entries_9(t_parse_actions_entries_array *v)
{
	v->a[180] = entry(1, false);
	v->a[181] = shift(1913);
	v->a[182] = entry(1, false);
	v->a[183] = shift(385);
	v->a[184] = entry(1, false);
	v->a[185] = shift(1769);
	v->a[186] = entry(1, false);
	v->a[187] = shift(101);
	v->a[188] = entry(1, false);
	v->a[189] = shift(100);
	v->a[190] = entry(1, true);
	v->a[191] = shift(1955);
	v->a[192] = entry(1, true);
	v->a[193] = shift(2143);
	v->a[194] = entry(1, false);
	v->a[195] = shift(21);
	v->a[196] = entry(1, false);
	v->a[197] = shift(13);
	v->a[198] = entry(1, false);
	v->a[199] = shift(20);
	parse_actions_entries_10(v);
}

/* EOF parse_actions_entries_1.c */
