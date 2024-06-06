/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_actions_entries_1.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_actions_entries.h"

void	parse_actions_entries_5(t_parse_actions_entries_array *v)
{
	v->a[100] = shift(3340);
	v->a[101] = entry(1, true);
	v->a[102] = shift(3033);
	v->a[103] = entry(1, false);
	v->a[104] = shift(124);
	v->a[105] = entry(1, true);
	v->a[106] = shift(208);
	v->a[107] = entry(1, true);
	v->a[108] = shift(197);
	v->a[109] = entry(1, true);
	v->a[110] = shift(3197);
	v->a[111] = entry(1, true);
	v->a[112] = shift(3778);
	v->a[113] = entry(1, true);
	v->a[114] = shift(4023);
	v->a[115] = entry(1, false);
	v->a[116] = shift(2224);
	v->a[117] = entry(1, false);
	v->a[118] = shift(2769);
	v->a[119] = entry(1, false);
	parse_actions_entries_6(v);
}

void	parse_actions_entries_6(t_parse_actions_entries_array *v)
{
	v->a[120] = shift(2319);
	v->a[121] = entry(1, false);
	v->a[122] = shift(2219);
	v->a[123] = entry(1, false);
	v->a[124] = shift(2342);
	v->a[125] = entry(1, false);
	v->a[126] = shift(2336);
	v->a[127] = entry(1, false);
	v->a[128] = shift(2726);
	v->a[129] = entry(1, false);
	v->a[130] = shift(496);
	v->a[131] = entry(1, false);
	v->a[132] = shift(3897);
	v->a[133] = entry(1, false);
	v->a[134] = shift(235);
	v->a[135] = entry(1, false);
	v->a[136] = shift(225);
	v->a[137] = entry(1, false);
	v->a[138] = shift(2367);
	v->a[139] = entry(1, false);
	parse_actions_entries_7(v);
}

void	parse_actions_entries_7(t_parse_actions_entries_array *v)
{
	v->a[140] = reduce(sym_last_case_item, 2, 0, 41);
	v->a[141] = entry(1, true);
	v->a[142] = shift(91);
	v->a[143] = entry(1, false);
	v->a[144] = shift(2773);
	v->a[145] = entry(1, true);
	v->a[146] = shift(2827);
	v->a[147] = entry(1, false);
	v->a[148] = shift(3832);
	v->a[149] = entry(1, true);
	v->a[150] = shift(134);
	v->a[151] = entry(1, false);
	v->a[152] = shift(591);
	v->a[153] = entry(1, false);
	v->a[154] = shift(262);
	v->a[155] = entry(1, false);
	v->a[156] = shift(288);
	v->a[157] = entry(1, false);
	v->a[158] = shift(2214);
	v->a[159] = entry(1, true);
	parse_actions_entries_8(v);
}

void	parse_actions_entries_8(t_parse_actions_entries_array *v)
{
	v->a[160] = shift(2214);
	v->a[161] = entry(1, true);
	v->a[162] = shift(317);
	v->a[163] = entry(1, true);
	v->a[164] = shift(1842);
	v->a[165] = entry(1, false);
	v->a[166] = shift(3146);
	v->a[167] = entry(1, false);
	v->a[168] = shift(478);
	v->a[169] = entry(1, true);
	v->a[170] = shift(3069);
	v->a[171] = entry(1, true);
	v->a[172] = shift(508);
	v->a[173] = entry(1, false);
	v->a[174] = shift(583);
	v->a[175] = entry(1, false);
	v->a[176] = shift(3335);
	v->a[177] = entry(1, true);
	v->a[178] = shift(3071);
	v->a[179] = entry(1, false);
	parse_actions_entries_9(v);
}

void	parse_actions_entries_9(t_parse_actions_entries_array *v)
{
	v->a[180] = shift(195);
	v->a[181] = entry(1, true);
	v->a[182] = shift(194);
	v->a[183] = entry(1, true);
	v->a[184] = shift(193);
	v->a[185] = entry(1, true);
	v->a[186] = shift(3205);
	v->a[187] = entry(1, true);
	v->a[188] = shift(3635);
	v->a[189] = entry(1, true);
	v->a[190] = shift(4064);
	v->a[191] = entry(1, false);
	v->a[192] = reduce(sym_last_case_item, 3, 0, 48);
	v->a[193] = entry(1, false);
	v->a[194] = shift(2766);
	v->a[195] = entry(1, true);
	v->a[196] = shift(2853);
	v->a[197] = entry(1, true);
	v->a[198] = shift(2854);
	v->a[199] = entry(1, false);
	parse_actions_entries_10(v);
}

/* EOF parse_actions_entries_1.c */
