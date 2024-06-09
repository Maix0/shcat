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
	v->a[200] = shift_repeat(1941);
	v->a[201] = entry(2, false);
	v->a[202] = reduce(aux_sym__terminated_statement, 2, 0, 0);
	v->a[203] = shift_repeat(1689);
	v->a[204] = entry(2, false);
	v->a[205] = reduce(aux_sym__terminated_statement, 2, 0, 0);
	v->a[206] = shift_repeat(91);
	v->a[207] = entry(2, false);
	v->a[208] = reduce(aux_sym__terminated_statement, 2, 0, 0);
	v->a[209] = shift_repeat(84);
	v->a[210] = entry(2, true);
	v->a[211] = reduce(aux_sym__terminated_statement, 2, 0, 0);
	v->a[212] = shift_repeat(1838);
	v->a[213] = entry(2, true);
	v->a[214] = reduce(aux_sym__terminated_statement, 2, 0, 0);
	v->a[215] = shift_repeat(2092);
	v->a[216] = entry(1, false);
	v->a[217] = reduce(sym_elif_clause, 4, 0, 0);
	v->a[218] = entry(1, false);
	v->a[219] = shift(22);
	parse_actions_entries_11(v);
}

void	parse_actions_entries_11(t_parse_actions_entries_array *v)
{
	v->a[220] = entry(1, false);
	v->a[221] = shift(29);
	v->a[222] = entry(1, false);
	v->a[223] = shift(20);
	v->a[224] = entry(1, false);
	v->a[225] = shift(16);
	v->a[226] = entry(1, false);
	v->a[227] = shift(25);
	v->a[228] = entry(1, false);
	v->a[229] = shift(13);
	v->a[230] = entry(1, false);
	v->a[231] = shift(32);
	v->a[232] = entry(1, false);
	v->a[233] = shift(42);
	v->a[234] = entry(1, false);
	v->a[235] = shift(106);
	v->a[236] = entry(1, false);
	v->a[237] = shift(93);
	v->a[238] = entry(1, false);
	v->a[239] = shift(325);
	parse_actions_entries_12(v);
}

void	parse_actions_entries_12(t_parse_actions_entries_array *v)
{
	v->a[240] = entry(1, false);
	v->a[241] = shift(281);
	v->a[242] = entry(1, false);
	v->a[243] = shift(1531);
	v->a[244] = entry(1, false);
	v->a[245] = shift(1526);
	v->a[246] = entry(1, false);
	v->a[247] = shift(1528);
	v->a[248] = entry(1, false);
	v->a[249] = shift(294);
	v->a[250] = entry(1, false);
	v->a[251] = shift(288);
	v->a[252] = entry(1, false);
	v->a[253] = shift(1399);
	v->a[254] = entry(1, false);
	v->a[255] = shift(230);
	v->a[256] = entry(1, false);
	v->a[257] = shift(295);
	v->a[258] = entry(1, true);
	v->a[259] = shift(1834);
	parse_actions_entries_13(v);
}

void	parse_actions_entries_13(t_parse_actions_entries_array *v)
{
	v->a[260] = entry(1, true);
	v->a[261] = shift(2173);
	v->a[262] = entry(1, false);
	v->a[263] = shift(2);
	v->a[264] = entry(1, false);
	v->a[265] = shift(1170);
	v->a[266] = entry(1, false);
	v->a[267] = shift(18);
	v->a[268] = entry(1, false);
	v->a[269] = reduce(sym_else_clause, 1, 0, 0);
	v->a[270] = entry(1, false);
	v->a[271] = shift(3);
	v->a[272] = entry(1, false);
	v->a[273] = shift(1157);
	v->a[274] = entry(1, false);
	v->a[275] = shift(7);
	v->a[276] = entry(1, false);
	v->a[277] = shift(1253);
	v->a[278] = entry(1, false);
	v->a[279] = reduce(sym_else_clause, 2, 0, 0);
	parse_actions_entries_14(v);
}

void	parse_actions_entries_14(t_parse_actions_entries_array *v)
{
	v->a[280] = entry(1, false);
	v->a[281] = shift(1266);
	v->a[282] = entry(1, false);
	v->a[283] = shift(1273);
	v->a[284] = entry(1, false);
	v->a[285] = shift(1113);
	v->a[286] = entry(2, false);
	v->a[287] = reduce(aux_sym__statements_repeat1, 2, 0, 0);
	v->a[288] = shift_repeat(399);
	v->a[289] = entry(2, false);
	v->a[290] = reduce(aux_sym__statements_repeat1, 2, 0, 0);
	v->a[291] = shift_repeat(2261);
	v->a[292] = entry(2, false);
	v->a[293] = reduce(aux_sym__statements_repeat1, 2, 0, 0);
	v->a[294] = shift_repeat(128);
	v->a[295] = entry(2, false);
	v->a[296] = reduce(aux_sym__statements_repeat1, 2, 0, 0);
	v->a[297] = shift_repeat(129);
	v->a[298] = entry(2, false);
	v->a[299] = reduce(aux_sym__statements_repeat1, 2, 0, 0);
	parse_actions_entries_15(v);
}

/* EOF parse_actions_entries_2.c */
