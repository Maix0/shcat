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
	v->a[1201] = shift(1382);
	v->a[1202] = entry(1, true);
	v->a[1203] = shift(1455);
	v->a[1204] = entry(1, true);
	v->a[1205] = shift(1382);
	v->a[1206] = entry(1, true);
	v->a[1207] = shift(705);
	v->a[1208] = entry(1, false);
	v->a[1209] = shift(921);
	v->a[1210] = entry(1, false);
	v->a[1211] = shift(914);
	v->a[1212] = entry(1, true);
	v->a[1213] = shift(914);
	v->a[1214] = entry(1, true);
	v->a[1215] = reduce(sym__statements, 2, 0, 8);
	v->a[1216] = entry(1, false);
	v->a[1217] = shift(1418);
	v->a[1218] = entry(1, false);
	v->a[1219] = shift(1066);
	return (parse_actions_entries_61(v));
}

void	parse_actions_entries_61(t_parse_actions_entries_array *v)
{
	v->a[1220] = entry(1, false);
	v->a[1221] = shift(1734);
	v->a[1222] = entry(2, false);
	v->a[1223] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1224] = shift_repeat(684);
	v->a[1225] = entry(2, false);
	v->a[1226] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1227] = shift_repeat(646);
	v->a[1228] = entry(2, false);
	v->a[1229] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1230] = shift_repeat(1219);
	v->a[1231] = entry(2, false);
	v->a[1232] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1233] = shift_repeat(1124);
	v->a[1234] = entry(2, false);
	v->a[1235] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1236] = shift_repeat(1127);
	v->a[1237] = entry(2, false);
	v->a[1238] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1239] = shift_repeat(62);
	return (parse_actions_entries_62(v));
}

void	parse_actions_entries_62(t_parse_actions_entries_array *v)
{
	v->a[1240] = entry(2, false);
	v->a[1241] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1242] = shift_repeat(47);
	v->a[1243] = entry(1, false);
	v->a[1244] = shift(1256);
	v->a[1245] = entry(1, false);
	v->a[1246] = shift(684);
	v->a[1247] = entry(1, false);
	v->a[1248] = reduce(aux_sym_command_repeat1, 1, 0, 4);
	v->a[1249] = entry(1, false);
	v->a[1250] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1251] = entry(2, false);
	v->a[1252] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1253] = shift(1307);
	v->a[1254] = entry(2, false);
	v->a[1255] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1256] = reduce(aux_sym_command_repeat1, 1, 0, 4);
	v->a[1257] = entry(1, true);
	v->a[1258] = reduce(aux_sym_command_repeat1, 1, 0, 4);
	v->a[1259] = entry(2, false);
	return (parse_actions_entries_63(v));
}

void	parse_actions_entries_63(t_parse_actions_entries_array *v)
{
	v->a[1260] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1261] = shift(304);
	v->a[1262] = entry(2, false);
	v->a[1263] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1264] = shift(458);
	v->a[1265] = entry(2, false);
	v->a[1266] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1267] = shift(908);
	v->a[1268] = entry(2, false);
	v->a[1269] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1270] = shift(1459);
	v->a[1271] = entry(2, false);
	v->a[1272] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1273] = shift(691);
	v->a[1274] = entry(1, true);
	v->a[1275] = reduce(sym_negated_command, 2, 0, 0);
	v->a[1276] = entry(1, false);
	v->a[1277] = reduce(sym_negated_command, 2, 0, 0);
	v->a[1278] = entry(1, true);
	v->a[1279] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	return (parse_actions_entries_64(v));
}

void	parse_actions_entries_64(t_parse_actions_entries_array *v)
{
	v->a[1280] = entry(2, false);
	v->a[1281] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1282] = shift(342);
	v->a[1283] = entry(2, false);
	v->a[1284] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1285] = shift(316);
	v->a[1286] = entry(2, false);
	v->a[1287] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1288] = shift(1451);
	v->a[1289] = entry(2, false);
	v->a[1290] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1291] = shift(634);
	v->a[1292] = entry(2, false);
	v->a[1293] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1294] = shift(395);
	v->a[1295] = entry(1, false);
	v->a[1296] = shift(1738);
	v->a[1297] = entry(1, false);
	v->a[1298] = shift(734);
	v->a[1299] = entry(1, true);
	return (parse_actions_entries_65(v));
}

/* EOF parse_actions_entries_12.c */
