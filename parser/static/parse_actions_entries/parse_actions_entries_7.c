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
	v->a[701] = shift(2052);
	v->a[702] = entry(1, true);
	v->a[703] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[704] = entry(2, true);
	v->a[705] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[706] = shift(2115);
	v->a[707] = entry(1, false);
	v->a[708] = reduce(sym_command_substitution, 3, 0, 20);
	v->a[709] = entry(1, true);
	v->a[710] = reduce(sym_command_substitution, 3, 0, 20);
	v->a[711] = entry(1, false);
	v->a[712] = reduce(sym_command_substitution, 3, 0, 30);
	v->a[713] = entry(1, true);
	v->a[714] = reduce(sym_command_substitution, 3, 0, 30);
	v->a[715] = entry(1, true);
	v->a[716] = reduce(sym__statements, 1, 0, 2);
	v->a[717] = entry(1, false);
	v->a[718] = shift(719);
	v->a[719] = entry(1, false);
	parse_actions_entries_36(v);
}

void	parse_actions_entries_36(t_parse_actions_entries_array *v)
{
	v->a[720] = shift(137);
	v->a[721] = entry(2, true);
	v->a[722] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[723] = shift(2032);
	v->a[724] = entry(1, false);
	v->a[725] = reduce(sym__statements, 2, 0, 13);
	v->a[726] = entry(1, false);
	v->a[727] = reduce(sym_arithmetic_parenthesized_expression, 3, 0, 0);
	v->a[728] = entry(1, true);
	v->a[729] = reduce(sym_arithmetic_parenthesized_expression, 3, 0, 0);
	v->a[730] = entry(1, false);
	v->a[731] = shift(814);
	v->a[732] = entry(1, false);
	v->a[733] = shift(828);
	v->a[734] = entry(1, true);
	v->a[735] = shift(822);
	v->a[736] = entry(1, true);
	v->a[737] = shift(820);
	v->a[738] = entry(1, true);
	v->a[739] = shift(795);
	parse_actions_entries_37(v);
}

void	parse_actions_entries_37(t_parse_actions_entries_array *v)
{
	v->a[740] = entry(1, false);
	v->a[741] = shift(819);
	v->a[742] = entry(1, false);
	v->a[743] = reduce(sym_expansion, 3, 0, 29);
	v->a[744] = entry(1, true);
	v->a[745] = reduce(sym_expansion, 3, 0, 29);
	v->a[746] = entry(2, false);
	v->a[747] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[748] = shift_repeat(481);
	v->a[749] = entry(1, false);
	v->a[750] = shift(878);
	v->a[751] = entry(1, false);
	v->a[752] = shift(881);
	v->a[753] = entry(1, true);
	v->a[754] = shift(881);
	v->a[755] = entry(1, false);
	v->a[756] = reduce(sym_string, 3, 0, 0);
	v->a[757] = entry(1, true);
	v->a[758] = reduce(sym_string, 3, 0, 0);
	v->a[759] = entry(1, false);
	parse_actions_entries_38(v);
}

void	parse_actions_entries_38(t_parse_actions_entries_array *v)
{
	v->a[760] = shift(144);
	v->a[761] = entry(1, false);
	v->a[762] = shift(2079);
	v->a[763] = entry(1, false);
	v->a[764] = shift(698);
	v->a[765] = entry(2, true);
	v->a[766] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[767] = shift(1991);
	v->a[768] = entry(1, false);
	v->a[769] = shift(525);
	v->a[770] = entry(1, false);
	v->a[771] = shift(729);
	v->a[772] = entry(1, false);
	v->a[773] = shift(1630);
	v->a[774] = entry(1, false);
	v->a[775] = shift(1631);
	v->a[776] = entry(1, false);
	v->a[777] = shift(1529);
	v->a[778] = entry(1, false);
	v->a[779] = shift(80);
	parse_actions_entries_39(v);
}

void	parse_actions_entries_39(t_parse_actions_entries_array *v)
{
	v->a[780] = entry(1, false);
	v->a[781] = shift(83);
	v->a[782] = entry(1, false);
	v->a[783] = reduce(sym_string, 3, 0, 23);
	v->a[784] = entry(1, true);
	v->a[785] = reduce(sym_string, 3, 0, 23);
	v->a[786] = entry(1, false);
	v->a[787] = reduce(sym_arithmetic_literal, 1, 0, 0);
	v->a[788] = entry(1, true);
	v->a[789] = reduce(sym_arithmetic_literal, 1, 0, 0);
	v->a[790] = entry(1, false);
	v->a[791] = reduce(sym_expansion, 2, 0, 0);
	v->a[792] = entry(1, true);
	v->a[793] = reduce(sym_expansion, 2, 0, 0);
	v->a[794] = entry(1, false);
	v->a[795] = reduce(sym_string, 2, 0, 0);
	v->a[796] = entry(1, true);
	v->a[797] = reduce(sym_string, 2, 0, 0);
	v->a[798] = entry(2, false);
	v->a[799] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	parse_actions_entries_40(v);
}

/* EOF parse_actions_entries_7.c */
