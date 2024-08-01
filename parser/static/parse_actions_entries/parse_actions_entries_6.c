/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_actions_entries_6.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_actions_entries.h"

void	parse_actions_entries_30(t_parse_actions_entries_array *v)
{
	v->a[600] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[601] = shift(1737);
	v->a[602] = entry(1, false);
	v->a[603] = shift(431);
	v->a[604] = entry(2, false);
	v->a[605] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[606] = shift_repeat(402);
	v->a[607] = entry(2, false);
	v->a[608] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[609] = shift_repeat(645);
	v->a[610] = entry(2, false);
	v->a[611] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[612] = shift_repeat(1209);
	v->a[613] = entry(2, false);
	v->a[614] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[615] = shift_repeat(1115);
	v->a[616] = entry(2, false);
	v->a[617] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[618] = shift_repeat(1140);
	v->a[619] = entry(2, false);
	parse_actions_entries_31(v);
}

void	parse_actions_entries_31(t_parse_actions_entries_array *v)
{
	v->a[620] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[621] = shift_repeat(53);
	v->a[622] = entry(2, false);
	v->a[623] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[624] = shift_repeat(60);
	v->a[625] = entry(1, false);
	v->a[626] = shift(362);
	v->a[627] = entry(1, false);
	v->a[628] = shift(621);
	v->a[629] = entry(1, false);
	v->a[630] = shift(1198);
	v->a[631] = entry(1, false);
	v->a[632] = shift(1107);
	v->a[633] = entry(1, false);
	v->a[634] = shift(1117);
	v->a[635] = entry(1, false);
	v->a[636] = shift(101);
	v->a[637] = entry(1, false);
	v->a[638] = shift(95);
	v->a[639] = entry(1, false);
	parse_actions_entries_32(v);
}

void	parse_actions_entries_32(t_parse_actions_entries_array *v)
{
	v->a[640] = shift(624);
	v->a[641] = entry(1, false);
	v->a[642] = shift(626);
	v->a[643] = entry(1, true);
	v->a[644] = shift(626);
	v->a[645] = entry(1, false);
	v->a[646] = shift(1011);
	v->a[647] = entry(1, false);
	v->a[648] = shift(129);
	v->a[649] = entry(1, false);
	v->a[650] = shift(130);
	v->a[651] = entry(1, false);
	v->a[652] = shift(806);
	v->a[653] = entry(1, false);
	v->a[654] = shift(1498);
	v->a[655] = entry(1, false);
	v->a[656] = shift(646);
	v->a[657] = entry(1, false);
	v->a[658] = shift(1219);
	v->a[659] = entry(1, false);
	parse_actions_entries_33(v);
}

void	parse_actions_entries_33(t_parse_actions_entries_array *v)
{
	v->a[660] = shift(1124);
	v->a[661] = entry(1, false);
	v->a[662] = shift(1127);
	v->a[663] = entry(1, false);
	v->a[664] = shift(62);
	v->a[665] = entry(1, false);
	v->a[666] = shift(47);
	v->a[667] = entry(2, false);
	v->a[668] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[669] = shift_repeat(362);
	v->a[670] = entry(2, false);
	v->a[671] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[672] = shift_repeat(621);
	v->a[673] = entry(2, false);
	v->a[674] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[675] = shift_repeat(1198);
	v->a[676] = entry(2, false);
	v->a[677] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[678] = shift_repeat(1107);
	v->a[679] = entry(2, false);
	parse_actions_entries_34(v);
}

void	parse_actions_entries_34(t_parse_actions_entries_array *v)
{
	v->a[680] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[681] = shift_repeat(1117);
	v->a[682] = entry(2, false);
	v->a[683] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[684] = shift_repeat(101);
	v->a[685] = entry(2, false);
	v->a[686] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[687] = shift_repeat(95);
	v->a[688] = entry(2, false);
	v->a[689] = reduce(aux_sym_command_repeat2, 2, 0, 29);
	v->a[690] = shift_repeat(431);
	v->a[691] = entry(1, true);
	v->a[692] = reduce(sym__statements, 1, 0, 2);
	v->a[693] = entry(1, false);
	v->a[694] = shift(473);
	v->a[695] = entry(1, false);
	v->a[696] = shift(125);
	v->a[697] = entry(2, true);
	v->a[698] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[699] = shift(1608);
	parse_actions_entries_35(v);
}

/* EOF parse_actions_entries_6.c */
