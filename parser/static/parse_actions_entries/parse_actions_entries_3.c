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
	v->a[300] = shift(2866);
	v->a[301] = entry(1, false);
	v->a[302] = reduce(sym_last_case_item, 3, 0, 35);
	v->a[303] = entry(1, false);
	v->a[304] = shift(2795);
	v->a[305] = entry(1, true);
	v->a[306] = shift(2850);
	v->a[307] = entry(1, false);
	v->a[308] = reduce(sym_last_case_item, 2, 0, 40);
	v->a[309] = entry(1, false);
	v->a[310] = shift(2796);
	v->a[311] = entry(1, true);
	v->a[312] = shift(2821);
	v->a[313] = entry(1, false);
	v->a[314] = reduce(sym_last_case_item, 3, 0, 52);
	v->a[315] = entry(1, false);
	v->a[316] = shift(2755);
	v->a[317] = entry(1, true);
	v->a[318] = shift(2870);
	v->a[319] = entry(1, true);
	parse_actions_entries_16(v);
}

void	parse_actions_entries_16(t_parse_actions_entries_array *v)
{
	v->a[320] = shift(2871);
	v->a[321] = entry(1, false);
	v->a[322] = shift(2747);
	v->a[323] = entry(1, true);
	v->a[324] = shift(2873);
	v->a[325] = entry(1, true);
	v->a[326] = shift(2872);
	v->a[327] = entry(1, false);
	v->a[328] = shift(2794);
	v->a[329] = entry(1, true);
	v->a[330] = shift(2838);
	v->a[331] = entry(1, true);
	v->a[332] = shift(2839);
	v->a[333] = entry(1, false);
	v->a[334] = reduce(sym_last_case_item, 3, 0, 34);
	v->a[335] = entry(1, false);
	v->a[336] = shift(2774);
	v->a[337] = entry(1, true);
	v->a[338] = shift(2843);
	v->a[339] = entry(1, false);
	parse_actions_entries_17(v);
}

void	parse_actions_entries_17(t_parse_actions_entries_array *v)
{
	v->a[340] = shift(568);
	v->a[341] = entry(1, false);
	v->a[342] = shift(3956);
	v->a[343] = entry(1, false);
	v->a[344] = shift(224);
	v->a[345] = entry(1, false);
	v->a[346] = shift(232);
	v->a[347] = entry(1, false);
	v->a[348] = shift(2480);
	v->a[349] = entry(1, true);
	v->a[350] = shift(186);
	v->a[351] = entry(1, false);
	v->a[352] = shift(2828);
	v->a[353] = entry(1, false);
	v->a[354] = shift(3568);
	v->a[355] = entry(1, true);
	v->a[356] = shift(53);
	v->a[357] = entry(1, false);
	v->a[358] = shift(525);
	v->a[359] = entry(1, false);
	parse_actions_entries_18(v);
}

void	parse_actions_entries_18(t_parse_actions_entries_array *v)
{
	v->a[360] = shift(267);
	v->a[361] = entry(1, false);
	v->a[362] = shift(325);
	v->a[363] = entry(1, false);
	v->a[364] = shift(2258);
	v->a[365] = entry(1, true);
	v->a[366] = shift(2258);
	v->a[367] = entry(1, true);
	v->a[368] = shift(354);
	v->a[369] = entry(1, true);
	v->a[370] = shift(1815);
	v->a[371] = entry(1, false);
	v->a[372] = shift(3185);
	v->a[373] = entry(1, false);
	v->a[374] = shift(576);
	v->a[375] = entry(1, true);
	v->a[376] = shift(3075);
	v->a[377] = entry(1, true);
	v->a[378] = shift(586);
	v->a[379] = entry(1, false);
	parse_actions_entries_19(v);
}

void	parse_actions_entries_19(t_parse_actions_entries_array *v)
{
	v->a[380] = shift(725);
	v->a[381] = entry(1, false);
	v->a[382] = shift(3270);
	v->a[383] = entry(1, true);
	v->a[384] = shift(3064);
	v->a[385] = entry(1, false);
	v->a[386] = shift(75);
	v->a[387] = entry(1, true);
	v->a[388] = shift(76);
	v->a[389] = entry(1, true);
	v->a[390] = shift(79);
	v->a[391] = entry(1, true);
	v->a[392] = shift(3207);
	v->a[393] = entry(1, true);
	v->a[394] = shift(3665);
	v->a[395] = entry(1, true);
	v->a[396] = shift(4077);
	v->a[397] = entry(1, false);
	v->a[398] = shift(2846);
	v->a[399] = entry(1, false);
	parse_actions_entries_20(v);
}

/* EOF parse_actions_entries_3.c */
