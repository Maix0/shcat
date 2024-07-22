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
	v->a[600] = reduce(sym_string, 3, 0, 23);
	v->a[601] = entry(2, false);
	v->a[602] = reduce(aux_sym_command_repeat2, 2, 0, 32);
	v->a[603] = shift_repeat(446);
	v->a[604] = entry(2, false);
	v->a[605] = reduce(aux_sym_command_repeat2, 2, 0, 32);
	v->a[606] = shift_repeat(753);
	v->a[607] = entry(2, false);
	v->a[608] = reduce(aux_sym_command_repeat2, 2, 0, 32);
	v->a[609] = shift_repeat(1688);
	v->a[610] = entry(2, false);
	v->a[611] = reduce(aux_sym_command_repeat2, 2, 0, 32);
	v->a[612] = shift_repeat(1587);
	v->a[613] = entry(2, false);
	v->a[614] = reduce(aux_sym_command_repeat2, 2, 0, 32);
	v->a[615] = shift_repeat(1599);
	v->a[616] = entry(2, false);
	v->a[617] = reduce(aux_sym_command_repeat2, 2, 0, 32);
	v->a[618] = shift_repeat(79);
	v->a[619] = entry(2, false);
	parse_actions_entries_31(v);
}

void	parse_actions_entries_31(t_parse_actions_entries_array *v)
{
	v->a[620] = reduce(aux_sym_command_repeat2, 2, 0, 32);
	v->a[621] = shift_repeat(86);
	v->a[622] = entry(2, true);
	v->a[623] = reduce(aux_sym_command_repeat2, 2, 0, 32);
	v->a[624] = shift_repeat(673);
	v->a[625] = entry(2, false);
	v->a[626] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[627] = shift_repeat(396);
	v->a[628] = entry(1, false);
	v->a[629] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[630] = entry(2, false);
	v->a[631] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[632] = shift_repeat(756);
	v->a[633] = entry(2, false);
	v->a[634] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[635] = shift_repeat(1691);
	v->a[636] = entry(2, false);
	v->a[637] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[638] = shift_repeat(1608);
	v->a[639] = entry(2, false);
	parse_actions_entries_32(v);
}

void	parse_actions_entries_32(t_parse_actions_entries_array *v)
{
	v->a[640] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[641] = shift_repeat(1583);
	v->a[642] = entry(2, false);
	v->a[643] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[644] = shift_repeat(43);
	v->a[645] = entry(2, false);
	v->a[646] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[647] = shift_repeat(92);
	v->a[648] = entry(1, true);
	v->a[649] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[650] = entry(1, false);
	v->a[651] = shift(824);
	v->a[652] = entry(1, true);
	v->a[653] = shift(825);
	v->a[654] = entry(1, true);
	v->a[655] = shift(829);
	v->a[656] = entry(1, false);
	v->a[657] = reduce(sym_arithmetic_ternary_expression, 5, 0, 63);
	v->a[658] = entry(1, false);
	v->a[659] = shift(831);
	parse_actions_entries_33(v);
}

void	parse_actions_entries_33(t_parse_actions_entries_array *v)
{
	v->a[660] = entry(1, false);
	v->a[661] = shift(832);
	v->a[662] = entry(1, true);
	v->a[663] = reduce(sym_arithmetic_ternary_expression, 5, 0, 63);
	v->a[664] = entry(1, false);
	v->a[665] = shift(837);
	v->a[666] = entry(1, false);
	v->a[667] = shift(833);
	v->a[668] = entry(1, true);
	v->a[669] = shift(828);
	v->a[670] = entry(1, true);
	v->a[671] = shift(831);
	v->a[672] = entry(1, false);
	v->a[673] = shift(822);
	v->a[674] = entry(1, false);
	v->a[675] = shift(820);
	v->a[676] = entry(1, false);
	v->a[677] = reduce(sym_file_redirect, 3, 0, 17);
	v->a[678] = entry(1, true);
	v->a[679] = reduce(sym_file_redirect, 3, 0, 17);
	parse_actions_entries_34(v);
}

void	parse_actions_entries_34(t_parse_actions_entries_array *v)
{
	v->a[680] = entry(1, false);
	v->a[681] = reduce(sym_simple_expansion, 2, 0, 6);
	v->a[682] = entry(1, true);
	v->a[683] = reduce(sym_simple_expansion, 2, 0, 6);
	v->a[684] = entry(1, false);
	v->a[685] = reduce(sym_expansion, 2, 0, 0);
	v->a[686] = entry(1, true);
	v->a[687] = reduce(sym_expansion, 2, 0, 0);
	v->a[688] = entry(1, false);
	v->a[689] = reduce(sym_arithmetic_unary_expression, 2, 0, 21);
	v->a[690] = entry(1, true);
	v->a[691] = reduce(sym_arithmetic_unary_expression, 2, 0, 21);
	v->a[692] = entry(1, false);
	v->a[693] = reduce(sym_string, 2, 0, 0);
	v->a[694] = entry(1, true);
	v->a[695] = reduce(sym_string, 2, 0, 0);
	v->a[696] = entry(2, false);
	v->a[697] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[698] = shift_repeat(387);
	v->a[699] = entry(2, false);
	parse_actions_entries_35(v);
}

/* EOF parse_actions_entries_6.c */
