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
	v->a[700] = entry(1, false);
	v->a[701] = shift(808);
	v->a[702] = entry(1, false);
	v->a[703] = shift(816);
	v->a[704] = entry(1, false);
	v->a[705] = shift(817);
	v->a[706] = entry(1, true);
	v->a[707] = shift(850);
	v->a[708] = entry(1, true);
	v->a[709] = shift(808);
	v->a[710] = entry(1, false);
	v->a[711] = shift(778);
	v->a[712] = entry(1, true);
	v->a[713] = shift(805);
	v->a[714] = entry(1, true);
	v->a[715] = shift(806);
	v->a[716] = entry(1, true);
	v->a[717] = shift(844);
	v->a[718] = entry(1, false);
	v->a[719] = shift(807);
	parse_actions_entries_36(v);
}

void	parse_actions_entries_36(t_parse_actions_entries_array *v)
{
	v->a[720] = entry(1, false);
	v->a[721] = shift(521);
	v->a[722] = entry(1, false);
	v->a[723] = shift(770);
	v->a[724] = entry(1, false);
	v->a[725] = shift(1628);
	v->a[726] = entry(1, false);
	v->a[727] = shift(1657);
	v->a[728] = entry(1, false);
	v->a[729] = shift(1604);
	v->a[730] = entry(1, false);
	v->a[731] = shift(73);
	v->a[732] = entry(1, false);
	v->a[733] = shift(75);
	v->a[734] = entry(1, false);
	v->a[735] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[736] = entry(1, false);
	v->a[737] = reduce(sym__statement_not_pipeline, 1, 0, 0);
	v->a[738] = entry(1, false);
	v->a[739] = reduce(sym__statements, 1, 0, 2);
	parse_actions_entries_37(v);
}

void	parse_actions_entries_37(t_parse_actions_entries_array *v)
{
	v->a[740] = entry(1, false);
	v->a[741] = shift(452);
	v->a[742] = entry(1, false);
	v->a[743] = shift(145);
	v->a[744] = entry(1, false);
	v->a[745] = shift(2108);
	v->a[746] = entry(1, true);
	v->a[747] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[748] = entry(2, true);
	v->a[749] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[750] = shift(2096);
	v->a[751] = entry(1, false);
	v->a[752] = reduce(sym_command_substitution, 3, 0, 28);
	v->a[753] = entry(1, true);
	v->a[754] = reduce(sym_command_substitution, 3, 0, 28);
	v->a[755] = entry(1, false);
	v->a[756] = shift(138);
	v->a[757] = entry(1, false);
	v->a[758] = shift(2060);
	v->a[759] = entry(1, false);
	parse_actions_entries_38(v);
}

void	parse_actions_entries_38(t_parse_actions_entries_array *v)
{
	v->a[760] = shift(687);
	v->a[761] = entry(2, true);
	v->a[762] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[763] = shift(1967);
	v->a[764] = entry(1, false);
	v->a[765] = reduce(sym_expansion, 3, 0, 27);
	v->a[766] = entry(1, true);
	v->a[767] = reduce(sym_expansion, 3, 0, 27);
	v->a[768] = entry(1, false);
	v->a[769] = reduce(sym_string, 4, 0, 38);
	v->a[770] = entry(1, true);
	v->a[771] = reduce(sym_string, 4, 0, 38);
	v->a[772] = entry(2, false);
	v->a[773] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[774] = shift_repeat(463);
	v->a[775] = entry(2, false);
	v->a[776] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[777] = shift_repeat(769);
	v->a[778] = entry(2, false);
	v->a[779] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	parse_actions_entries_39(v);
}

void	parse_actions_entries_39(t_parse_actions_entries_array *v)
{
	v->a[780] = shift_repeat(1665);
	v->a[781] = entry(2, false);
	v->a[782] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[783] = shift_repeat(1654);
	v->a[784] = entry(2, false);
	v->a[785] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[786] = shift_repeat(1563);
	v->a[787] = entry(2, false);
	v->a[788] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[789] = shift_repeat(41);
	v->a[790] = entry(2, false);
	v->a[791] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[792] = shift_repeat(78);
	v->a[793] = entry(1, false);
	v->a[794] = reduce(sym_string, 3, 0, 0);
	v->a[795] = entry(1, true);
	v->a[796] = reduce(sym_string, 3, 0, 0);
	v->a[797] = entry(2, false);
	v->a[798] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[799] = shift_repeat(469);
	parse_actions_entries_40(v);
}

/* EOF parse_actions_entries_7.c */
