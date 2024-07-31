/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_actions_entries_13.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_actions_entries.h"

void	parse_actions_entries_65(t_parse_actions_entries_array *v)
{
	v->a[1300] = entry(2, false);
	v->a[1301] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1302] = shift(538);
	v->a[1303] = entry(2, false);
	v->a[1304] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1305] = shift(1517);
	v->a[1306] = entry(1, false);
	v->a[1307] = reduce(sym_negated_command, 2, 0, 0);
	v->a[1308] = entry(1, true);
	v->a[1309] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[1310] = entry(2, false);
	v->a[1311] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1312] = shift(1209);
	v->a[1313] = entry(2, false);
	v->a[1314] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1315] = shift(659);
	v->a[1316] = entry(1, true);
	v->a[1317] = shift(1118);
	v->a[1318] = entry(2, false);
	v->a[1319] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	parse_actions_entries_66(v);
}

void	parse_actions_entries_66(t_parse_actions_entries_array *v)
{
	v->a[1320] = shift(706);
	v->a[1321] = entry(1, true);
	v->a[1322] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1323] = entry(2, false);
	v->a[1324] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1325] = shift(675);
	v->a[1326] = entry(2, false);
	v->a[1327] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1328] = shift(1588);
	v->a[1329] = entry(1, true);
	v->a[1330] = shift(1120);
	v->a[1331] = entry(1, false);
	v->a[1332] = shift(726);
	v->a[1333] = entry(1, false);
	v->a[1334] = shift(1520);
	v->a[1335] = entry(1, false);
	v->a[1336] = shift(1024);
	v->a[1337] = entry(1, false);
	v->a[1338] = shift(1042);
	v->a[1339] = entry(1, false);
	parse_actions_entries_67(v);
}

void	parse_actions_entries_67(t_parse_actions_entries_array *v)
{
	v->a[1340] = shift(1396);
	v->a[1341] = entry(1, false);
	v->a[1342] = shift(775);
	v->a[1343] = entry(1, false);
	v->a[1344] = shift(1447);
	v->a[1345] = entry(1, false);
	v->a[1346] = shift(1425);
	v->a[1347] = entry(1, false);
	v->a[1348] = shift(1421);
	v->a[1349] = entry(1, false);
	v->a[1350] = shift(66);
	v->a[1351] = entry(1, false);
	v->a[1352] = shift(80);
	v->a[1353] = entry(1, true);
	v->a[1354] = shift(1468);
	v->a[1355] = entry(2, false);
	v->a[1356] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1357] = shift(795);
	v->a[1358] = entry(1, false);
	v->a[1359] = shift(893);
	parse_actions_entries_68(v);
}

void	parse_actions_entries_68(t_parse_actions_entries_array *v)
{
	v->a[1360] = entry(1, false);
	v->a[1361] = shift(894);
	v->a[1362] = entry(1, true);
	v->a[1363] = shift(894);
	v->a[1364] = entry(2, false);
	v->a[1365] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1366] = shift(1549);
	v->a[1367] = entry(1, true);
	v->a[1368] = reduce(sym__statements, 3, 0, 31);
	v->a[1369] = entry(2, false);
	v->a[1370] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1371] = shift(483);
	v->a[1372] = entry(2, false);
	v->a[1373] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1374] = shift(702);
	v->a[1375] = entry(2, false);
	v->a[1376] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1377] = shift(503);
	v->a[1378] = entry(1, false);
	v->a[1379] = shift(1721);
	parse_actions_entries_69(v);
}

void	parse_actions_entries_69(t_parse_actions_entries_array *v)
{
	v->a[1380] = entry(1, false);
	v->a[1381] = shift(1094);
	v->a[1382] = entry(1, true);
	v->a[1383] = shift(1094);
	v->a[1384] = entry(1, true);
	v->a[1385] = reduce(sym_negated_command, 2, 0, 0);
	v->a[1386] = entry(2, false);
	v->a[1387] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1388] = shift_repeat(726);
	v->a[1389] = entry(2, false);
	v->a[1390] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1391] = shift_repeat(779);
	v->a[1392] = entry(2, false);
	v->a[1393] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1394] = shift_repeat(1457);
	v->a[1395] = entry(2, false);
	v->a[1396] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1397] = shift_repeat(1400);
	v->a[1398] = entry(2, false);
	v->a[1399] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	parse_actions_entries_70(v);
}

/* EOF parse_actions_entries_13.c */
