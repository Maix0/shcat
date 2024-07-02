/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_actions_entries_0.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_actions_entries.h"

void	parse_actions_entries_0(t_parse_actions_entries_array *v)
{
	v->a[0] = entry(0, false);
	v->a[1] = entry(1, false);
	v->a[2] = recover();
	v->a[3] = entry(1, false);
	v->a[4] = shift_extra();
	v->a[5] = entry(1, true);
	v->a[6] = reduce(sym_program, 0, 0, 0);
	v->a[7] = entry(1, false);
	v->a[8] = shift(352);
	v->a[9] = entry(1, false);
	v->a[10] = shift(2126);
	v->a[11] = entry(1, false);
	v->a[12] = shift(124);
	v->a[13] = entry(1, false);
	v->a[14] = shift(123);
	v->a[15] = entry(1, false);
	v->a[16] = shift(1442);
	v->a[17] = entry(1, false);
	v->a[18] = shift(115);
	v->a[19] = entry(1, false);
	parse_actions_entries_1(v);
}

void	parse_actions_entries_1(t_parse_actions_entries_array *v)
{
	v->a[20] = shift(119);
	v->a[21] = entry(1, false);
	v->a[22] = shift(443);
	v->a[23] = entry(1, false);
	v->a[24] = shift(1386);
	v->a[25] = entry(1, false);
	v->a[26] = shift(711);
	v->a[27] = entry(1, false);
	v->a[28] = shift(1658);
	v->a[29] = entry(1, false);
	v->a[30] = shift(1660);
	v->a[31] = entry(1, false);
	v->a[32] = shift(345);
	v->a[33] = entry(1, false);
	v->a[34] = shift(1530);
	v->a[35] = entry(1, false);
	v->a[36] = shift(43);
	v->a[37] = entry(1, false);
	v->a[38] = shift(44);
	v->a[39] = entry(1, true);
	parse_actions_entries_2(v);
}

void	parse_actions_entries_2(t_parse_actions_entries_array *v)
{
	v->a[40] = shift(1782);
	v->a[41] = entry(1, true);
	v->a[42] = shift(2130);
	v->a[43] = entry(1, false);
	v->a[44] = shift(434);
	v->a[45] = entry(1, false);
	v->a[46] = shift(1571);
	v->a[47] = entry(1, false);
	v->a[48] = shift(121);
	v->a[49] = entry(1, false);
	v->a[50] = shift(45);
	v->a[51] = entry(1, false);
	v->a[52] = shift(390);
	v->a[53] = entry(1, false);
	v->a[54] = shift(1388);
	v->a[55] = entry(1, false);
	v->a[56] = shift(760);
	v->a[57] = entry(1, false);
	v->a[58] = shift(1636);
	v->a[59] = entry(1, false);
	parse_actions_entries_3(v);
}

void	parse_actions_entries_3(t_parse_actions_entries_array *v)
{
	v->a[60] = shift(1639);
	v->a[61] = entry(1, false);
	v->a[62] = shift(433);
	v->a[63] = entry(1, false);
	v->a[64] = shift(1594);
	v->a[65] = entry(1, false);
	v->a[66] = shift(78);
	v->a[67] = entry(1, false);
	v->a[68] = shift(73);
	v->a[69] = entry(1, true);
	v->a[70] = shift(1780);
	v->a[71] = entry(1, true);
	v->a[72] = shift(2027);
	v->a[73] = entry(1, false);
	v->a[74] = shift(1121);
	v->a[75] = entry(1, false);
	v->a[76] = shift(1575);
	v->a[77] = entry(1, false);
	v->a[78] = shift(1257);
	v->a[79] = entry(1, false);
	parse_actions_entries_4(v);
}

void	parse_actions_entries_4(t_parse_actions_entries_array *v)
{
	v->a[80] = shift(1263);
	v->a[81] = entry(1, false);
	v->a[82] = shift(1179);
	v->a[83] = entry(1, false);
	v->a[84] = shift(355);
	v->a[85] = entry(1, false);
	v->a[86] = shift(2076);
	v->a[87] = entry(1, false);
	v->a[88] = shift(133);
	v->a[89] = entry(1, false);
	v->a[90] = shift(126);
	v->a[91] = entry(1, false);
	v->a[92] = shift(1436);
	v->a[93] = entry(1, false);
	v->a[94] = shift(88);
	v->a[95] = entry(1, false);
	v->a[96] = shift(672);
	v->a[97] = entry(1, false);
	v->a[98] = shift(132);
	v->a[99] = entry(1, false);
	parse_actions_entries_5(v);
}

/* EOF parse_actions_entries_0.c */
