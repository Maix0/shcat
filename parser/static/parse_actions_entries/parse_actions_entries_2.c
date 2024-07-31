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
	v->a[201] = shift(76);
	v->a[202] = entry(1, false);
	v->a[203] = shift(343);
	v->a[204] = entry(1, false);
	v->a[205] = shift(324);
	v->a[206] = entry(1, false);
	v->a[207] = shift(321);
	v->a[208] = entry(1, false);
	v->a[209] = shift(318);
	v->a[210] = entry(1, false);
	v->a[211] = shift(1190);
	v->a[212] = entry(1, false);
	v->a[213] = shift(327);
	v->a[214] = entry(1, true);
	v->a[215] = shift(1753);
	v->a[216] = entry(1, false);
	v->a[217] = shift(6);
	v->a[218] = entry(1, false);
	v->a[219] = shift(993);
	parse_actions_entries_11(v);
}

void	parse_actions_entries_11(t_parse_actions_entries_array *v)
{
	v->a[220] = entry(1, false);
	v->a[221] = shift(1156);
	v->a[222] = entry(1, false);
	v->a[223] = reduce(sym_else_clause, 2, 0, 45);
	v->a[224] = entry(1, false);
	v->a[225] = shift(20);
	v->a[226] = entry(1, false);
	v->a[227] = shift(1362);
	v->a[228] = entry(1, false);
	v->a[229] = shift(1165);
	v->a[230] = entry(1, false);
	v->a[231] = shift(1161);
	v->a[232] = entry(1, false);
	v->a[233] = shift(7);
	v->a[234] = entry(1, false);
	v->a[235] = shift(2);
	v->a[236] = entry(1, false);
	v->a[237] = reduce(sym_else_clause, 1, 0, 0);
	v->a[238] = entry(1, false);
	v->a[239] = shift(1033);
	parse_actions_entries_12(v);
}

void	parse_actions_entries_12(t_parse_actions_entries_array *v)
{
	v->a[240] = entry(1, false);
	v->a[241] = shift(1347);
	v->a[242] = entry(1, false);
	v->a[243] = shift(1030);
	v->a[244] = entry(1, false);
	v->a[245] = shift(1318);
	v->a[246] = entry(2, false);
	v->a[247] = reduce(aux_sym__statements_repeat1, 2, 0, 13);
	v->a[248] = shift_repeat(340);
	v->a[249] = entry(2, false);
	v->a[250] = reduce(aux_sym__statements_repeat1, 2, 0, 13);
	v->a[251] = shift_repeat(1804);
	v->a[252] = entry(2, false);
	v->a[253] = reduce(aux_sym__statements_repeat1, 2, 0, 13);
	v->a[254] = shift_repeat(118);
	v->a[255] = entry(2, false);
	v->a[256] = reduce(aux_sym__statements_repeat1, 2, 0, 13);
	v->a[257] = shift_repeat(116);
	v->a[258] = entry(2, false);
	v->a[259] = reduce(aux_sym__statements_repeat1, 2, 0, 13);
	parse_actions_entries_13(v);
}

void	parse_actions_entries_13(t_parse_actions_entries_array *v)
{
	v->a[260] = shift_repeat(1200);
	v->a[261] = entry(2, false);
	v->a[262] = reduce(aux_sym__statements_repeat1, 2, 0, 13);
	v->a[263] = shift_repeat(52);
	v->a[264] = entry(2, false);
	v->a[265] = reduce(aux_sym__statements_repeat1, 2, 0, 13);
	v->a[266] = shift_repeat(113);
	v->a[267] = entry(2, false);
	v->a[268] = reduce(aux_sym__statements_repeat1, 2, 0, 13);
	v->a[269] = shift_repeat(305);
	v->a[270] = entry(2, false);
	v->a[271] = reduce(aux_sym__statements_repeat1, 2, 0, 13);
	v->a[272] = shift_repeat(1150);
	v->a[273] = entry(2, false);
	v->a[274] = reduce(aux_sym__statements_repeat1, 2, 0, 13);
	v->a[275] = shift_repeat(769);
	v->a[276] = entry(2, false);
	v->a[277] = reduce(aux_sym__statements_repeat1, 2, 0, 13);
	v->a[278] = shift_repeat(1459);
	v->a[279] = entry(2, false);
	parse_actions_entries_14(v);
}

void	parse_actions_entries_14(t_parse_actions_entries_array *v)
{
	v->a[280] = reduce(aux_sym__statements_repeat1, 2, 0, 13);
	v->a[281] = shift_repeat(1319);
	v->a[282] = entry(2, false);
	v->a[283] = reduce(aux_sym__statements_repeat1, 2, 0, 13);
	v->a[284] = shift_repeat(425);
	v->a[285] = entry(2, false);
	v->a[286] = reduce(aux_sym__statements_repeat1, 2, 0, 13);
	v->a[287] = shift_repeat(1321);
	v->a[288] = entry(2, false);
	v->a[289] = reduce(aux_sym__statements_repeat1, 2, 0, 13);
	v->a[290] = shift_repeat(81);
	v->a[291] = entry(2, false);
	v->a[292] = reduce(aux_sym__statements_repeat1, 2, 0, 13);
	v->a[293] = shift_repeat(82);
	v->a[294] = entry(2, true);
	v->a[295] = reduce(aux_sym__statements_repeat1, 2, 0, 13);
	v->a[296] = shift_repeat(1794);
	v->a[297] = entry(1, false);
	v->a[298] = shift(469);
	v->a[299] = entry(1, false);
	parse_actions_entries_15(v);
}

/* EOF parse_actions_entries_2.c */
