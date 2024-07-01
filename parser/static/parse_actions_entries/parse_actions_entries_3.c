/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_actions_entries_3.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_actions_entries.h"

void	parse_actions_entries_15(t_parse_actions_entries_array *v)
{
	v->a[300] = shift_repeat(873);
	v->a[301] = entry(2, false);
	v->a[302] = reduce(aux_sym__statements_repeat1, 2, 0, 16);
	v->a[303] = shift_repeat(1856);
	v->a[304] = entry(2, false);
	v->a[305] = reduce(aux_sym__statements_repeat1, 2, 0, 16);
	v->a[306] = shift_repeat(1852);
	v->a[307] = entry(2, false);
	v->a[308] = reduce(aux_sym__statements_repeat1, 2, 0, 16);
	v->a[309] = shift_repeat(443);
	v->a[310] = entry(2, false);
	v->a[311] = reduce(aux_sym__statements_repeat1, 2, 0, 16);
	v->a[312] = shift_repeat(1788);
	v->a[313] = entry(2, false);
	v->a[314] = reduce(aux_sym__statements_repeat1, 2, 0, 16);
	v->a[315] = shift_repeat(48);
	v->a[316] = entry(2, false);
	v->a[317] = reduce(aux_sym__statements_repeat1, 2, 0, 16);
	v->a[318] = shift_repeat(44);
	v->a[319] = entry(2, true);
	parse_actions_entries_16(v);
}

void	parse_actions_entries_16(t_parse_actions_entries_array *v)
{
	v->a[320] = reduce(aux_sym__statements_repeat1, 2, 0, 16);
	v->a[321] = shift_repeat(1970);
	v->a[322] = entry(2, true);
	v->a[323] = reduce(aux_sym__statements_repeat1, 2, 0, 16);
	v->a[324] = shift_repeat(2199);
	v->a[325] = entry(1, false);
	v->a[326] = shift(787);
	v->a[327] = entry(1, false);
	v->a[328] = shift(2202);
	v->a[329] = entry(1, false);
	v->a[330] = shift(137);
	v->a[331] = entry(1, false);
	v->a[332] = shift(126);
	v->a[333] = entry(1, false);
	v->a[334] = shift(1621);
	v->a[335] = entry(1, false);
	v->a[336] = shift(49);
	v->a[337] = entry(1, false);
	v->a[338] = shift(138);
	v->a[339] = entry(1, false);
	parse_actions_entries_17(v);
}

void	parse_actions_entries_17(t_parse_actions_entries_array *v)
{
	v->a[340] = shift(480);
	v->a[341] = entry(1, false);
	v->a[342] = shift(1559);
	v->a[343] = entry(1, false);
	v->a[344] = shift(642);
	v->a[345] = entry(1, false);
	v->a[346] = shift(868);
	v->a[347] = entry(1, false);
	v->a[348] = shift(1853);
	v->a[349] = entry(1, false);
	v->a[350] = shift(1880);
	v->a[351] = entry(1, false);
	v->a[352] = shift(785);
	v->a[353] = entry(1, false);
	v->a[354] = shift(1780);
	v->a[355] = entry(1, false);
	v->a[356] = shift(121);
	v->a[357] = entry(1, false);
	v->a[358] = shift(109);
	v->a[359] = entry(1, true);
	parse_actions_entries_18(v);
}

void	parse_actions_entries_18(t_parse_actions_entries_array *v)
{
	v->a[360] = shift(1963);
	v->a[361] = entry(1, true);
	v->a[362] = shift(2138);
	v->a[363] = entry(1, false);
	v->a[364] = shift(671);
	v->a[365] = entry(1, false);
	v->a[366] = shift(455);
	v->a[367] = entry(1, false);
	v->a[368] = shift(1584);
	v->a[369] = entry(1, false);
	v->a[370] = shift(587);
	v->a[371] = entry(1, false);
	v->a[372] = shift(711);
	v->a[373] = entry(1, true);
	v->a[374] = shift(1972);
	v->a[375] = entry(1, true);
	v->a[376] = shift(2300);
	v->a[377] = entry(1, true);
	v->a[378] = shift(2133);
	v->a[379] = entry(1, true);
	parse_actions_entries_19(v);
}

void	parse_actions_entries_19(t_parse_actions_entries_array *v)
{
	v->a[380] = reduce(sym_concatenation, 4, 0, 40);
	v->a[381] = entry(1, false);
	v->a[382] = reduce(sym_concatenation, 4, 0, 40);
	v->a[383] = entry(1, false);
	v->a[384] = shift(400);
	v->a[385] = entry(1, false);
	v->a[386] = shift(415);
	v->a[387] = entry(1, true);
	v->a[388] = shift(415);
	v->a[389] = entry(1, false);
	v->a[390] = shift(468);
	v->a[391] = entry(1, false);
	v->a[392] = shift(467);
	v->a[393] = entry(1, true);
	v->a[394] = shift(467);
	v->a[395] = entry(1, false);
	v->a[396] = shift(466);
	v->a[397] = entry(1, false);
	v->a[398] = shift(477);
	v->a[399] = entry(1, true);
	parse_actions_entries_20(v);
}

/* EOF parse_actions_entries_3.c */
