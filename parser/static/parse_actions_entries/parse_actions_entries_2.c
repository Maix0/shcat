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
	v->a[200] = entry(1, false);
	v->a[201] = shift(30);
	v->a[202] = entry(1, false);
	v->a[203] = shift(18);
	v->a[204] = entry(1, false);
	v->a[205] = reduce(sym_elif_clause, 4, 0, 44);
	v->a[206] = entry(1, false);
	v->a[207] = shift(24);
	v->a[208] = entry(1, false);
	v->a[209] = shift(10);
	v->a[210] = entry(1, false);
	v->a[211] = shift(32);
	v->a[212] = entry(1, false);
	v->a[213] = reduce(sym_elif_clause, 3, 0, 35);
	v->a[214] = entry(1, false);
	v->a[215] = shift(67);
	v->a[216] = entry(1, false);
	v->a[217] = shift(40);
	v->a[218] = entry(1, false);
	v->a[219] = shift(61);
	parse_actions_entries_11(v);
}

void	parse_actions_entries_11(t_parse_actions_entries_array *v)
{
	v->a[220] = entry(1, false);
	v->a[221] = shift(379);
	v->a[222] = entry(1, false);
	v->a[223] = shift(461);
	v->a[224] = entry(1, false);
	v->a[225] = shift(1581);
	v->a[226] = entry(1, false);
	v->a[227] = shift(238);
	v->a[228] = entry(1, false);
	v->a[229] = shift(382);
	v->a[230] = entry(1, true);
	v->a[231] = shift(1944);
	v->a[232] = entry(1, true);
	v->a[233] = shift(2250);
	v->a[234] = entry(1, false);
	v->a[235] = shift(1257);
	v->a[236] = entry(1, false);
	v->a[237] = shift(4);
	v->a[238] = entry(1, false);
	v->a[239] = shift(7);
	parse_actions_entries_12(v);
}

void	parse_actions_entries_12(t_parse_actions_entries_array *v)
{
	v->a[240] = entry(1, false);
	v->a[241] = shift(445);
	v->a[242] = entry(1, false);
	v->a[243] = shift(459);
	v->a[244] = entry(1, false);
	v->a[245] = shift(34);
	v->a[246] = entry(1, false);
	v->a[247] = shift(1359);
	v->a[248] = entry(1, false);
	v->a[249] = shift(6);
	v->a[250] = entry(1, false);
	v->a[251] = shift(1286);
	v->a[252] = entry(1, false);
	v->a[253] = shift(1376);
	v->a[254] = entry(1, false);
	v->a[255] = shift(1675);
	v->a[256] = entry(1, false);
	v->a[257] = shift(1634);
	v->a[258] = entry(1, false);
	v->a[259] = reduce(sym_else_clause, 2, 0, 43);
	parse_actions_entries_13(v);
}

void	parse_actions_entries_13(t_parse_actions_entries_array *v)
{
	v->a[260] = entry(1, false);
	v->a[261] = shift(1393);
	v->a[262] = entry(1, false);
	v->a[263] = reduce(sym_else_clause, 1, 0, 0);
	v->a[264] = entry(1, false);
	v->a[265] = shift(1673);
	v->a[266] = entry(1, false);
	v->a[267] = shift(1211);
	v->a[268] = entry(2, false);
	v->a[269] = reduce(aux_sym__statements_repeat1, 2, 0, 16);
	v->a[270] = shift_repeat(444);
	v->a[271] = entry(2, false);
	v->a[272] = reduce(aux_sym__statements_repeat1, 2, 0, 16);
	v->a[273] = shift_repeat(2338);
	v->a[274] = entry(2, false);
	v->a[275] = reduce(aux_sym__statements_repeat1, 2, 0, 16);
	v->a[276] = shift_repeat(134);
	v->a[277] = entry(2, false);
	v->a[278] = reduce(aux_sym__statements_repeat1, 2, 0, 16);
	v->a[279] = shift_repeat(141);
	parse_actions_entries_14(v);
}

void	parse_actions_entries_14(t_parse_actions_entries_array *v)
{
	v->a[280] = entry(2, false);
	v->a[281] = reduce(aux_sym__statements_repeat1, 2, 0, 16);
	v->a[282] = shift_repeat(1627);
	v->a[283] = entry(2, false);
	v->a[284] = reduce(aux_sym__statements_repeat1, 2, 0, 16);
	v->a[285] = shift_repeat(69);
	v->a[286] = entry(2, false);
	v->a[287] = reduce(aux_sym__statements_repeat1, 2, 0, 16);
	v->a[288] = shift_repeat(128);
	v->a[289] = entry(2, false);
	v->a[290] = reduce(aux_sym__statements_repeat1, 2, 0, 16);
	v->a[291] = shift_repeat(449);
	v->a[292] = entry(2, false);
	v->a[293] = reduce(aux_sym__statements_repeat1, 2, 0, 16);
	v->a[294] = shift_repeat(1597);
	v->a[295] = entry(2, false);
	v->a[296] = reduce(aux_sym__statements_repeat1, 2, 0, 16);
	v->a[297] = shift_repeat(257);
	v->a[298] = entry(2, false);
	v->a[299] = reduce(aux_sym__statements_repeat1, 2, 0, 16);
	parse_actions_entries_15(v);
}

/* EOF parse_actions_entries_2.c */
