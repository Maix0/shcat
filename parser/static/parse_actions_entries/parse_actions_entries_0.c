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
	v->a[8] = shift(243);
	v->a[9] = entry(1, false);
	v->a[10] = shift(1743);
	v->a[11] = entry(1, false);
	v->a[12] = shift(106);
	v->a[13] = entry(1, false);
	v->a[14] = shift(119);
	v->a[15] = entry(1, false);
	v->a[16] = shift(846);
	v->a[17] = entry(1, false);
	v->a[18] = shift(84);
	v->a[19] = entry(1, false);
	return (parse_actions_entries_1(v));
}

void	parse_actions_entries_1(t_parse_actions_entries_array *v)
{
	v->a[20] = shift(115);
	v->a[21] = entry(1, false);
	v->a[22] = shift(212);
	v->a[23] = entry(1, false);
	v->a[24] = shift(809);
	v->a[25] = entry(1, false);
	v->a[26] = shift(610);
	v->a[27] = entry(1, false);
	v->a[28] = shift(1275);
	v->a[29] = entry(1, false);
	v->a[30] = shift(1168);
	v->a[31] = entry(1, false);
	v->a[32] = shift(280);
	v->a[33] = entry(1, false);
	v->a[34] = shift(1167);
	v->a[35] = entry(1, false);
	v->a[36] = shift(45);
	v->a[37] = entry(1, false);
	v->a[38] = shift(46);
	v->a[39] = entry(1, true);
	return (parse_actions_entries_2(v));
}

void	parse_actions_entries_2(t_parse_actions_entries_array *v)
{
	v->a[40] = shift(1656);
	v->a[41] = entry(1, false);
	v->a[42] = shift(272);
	v->a[43] = entry(1, false);
	v->a[44] = shift(1022);
	v->a[45] = entry(1, false);
	v->a[46] = shift(107);
	v->a[47] = entry(1, false);
	v->a[48] = shift(44);
	v->a[49] = entry(1, false);
	v->a[50] = shift(228);
	v->a[51] = entry(1, false);
	v->a[52] = shift(790);
	v->a[53] = entry(1, false);
	v->a[54] = shift(673);
	v->a[55] = entry(1, false);
	v->a[56] = shift(1213);
	v->a[57] = entry(1, false);
	v->a[58] = shift(1104);
	v->a[59] = entry(1, false);
	return (parse_actions_entries_3(v));
}

void	parse_actions_entries_3(t_parse_actions_entries_array *v)
{
	v->a[60] = shift(401);
	v->a[61] = entry(1, false);
	v->a[62] = shift(1105);
	v->a[63] = entry(1, false);
	v->a[64] = shift(97);
	v->a[65] = entry(1, false);
	v->a[66] = shift(98);
	v->a[67] = entry(1, true);
	v->a[68] = shift(1665);
	v->a[69] = entry(1, false);
	v->a[70] = shift(985);
	v->a[71] = entry(1, false);
	v->a[72] = shift(1403);
	v->a[73] = entry(1, false);
	v->a[74] = shift(1243);
	v->a[75] = entry(1, false);
	v->a[76] = shift(1239);
	v->a[77] = entry(1, false);
	v->a[78] = shift(1400);
	v->a[79] = entry(1, false);
	return (parse_actions_entries_4(v));
}

void	parse_actions_entries_4(t_parse_actions_entries_array *v)
{
	v->a[80] = shift(240);
	v->a[81] = entry(1, false);
	v->a[82] = shift(1707);
	v->a[83] = entry(1, false);
	v->a[84] = shift(105);
	v->a[85] = entry(1, false);
	v->a[86] = shift(117);
	v->a[87] = entry(1, false);
	v->a[88] = shift(884);
	v->a[89] = entry(1, false);
	v->a[90] = shift(100);
	v->a[91] = entry(1, false);
	v->a[92] = shift(31);
	v->a[93] = entry(1, false);
	v->a[94] = shift(110);
	v->a[95] = entry(1, false);
	v->a[96] = shift(223);
	v->a[97] = entry(1, false);
	v->a[98] = shift(776);
	v->a[99] = entry(1, false);
	return (parse_actions_entries_5(v));
}

/* EOF parse_actions_entries_0.c */
