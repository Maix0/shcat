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
	v->a[701] = shift(1477);
	v->a[702] = entry(1, false);
	v->a[703] = shift(402);
	v->a[704] = entry(1, false);
	v->a[705] = shift(645);
	v->a[706] = entry(1, false);
	v->a[707] = shift(1209);
	v->a[708] = entry(1, false);
	v->a[709] = shift(1115);
	v->a[710] = entry(1, false);
	v->a[711] = shift(1140);
	v->a[712] = entry(1, false);
	v->a[713] = shift(53);
	v->a[714] = entry(1, false);
	v->a[715] = shift(60);
	v->a[716] = entry(1, true);
	v->a[717] = reduce(sym__statements, 2, 0, 12);
	v->a[718] = entry(2, false);
	v->a[719] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	return (parse_actions_entries_36(v));
}

void	parse_actions_entries_36(t_parse_actions_entries_array *v)
{
	v->a[720] = shift_repeat(415);
	v->a[721] = entry(1, false);
	v->a[722] = shift(409);
	v->a[723] = entry(1, false);
	v->a[724] = shift(649);
	v->a[725] = entry(1, false);
	v->a[726] = shift(1227);
	v->a[727] = entry(1, false);
	v->a[728] = shift(1173);
	v->a[729] = entry(1, false);
	v->a[730] = shift(1106);
	v->a[731] = entry(1, false);
	v->a[732] = shift(55);
	v->a[733] = entry(1, false);
	v->a[734] = shift(57);
	v->a[735] = entry(2, false);
	v->a[736] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[737] = shift_repeat(409);
	v->a[738] = entry(2, false);
	v->a[739] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	return (parse_actions_entries_37(v));
}

void	parse_actions_entries_37(t_parse_actions_entries_array *v)
{
	v->a[740] = shift_repeat(649);
	v->a[741] = entry(2, false);
	v->a[742] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[743] = shift_repeat(1227);
	v->a[744] = entry(2, false);
	v->a[745] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[746] = shift_repeat(1173);
	v->a[747] = entry(2, false);
	v->a[748] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[749] = shift_repeat(1106);
	v->a[750] = entry(2, false);
	v->a[751] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[752] = shift_repeat(55);
	v->a[753] = entry(2, false);
	v->a[754] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[755] = shift_repeat(57);
	v->a[756] = entry(1, false);
	v->a[757] = shift(1501);
	v->a[758] = entry(1, false);
	v->a[759] = shift(799);
	return (parse_actions_entries_38(v));
}

void	parse_actions_entries_38(t_parse_actions_entries_array *v)
{
	v->a[760] = entry(1, false);
	v->a[761] = shift(493);
	v->a[762] = entry(1, false);
	v->a[763] = shift(133);
	v->a[764] = entry(2, true);
	v->a[765] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[766] = shift(1741);
	v->a[767] = entry(1, false);
	v->a[768] = shift(463);
	v->a[769] = entry(1, false);
	v->a[770] = shift(128);
	v->a[771] = entry(2, true);
	v->a[772] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[773] = shift(1706);
	v->a[774] = entry(1, false);
	v->a[775] = shift(1468);
	v->a[776] = entry(1, false);
	v->a[777] = shift(1240);
	v->a[778] = entry(1, false);
	v->a[779] = shift(767);
	return (parse_actions_entries_39(v));
}

void	parse_actions_entries_39(t_parse_actions_entries_array *v)
{
	v->a[780] = entry(1, false);
	v->a[781] = shift(1174);
	v->a[782] = entry(1, false);
	v->a[783] = shift(641);
	v->a[784] = entry(1, false);
	v->a[785] = shift(1196);
	v->a[786] = entry(1, false);
	v->a[787] = shift(1183);
	v->a[788] = entry(1, false);
	v->a[789] = shift(1158);
	v->a[790] = entry(1, false);
	v->a[791] = shift(41);
	v->a[792] = entry(1, false);
	v->a[793] = shift(43);
	v->a[794] = entry(1, true);
	v->a[795] = shift(1338);
	v->a[796] = entry(1, false);
	v->a[797] = shift(644);
	v->a[798] = entry(1, false);
	v->a[799] = shift(640);
	return (parse_actions_entries_40(v));
}

/* EOF parse_actions_entries_7.c */
