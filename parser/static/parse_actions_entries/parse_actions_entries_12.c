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
	v->a[1200] = entry(1, false);
	v->a[1201] = shift(1455);
	v->a[1202] = entry(1, true);
	v->a[1203] = reduce(sym_variable_assignment, 3, 0, 14);
	v->a[1204] = entry(1, true);
	v->a[1205] = shift(1455);
	v->a[1206] = entry(1, false);
	v->a[1207] = reduce(aux_sym_for_statement_repeat1, 1, 0, 0);
	v->a[1208] = entry(1, false);
	v->a[1209] = shift(1445);
	v->a[1210] = entry(1, true);
	v->a[1211] = reduce(aux_sym_for_statement_repeat1, 1, 0, 0);
	v->a[1212] = entry(1, true);
	v->a[1213] = shift(1445);
	v->a[1214] = entry(2, false);
	v->a[1215] = reduce(sym_command_name, 1, 0, 0);
	v->a[1216] = shift(2209);
	v->a[1217] = entry(1, false);
	v->a[1218] = shift(945);
	v->a[1219] = entry(1, false);
	parse_actions_entries_61(v);
}

void	parse_actions_entries_61(t_parse_actions_entries_array *v)
{
	v->a[1220] = shift(946);
	v->a[1221] = entry(1, true);
	v->a[1222] = shift(946);
	v->a[1223] = entry(1, true);
	v->a[1224] = shift(1446);
	v->a[1225] = entry(1, false);
	v->a[1226] = shift(1494);
	v->a[1227] = entry(1, true);
	v->a[1228] = shift(1447);
	v->a[1229] = entry(1, false);
	v->a[1230] = shift(1431);
	v->a[1231] = entry(1, true);
	v->a[1232] = shift(1431);
	v->a[1233] = entry(2, false);
	v->a[1234] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1235] = shift_repeat(1445);
	v->a[1236] = entry(2, true);
	v->a[1237] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1238] = shift_repeat(1445);
	v->a[1239] = entry(1, false);
	parse_actions_entries_62(v);
}

void	parse_actions_entries_62(t_parse_actions_entries_array *v)
{
	v->a[1240] = reduce(sym_string, 4, 0, 0);
	v->a[1241] = entry(1, true);
	v->a[1242] = reduce(sym_string, 4, 0, 0);
	v->a[1243] = entry(1, true);
	v->a[1244] = reduce(sym_arithmetic_expansion, 2, 0, 0);
	v->a[1245] = entry(1, false);
	v->a[1246] = reduce(sym_arithmetic_expansion, 2, 0, 0);
	v->a[1247] = entry(1, true);
	v->a[1248] = reduce(sym_string, 2, 0, 0);
	v->a[1249] = entry(1, false);
	v->a[1250] = reduce(sym_string, 2, 0, 0);
	v->a[1251] = entry(1, true);
	v->a[1252] = reduce(sym_number, 2, 0, 0);
	v->a[1253] = entry(1, false);
	v->a[1254] = reduce(sym_number, 2, 0, 0);
	v->a[1255] = entry(1, true);
	v->a[1256] = reduce(sym_expansion, 2, 0, 0);
	v->a[1257] = entry(1, false);
	v->a[1258] = reduce(sym_expansion, 2, 0, 0);
	v->a[1259] = entry(1, false);
	parse_actions_entries_63(v);
}

void	parse_actions_entries_63(t_parse_actions_entries_array *v)
{
	v->a[1260] = reduce(aux_sym_command_repeat2, 1, 0, 9);
	v->a[1261] = entry(1, true);
	v->a[1262] = reduce(aux_sym_command_repeat2, 1, 0, 9);
	v->a[1263] = entry(1, true);
	v->a[1264] = shift(1494);
	v->a[1265] = entry(2, false);
	v->a[1266] = reduce(aux_sym_command_repeat2, 2, 0, 22);
	v->a[1267] = shift_repeat(800);
	v->a[1268] = entry(2, false);
	v->a[1269] = reduce(aux_sym_command_repeat2, 2, 0, 22);
	v->a[1270] = shift_repeat(821);
	v->a[1271] = entry(2, false);
	v->a[1272] = reduce(aux_sym_command_repeat2, 2, 0, 22);
	v->a[1273] = shift_repeat(1821);
	v->a[1274] = entry(2, false);
	v->a[1275] = reduce(aux_sym_command_repeat2, 2, 0, 22);
	v->a[1276] = shift_repeat(1782);
	v->a[1277] = entry(2, false);
	v->a[1278] = reduce(aux_sym_command_repeat2, 2, 0, 22);
	v->a[1279] = shift_repeat(845);
	parse_actions_entries_64(v);
}

void	parse_actions_entries_64(t_parse_actions_entries_array *v)
{
	v->a[1280] = entry(2, false);
	v->a[1281] = reduce(aux_sym_command_repeat2, 2, 0, 22);
	v->a[1282] = shift_repeat(1971);
	v->a[1283] = entry(2, false);
	v->a[1284] = reduce(aux_sym_command_repeat2, 2, 0, 22);
	v->a[1285] = shift_repeat(1700);
	v->a[1286] = entry(2, false);
	v->a[1287] = reduce(aux_sym_command_repeat2, 2, 0, 22);
	v->a[1288] = shift_repeat(89);
	v->a[1289] = entry(2, false);
	v->a[1290] = reduce(aux_sym_command_repeat2, 2, 0, 22);
	v->a[1291] = shift_repeat(87);
	v->a[1292] = entry(2, true);
	v->a[1293] = reduce(aux_sym_command_repeat2, 2, 0, 22);
	v->a[1294] = shift_repeat(932);
	v->a[1295] = entry(1, false);
	v->a[1296] = shift(1451);
	v->a[1297] = entry(1, true);
	v->a[1298] = shift(1451);
	v->a[1299] = entry(1, false);
	parse_actions_entries_65(v);
}

/* EOF parse_actions_entries_12.c */
