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
	v->a[1200] = reduce(sym_arithmetic_expansion, 3, 0, 0);
	v->a[1201] = entry(1, true);
	v->a[1202] = reduce(sym_arithmetic_expansion, 3, 0, 0);
	v->a[1203] = entry(1, false);
	v->a[1204] = shift(1285);
	v->a[1205] = entry(1, true);
	v->a[1206] = shift(1285);
	v->a[1207] = entry(1, false);
	v->a[1208] = reduce(sym_variable_assignment, 3, 0, 18);
	v->a[1209] = entry(1, true);
	v->a[1210] = reduce(sym_variable_assignment, 3, 0, 18);
	v->a[1211] = entry(1, false);
	v->a[1212] = shift(1357);
	v->a[1213] = entry(1, true);
	v->a[1214] = shift(1357);
	v->a[1215] = entry(1, true);
	v->a[1216] = shift(1317);
	v->a[1217] = entry(1, true);
	v->a[1218] = shift(1290);
	v->a[1219] = entry(2, false);
	parse_actions_entries_61(v);
}

void	parse_actions_entries_61(t_parse_actions_entries_array *v)
{
	v->a[1220] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1221] = shift_repeat(751);
	v->a[1222] = entry(2, false);
	v->a[1223] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1224] = shift_repeat(1275);
	v->a[1225] = entry(2, true);
	v->a[1226] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1227] = shift_repeat(1275);
	v->a[1228] = entry(1, true);
	v->a[1229] = shift(1335);
	v->a[1230] = entry(2, false);
	v->a[1231] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1232] = shift_repeat(1341);
	v->a[1233] = entry(2, true);
	v->a[1234] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1235] = shift_repeat(1341);
	v->a[1236] = entry(1, true);
	v->a[1237] = shift(1284);
	v->a[1238] = entry(2, false);
	v->a[1239] = reduce(sym_command_name, 1, 0, 0);
	parse_actions_entries_62(v);
}

void	parse_actions_entries_62(t_parse_actions_entries_array *v)
{
	v->a[1240] = shift(1937);
	v->a[1241] = entry(2, false);
	v->a[1242] = reduce(sym_command_name, 1, 0, 0);
	v->a[1243] = shift(1975);
	v->a[1244] = entry(1, true);
	v->a[1245] = shift(1334);
	v->a[1246] = entry(2, false);
	v->a[1247] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1248] = shift_repeat(1299);
	v->a[1249] = entry(2, true);
	v->a[1250] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1251] = shift_repeat(1299);
	v->a[1252] = entry(1, false);
	v->a[1253] = shift(1341);
	v->a[1254] = entry(1, true);
	v->a[1255] = shift(1341);
	v->a[1256] = entry(1, true);
	v->a[1257] = shift(1286);
	v->a[1258] = entry(1, true);
	v->a[1259] = shift(1308);
	parse_actions_entries_63(v);
}

void	parse_actions_entries_63(t_parse_actions_entries_array *v)
{
	v->a[1260] = entry(2, false);
	v->a[1261] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1262] = shift_repeat(1357);
	v->a[1263] = entry(2, true);
	v->a[1264] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1265] = shift_repeat(1357);
	v->a[1266] = entry(2, false);
	v->a[1267] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1268] = shift_repeat(782);
	v->a[1269] = entry(2, false);
	v->a[1270] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1271] = shift_repeat(738);
	v->a[1272] = entry(2, false);
	v->a[1273] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1274] = shift_repeat(1703);
	v->a[1275] = entry(2, false);
	v->a[1276] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1277] = shift_repeat(1656);
	v->a[1278] = entry(2, false);
	v->a[1279] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	parse_actions_entries_64(v);
}

void	parse_actions_entries_64(t_parse_actions_entries_array *v)
{
	v->a[1280] = shift_repeat(1591);
	v->a[1281] = entry(2, false);
	v->a[1282] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1283] = shift_repeat(96);
	v->a[1284] = entry(2, false);
	v->a[1285] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1286] = shift_repeat(97);
	v->a[1287] = entry(1, false);
	v->a[1288] = reduce(sym_terminator, 1, 0, 0);
	v->a[1289] = entry(1, true);
	v->a[1290] = reduce(sym_terminator, 1, 0, 0);
	v->a[1291] = entry(1, false);
	v->a[1292] = shift(924);
	v->a[1293] = entry(1, false);
	v->a[1294] = shift(923);
	v->a[1295] = entry(1, true);
	v->a[1296] = shift(923);
	v->a[1297] = entry(1, false);
	v->a[1298] = shift(1320);
	v->a[1299] = entry(1, true);
	parse_actions_entries_65(v);
}

/* EOF parse_actions_entries_12.c */
