/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_actions_entries_7.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_actions_entries.h"

void	parse_actions_entries_35(t_parse_actions_entries_array *v)
{
	v->a[700] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[701] = shift_repeat(77);
	v->a[702] = entry(1, false);
	v->a[703] = shift(447);
	v->a[704] = entry(1, false);
	v->a[705] = shift(939);
	v->a[706] = entry(1, false);
	v->a[707] = shift(1859);
	v->a[708] = entry(1, false);
	v->a[709] = shift(1857);
	v->a[710] = entry(1, false);
	v->a[711] = shift(1790);
	v->a[712] = entry(1, false);
	v->a[713] = shift(47);
	v->a[714] = entry(1, false);
	v->a[715] = shift(44);
	v->a[716] = entry(1, false);
	v->a[717] = shift(600);
	v->a[718] = entry(1, false);
	v->a[719] = shift(935);
	parse_actions_entries_36(v);
}

void	parse_actions_entries_36(t_parse_actions_entries_array *v)
{
	v->a[720] = entry(1, false);
	v->a[721] = shift(1820);
	v->a[722] = entry(1, false);
	v->a[723] = shift(1821);
	v->a[724] = entry(1, false);
	v->a[725] = shift(1778);
	v->a[726] = entry(1, false);
	v->a[727] = shift(99);
	v->a[728] = entry(1, false);
	v->a[729] = shift(65);
	v->a[730] = entry(2, false);
	v->a[731] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	v->a[732] = shift_repeat(479);
	v->a[733] = entry(2, false);
	v->a[734] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[735] = shift_repeat(447);
	v->a[736] = entry(2, false);
	v->a[737] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[738] = shift_repeat(939);
	v->a[739] = entry(2, false);
	parse_actions_entries_37(v);
}

void	parse_actions_entries_37(t_parse_actions_entries_array *v)
{
	v->a[740] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[741] = shift_repeat(1859);
	v->a[742] = entry(2, false);
	v->a[743] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[744] = shift_repeat(1857);
	v->a[745] = entry(2, false);
	v->a[746] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[747] = shift_repeat(1790);
	v->a[748] = entry(2, false);
	v->a[749] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[750] = shift_repeat(47);
	v->a[751] = entry(2, false);
	v->a[752] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[753] = shift_repeat(44);
	v->a[754] = entry(1, true);
	v->a[755] = reduce(sym_file_redirect, 1, 0, 1);
	v->a[756] = entry(1, false);
	v->a[757] = reduce(sym_file_redirect, 1, 0, 1);
	v->a[758] = entry(1, false);
	v->a[759] = reduce(sym_file_redirect, 2, 0, 6);
	parse_actions_entries_38(v);
}

void	parse_actions_entries_38(t_parse_actions_entries_array *v)
{
	v->a[760] = entry(1, true);
	v->a[761] = reduce(sym_file_redirect, 2, 0, 6);
	v->a[762] = entry(1, false);
	v->a[763] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[764] = entry(1, false);
	v->a[765] = reduce(sym__statements, 2, 0, 15);
	v->a[766] = entry(1, false);
	v->a[767] = reduce(sym__statement_not_pipeline, 1, 0, 0);
	v->a[768] = entry(1, false);
	v->a[769] = shift(148);
	v->a[770] = entry(1, false);
	v->a[771] = shift(2255);
	v->a[772] = entry(1, false);
	v->a[773] = shift(716);
	v->a[774] = entry(1, true);
	v->a[775] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[776] = entry(2, true);
	v->a[777] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[778] = shift(2149);
	v->a[779] = entry(2, false);
	parse_actions_entries_39(v);
}

void	parse_actions_entries_39(t_parse_actions_entries_array *v)
{
	v->a[780] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[781] = shift_repeat(600);
	v->a[782] = entry(2, false);
	v->a[783] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[784] = shift_repeat(935);
	v->a[785] = entry(2, false);
	v->a[786] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[787] = shift_repeat(1820);
	v->a[788] = entry(2, false);
	v->a[789] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[790] = shift_repeat(1821);
	v->a[791] = entry(2, false);
	v->a[792] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[793] = shift_repeat(1778);
	v->a[794] = entry(2, false);
	v->a[795] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[796] = shift_repeat(99);
	v->a[797] = entry(2, false);
	v->a[798] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[799] = shift_repeat(65);
	parse_actions_entries_40(v);
}

/* EOF parse_actions_entries_7.c */
