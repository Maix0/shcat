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
	v->a[1300] = shift(1525);
	v->a[1301] = entry(1, false);
	v->a[1302] = reduce(aux_sym_for_statement_repeat1, 1, 0, 0);
	v->a[1303] = entry(1, true);
	v->a[1304] = reduce(aux_sym_for_statement_repeat1, 1, 0, 0);
	v->a[1305] = entry(2, false);
	v->a[1306] = reduce(sym_command_name, 1, 0, 0);
	v->a[1307] = shift(2272);
	v->a[1308] = entry(2, false);
	v->a[1309] = reduce(sym_command_name, 1, 0, 0);
	v->a[1310] = shift(2159);
	v->a[1311] = entry(1, false);
	v->a[1312] = shift(1511);
	v->a[1313] = entry(1, true);
	v->a[1314] = shift(1511);
	v->a[1315] = entry(1, true);
	v->a[1316] = shift(1524);
	v->a[1317] = entry(2, false);
	v->a[1318] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	v->a[1319] = shift_repeat(772);
	parse_actions_entries_66(v);
}

void	parse_actions_entries_66(t_parse_actions_entries_array *v)
{
	v->a[1320] = entry(2, false);
	v->a[1321] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1322] = shift_repeat(1471);
	v->a[1323] = entry(2, true);
	v->a[1324] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1325] = shift_repeat(1471);
	v->a[1326] = entry(1, true);
	v->a[1327] = shift(1529);
	v->a[1328] = entry(1, true);
	v->a[1329] = shift(1513);
	v->a[1330] = entry(1, false);
	v->a[1331] = shift(1447);
	v->a[1332] = entry(1, true);
	v->a[1333] = shift(1447);
	v->a[1334] = entry(1, true);
	v->a[1335] = shift(1504);
	v->a[1336] = entry(2, false);
	v->a[1337] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1338] = shift_repeat(1464);
	v->a[1339] = entry(2, true);
	parse_actions_entries_67(v);
}

void	parse_actions_entries_67(t_parse_actions_entries_array *v)
{
	v->a[1340] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1341] = shift_repeat(1464);
	v->a[1342] = entry(1, false);
	v->a[1343] = shift(1017);
	v->a[1344] = entry(1, false);
	v->a[1345] = shift(1020);
	v->a[1346] = entry(1, true);
	v->a[1347] = shift(1020);
	v->a[1348] = entry(2, false);
	v->a[1349] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1350] = shift_repeat(1515);
	v->a[1351] = entry(2, true);
	v->a[1352] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1353] = shift_repeat(1515);
	v->a[1354] = entry(1, false);
	v->a[1355] = shift(884);
	v->a[1356] = entry(2, false);
	v->a[1357] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1358] = shift_repeat(828);
	v->a[1359] = entry(2, false);
	parse_actions_entries_68(v);
}

void	parse_actions_entries_68(t_parse_actions_entries_array *v)
{
	v->a[1360] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1361] = shift_repeat(885);
	v->a[1362] = entry(2, false);
	v->a[1363] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1364] = shift_repeat(1902);
	v->a[1365] = entry(2, false);
	v->a[1366] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1367] = shift_repeat(1878);
	v->a[1368] = entry(2, false);
	v->a[1369] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1370] = shift_repeat(1781);
	v->a[1371] = entry(2, false);
	v->a[1372] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1373] = shift_repeat(99);
	v->a[1374] = entry(2, false);
	v->a[1375] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1376] = shift_repeat(98);
	v->a[1377] = entry(1, false);
	v->a[1378] = shift(1090);
	v->a[1379] = entry(1, false);
	parse_actions_entries_69(v);
}

void	parse_actions_entries_69(t_parse_actions_entries_array *v)
{
	v->a[1380] = shift(1092);
	v->a[1381] = entry(1, true);
	v->a[1382] = shift(1092);
	v->a[1383] = entry(1, false);
	v->a[1384] = shift(1498);
	v->a[1385] = entry(1, true);
	v->a[1386] = shift(1417);
	v->a[1387] = entry(1, false);
	v->a[1388] = shift(1225);
	v->a[1389] = entry(1, false);
	v->a[1390] = shift(1230);
	v->a[1391] = entry(1, true);
	v->a[1392] = shift(1230);
	v->a[1393] = entry(1, false);
	v->a[1394] = shift(1515);
	v->a[1395] = entry(1, true);
	v->a[1396] = shift(1458);
	v->a[1397] = entry(1, true);
	v->a[1398] = shift(1498);
	v->a[1399] = entry(1, false);
	parse_actions_entries_70(v);
}

/* EOF parse_actions_entries_13.c */
