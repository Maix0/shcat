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
	v->a[700] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[701] = shift_repeat(767);
	v->a[702] = entry(2, false);
	v->a[703] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[704] = shift_repeat(1460);
	v->a[705] = entry(2, false);
	v->a[706] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[707] = shift_repeat(1377);
	v->a[708] = entry(2, false);
	v->a[709] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[710] = shift_repeat(1375);
	v->a[711] = entry(2, false);
	v->a[712] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[713] = shift_repeat(50);
	v->a[714] = entry(2, false);
	v->a[715] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[716] = shift_repeat(51);
	v->a[717] = entry(2, true);
	v->a[718] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[719] = shift_repeat(592);
	parse_actions_entries_36(v);
}

void	parse_actions_entries_36(t_parse_actions_entries_array *v)
{
	v->a[720] = entry(1, true);
	v->a[721] = shift(1216);
	v->a[722] = entry(1, true);
	v->a[723] = shift(937);
	v->a[724] = entry(1, true);
	v->a[725] = shift(697);
	v->a[726] = entry(1, true);
	v->a[727] = shift(509);
	v->a[728] = entry(1, true);
	v->a[729] = shift(1569);
	v->a[730] = entry(1, true);
	v->a[731] = shift(409);
	v->a[732] = entry(1, true);
	v->a[733] = shift(800);
	v->a[734] = entry(1, true);
	v->a[735] = shift(679);
	v->a[736] = entry(1, true);
	v->a[737] = shift(450);
	v->a[738] = entry(1, true);
	v->a[739] = shift(671);
	parse_actions_entries_37(v);
}

void	parse_actions_entries_37(t_parse_actions_entries_array *v)
{
	v->a[740] = entry(1, true);
	v->a[741] = shift(456);
	v->a[742] = entry(1, false);
	v->a[743] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[744] = entry(1, false);
	v->a[745] = reduce(sym__statements, 1, 0, 2);
	v->a[746] = entry(1, false);
	v->a[747] = reduce(sym__statement_not_pipeline, 1, 0, 0);
	v->a[748] = entry(1, false);
	v->a[749] = shift(128);
	v->a[750] = entry(1, false);
	v->a[751] = shift(1758);
	v->a[752] = entry(1, false);
	v->a[753] = shift(499);
	v->a[754] = entry(2, true);
	v->a[755] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[756] = shift(1678);
	v->a[757] = entry(2, false);
	v->a[758] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[759] = shift_repeat(412);
	parse_actions_entries_38(v);
}

void	parse_actions_entries_38(t_parse_actions_entries_array *v)
{
	v->a[760] = entry(2, false);
	v->a[761] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[762] = shift_repeat(758);
	v->a[763] = entry(2, false);
	v->a[764] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[765] = shift_repeat(1437);
	v->a[766] = entry(2, false);
	v->a[767] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[768] = shift_repeat(1339);
	v->a[769] = entry(2, false);
	v->a[770] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[771] = shift_repeat(1331);
	v->a[772] = entry(2, false);
	v->a[773] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[774] = shift_repeat(70);
	v->a[775] = entry(2, false);
	v->a[776] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[777] = shift_repeat(71);
	v->a[778] = entry(1, false);
	v->a[779] = shift(449);
	parse_actions_entries_39(v);
}

void	parse_actions_entries_39(t_parse_actions_entries_array *v)
{
	v->a[780] = entry(2, false);
	v->a[781] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[782] = shift_repeat(418);
	v->a[783] = entry(2, false);
	v->a[784] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[785] = shift_repeat(780);
	v->a[786] = entry(2, false);
	v->a[787] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[788] = shift_repeat(1454);
	v->a[789] = entry(2, false);
	v->a[790] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[791] = shift_repeat(1387);
	v->a[792] = entry(2, false);
	v->a[793] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[794] = shift_repeat(1401);
	v->a[795] = entry(2, false);
	v->a[796] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[797] = shift_repeat(90);
	v->a[798] = entry(2, false);
	v->a[799] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	parse_actions_entries_40(v);
}

/* EOF parse_actions_entries_7.c */
