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
	v->a[700] = shift(517);
	v->a[701] = entry(1, false);
	v->a[702] = shift(1069);
	v->a[703] = entry(1, false);
	v->a[704] = shift(2010);
	v->a[705] = entry(1, false);
	v->a[706] = shift(1994);
	v->a[707] = entry(1, false);
	v->a[708] = shift(1950);
	v->a[709] = entry(1, false);
	v->a[710] = shift(115);
	v->a[711] = entry(1, false);
	v->a[712] = shift(120);
	v->a[713] = entry(1, true);
	v->a[714] = reduce(sym_file_redirect, 2, 0, 6);
	v->a[715] = entry(1, false);
	v->a[716] = reduce(sym_file_redirect, 2, 0, 6);
	v->a[717] = entry(1, true);
	v->a[718] = reduce(sym_file_redirect, 1, 0, 1);
	v->a[719] = entry(1, false);
	parse_actions_entries_36(v);
}

void	parse_actions_entries_36(t_parse_actions_entries_array *v)
{
	v->a[720] = reduce(sym_file_redirect, 1, 0, 1);
	v->a[721] = entry(2, false);
	v->a[722] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	v->a[723] = shift_repeat(519);
	v->a[724] = entry(2, false);
	v->a[725] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[726] = shift_repeat(499);
	v->a[727] = entry(1, false);
	v->a[728] = shift(561);
	v->a[729] = entry(1, false);
	v->a[730] = shift(1042);
	v->a[731] = entry(1, false);
	v->a[732] = shift(1973);
	v->a[733] = entry(1, false);
	v->a[734] = shift(2017);
	v->a[735] = entry(1, false);
	v->a[736] = shift(1935);
	v->a[737] = entry(1, false);
	v->a[738] = shift(70);
	v->a[739] = entry(1, false);
	parse_actions_entries_37(v);
}

void	parse_actions_entries_37(t_parse_actions_entries_array *v)
{
	v->a[740] = shift(71);
	v->a[741] = entry(1, false);
	v->a[742] = shift(1015);
	v->a[743] = entry(1, false);
	v->a[744] = shift(999);
	v->a[745] = entry(1, true);
	v->a[746] = shift(999);
	v->a[747] = entry(1, false);
	v->a[748] = shift(595);
	v->a[749] = entry(1, false);
	v->a[750] = shift(1041);
	v->a[751] = entry(1, false);
	v->a[752] = shift(1966);
	v->a[753] = entry(1, false);
	v->a[754] = shift(1967);
	v->a[755] = entry(1, false);
	v->a[756] = shift(1942);
	v->a[757] = entry(1, false);
	v->a[758] = shift(76);
	v->a[759] = entry(1, false);
	parse_actions_entries_38(v);
}

void	parse_actions_entries_38(t_parse_actions_entries_array *v)
{
	v->a[760] = shift(77);
	v->a[761] = entry(2, false);
	v->a[762] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[763] = shift_repeat(595);
	v->a[764] = entry(2, false);
	v->a[765] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[766] = shift_repeat(1041);
	v->a[767] = entry(2, false);
	v->a[768] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[769] = shift_repeat(1966);
	v->a[770] = entry(2, false);
	v->a[771] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[772] = shift_repeat(1967);
	v->a[773] = entry(2, false);
	v->a[774] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[775] = shift_repeat(1942);
	v->a[776] = entry(2, false);
	v->a[777] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[778] = shift_repeat(76);
	v->a[779] = entry(2, false);
	parse_actions_entries_39(v);
}

void	parse_actions_entries_39(t_parse_actions_entries_array *v)
{
	v->a[780] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[781] = shift_repeat(77);
	v->a[782] = entry(2, false);
	v->a[783] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[784] = shift_repeat(517);
	v->a[785] = entry(2, false);
	v->a[786] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[787] = shift_repeat(1069);
	v->a[788] = entry(2, false);
	v->a[789] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[790] = shift_repeat(2010);
	v->a[791] = entry(2, false);
	v->a[792] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[793] = shift_repeat(1994);
	v->a[794] = entry(2, false);
	v->a[795] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[796] = shift_repeat(1950);
	v->a[797] = entry(2, false);
	v->a[798] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[799] = shift_repeat(115);
	parse_actions_entries_40(v);
}

/* EOF parse_actions_entries_7.c */
