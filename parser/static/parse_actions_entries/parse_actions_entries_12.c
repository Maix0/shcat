/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_actions_entries_12.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_actions_entries.h"

void	parse_actions_entries_60(t_parse_actions_entries_array *v)
{
	v->a[1200] = entry(2, false);
	v->a[1201] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[1202] = shift_repeat(3180);
	v->a[1203] = entry(2, false);
	v->a[1204] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[1205] = shift_repeat(573);
	v->a[1206] = entry(2, false);
	v->a[1207] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[1208] = shift_repeat(3112);
	v->a[1209] = entry(2, false);
	v->a[1210] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[1211] = shift_repeat(712);
	v->a[1212] = entry(2, false);
	v->a[1213] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[1214] = shift_repeat(3336);
	v->a[1215] = entry(2, false);
	v->a[1216] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[1217] = shift_repeat(3107);
	v->a[1218] = entry(2, false);
	v->a[1219] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	parse_actions_entries_61(v);
}

void	parse_actions_entries_61(t_parse_actions_entries_array *v)
{
	v->a[1220] = shift_repeat(50);
	v->a[1221] = entry(2, false);
	v->a[1222] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[1223] = shift_repeat(51);
	v->a[1224] = entry(2, false);
	v->a[1225] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[1226] = shift_repeat(54);
	v->a[1227] = entry(2, true);
	v->a[1228] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[1229] = shift_repeat(555);
	v->a[1230] = entry(2, true);
	v->a[1231] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[1232] = shift_repeat(1121);
	v->a[1233] = entry(2, true);
	v->a[1234] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[1235] = shift_repeat(4072);
	v->a[1236] = entry(1, false);
	v->a[1237] = shift(279);
	v->a[1238] = entry(1, false);
	v->a[1239] = shift(935);
	parse_actions_entries_62(v);
}

void	parse_actions_entries_62(t_parse_actions_entries_array *v)
{
	v->a[1240] = entry(1, false);
	v->a[1241] = shift(960);
	v->a[1242] = entry(1, true);
	v->a[1243] = shift(960);
	v->a[1244] = entry(1, false);
	v->a[1245] = reduce(sym_unset_command, 1, 0, 0);
	v->a[1246] = entry(1, true);
	v->a[1247] = reduce(sym_unset_command, 1, 0, 0);
	v->a[1248] = entry(1, false);
	v->a[1249] = shift(277);
	v->a[1250] = entry(1, false);
	v->a[1251] = shift(770);
	v->a[1252] = entry(1, false);
	v->a[1253] = shift(1756);
	v->a[1254] = entry(1, false);
	v->a[1255] = shift(3189);
	v->a[1256] = entry(1, false);
	v->a[1257] = shift(784);
	v->a[1258] = entry(1, false);
	v->a[1259] = shift(3099);
	parse_actions_entries_63(v);
}

void	parse_actions_entries_63(t_parse_actions_entries_array *v)
{
	v->a[1260] = entry(1, false);
	v->a[1261] = shift(985);
	v->a[1262] = entry(1, false);
	v->a[1263] = shift(3274);
	v->a[1264] = entry(1, false);
	v->a[1265] = shift(3081);
	v->a[1266] = entry(1, false);
	v->a[1267] = shift(132);
	v->a[1268] = entry(1, false);
	v->a[1269] = shift(133);
	v->a[1270] = entry(1, false);
	v->a[1271] = shift(147);
	v->a[1272] = entry(1, true);
	v->a[1273] = shift(770);
	v->a[1274] = entry(1, true);
	v->a[1275] = shift(1293);
	v->a[1276] = entry(1, true);
	v->a[1277] = shift(4053);
	v->a[1278] = entry(1, false);
	v->a[1279] = reduce(sym_command, 2, 0, 14);
	parse_actions_entries_64(v);
}

void	parse_actions_entries_64(t_parse_actions_entries_array *v)
{
	v->a[1280] = entry(1, true);
	v->a[1281] = reduce(sym_command, 2, 0, 14);
	v->a[1282] = entry(2, false);
	v->a[1283] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1284] = shift_repeat(577);
	v->a[1285] = entry(1, false);
	v->a[1286] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1287] = entry(1, true);
	v->a[1288] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1289] = entry(2, false);
	v->a[1290] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1291] = shift_repeat(1850);
	v->a[1292] = entry(2, false);
	v->a[1293] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1294] = shift_repeat(3164);
	v->a[1295] = entry(2, false);
	v->a[1296] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1297] = shift_repeat(514);
	v->a[1298] = entry(2, false);
	v->a[1299] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	parse_actions_entries_65(v);
}

/* EOF parse_actions_entries_12.c */
