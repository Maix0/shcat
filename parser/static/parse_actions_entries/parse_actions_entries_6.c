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
	v->a[600] = shift(1478);
	v->a[601] = entry(1, true);
	v->a[602] = reduce(sym_command, 2, 0, 14);
	v->a[603] = entry(1, false);
	v->a[604] = shift(339);
	v->a[605] = entry(1, true);
	v->a[606] = shift(626);
	v->a[607] = entry(1, true);
	v->a[608] = shift(495);
	v->a[609] = entry(1, true);
	v->a[610] = reduce(sym_command, 3, 0, 32);
	v->a[611] = entry(1, true);
	v->a[612] = shift(367);
	v->a[613] = entry(1, true);
	v->a[614] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[615] = entry(2, false);
	v->a[616] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[617] = shift_repeat(337);
	v->a[618] = entry(1, false);
	v->a[619] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	parse_actions_entries_31(v);
}

void	parse_actions_entries_31(t_parse_actions_entries_array *v)
{
	v->a[620] = entry(2, false);
	v->a[621] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[622] = shift_repeat(778);
	v->a[623] = entry(2, false);
	v->a[624] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[625] = shift_repeat(1435);
	v->a[626] = entry(2, false);
	v->a[627] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[628] = shift_repeat(1316);
	v->a[629] = entry(2, false);
	v->a[630] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[631] = shift_repeat(1317);
	v->a[632] = entry(2, false);
	v->a[633] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[634] = shift_repeat(43);
	v->a[635] = entry(2, false);
	v->a[636] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[637] = shift_repeat(65);
	v->a[638] = entry(1, true);
	v->a[639] = shift(1510);
	parse_actions_entries_32(v);
}

void	parse_actions_entries_32(t_parse_actions_entries_array *v)
{
	v->a[640] = entry(1, true);
	v->a[641] = reduce(sym_command, 1, 0, 3);
	v->a[642] = entry(2, false);
	v->a[643] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[644] = shift_repeat(360);
	v->a[645] = entry(2, false);
	v->a[646] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[647] = shift_repeat(787);
	v->a[648] = entry(2, false);
	v->a[649] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[650] = shift_repeat(1434);
	v->a[651] = entry(2, false);
	v->a[652] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[653] = shift_repeat(1345);
	v->a[654] = entry(2, false);
	v->a[655] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[656] = shift_repeat(1360);
	v->a[657] = entry(2, false);
	v->a[658] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[659] = shift_repeat(89);
	parse_actions_entries_33(v);
}

void	parse_actions_entries_33(t_parse_actions_entries_array *v)
{
	v->a[660] = entry(2, false);
	v->a[661] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[662] = shift_repeat(103);
	v->a[663] = entry(2, false);
	v->a[664] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[665] = shift_repeat(361);
	v->a[666] = entry(2, false);
	v->a[667] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[668] = shift_repeat(763);
	v->a[669] = entry(2, false);
	v->a[670] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[671] = shift_repeat(1456);
	v->a[672] = entry(2, false);
	v->a[673] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[674] = shift_repeat(1358);
	v->a[675] = entry(2, false);
	v->a[676] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[677] = shift_repeat(1348);
	v->a[678] = entry(2, false);
	v->a[679] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	parse_actions_entries_34(v);
}

void	parse_actions_entries_34(t_parse_actions_entries_array *v)
{
	v->a[680] = shift_repeat(61);
	v->a[681] = entry(2, false);
	v->a[682] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[683] = shift_repeat(62);
	v->a[684] = entry(1, true);
	v->a[685] = reduce(sym_command, 2, 0, 11);
	v->a[686] = entry(1, true);
	v->a[687] = shift(770);
	v->a[688] = entry(1, true);
	v->a[689] = shift(240);
	v->a[690] = entry(1, true);
	v->a[691] = shift(382);
	v->a[692] = entry(1, true);
	v->a[693] = shift(914);
	v->a[694] = entry(1, true);
	v->a[695] = shift(505);
	v->a[696] = entry(2, false);
	v->a[697] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[698] = shift_repeat(357);
	v->a[699] = entry(2, false);
	parse_actions_entries_35(v);
}

/* EOF parse_actions_entries_6.c */
