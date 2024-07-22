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
	v->a[701] = shift_repeat(747);
	v->a[702] = entry(2, false);
	v->a[703] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[704] = shift_repeat(1720);
	v->a[705] = entry(2, false);
	v->a[706] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[707] = shift_repeat(1674);
	v->a[708] = entry(2, false);
	v->a[709] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[710] = shift_repeat(1672);
	v->a[711] = entry(2, false);
	v->a[712] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[713] = shift_repeat(85);
	v->a[714] = entry(2, false);
	v->a[715] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[716] = shift_repeat(78);
	v->a[717] = entry(1, false);
	v->a[718] = reduce(sym_arithmetic_parenthesized_expression, 3, 0, 0);
	v->a[719] = entry(1, true);
	parse_actions_entries_36(v);
}

void	parse_actions_entries_36(t_parse_actions_entries_array *v)
{
	v->a[720] = reduce(sym_arithmetic_parenthesized_expression, 3, 0, 0);
	v->a[721] = entry(1, true);
	v->a[722] = shift(817);
	v->a[723] = entry(1, false);
	v->a[724] = shift(830);
	v->a[725] = entry(1, false);
	v->a[726] = reduce(sym_arithmetic_postfix_expression, 2, 0, 22);
	v->a[727] = entry(1, true);
	v->a[728] = reduce(sym_arithmetic_postfix_expression, 2, 0, 22);
	v->a[729] = entry(1, false);
	v->a[730] = reduce(sym_simple_expansion, 2, 0, 0);
	v->a[731] = entry(1, true);
	v->a[732] = reduce(sym_simple_expansion, 2, 0, 0);
	v->a[733] = entry(2, false);
	v->a[734] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[735] = shift_repeat(429);
	v->a[736] = entry(2, false);
	v->a[737] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[738] = shift_repeat(710);
	v->a[739] = entry(2, false);
	parse_actions_entries_37(v);
}

void	parse_actions_entries_37(t_parse_actions_entries_array *v)
{
	v->a[740] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[741] = shift_repeat(1699);
	v->a[742] = entry(2, false);
	v->a[743] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[744] = shift_repeat(1593);
	v->a[745] = entry(2, false);
	v->a[746] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[747] = shift_repeat(1609);
	v->a[748] = entry(2, false);
	v->a[749] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[750] = shift_repeat(111);
	v->a[751] = entry(2, false);
	v->a[752] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[753] = shift_repeat(108);
	v->a[754] = entry(1, false);
	v->a[755] = shift(844);
	v->a[756] = entry(1, true);
	v->a[757] = shift(849);
	v->a[758] = entry(1, true);
	v->a[759] = shift(848);
	parse_actions_entries_38(v);
}

void	parse_actions_entries_38(t_parse_actions_entries_array *v)
{
	v->a[760] = entry(1, false);
	v->a[761] = shift(846);
	v->a[762] = entry(1, false);
	v->a[763] = shift(845);
	v->a[764] = entry(1, false);
	v->a[765] = shift(842);
	v->a[766] = entry(1, false);
	v->a[767] = shift(841);
	v->a[768] = entry(1, true);
	v->a[769] = shift(840);
	v->a[770] = entry(1, true);
	v->a[771] = shift(846);
	v->a[772] = entry(1, false);
	v->a[773] = shift(839);
	v->a[774] = entry(1, false);
	v->a[775] = shift(768);
	v->a[776] = entry(1, true);
	v->a[777] = shift(775);
	v->a[778] = entry(1, true);
	v->a[779] = shift(248);
	parse_actions_entries_39(v);
}

void	parse_actions_entries_39(t_parse_actions_entries_array *v)
{
	v->a[780] = entry(1, false);
	v->a[781] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[782] = entry(1, false);
	v->a[783] = reduce(sym__statement_not_pipeline, 1, 0, 0);
	v->a[784] = entry(1, false);
	v->a[785] = reduce(sym__statements, 2, 0, 13);
	v->a[786] = entry(1, false);
	v->a[787] = shift(400);
	v->a[788] = entry(1, false);
	v->a[789] = shift(140);
	v->a[790] = entry(1, false);
	v->a[791] = shift(2052);
	v->a[792] = entry(1, true);
	v->a[793] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[794] = entry(2, true);
	v->a[795] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[796] = shift(2115);
	v->a[797] = entry(1, false);
	v->a[798] = reduce(sym__statements, 1, 0, 2);
	v->a[799] = entry(2, false);
	parse_actions_entries_40(v);
}

/* EOF parse_actions_entries_7.c */
