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
	v->a[100] = shift(637);
	v->a[101] = entry(1, false);
	v->a[102] = shift(1199);
	v->a[103] = entry(1, false);
	v->a[104] = shift(1133);
	v->a[105] = entry(1, false);
	v->a[106] = shift(276);
	v->a[107] = entry(1, false);
	v->a[108] = shift(1129);
	v->a[109] = entry(1, false);
	v->a[110] = shift(67);
	v->a[111] = entry(1, false);
	v->a[112] = shift(68);
	v->a[113] = entry(1, true);
	v->a[114] = shift(1622);
	v->a[115] = entry(1, false);
	v->a[116] = shift(326);
	v->a[117] = entry(1, false);
	v->a[118] = shift(10);
	v->a[119] = entry(1, false);
	parse_actions_entries_6(v);
}

void	parse_actions_entries_6(t_parse_actions_entries_array *v)
{
	v->a[120] = reduce(sym_elif_clause, 3, 0, 33);
	v->a[121] = entry(1, false);
	v->a[122] = shift(9);
	v->a[123] = entry(2, false);
	v->a[124] = reduce(aux_sym__terminated_statement, 2, 0, 13);
	v->a[125] = shift_repeat(272);
	v->a[126] = entry(2, false);
	v->a[127] = reduce(aux_sym__terminated_statement, 2, 0, 13);
	v->a[128] = shift_repeat(1743);
	v->a[129] = entry(2, false);
	v->a[130] = reduce(aux_sym__terminated_statement, 2, 0, 13);
	v->a[131] = shift_repeat(106);
	v->a[132] = entry(2, false);
	v->a[133] = reduce(aux_sym__terminated_statement, 2, 0, 13);
	v->a[134] = shift_repeat(119);
	v->a[135] = entry(1, false);
	v->a[136] = reduce(aux_sym__terminated_statement, 2, 0, 13);
	v->a[137] = entry(2, false);
	v->a[138] = reduce(aux_sym__terminated_statement, 2, 0, 13);
	v->a[139] = shift_repeat(846);
	parse_actions_entries_7(v);
}

void	parse_actions_entries_7(t_parse_actions_entries_array *v)
{
	v->a[140] = entry(2, false);
	v->a[141] = reduce(aux_sym__terminated_statement, 2, 0, 13);
	v->a[142] = shift_repeat(84);
	v->a[143] = entry(2, false);
	v->a[144] = reduce(aux_sym__terminated_statement, 2, 0, 13);
	v->a[145] = shift_repeat(115);
	v->a[146] = entry(2, false);
	v->a[147] = reduce(aux_sym__terminated_statement, 2, 0, 13);
	v->a[148] = shift_repeat(228);
	v->a[149] = entry(2, false);
	v->a[150] = reduce(aux_sym__terminated_statement, 2, 0, 13);
	v->a[151] = shift_repeat(790);
	v->a[152] = entry(2, false);
	v->a[153] = reduce(aux_sym__terminated_statement, 2, 0, 13);
	v->a[154] = shift_repeat(673);
	v->a[155] = entry(2, false);
	v->a[156] = reduce(aux_sym__terminated_statement, 2, 0, 13);
	v->a[157] = shift_repeat(1213);
	v->a[158] = entry(2, false);
	v->a[159] = reduce(aux_sym__terminated_statement, 2, 0, 13);
	parse_actions_entries_8(v);
}

void	parse_actions_entries_8(t_parse_actions_entries_array *v)
{
	v->a[160] = shift_repeat(1104);
	v->a[161] = entry(2, false);
	v->a[162] = reduce(aux_sym__terminated_statement, 2, 0, 13);
	v->a[163] = shift_repeat(401);
	v->a[164] = entry(2, false);
	v->a[165] = reduce(aux_sym__terminated_statement, 2, 0, 13);
	v->a[166] = shift_repeat(1105);
	v->a[167] = entry(2, false);
	v->a[168] = reduce(aux_sym__terminated_statement, 2, 0, 13);
	v->a[169] = shift_repeat(97);
	v->a[170] = entry(2, false);
	v->a[171] = reduce(aux_sym__terminated_statement, 2, 0, 13);
	v->a[172] = shift_repeat(98);
	v->a[173] = entry(2, true);
	v->a[174] = reduce(aux_sym__terminated_statement, 2, 0, 13);
	v->a[175] = shift_repeat(1665);
	v->a[176] = entry(1, false);
	v->a[177] = shift(11);
	v->a[178] = entry(1, false);
	v->a[179] = shift(13);
	parse_actions_entries_9(v);
}

void	parse_actions_entries_9(t_parse_actions_entries_array *v)
{
	v->a[180] = entry(1, false);
	v->a[181] = shift(14);
	v->a[182] = entry(1, false);
	v->a[183] = shift(26);
	v->a[184] = entry(1, false);
	v->a[185] = reduce(sym_elif_clause, 4, 0, 45);
	v->a[186] = entry(1, false);
	v->a[187] = shift(18);
	v->a[188] = entry(1, false);
	v->a[189] = shift(20);
	v->a[190] = entry(1, false);
	v->a[191] = shift(12);
	v->a[192] = entry(1, false);
	v->a[193] = shift(34);
	v->a[194] = entry(1, false);
	v->a[195] = shift(24);
	v->a[196] = entry(1, false);
	v->a[197] = shift(102);
	v->a[198] = entry(1, false);
	v->a[199] = shift(58);
	parse_actions_entries_10(v);
}

/* EOF parse_actions_entries_1.c */
