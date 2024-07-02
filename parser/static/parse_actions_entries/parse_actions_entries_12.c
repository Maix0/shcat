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
	v->a[1201] = reduce(sym_arithmetic_expansion, 3, 0, 0);
	v->a[1202] = entry(2, false);
	v->a[1203] = reduce(sym_command_name, 1, 0, 0);
	v->a[1204] = shift(2106);
	v->a[1205] = entry(1, true);
	v->a[1206] = shift(1276);
	v->a[1207] = entry(1, true);
	v->a[1208] = shift(1301);
	v->a[1209] = entry(2, false);
	v->a[1210] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1211] = shift_repeat(1346);
	v->a[1212] = entry(2, true);
	v->a[1213] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1214] = shift_repeat(1346);
	v->a[1215] = entry(2, false);
	v->a[1216] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1217] = shift_repeat(1345);
	v->a[1218] = entry(2, true);
	v->a[1219] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	parse_actions_entries_61(v);
}

void	parse_actions_entries_61(t_parse_actions_entries_array *v)
{
	v->a[1220] = shift_repeat(1345);
	v->a[1221] = entry(2, false);
	v->a[1222] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1223] = shift_repeat(1301);
	v->a[1224] = entry(2, true);
	v->a[1225] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1226] = shift_repeat(1301);
	v->a[1227] = entry(1, false);
	v->a[1228] = reduce(aux_sym_command_repeat2, 1, 0, 11);
	v->a[1229] = entry(1, true);
	v->a[1230] = reduce(aux_sym_command_repeat2, 1, 0, 11);
	v->a[1231] = entry(1, true);
	v->a[1232] = shift(1349);
	v->a[1233] = entry(1, true);
	v->a[1234] = shift(1321);
	v->a[1235] = entry(2, false);
	v->a[1236] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1237] = shift_repeat(714);
	v->a[1238] = entry(1, true);
	v->a[1239] = shift(1274);
	parse_actions_entries_62(v);
}

void	parse_actions_entries_62(t_parse_actions_entries_array *v)
{
	v->a[1240] = entry(1, true);
	v->a[1241] = shift(1346);
	v->a[1242] = entry(2, false);
	v->a[1243] = reduce(aux_sym_command_repeat2, 2, 0, 32);
	v->a[1244] = shift_repeat(713);
	v->a[1245] = entry(2, false);
	v->a[1246] = reduce(sym_command_name, 1, 0, 0);
	v->a[1247] = shift(1967);
	v->a[1248] = entry(2, false);
	v->a[1249] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1250] = shift_repeat(1349);
	v->a[1251] = entry(2, true);
	v->a[1252] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1253] = shift_repeat(1349);
	v->a[1254] = entry(2, false);
	v->a[1255] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1256] = shift_repeat(1274);
	v->a[1257] = entry(2, true);
	v->a[1258] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1259] = shift_repeat(1274);
	parse_actions_entries_63(v);
}

void	parse_actions_entries_63(t_parse_actions_entries_array *v)
{
	v->a[1260] = entry(1, false);
	v->a[1261] = shift(965);
	v->a[1262] = entry(1, false);
	v->a[1263] = shift(964);
	v->a[1264] = entry(1, true);
	v->a[1265] = shift(964);
	v->a[1266] = entry(2, false);
	v->a[1267] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1268] = shift_repeat(804);
	v->a[1269] = entry(1, false);
	v->a[1270] = shift(913);
	v->a[1271] = entry(1, false);
	v->a[1272] = shift(914);
	v->a[1273] = entry(1, true);
	v->a[1274] = shift(914);
	v->a[1275] = entry(1, false);
	v->a[1276] = shift(804);
	v->a[1277] = entry(2, false);
	v->a[1278] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1279] = shift_repeat(1325);
	parse_actions_entries_64(v);
}

void	parse_actions_entries_64(t_parse_actions_entries_array *v)
{
	v->a[1280] = entry(2, true);
	v->a[1281] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1282] = shift_repeat(1325);
	v->a[1283] = entry(1, false);
	v->a[1284] = shift(1362);
	v->a[1285] = entry(1, true);
	v->a[1286] = shift(1362);
	v->a[1287] = entry(1, false);
	v->a[1288] = shift(1325);
	v->a[1289] = entry(1, true);
	v->a[1290] = shift(1325);
	v->a[1291] = entry(2, false);
	v->a[1292] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1293] = shift_repeat(1362);
	v->a[1294] = entry(2, true);
	v->a[1295] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1296] = shift_repeat(1362);
	v->a[1297] = entry(2, false);
	v->a[1298] = reduce(aux_sym_command_repeat2, 2, 0, 32);
	v->a[1299] = shift_repeat(826);
	parse_actions_entries_65(v);
}

/* EOF parse_actions_entries_12.c */
