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
	v->a[100] = shift(127);
	v->a[101] = entry(1, false);
	v->a[102] = shift(136);
	v->a[103] = entry(1, false);
	v->a[104] = shift(1514);
	v->a[105] = entry(1, false);
	v->a[106] = shift(55);
	v->a[107] = entry(1, false);
	v->a[108] = shift(12);
	v->a[109] = entry(1, false);
	v->a[110] = shift(126);
	v->a[111] = entry(1, false);
	v->a[112] = shift(305);
	v->a[113] = entry(1, false);
	v->a[114] = shift(1484);
	v->a[115] = entry(1, false);
	v->a[116] = shift(232);
	v->a[117] = entry(1, false);
	v->a[118] = shift(839);
	v->a[119] = entry(1, false);
	parse_actions_entries_6(v);
}

void	parse_actions_entries_6(t_parse_actions_entries_array *v)
{
	v->a[120] = shift(1808);
	v->a[121] = entry(1, false);
	v->a[122] = shift(1820);
	v->a[123] = entry(1, false);
	v->a[124] = shift(282);
	v->a[125] = entry(1, false);
	v->a[126] = shift(390);
	v->a[127] = entry(1, false);
	v->a[128] = shift(1976);
	v->a[129] = entry(1, false);
	v->a[130] = shift(1687);
	v->a[131] = entry(1, false);
	v->a[132] = shift(109);
	v->a[133] = entry(1, false);
	v->a[134] = shift(101);
	v->a[135] = entry(1, true);
	v->a[136] = shift(1843);
	v->a[137] = entry(1, true);
	v->a[138] = shift(2066);
	v->a[139] = entry(1, false);
	parse_actions_entries_7(v);
}

void	parse_actions_entries_7(t_parse_actions_entries_array *v)
{
	v->a[140] = shift(19);
	v->a[141] = entry(1, false);
	v->a[142] = shift(689);
	v->a[143] = entry(1, false);
	v->a[144] = shift(10);
	v->a[145] = entry(1, false);
	v->a[146] = shift(11);
	v->a[147] = entry(1, false);
	v->a[148] = shift(26);
	v->a[149] = entry(1, false);
	v->a[150] = reduce(sym_elif_clause, 3, 0, 0);
	v->a[151] = entry(2, false);
	v->a[152] = reduce(aux_sym__terminated_statement, 2, 0, 0);
	v->a[153] = shift_repeat(399);
	v->a[154] = entry(2, false);
	v->a[155] = reduce(aux_sym__terminated_statement, 2, 0, 0);
	v->a[156] = shift_repeat(2261);
	v->a[157] = entry(2, false);
	v->a[158] = reduce(aux_sym__terminated_statement, 2, 0, 0);
	v->a[159] = shift_repeat(128);
	parse_actions_entries_8(v);
}

void	parse_actions_entries_8(t_parse_actions_entries_array *v)
{
	v->a[160] = entry(2, false);
	v->a[161] = reduce(aux_sym__terminated_statement, 2, 0, 0);
	v->a[162] = shift_repeat(129);
	v->a[163] = entry(1, false);
	v->a[164] = reduce(aux_sym__terminated_statement, 2, 0, 0);
	v->a[165] = entry(2, false);
	v->a[166] = reduce(aux_sym__terminated_statement, 2, 0, 0);
	v->a[167] = shift_repeat(1516);
	v->a[168] = entry(2, false);
	v->a[169] = reduce(aux_sym__terminated_statement, 2, 0, 0);
	v->a[170] = shift_repeat(119);
	v->a[171] = entry(2, false);
	v->a[172] = reduce(aux_sym__terminated_statement, 2, 0, 0);
	v->a[173] = shift_repeat(133);
	v->a[174] = entry(2, false);
	v->a[175] = reduce(aux_sym__terminated_statement, 2, 0, 0);
	v->a[176] = shift_repeat(298);
	v->a[177] = entry(2, false);
	v->a[178] = reduce(aux_sym__terminated_statement, 2, 0, 0);
	v->a[179] = shift_repeat(1371);
	parse_actions_entries_9(v);
}

void	parse_actions_entries_9(t_parse_actions_entries_array *v)
{
	v->a[180] = entry(2, false);
	v->a[181] = reduce(aux_sym__terminated_statement, 2, 0, 0);
	v->a[182] = shift_repeat(236);
	v->a[183] = entry(2, false);
	v->a[184] = reduce(aux_sym__terminated_statement, 2, 0, 0);
	v->a[185] = shift_repeat(808);
	v->a[186] = entry(2, false);
	v->a[187] = reduce(aux_sym__terminated_statement, 2, 0, 0);
	v->a[188] = shift_repeat(1812);
	v->a[189] = entry(2, false);
	v->a[190] = reduce(aux_sym__terminated_statement, 2, 0, 0);
	v->a[191] = shift_repeat(1719);
	v->a[192] = entry(2, false);
	v->a[193] = reduce(aux_sym__terminated_statement, 2, 0, 0);
	v->a[194] = shift_repeat(397);
	v->a[195] = entry(2, false);
	v->a[196] = reduce(aux_sym__terminated_statement, 2, 0, 0);
	v->a[197] = shift_repeat(398);
	v->a[198] = entry(2, false);
	v->a[199] = reduce(aux_sym__terminated_statement, 2, 0, 0);
	parse_actions_entries_10(v);
}

/* EOF parse_actions_entries_1.c */
