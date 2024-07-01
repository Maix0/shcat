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
	v->a[700] = shift(811);
	v->a[701] = entry(1, false);
	v->a[702] = shift(1821);
	v->a[703] = entry(1, false);
	v->a[704] = shift(1822);
	v->a[705] = entry(1, false);
	v->a[706] = shift(1794);
	v->a[707] = entry(1, false);
	v->a[708] = shift(112);
	v->a[709] = entry(1, false);
	v->a[710] = shift(113);
	v->a[711] = entry(1, false);
	v->a[712] = reduce(sym_file_redirect, 2, 0, 6);
	v->a[713] = entry(1, true);
	v->a[714] = reduce(sym_file_redirect, 2, 0, 6);
	v->a[715] = entry(1, false);
	v->a[716] = shift(577);
	v->a[717] = entry(1, false);
	v->a[718] = shift(840);
	v->a[719] = entry(1, false);
	parse_actions_entries_36(v);
}

void	parse_actions_entries_36(t_parse_actions_entries_array *v)
{
	v->a[720] = shift(1816);
	v->a[721] = entry(1, false);
	v->a[722] = shift(1807);
	v->a[723] = entry(1, false);
	v->a[724] = shift(1783);
	v->a[725] = entry(1, false);
	v->a[726] = shift(75);
	v->a[727] = entry(1, false);
	v->a[728] = shift(74);
	v->a[729] = entry(2, false);
	v->a[730] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[731] = shift_repeat(577);
	v->a[732] = entry(2, false);
	v->a[733] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[734] = shift_repeat(840);
	v->a[735] = entry(2, false);
	v->a[736] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[737] = shift_repeat(1816);
	v->a[738] = entry(2, false);
	v->a[739] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	parse_actions_entries_37(v);
}

void	parse_actions_entries_37(t_parse_actions_entries_array *v)
{
	v->a[740] = shift_repeat(1807);
	v->a[741] = entry(2, false);
	v->a[742] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[743] = shift_repeat(1783);
	v->a[744] = entry(2, false);
	v->a[745] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[746] = shift_repeat(75);
	v->a[747] = entry(2, false);
	v->a[748] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[749] = shift_repeat(74);
	v->a[750] = entry(1, false);
	v->a[751] = shift(522);
	v->a[752] = entry(1, false);
	v->a[753] = shift(149);
	v->a[754] = entry(1, false);
	v->a[755] = shift(2317);
	v->a[756] = entry(2, true);
	v->a[757] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[758] = shift(2301);
	v->a[759] = entry(2, false);
	parse_actions_entries_38(v);
}

void	parse_actions_entries_38(t_parse_actions_entries_array *v)
{
	v->a[760] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[761] = shift_repeat(507);
	v->a[762] = entry(2, false);
	v->a[763] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	v->a[764] = shift_repeat(493);
	v->a[765] = entry(1, false);
	v->a[766] = shift(552);
	v->a[767] = entry(1, false);
	v->a[768] = shift(882);
	v->a[769] = entry(1, false);
	v->a[770] = shift(1904);
	v->a[771] = entry(1, false);
	v->a[772] = shift(1901);
	v->a[773] = entry(1, false);
	v->a[774] = shift(1790);
	v->a[775] = entry(1, false);
	v->a[776] = shift(88);
	v->a[777] = entry(1, false);
	v->a[778] = shift(91);
	v->a[779] = entry(1, true);
	parse_actions_entries_39(v);
}

void	parse_actions_entries_39(t_parse_actions_entries_array *v)
{
	v->a[780] = reduce(sym__statements, 2, 0, 15);
	v->a[781] = entry(1, false);
	v->a[782] = shift(784);
	v->a[783] = entry(1, false);
	v->a[784] = shift(151);
	v->a[785] = entry(2, true);
	v->a[786] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[787] = shift(2173);
	v->a[788] = entry(1, false);
	v->a[789] = reduce(sym_file_redirect, 1, 0, 1);
	v->a[790] = entry(1, true);
	v->a[791] = reduce(sym_file_redirect, 1, 0, 1);
	v->a[792] = entry(2, false);
	v->a[793] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[794] = shift_repeat(552);
	v->a[795] = entry(2, false);
	v->a[796] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[797] = shift_repeat(882);
	v->a[798] = entry(2, false);
	v->a[799] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	parse_actions_entries_40(v);
}

/* EOF parse_actions_entries_7.c */
