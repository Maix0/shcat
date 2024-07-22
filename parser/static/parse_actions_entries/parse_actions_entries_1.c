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
	v->a[100] = shift(31);
	v->a[101] = entry(1, false);
	v->a[102] = shift(133);
	v->a[103] = entry(1, false);
	v->a[104] = shift(366);
	v->a[105] = entry(1, false);
	v->a[106] = shift(1413);
	v->a[107] = entry(1, false);
	v->a[108] = shift(699);
	v->a[109] = entry(1, false);
	v->a[110] = shift(1719);
	v->a[111] = entry(1, false);
	v->a[112] = shift(1621);
	v->a[113] = entry(1, false);
	v->a[114] = shift(378);
	v->a[115] = entry(1, false);
	v->a[116] = shift(1620);
	v->a[117] = entry(1, false);
	v->a[118] = shift(73);
	v->a[119] = entry(1, false);
	parse_actions_entries_6(v);
}

void	parse_actions_entries_6(t_parse_actions_entries_array *v)
{
	v->a[120] = shift(75);
	v->a[121] = entry(1, true);
	v->a[122] = shift(1751);
	v->a[123] = entry(1, true);
	v->a[124] = shift(1976);
	v->a[125] = entry(1, false);
	v->a[126] = shift(584);
	v->a[127] = entry(1, false);
	v->a[128] = shift(16);
	v->a[129] = entry(1, false);
	v->a[130] = shift(27);
	v->a[131] = entry(2, false);
	v->a[132] = reduce(aux_sym__terminated_statement, 2, 0, 14);
	v->a[133] = shift_repeat(456);
	v->a[134] = entry(2, false);
	v->a[135] = reduce(aux_sym__terminated_statement, 2, 0, 14);
	v->a[136] = shift_repeat(2126);
	v->a[137] = entry(2, false);
	v->a[138] = reduce(aux_sym__terminated_statement, 2, 0, 14);
	v->a[139] = shift_repeat(120);
	parse_actions_entries_7(v);
}

void	parse_actions_entries_7(t_parse_actions_entries_array *v)
{
	v->a[140] = entry(2, false);
	v->a[141] = reduce(aux_sym__terminated_statement, 2, 0, 14);
	v->a[142] = shift_repeat(125);
	v->a[143] = entry(1, false);
	v->a[144] = reduce(aux_sym__terminated_statement, 2, 0, 14);
	v->a[145] = entry(2, false);
	v->a[146] = reduce(aux_sym__terminated_statement, 2, 0, 14);
	v->a[147] = shift_repeat(1434);
	v->a[148] = entry(2, false);
	v->a[149] = reduce(aux_sym__terminated_statement, 2, 0, 14);
	v->a[150] = shift_repeat(83);
	v->a[151] = entry(2, false);
	v->a[152] = reduce(aux_sym__terminated_statement, 2, 0, 14);
	v->a[153] = shift_repeat(118);
	v->a[154] = entry(2, false);
	v->a[155] = reduce(aux_sym__terminated_statement, 2, 0, 14);
	v->a[156] = shift_repeat(367);
	v->a[157] = entry(2, false);
	v->a[158] = reduce(aux_sym__terminated_statement, 2, 0, 14);
	v->a[159] = shift_repeat(1421);
	parse_actions_entries_8(v);
}

void	parse_actions_entries_8(t_parse_actions_entries_array *v)
{
	v->a[160] = entry(2, false);
	v->a[161] = reduce(aux_sym__terminated_statement, 2, 0, 14);
	v->a[162] = shift_repeat(715);
	v->a[163] = entry(2, false);
	v->a[164] = reduce(aux_sym__terminated_statement, 2, 0, 14);
	v->a[165] = shift_repeat(1704);
	v->a[166] = entry(2, false);
	v->a[167] = reduce(aux_sym__terminated_statement, 2, 0, 14);
	v->a[168] = shift_repeat(1624);
	v->a[169] = entry(2, false);
	v->a[170] = reduce(aux_sym__terminated_statement, 2, 0, 14);
	v->a[171] = shift_repeat(455);
	v->a[172] = entry(2, false);
	v->a[173] = reduce(aux_sym__terminated_statement, 2, 0, 14);
	v->a[174] = shift_repeat(1627);
	v->a[175] = entry(2, false);
	v->a[176] = reduce(aux_sym__terminated_statement, 2, 0, 14);
	v->a[177] = shift_repeat(113);
	v->a[178] = entry(2, false);
	v->a[179] = reduce(aux_sym__terminated_statement, 2, 0, 14);
	parse_actions_entries_9(v);
}

void	parse_actions_entries_9(t_parse_actions_entries_array *v)
{
	v->a[180] = shift_repeat(112);
	v->a[181] = entry(2, true);
	v->a[182] = reduce(aux_sym__terminated_statement, 2, 0, 14);
	v->a[183] = shift_repeat(1759);
	v->a[184] = entry(2, true);
	v->a[185] = reduce(aux_sym__terminated_statement, 2, 0, 14);
	v->a[186] = shift_repeat(2005);
	v->a[187] = entry(1, false);
	v->a[188] = shift(14);
	v->a[189] = entry(1, false);
	v->a[190] = reduce(sym_elif_clause, 4, 0, 48);
	v->a[191] = entry(1, false);
	v->a[192] = reduce(sym_elif_clause, 3, 0, 36);
	v->a[193] = entry(1, false);
	v->a[194] = shift(33);
	v->a[195] = entry(1, false);
	v->a[196] = shift(17);
	v->a[197] = entry(1, false);
	v->a[198] = shift(20);
	v->a[199] = entry(1, false);
	parse_actions_entries_10(v);
}

/* EOF parse_actions_entries_1.c */
