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
	v->a[200] = reduce(sym_last_case_item, 4, 0, 67);
	v->a[201] = entry(1, false);
	v->a[202] = shift(2734);
	v->a[203] = entry(1, true);
	v->a[204] = shift(2805);
	v->a[205] = entry(1, true);
	v->a[206] = shift(2860);
	v->a[207] = entry(2, false);
	v->a[208] = reduce(aux_sym__terminated_statement, 2, 0, 0);
	v->a[209] = shift_repeat(941);
	v->a[210] = entry(2, false);
	v->a[211] = reduce(aux_sym__terminated_statement, 2, 0, 0);
	v->a[212] = shift_repeat(4041);
	v->a[213] = entry(2, false);
	v->a[214] = reduce(aux_sym__terminated_statement, 2, 0, 0);
	v->a[215] = shift_repeat(228);
	v->a[216] = entry(1, false);
	v->a[217] = reduce(aux_sym__terminated_statement, 2, 0, 0);
	v->a[218] = entry(2, false);
	v->a[219] = reduce(aux_sym__terminated_statement, 2, 0, 0);
	parse_actions_entries_11(v);
}

void	parse_actions_entries_11(t_parse_actions_entries_array *v)
{
	v->a[220] = shift_repeat(229);
	v->a[221] = entry(2, false);
	v->a[222] = reduce(aux_sym__terminated_statement, 2, 0, 0);
	v->a[223] = shift_repeat(2390);
	v->a[224] = entry(2, true);
	v->a[225] = reduce(aux_sym__terminated_statement, 2, 0, 0);
	v->a[226] = shift_repeat(200);
	v->a[227] = entry(2, false);
	v->a[228] = reduce(aux_sym__terminated_statement, 2, 0, 0);
	v->a[229] = shift_repeat(3840);
	v->a[230] = entry(2, true);
	v->a[231] = reduce(aux_sym__terminated_statement, 2, 0, 0);
	v->a[232] = shift_repeat(188);
	v->a[233] = entry(2, false);
	v->a[234] = reduce(aux_sym__terminated_statement, 2, 0, 0);
	v->a[235] = shift_repeat(532);
	v->a[236] = entry(2, false);
	v->a[237] = reduce(aux_sym__terminated_statement, 2, 0, 0);
	v->a[238] = shift_repeat(324);
	v->a[239] = entry(2, false);
	parse_actions_entries_12(v);
}

void	parse_actions_entries_12(t_parse_actions_entries_array *v)
{
	v->a[240] = reduce(aux_sym__terminated_statement, 2, 0, 0);
	v->a[241] = shift_repeat(421);
	v->a[242] = entry(2, false);
	v->a[243] = reduce(aux_sym__terminated_statement, 2, 0, 0);
	v->a[244] = shift_repeat(2309);
	v->a[245] = entry(2, true);
	v->a[246] = reduce(aux_sym__terminated_statement, 2, 0, 0);
	v->a[247] = shift_repeat(2309);
	v->a[248] = entry(2, true);
	v->a[249] = reduce(aux_sym__terminated_statement, 2, 0, 0);
	v->a[250] = shift_repeat(437);
	v->a[251] = entry(2, true);
	v->a[252] = reduce(aux_sym__terminated_statement, 2, 0, 0);
	v->a[253] = shift_repeat(1808);
	v->a[254] = entry(2, false);
	v->a[255] = reduce(aux_sym__terminated_statement, 2, 0, 0);
	v->a[256] = shift_repeat(3150);
	v->a[257] = entry(2, false);
	v->a[258] = reduce(aux_sym__terminated_statement, 2, 0, 0);
	v->a[259] = shift_repeat(945);
	parse_actions_entries_13(v);
}

void	parse_actions_entries_13(t_parse_actions_entries_array *v)
{
	v->a[260] = entry(2, true);
	v->a[261] = reduce(aux_sym__terminated_statement, 2, 0, 0);
	v->a[262] = shift_repeat(3025);
	v->a[263] = entry(2, true);
	v->a[264] = reduce(aux_sym__terminated_statement, 2, 0, 0);
	v->a[265] = shift_repeat(834);
	v->a[266] = entry(2, false);
	v->a[267] = reduce(aux_sym__terminated_statement, 2, 0, 0);
	v->a[268] = shift_repeat(943);
	v->a[269] = entry(2, false);
	v->a[270] = reduce(aux_sym__terminated_statement, 2, 0, 0);
	v->a[271] = shift_repeat(3340);
	v->a[272] = entry(2, true);
	v->a[273] = reduce(aux_sym__terminated_statement, 2, 0, 0);
	v->a[274] = shift_repeat(3033);
	v->a[275] = entry(2, false);
	v->a[276] = reduce(aux_sym__terminated_statement, 2, 0, 0);
	v->a[277] = shift_repeat(124);
	v->a[278] = entry(2, true);
	v->a[279] = reduce(aux_sym__terminated_statement, 2, 0, 0);
	parse_actions_entries_14(v);
}

void	parse_actions_entries_14(t_parse_actions_entries_array *v)
{
	v->a[280] = shift_repeat(208);
	v->a[281] = entry(2, true);
	v->a[282] = reduce(aux_sym__terminated_statement, 2, 0, 0);
	v->a[283] = shift_repeat(197);
	v->a[284] = entry(2, true);
	v->a[285] = reduce(aux_sym__terminated_statement, 2, 0, 0);
	v->a[286] = shift_repeat(3197);
	v->a[287] = entry(2, true);
	v->a[288] = reduce(aux_sym__terminated_statement, 2, 0, 0);
	v->a[289] = shift_repeat(3778);
	v->a[290] = entry(2, true);
	v->a[291] = reduce(aux_sym__terminated_statement, 2, 0, 0);
	v->a[292] = shift_repeat(4023);
	v->a[293] = entry(1, false);
	v->a[294] = reduce(sym_last_case_item, 4, 0, 64);
	v->a[295] = entry(1, false);
	v->a[296] = shift(2742);
	v->a[297] = entry(1, true);
	v->a[298] = shift(2867);
	v->a[299] = entry(1, true);
	parse_actions_entries_15(v);
}

/* EOF parse_actions_entries_2.c */
