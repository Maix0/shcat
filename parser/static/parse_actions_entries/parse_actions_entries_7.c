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
	v->a[700] = shift(3180);
	v->a[701] = entry(1, false);
	v->a[702] = shift(573);
	v->a[703] = entry(1, false);
	v->a[704] = shift(3112);
	v->a[705] = entry(1, false);
	v->a[706] = shift(712);
	v->a[707] = entry(1, false);
	v->a[708] = shift(3336);
	v->a[709] = entry(1, false);
	v->a[710] = shift(3107);
	v->a[711] = entry(1, false);
	v->a[712] = shift(50);
	v->a[713] = entry(1, false);
	v->a[714] = shift(51);
	v->a[715] = entry(1, false);
	v->a[716] = shift(54);
	v->a[717] = entry(1, true);
	v->a[718] = shift(555);
	v->a[719] = entry(1, true);
	parse_actions_entries_36(v);
}

void	parse_actions_entries_36(t_parse_actions_entries_array *v)
{
	v->a[720] = shift(1121);
	v->a[721] = entry(1, true);
	v->a[722] = shift(4072);
	v->a[723] = entry(1, false);
	v->a[724] = shift(503);
	v->a[725] = entry(1, false);
	v->a[726] = reduce(sym_declaration_command, 2, 0, 0);
	v->a[727] = entry(1, true);
	v->a[728] = reduce(sym_declaration_command, 2, 0, 0);
	v->a[729] = entry(1, false);
	v->a[730] = shift(1848);
	v->a[731] = entry(1, false);
	v->a[732] = shift(3165);
	v->a[733] = entry(1, false);
	v->a[734] = shift(472);
	v->a[735] = entry(1, false);
	v->a[736] = shift(3126);
	v->a[737] = entry(1, false);
	v->a[738] = shift(513);
	v->a[739] = entry(1, false);
	parse_actions_entries_37(v);
}

void	parse_actions_entries_37(t_parse_actions_entries_array *v)
{
	v->a[740] = shift(3271);
	v->a[741] = entry(1, false);
	v->a[742] = shift(3133);
	v->a[743] = entry(1, false);
	v->a[744] = shift(181);
	v->a[745] = entry(1, false);
	v->a[746] = shift(178);
	v->a[747] = entry(1, false);
	v->a[748] = shift(177);
	v->a[749] = entry(1, false);
	v->a[750] = shift(260);
	v->a[751] = entry(1, true);
	v->a[752] = shift(3653);
	v->a[753] = entry(1, true);
	v->a[754] = shift(503);
	v->a[755] = entry(1, true);
	v->a[756] = shift(4069);
	v->a[757] = entry(1, false);
	v->a[758] = reduce(sym_command, 2, 0, 16);
	v->a[759] = entry(1, true);
	parse_actions_entries_38(v);
}

void	parse_actions_entries_38(t_parse_actions_entries_array *v)
{
	v->a[760] = reduce(sym_command, 2, 0, 16);
	v->a[761] = entry(2, false);
	v->a[762] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[763] = shift_repeat(503);
	v->a[764] = entry(1, false);
	v->a[765] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[766] = entry(1, true);
	v->a[767] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[768] = entry(2, false);
	v->a[769] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[770] = shift_repeat(1848);
	v->a[771] = entry(2, false);
	v->a[772] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[773] = shift_repeat(3165);
	v->a[774] = entry(2, false);
	v->a[775] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[776] = shift_repeat(472);
	v->a[777] = entry(2, false);
	v->a[778] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[779] = shift_repeat(3126);
	parse_actions_entries_39(v);
}

void	parse_actions_entries_39(t_parse_actions_entries_array *v)
{
	v->a[780] = entry(2, false);
	v->a[781] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[782] = shift_repeat(513);
	v->a[783] = entry(2, false);
	v->a[784] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[785] = shift_repeat(3271);
	v->a[786] = entry(2, false);
	v->a[787] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[788] = shift_repeat(3133);
	v->a[789] = entry(2, false);
	v->a[790] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[791] = shift_repeat(181);
	v->a[792] = entry(2, false);
	v->a[793] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[794] = shift_repeat(178);
	v->a[795] = entry(2, false);
	v->a[796] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[797] = shift_repeat(177);
	v->a[798] = entry(2, false);
	v->a[799] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	parse_actions_entries_40(v);
}

/* EOF parse_actions_entries_7.c */
