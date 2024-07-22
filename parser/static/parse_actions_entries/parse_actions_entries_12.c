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
	v->a[1200] = entry(1, true);
	v->a[1201] = reduce(sym_variable_assignment, 3, 0, 18);
	v->a[1202] = entry(1, false);
	v->a[1203] = reduce(sym_variable_assignment, 3, 0, 18);
	v->a[1204] = entry(1, false);
	v->a[1205] = shift(1283);
	v->a[1206] = entry(1, true);
	v->a[1207] = shift(1283);
	v->a[1208] = entry(1, true);
	v->a[1209] = reduce(aux_sym_for_statement_repeat1, 1, 0, 0);
	v->a[1210] = entry(1, false);
	v->a[1211] = reduce(aux_sym_for_statement_repeat1, 1, 0, 0);
	v->a[1212] = entry(1, false);
	v->a[1213] = shift(1274);
	v->a[1214] = entry(1, true);
	v->a[1215] = shift(1362);
	v->a[1216] = entry(2, false);
	v->a[1217] = reduce(sym_command_name, 1, 0, 0);
	v->a[1218] = shift(1956);
	v->a[1219] = entry(1, false);
	parse_actions_entries_61(v);
}

void	parse_actions_entries_61(t_parse_actions_entries_array *v)
{
	v->a[1220] = shift(1267);
	v->a[1221] = entry(1, true);
	v->a[1222] = shift(1331);
	v->a[1223] = entry(1, true);
	v->a[1224] = shift(1267);
	v->a[1225] = entry(1, true);
	v->a[1226] = shift(1347);
	v->a[1227] = entry(1, false);
	v->a[1228] = reduce(sym_arithmetic_expansion, 2, 0, 0);
	v->a[1229] = entry(1, true);
	v->a[1230] = reduce(sym_arithmetic_expansion, 2, 0, 0);
	v->a[1231] = entry(1, false);
	v->a[1232] = reduce(sym_terminator, 1, 0, 0);
	v->a[1233] = entry(1, true);
	v->a[1234] = reduce(sym_terminator, 1, 0, 0);
	v->a[1235] = entry(1, false);
	v->a[1236] = reduce(aux_sym_command_repeat2, 1, 0, 11);
	v->a[1237] = entry(1, false);
	v->a[1238] = shift(1290);
	v->a[1239] = entry(1, true);
	parse_actions_entries_62(v);
}

void	parse_actions_entries_62(t_parse_actions_entries_array *v)
{
	v->a[1240] = reduce(aux_sym_command_repeat2, 1, 0, 11);
	v->a[1241] = entry(1, true);
	v->a[1242] = shift(1290);
	v->a[1243] = entry(1, false);
	v->a[1244] = shift(1264);
	v->a[1245] = entry(1, true);
	v->a[1246] = shift(1328);
	v->a[1247] = entry(2, false);
	v->a[1248] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1249] = shift_repeat(1218);
	v->a[1250] = entry(2, true);
	v->a[1251] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1252] = shift_repeat(1218);
	v->a[1253] = entry(2, false);
	v->a[1254] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1255] = shift_repeat(1283);
	v->a[1256] = entry(2, true);
	v->a[1257] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1258] = shift_repeat(1283);
	v->a[1259] = entry(1, true);
	parse_actions_entries_63(v);
}

void	parse_actions_entries_63(t_parse_actions_entries_array *v)
{
	v->a[1260] = shift(1274);
	v->a[1261] = entry(1, false);
	v->a[1262] = shift(1218);
	v->a[1263] = entry(1, true);
	v->a[1264] = shift(1218);
	v->a[1265] = entry(2, false);
	v->a[1266] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1267] = shift_repeat(1290);
	v->a[1268] = entry(2, true);
	v->a[1269] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1270] = shift_repeat(1290);
	v->a[1271] = entry(2, false);
	v->a[1272] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1273] = shift_repeat(806);
	v->a[1274] = entry(2, false);
	v->a[1275] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1276] = shift_repeat(702);
	v->a[1277] = entry(2, false);
	v->a[1278] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1279] = shift_repeat(1703);
	parse_actions_entries_64(v);
}

void	parse_actions_entries_64(t_parse_actions_entries_array *v)
{
	v->a[1280] = entry(2, false);
	v->a[1281] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1282] = shift_repeat(1606);
	v->a[1283] = entry(2, false);
	v->a[1284] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1285] = shift_repeat(1605);
	v->a[1286] = entry(2, false);
	v->a[1287] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1288] = shift_repeat(80);
	v->a[1289] = entry(2, false);
	v->a[1290] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1291] = shift_repeat(82);
	v->a[1292] = entry(1, true);
	v->a[1293] = shift(1256);
	v->a[1294] = entry(2, false);
	v->a[1295] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1296] = shift_repeat(780);
	v->a[1297] = entry(1, false);
	v->a[1298] = shift(780);
	v->a[1299] = entry(2, false);
	parse_actions_entries_65(v);
}

/* EOF parse_actions_entries_12.c */
