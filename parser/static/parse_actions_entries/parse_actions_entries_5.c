/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_actions_entries_5.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_actions_entries.h"

void	parse_actions_entries_25(t_parse_actions_entries_array *v)
{
	v->a[500] = shift(2306);
	v->a[501] = entry(1, false);
	v->a[502] = shift(9);
	v->a[503] = entry(1, false);
	v->a[504] = shift(2335);
	v->a[505] = entry(1, false);
	v->a[506] = shift(2782);
	v->a[507] = entry(1, true);
	v->a[508] = reduce(aux_sym__terminated_statement, 2, 0, 0);
	v->a[509] = entry(1, false);
	v->a[510] = shift(2767);
	v->a[511] = entry(1, true);
	v->a[512] = shift(2167);
	v->a[513] = entry(1, false);
	v->a[514] = reduce(sym_else_clause, 2, 0, 0);
	v->a[515] = entry(1, false);
	v->a[516] = shift(31);
	v->a[517] = entry(1, true);
	v->a[518] = shift(2752);
	v->a[519] = entry(1, false);
	parse_actions_entries_26(v);
}

void	parse_actions_entries_26(t_parse_actions_entries_array *v)
{
	v->a[520] = shift(2317);
	v->a[521] = entry(1, false);
	v->a[522] = reduce(sym_else_clause, 1, 0, 0);
	v->a[523] = entry(1, true);
	v->a[524] = shift(2736);
	v->a[525] = entry(2, false);
	v->a[526] = reduce(aux_sym__statements_repeat1, 2, 0, 0);
	v->a[527] = shift_repeat(941);
	v->a[528] = entry(2, false);
	v->a[529] = reduce(aux_sym__statements_repeat1, 2, 0, 0);
	v->a[530] = shift_repeat(4041);
	v->a[531] = entry(2, false);
	v->a[532] = reduce(aux_sym__statements_repeat1, 2, 0, 0);
	v->a[533] = shift_repeat(228);
	v->a[534] = entry(2, false);
	v->a[535] = reduce(aux_sym__statements_repeat1, 2, 0, 0);
	v->a[536] = shift_repeat(229);
	v->a[537] = entry(2, false);
	v->a[538] = reduce(aux_sym__statements_repeat1, 2, 0, 0);
	v->a[539] = shift_repeat(2390);
	parse_actions_entries_27(v);
}

void	parse_actions_entries_27(t_parse_actions_entries_array *v)
{
	v->a[540] = entry(2, true);
	v->a[541] = reduce(aux_sym__statements_repeat1, 2, 0, 0);
	v->a[542] = shift_repeat(200);
	v->a[543] = entry(2, false);
	v->a[544] = reduce(aux_sym__statements_repeat1, 2, 0, 0);
	v->a[545] = shift_repeat(3840);
	v->a[546] = entry(2, true);
	v->a[547] = reduce(aux_sym__statements_repeat1, 2, 0, 0);
	v->a[548] = shift_repeat(188);
	v->a[549] = entry(2, false);
	v->a[550] = reduce(aux_sym__statements_repeat1, 2, 0, 0);
	v->a[551] = shift_repeat(532);
	v->a[552] = entry(2, false);
	v->a[553] = reduce(aux_sym__statements_repeat1, 2, 0, 0);
	v->a[554] = shift_repeat(324);
	v->a[555] = entry(2, false);
	v->a[556] = reduce(aux_sym__statements_repeat1, 2, 0, 0);
	v->a[557] = shift_repeat(421);
	v->a[558] = entry(2, false);
	v->a[559] = reduce(aux_sym__statements_repeat1, 2, 0, 0);
	parse_actions_entries_28(v);
}

void	parse_actions_entries_28(t_parse_actions_entries_array *v)
{
	v->a[560] = shift_repeat(2309);
	v->a[561] = entry(2, true);
	v->a[562] = reduce(aux_sym__statements_repeat1, 2, 0, 0);
	v->a[563] = shift_repeat(2309);
	v->a[564] = entry(2, true);
	v->a[565] = reduce(aux_sym__statements_repeat1, 2, 0, 0);
	v->a[566] = shift_repeat(437);
	v->a[567] = entry(2, true);
	v->a[568] = reduce(aux_sym__statements_repeat1, 2, 0, 0);
	v->a[569] = shift_repeat(1808);
	v->a[570] = entry(2, false);
	v->a[571] = reduce(aux_sym__statements_repeat1, 2, 0, 0);
	v->a[572] = shift_repeat(3150);
	v->a[573] = entry(2, false);
	v->a[574] = reduce(aux_sym__statements_repeat1, 2, 0, 0);
	v->a[575] = shift_repeat(945);
	v->a[576] = entry(2, true);
	v->a[577] = reduce(aux_sym__statements_repeat1, 2, 0, 0);
	v->a[578] = shift_repeat(3025);
	v->a[579] = entry(2, true);
	parse_actions_entries_29(v);
}

void	parse_actions_entries_29(t_parse_actions_entries_array *v)
{
	v->a[580] = reduce(aux_sym__statements_repeat1, 2, 0, 0);
	v->a[581] = shift_repeat(834);
	v->a[582] = entry(2, false);
	v->a[583] = reduce(aux_sym__statements_repeat1, 2, 0, 0);
	v->a[584] = shift_repeat(943);
	v->a[585] = entry(2, false);
	v->a[586] = reduce(aux_sym__statements_repeat1, 2, 0, 0);
	v->a[587] = shift_repeat(3340);
	v->a[588] = entry(2, true);
	v->a[589] = reduce(aux_sym__statements_repeat1, 2, 0, 0);
	v->a[590] = shift_repeat(3033);
	v->a[591] = entry(2, false);
	v->a[592] = reduce(aux_sym__statements_repeat1, 2, 0, 0);
	v->a[593] = shift_repeat(124);
	v->a[594] = entry(2, true);
	v->a[595] = reduce(aux_sym__statements_repeat1, 2, 0, 0);
	v->a[596] = shift_repeat(208);
	v->a[597] = entry(2, true);
	v->a[598] = reduce(aux_sym__statements_repeat1, 2, 0, 0);
	v->a[599] = shift_repeat(197);
	parse_actions_entries_30(v);
}

/* EOF parse_actions_entries_5.c */
