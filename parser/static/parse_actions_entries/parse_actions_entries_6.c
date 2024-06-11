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
	v->a[600] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	v->a[601] = shift_repeat(64);
	v->a[602] = entry(2, false);
	v->a[603] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	v->a[604] = shift_repeat(65);
	v->a[605] = entry(2, true);
	v->a[606] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	v->a[607] = shift_repeat(730);
	v->a[608] = entry(1, true);
	v->a[609] = reduce(sym_file_redirect, 3, 0, 19);
	v->a[610] = entry(1, false);
	v->a[611] = reduce(sym_file_redirect, 3, 0, 19);
	v->a[612] = entry(2, false);
	v->a[613] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[614] = shift_repeat(400);
	v->a[615] = entry(2, false);
	v->a[616] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[617] = shift_repeat(1049);
	v->a[618] = entry(2, false);
	v->a[619] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	parse_actions_entries_31(v);
}

void	parse_actions_entries_31(t_parse_actions_entries_array *v)
{
	v->a[620] = shift_repeat(1959);
	v->a[621] = entry(2, false);
	v->a[622] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[623] = shift_repeat(1956);
	v->a[624] = entry(2, false);
	v->a[625] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[626] = shift_repeat(1928);
	v->a[627] = entry(2, false);
	v->a[628] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[629] = shift_repeat(62);
	v->a[630] = entry(2, false);
	v->a[631] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[632] = shift_repeat(63);
	v->a[633] = entry(2, false);
	v->a[634] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[635] = shift_repeat(364);
	v->a[636] = entry(2, false);
	v->a[637] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[638] = shift_repeat(1061);
	v->a[639] = entry(2, false);
	parse_actions_entries_32(v);
}

void	parse_actions_entries_32(t_parse_actions_entries_array *v)
{
	v->a[640] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[641] = shift_repeat(2060);
	v->a[642] = entry(2, false);
	v->a[643] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[644] = shift_repeat(2058);
	v->a[645] = entry(2, false);
	v->a[646] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[647] = shift_repeat(1929);
	v->a[648] = entry(2, false);
	v->a[649] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[650] = shift_repeat(108);
	v->a[651] = entry(2, false);
	v->a[652] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[653] = shift_repeat(109);
	v->a[654] = entry(2, false);
	v->a[655] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	v->a[656] = shift_repeat(339);
	v->a[657] = entry(2, false);
	v->a[658] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	v->a[659] = shift_repeat(1044);
	parse_actions_entries_33(v);
}

void	parse_actions_entries_33(t_parse_actions_entries_array *v)
{
	v->a[660] = entry(2, false);
	v->a[661] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	v->a[662] = shift_repeat(1975);
	v->a[663] = entry(2, false);
	v->a[664] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	v->a[665] = shift_repeat(1974);
	v->a[666] = entry(2, false);
	v->a[667] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	v->a[668] = shift_repeat(1931);
	v->a[669] = entry(2, false);
	v->a[670] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	v->a[671] = shift_repeat(60);
	v->a[672] = entry(2, false);
	v->a[673] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	v->a[674] = shift_repeat(61);
	v->a[675] = entry(2, true);
	v->a[676] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	v->a[677] = shift_repeat(805);
	v->a[678] = entry(2, false);
	v->a[679] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	parse_actions_entries_34(v);
}

void	parse_actions_entries_34(t_parse_actions_entries_array *v)
{
	v->a[680] = shift_repeat(561);
	v->a[681] = entry(2, false);
	v->a[682] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[683] = shift_repeat(1042);
	v->a[684] = entry(2, false);
	v->a[685] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[686] = shift_repeat(1973);
	v->a[687] = entry(2, false);
	v->a[688] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[689] = shift_repeat(2017);
	v->a[690] = entry(2, false);
	v->a[691] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[692] = shift_repeat(1935);
	v->a[693] = entry(2, false);
	v->a[694] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[695] = shift_repeat(70);
	v->a[696] = entry(2, false);
	v->a[697] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[698] = shift_repeat(71);
	v->a[699] = entry(1, false);
	parse_actions_entries_35(v);
}

/* EOF parse_actions_entries_6.c */
