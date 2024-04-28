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
	v->a[500] = shift(5310);
	v->a[501] = entry(1, true);
	v->a[502] = shift(5309);
	v->a[503] = entry(1, false);
	v->a[504] = reduce(sym_last_case_item, 3, 0, 79);
	v->a[505] = entry(1, false);
	v->a[506] = shift(5132);
	v->a[507] = entry(1, true);
	v->a[508] = shift(5281);
	v->a[509] = entry(1, true);
	v->a[510] = shift(5277);
	v->a[511] = entry(1, false);
	v->a[512] = reduce(sym_last_case_item, 4, 0, 109);
	v->a[513] = entry(1, false);
	v->a[514] = shift(5227);
	v->a[515] = entry(1, true);
	v->a[516] = shift(5259);
	v->a[517] = entry(1, true);
	v->a[518] = shift(5384);
	v->a[519] = entry(1, false);
	parse_actions_entries_26(v);
}

void	parse_actions_entries_26(t_parse_actions_entries_array *v)
{
	v->a[520] = shift(5193);
	v->a[521] = entry(1, true);
	v->a[522] = shift(5396);
	v->a[523] = entry(1, true);
	v->a[524] = shift(5401);
	v->a[525] = entry(1, false);
	v->a[526] = shift(5145);
	v->a[527] = entry(1, true);
	v->a[528] = shift(5330);
	v->a[529] = entry(1, true);
	v->a[530] = shift(5329);
	v->a[531] = entry(1, false);
	v->a[532] = reduce(sym_last_case_item, 2, 0, 60);
	v->a[533] = entry(1, false);
	v->a[534] = shift(5169);
	v->a[535] = entry(1, true);
	v->a[536] = shift(5353);
	v->a[537] = entry(1, false);
	v->a[538] = reduce(sym_last_case_item, 3, 0, 45);
	v->a[539] = entry(1, false);
	parse_actions_entries_27(v);
}

void	parse_actions_entries_27(t_parse_actions_entries_array *v)
{
	v->a[540] = shift(5164);
	v->a[541] = entry(1, true);
	v->a[542] = shift(5325);
	v->a[543] = entry(1, false);
	v->a[544] = reduce(sym_last_case_item, 2, 0, 59);
	v->a[545] = entry(1, false);
	v->a[546] = shift(5172);
	v->a[547] = entry(1, true);
	v->a[548] = shift(5354);
	v->a[549] = entry(1, false);
	v->a[550] = shift(5250);
	v->a[551] = entry(1, true);
	v->a[552] = shift(5257);
	v->a[553] = entry(1, true);
	v->a[554] = shift(5273);
	v->a[555] = entry(2, false);
	v->a[556] = reduce(aux_sym__terminated_statement, 2, 0, 0);
	v->a[557] = shift_repeat(1080);
	v->a[558] = entry(2, false);
	v->a[559] = reduce(aux_sym__terminated_statement, 2, 0, 0);
	parse_actions_entries_28(v);
}

void	parse_actions_entries_28(t_parse_actions_entries_array *v)
{
	v->a[560] = shift_repeat(6777);
	v->a[561] = entry(2, false);
	v->a[562] = reduce(aux_sym__terminated_statement, 2, 0, 0);
	v->a[563] = shift_repeat(7604);
	v->a[564] = entry(2, true);
	v->a[565] = reduce(aux_sym__terminated_statement, 2, 0, 0);
	v->a[566] = shift_repeat(659);
	v->a[567] = entry(2, false);
	v->a[568] = reduce(aux_sym__terminated_statement, 2, 0, 0);
	v->a[569] = shift_repeat(3678);
	v->a[570] = entry(2, true);
	v->a[571] = reduce(aux_sym__terminated_statement, 2, 0, 0);
	v->a[572] = shift_repeat(3678);
	v->a[573] = entry(2, false);
	v->a[574] = reduce(aux_sym__terminated_statement, 2, 0, 0);
	v->a[575] = shift_repeat(240);
	v->a[576] = entry(2, false);
	v->a[577] = reduce(aux_sym__terminated_statement, 2, 0, 0);
	v->a[578] = shift_repeat(432);
	v->a[579] = entry(1, false);
	parse_actions_entries_29(v);
}

void	parse_actions_entries_29(t_parse_actions_entries_array *v)
{
	v->a[580] = reduce(aux_sym__terminated_statement, 2, 0, 0);
	v->a[581] = entry(2, false);
	v->a[582] = reduce(aux_sym__terminated_statement, 2, 0, 0);
	v->a[583] = shift_repeat(428);
	v->a[584] = entry(2, false);
	v->a[585] = reduce(aux_sym__terminated_statement, 2, 0, 0);
	v->a[586] = shift_repeat(4078);
	v->a[587] = entry(2, false);
	v->a[588] = reduce(aux_sym__terminated_statement, 2, 0, 0);
	v->a[589] = shift_repeat(7392);
	v->a[590] = entry(2, true);
	v->a[591] = reduce(aux_sym__terminated_statement, 2, 0, 0);
	v->a[592] = shift_repeat(154);
	v->a[593] = entry(2, false);
	v->a[594] = reduce(aux_sym__terminated_statement, 2, 0, 0);
	v->a[595] = shift_repeat(623);
	v->a[596] = entry(2, false);
	v->a[597] = reduce(aux_sym__terminated_statement, 2, 0, 0);
	v->a[598] = shift_repeat(4);
	v->a[599] = entry(2, true);
	parse_actions_entries_30(v);
}

/* EOF parse_actions_entries_5.c */
