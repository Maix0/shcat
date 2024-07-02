/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_actions_entries_2.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_actions_entries.h"

void	parse_actions_entries_10(t_parse_actions_entries_array *v)
{
	v->a[200] = shift(15);
	v->a[201] = entry(1, false);
	v->a[202] = shift(16);
	v->a[203] = entry(1, false);
	v->a[204] = shift(24);
	v->a[205] = entry(1, false);
	v->a[206] = shift(111);
	v->a[207] = entry(1, false);
	v->a[208] = shift(84);
	v->a[209] = entry(1, false);
	v->a[210] = shift(66);
	v->a[211] = entry(1, false);
	v->a[212] = shift(349);
	v->a[213] = entry(1, false);
	v->a[214] = shift(375);
	v->a[215] = entry(1, false);
	v->a[216] = shift(1373);
	v->a[217] = entry(1, false);
	v->a[218] = shift(347);
	v->a[219] = entry(1, true);
	parse_actions_entries_11(v);
}

void	parse_actions_entries_11(t_parse_actions_entries_array *v)
{
	v->a[220] = shift(1763);
	v->a[221] = entry(1, true);
	v->a[222] = shift(2074);
	v->a[223] = entry(1, false);
	v->a[224] = shift(399);
	v->a[225] = entry(1, false);
	v->a[226] = shift(411);
	v->a[227] = entry(1, false);
	v->a[228] = reduce(sym_else_clause, 1, 0, 0);
	v->a[229] = entry(1, false);
	v->a[230] = shift(1125);
	v->a[231] = entry(1, false);
	v->a[232] = shift(7);
	v->a[233] = entry(1, false);
	v->a[234] = shift(1149);
	v->a[235] = entry(1, false);
	v->a[236] = shift(1579);
	v->a[237] = entry(1, false);
	v->a[238] = shift(1576);
	v->a[239] = entry(1, false);
	parse_actions_entries_12(v);
}

void	parse_actions_entries_12(t_parse_actions_entries_array *v)
{
	v->a[240] = shift(1572);
	v->a[241] = entry(1, false);
	v->a[242] = shift(5);
	v->a[243] = entry(1, false);
	v->a[244] = shift(1232);
	v->a[245] = entry(1, false);
	v->a[246] = shift(1230);
	v->a[247] = entry(1, false);
	v->a[248] = shift(1266);
	v->a[249] = entry(1, false);
	v->a[250] = shift(29);
	v->a[251] = entry(1, false);
	v->a[252] = reduce(sym_else_clause, 2, 0, 47);
	v->a[253] = entry(1, false);
	v->a[254] = shift(4);
	v->a[255] = entry(1, false);
	v->a[256] = shift(1178);
	v->a[257] = entry(2, false);
	v->a[258] = reduce(aux_sym__statements_repeat1, 2, 0, 14);
	v->a[259] = shift_repeat(434);
	parse_actions_entries_13(v);
}

void	parse_actions_entries_13(t_parse_actions_entries_array *v)
{
	v->a[260] = entry(2, false);
	v->a[261] = reduce(aux_sym__statements_repeat1, 2, 0, 14);
	v->a[262] = shift_repeat(2126);
	v->a[263] = entry(2, false);
	v->a[264] = reduce(aux_sym__statements_repeat1, 2, 0, 14);
	v->a[265] = shift_repeat(124);
	v->a[266] = entry(2, false);
	v->a[267] = reduce(aux_sym__statements_repeat1, 2, 0, 14);
	v->a[268] = shift_repeat(123);
	v->a[269] = entry(2, false);
	v->a[270] = reduce(aux_sym__statements_repeat1, 2, 0, 14);
	v->a[271] = shift_repeat(1442);
	v->a[272] = entry(2, false);
	v->a[273] = reduce(aux_sym__statements_repeat1, 2, 0, 14);
	v->a[274] = shift_repeat(115);
	v->a[275] = entry(2, false);
	v->a[276] = reduce(aux_sym__statements_repeat1, 2, 0, 14);
	v->a[277] = shift_repeat(119);
	v->a[278] = entry(2, false);
	v->a[279] = reduce(aux_sym__statements_repeat1, 2, 0, 14);
	parse_actions_entries_14(v);
}

void	parse_actions_entries_14(t_parse_actions_entries_array *v)
{
	v->a[280] = shift_repeat(390);
	v->a[281] = entry(2, false);
	v->a[282] = reduce(aux_sym__statements_repeat1, 2, 0, 14);
	v->a[283] = shift_repeat(1388);
	v->a[284] = entry(2, false);
	v->a[285] = reduce(aux_sym__statements_repeat1, 2, 0, 14);
	v->a[286] = shift_repeat(760);
	v->a[287] = entry(2, false);
	v->a[288] = reduce(aux_sym__statements_repeat1, 2, 0, 14);
	v->a[289] = shift_repeat(1636);
	v->a[290] = entry(2, false);
	v->a[291] = reduce(aux_sym__statements_repeat1, 2, 0, 14);
	v->a[292] = shift_repeat(1639);
	v->a[293] = entry(2, false);
	v->a[294] = reduce(aux_sym__statements_repeat1, 2, 0, 14);
	v->a[295] = shift_repeat(433);
	v->a[296] = entry(2, false);
	v->a[297] = reduce(aux_sym__statements_repeat1, 2, 0, 14);
	v->a[298] = shift_repeat(1594);
	v->a[299] = entry(2, false);
	parse_actions_entries_15(v);
}

/* EOF parse_actions_entries_2.c */
