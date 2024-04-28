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
	v->a[700] = shift(632);
	v->a[701] = entry(1, true);
	v->a[702] = shift(648);
	v->a[703] = entry(1, true);
	v->a[704] = shift(3821);
	v->a[705] = entry(1, true);
	v->a[706] = shift(3710);
	v->a[707] = entry(1, true);
	v->a[708] = shift(3709);
	v->a[709] = entry(1, false);
	v->a[710] = shift(6048);
	v->a[711] = entry(1, false);
	v->a[712] = shift(850);
	v->a[713] = entry(1, true);
	v->a[714] = shift(5804);
	v->a[715] = entry(1, true);
	v->a[716] = shift(852);
	v->a[717] = entry(1, false);
	v->a[718] = shift(968);
	v->a[719] = entry(1, false);
	parse_actions_entries_36(v);
}

void	parse_actions_entries_36(t_parse_actions_entries_array *v)
{
	v->a[720] = shift(6355);
	v->a[721] = entry(1, true);
	v->a[722] = shift(4680);
	v->a[723] = entry(1, false);
	v->a[724] = shift(320);
	v->a[725] = entry(1, true);
	v->a[726] = shift(319);
	v->a[727] = entry(1, true);
	v->a[728] = shift(318);
	v->a[729] = entry(1, true);
	v->a[730] = shift(393);
	v->a[731] = entry(1, true);
	v->a[732] = shift(6142);
	v->a[733] = entry(1, true);
	v->a[734] = shift(6641);
	v->a[735] = entry(1, true);
	v->a[736] = shift(853);
	v->a[737] = entry(1, true);
	v->a[738] = shift(7659);
	v->a[739] = entry(1, false);
	parse_actions_entries_37(v);
}

void	parse_actions_entries_37(t_parse_actions_entries_array *v)
{
	v->a[740] = shift(5326);
	v->a[741] = entry(1, false);
	v->a[742] = shift(5252);
	v->a[743] = entry(1, false);
	v->a[744] = shift(5338);
	v->a[745] = entry(1, false);
	v->a[746] = shift(5251);
	v->a[747] = entry(1, false);
	v->a[748] = shift(5335);
	v->a[749] = entry(1, false);
	v->a[750] = shift(5311);
	v->a[751] = entry(1, false);
	v->a[752] = shift(5340);
	v->a[753] = entry(1, false);
	v->a[754] = shift(5320);
	v->a[755] = entry(1, false);
	v->a[756] = shift(5332);
	v->a[757] = entry(1, false);
	v->a[758] = shift(5307);
	v->a[759] = entry(1, false);
	parse_actions_entries_38(v);
}

void	parse_actions_entries_38(t_parse_actions_entries_array *v)
{
	v->a[760] = shift(5304);
	v->a[761] = entry(1, false);
	v->a[762] = reduce(sym_elif_clause, 4, 0, 0);
	v->a[763] = entry(1, false);
	v->a[764] = reduce(sym_elif_clause, 3, 0, 0);
	v->a[765] = entry(1, false);
	v->a[766] = shift(940);
	v->a[767] = entry(1, true);
	v->a[768] = shift(6166);
	v->a[769] = entry(1, false);
	v->a[770] = shift(636);
	v->a[771] = entry(1, false);
	v->a[772] = shift(920);
	v->a[773] = entry(1, true);
	v->a[774] = shift(938);
	v->a[775] = entry(1, true);
	v->a[776] = shift(932);
	v->a[777] = entry(1, false);
	v->a[778] = shift(94);
	v->a[779] = entry(1, false);
	parse_actions_entries_39(v);
}

void	parse_actions_entries_39(t_parse_actions_entries_array *v)
{
	v->a[780] = shift(84);
	v->a[781] = entry(1, true);
	v->a[782] = shift(6162);
	v->a[783] = entry(1, true);
	v->a[784] = shift(6170);
	v->a[785] = entry(1, false);
	v->a[786] = shift(280);
	v->a[787] = entry(1, true);
	v->a[788] = shift(6163);
	v->a[789] = entry(1, true);
	v->a[790] = shift(6178);
	v->a[791] = entry(1, true);
	v->a[792] = shift(6161);
	v->a[793] = entry(1, true);
	v->a[794] = shift(6165);
	v->a[795] = entry(1, false);
	v->a[796] = shift(70);
	v->a[797] = entry(1, true);
	v->a[798] = shift(6182);
	v->a[799] = entry(1, false);
	parse_actions_entries_40(v);
}

/* EOF parse_actions_entries_7.c */
