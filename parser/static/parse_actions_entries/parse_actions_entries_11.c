/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_actions_entries_11.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_actions_entries.h"

void	parse_actions_entries_55(t_parse_actions_entries_array *v)
{
	v->a[1100] = reduce(aux_sym__case_item_last_repeat2, 2, 0, 0);
	v->a[1101] = entry(2, false);
	v->a[1102] = reduce(aux_sym__case_item_last_repeat2, 2, 0, 0);
	v->a[1103] = shift_repeat(326);
	v->a[1104] = entry(1, true);
	v->a[1105] = reduce(aux_sym__case_item_last_repeat2, 2, 0, 0);
	v->a[1106] = entry(1, false);
	v->a[1107] = reduce(sym_string, 2, 0, 0);
	v->a[1108] = entry(1, true);
	v->a[1109] = reduce(sym_string, 2, 0, 0);
	v->a[1110] = entry(1, false);
	v->a[1111] = shift(739);
	v->a[1112] = entry(1, true);
	v->a[1113] = shift(764);
	v->a[1114] = entry(1, false);
	v->a[1115] = reduce(sym_expansion, 2, 0, 0);
	v->a[1116] = entry(1, true);
	v->a[1117] = reduce(sym_expansion, 2, 0, 0);
	v->a[1118] = entry(2, false);
	v->a[1119] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	return (parse_actions_entries_56(v));
}

void	parse_actions_entries_56(t_parse_actions_entries_array *v)
{
	v->a[1120] = shift_repeat(739);
	v->a[1121] = entry(2, true);
	v->a[1122] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1123] = shift_repeat(739);
	v->a[1124] = entry(1, false);
	v->a[1125] = reduce(sym_string, 4, 0, 37);
	v->a[1126] = entry(1, true);
	v->a[1127] = reduce(sym_string, 4, 0, 37);
	v->a[1128] = entry(2, false);
	v->a[1129] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1130] = shift_repeat(728);
	v->a[1131] = entry(2, true);
	v->a[1132] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1133] = shift_repeat(728);
	v->a[1134] = entry(1, false);
	v->a[1135] = shift(723);
	v->a[1136] = entry(1, true);
	v->a[1137] = shift(724);
	v->a[1138] = entry(1, true);
	v->a[1139] = shift(739);
	return (parse_actions_entries_57(v));
}

void	parse_actions_entries_57(t_parse_actions_entries_array *v)
{
	v->a[1140] = entry(1, false);
	v->a[1141] = reduce(sym__heredoc_expression, 2, 0, 51);
	v->a[1142] = entry(1, false);
	v->a[1143] = shift(607);
	v->a[1144] = entry(1, false);
	v->a[1145] = shift(628);
	v->a[1146] = entry(1, false);
	v->a[1147] = shift(1214);
	v->a[1148] = entry(1, false);
	v->a[1149] = shift(1098);
	v->a[1150] = entry(1, false);
	v->a[1151] = shift(1091);
	v->a[1152] = entry(1, false);
	v->a[1153] = shift(94);
	v->a[1154] = entry(1, false);
	v->a[1155] = shift(96);
	v->a[1156] = entry(1, false);
	v->a[1157] = shift(728);
	v->a[1158] = entry(1, true);
	v->a[1159] = shift(765);
	return (parse_actions_entries_58(v));
}

void	parse_actions_entries_58(t_parse_actions_entries_array *v)
{
	v->a[1160] = entry(1, false);
	v->a[1161] = reduce(sym__statements, 2, 0, 8);
	v->a[1162] = entry(2, false);
	v->a[1163] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1164] = shift_repeat(723);
	v->a[1165] = entry(2, true);
	v->a[1166] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1167] = shift_repeat(723);
	v->a[1168] = entry(1, true);
	v->a[1169] = shift(728);
	v->a[1170] = entry(1, true);
	v->a[1171] = shift(723);
	v->a[1172] = entry(1, true);
	v->a[1173] = shift(702);
	v->a[1174] = entry(1, true);
	v->a[1175] = shift(770);
	v->a[1176] = entry(2, true);
	v->a[1177] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[1178] = shift(1626);
	v->a[1179] = entry(1, false);
	return (parse_actions_entries_59(v));
}

void	parse_actions_entries_59(t_parse_actions_entries_array *v)
{
	v->a[1180] = shift(789);
	v->a[1181] = entry(1, false);
	v->a[1182] = shift(788);
	v->a[1183] = entry(1, true);
	v->a[1184] = shift(788);
	v->a[1185] = entry(1, true);
	v->a[1186] = reduce(sym__statements, 3, 0, 30);
	v->a[1187] = entry(1, false);
	v->a[1188] = shift(830);
	v->a[1189] = entry(1, false);
	v->a[1190] = shift(829);
	v->a[1191] = entry(1, true);
	v->a[1192] = shift(829);
	v->a[1193] = entry(1, false);
	v->a[1194] = shift(1455);
	v->a[1195] = entry(2, false);
	v->a[1196] = reduce(sym__expansion_regex, 1, 0, 19);
	v->a[1197] = reduce(sym__expansion_body, 2, 0, 25);
	v->a[1198] = entry(1, false);
	v->a[1199] = shift(1159);
	return (parse_actions_entries_60(v));
}

/* EOF parse_actions_entries_11.c */
