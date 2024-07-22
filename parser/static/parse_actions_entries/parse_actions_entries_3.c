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
	v->a[300] = reduce(aux_sym__statements_repeat1, 2, 0, 14);
	v->a[301] = shift_repeat(113);
	v->a[302] = entry(2, false);
	v->a[303] = reduce(aux_sym__statements_repeat1, 2, 0, 14);
	v->a[304] = shift_repeat(112);
	v->a[305] = entry(2, true);
	v->a[306] = reduce(aux_sym__statements_repeat1, 2, 0, 14);
	v->a[307] = shift_repeat(1759);
	v->a[308] = entry(2, true);
	v->a[309] = reduce(aux_sym__statements_repeat1, 2, 0, 14);
	v->a[310] = shift_repeat(2005);
	v->a[311] = entry(1, false);
	v->a[312] = shift(664);
	v->a[313] = entry(1, false);
	v->a[314] = shift(2036);
	v->a[315] = entry(1, false);
	v->a[316] = shift(132);
	v->a[317] = entry(1, false);
	v->a[318] = shift(128);
	v->a[319] = entry(1, false);
	parse_actions_entries_16(v);
}

void	parse_actions_entries_16(t_parse_actions_entries_array *v)
{
	v->a[320] = shift(1433);
	v->a[321] = entry(1, false);
	v->a[322] = shift(117);
	v->a[323] = entry(1, false);
	v->a[324] = shift(126);
	v->a[325] = entry(1, false);
	v->a[326] = shift(358);
	v->a[327] = entry(1, false);
	v->a[328] = shift(1398);
	v->a[329] = entry(1, false);
	v->a[330] = shift(684);
	v->a[331] = entry(1, false);
	v->a[332] = shift(1693);
	v->a[333] = entry(1, false);
	v->a[334] = shift(1669);
	v->a[335] = entry(1, false);
	v->a[336] = shift(725);
	v->a[337] = entry(1, false);
	v->a[338] = shift(1670);
	v->a[339] = entry(1, false);
	parse_actions_entries_17(v);
}

void	parse_actions_entries_17(t_parse_actions_entries_array *v)
{
	v->a[340] = shift(61);
	v->a[341] = entry(1, false);
	v->a[342] = shift(67);
	v->a[343] = entry(1, true);
	v->a[344] = shift(1762);
	v->a[345] = entry(1, true);
	v->a[346] = shift(1963);
	v->a[347] = entry(1, false);
	v->a[348] = shift(621);
	v->a[349] = entry(1, false);
	v->a[350] = shift(354);
	v->a[351] = entry(1, false);
	v->a[352] = shift(1379);
	v->a[353] = entry(1, false);
	v->a[354] = shift(620);
	v->a[355] = entry(1, true);
	v->a[356] = shift(1763);
	v->a[357] = entry(1, true);
	v->a[358] = shift(2114);
	v->a[359] = entry(1, true);
	parse_actions_entries_18(v);
}

void	parse_actions_entries_18(t_parse_actions_entries_array *v)
{
	v->a[360] = shift(1950);
	v->a[361] = entry(1, false);
	v->a[362] = reduce(sym_concatenation, 4, 0, 41);
	v->a[363] = entry(1, false);
	v->a[364] = shift(454);
	v->a[365] = entry(1, false);
	v->a[366] = shift(453);
	v->a[367] = entry(1, true);
	v->a[368] = reduce(sym_concatenation, 4, 0, 41);
	v->a[369] = entry(1, true);
	v->a[370] = shift(453);
	v->a[371] = entry(1, false);
	v->a[372] = shift(393);
	v->a[373] = entry(1, false);
	v->a[374] = shift(391);
	v->a[375] = entry(1, true);
	v->a[376] = shift(391);
	v->a[377] = entry(1, false);
	v->a[378] = shift(440);
	v->a[379] = entry(1, false);
	parse_actions_entries_19(v);
}

void	parse_actions_entries_19(t_parse_actions_entries_array *v)
{
	v->a[380] = shift(430);
	v->a[381] = entry(1, true);
	v->a[382] = shift(430);
	v->a[383] = entry(1, false);
	v->a[384] = shift(515);
	v->a[385] = entry(1, false);
	v->a[386] = shift(516);
	v->a[387] = entry(1, true);
	v->a[388] = shift(516);
	v->a[389] = entry(1, false);
	v->a[390] = shift(465);
	v->a[391] = entry(1, false);
	v->a[392] = shift(466);
	v->a[393] = entry(1, true);
	v->a[394] = shift(466);
	v->a[395] = entry(1, false);
	v->a[396] = shift(459);
	v->a[397] = entry(1, false);
	v->a[398] = shift(477);
	v->a[399] = entry(1, true);
	parse_actions_entries_20(v);
}

/* EOF parse_actions_entries_3.c */
