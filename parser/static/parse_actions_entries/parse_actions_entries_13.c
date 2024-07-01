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
	v->a[1300] = shift(1320);
	v->a[1301] = entry(1, true);
	v->a[1302] = shift(1279);
	v->a[1303] = entry(1, false);
	v->a[1304] = shift(1014);
	v->a[1305] = entry(1, false);
	v->a[1306] = shift(1015);
	v->a[1307] = entry(1, true);
	v->a[1308] = shift(1015);
	v->a[1309] = entry(2, false);
	v->a[1310] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1311] = shift_repeat(1301);
	v->a[1312] = entry(2, true);
	v->a[1313] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1314] = shift_repeat(1301);
	v->a[1315] = entry(1, false);
	v->a[1316] = shift(1301);
	v->a[1317] = entry(1, true);
	v->a[1318] = shift(1301);
	v->a[1319] = entry(1, false);
	parse_actions_entries_66(v);
}

void	parse_actions_entries_66(t_parse_actions_entries_array *v)
{
	v->a[1320] = shift(842);
	v->a[1321] = entry(1, true);
	v->a[1322] = shift(1342);
	v->a[1323] = entry(1, false);
	v->a[1324] = shift(1337);
	v->a[1325] = entry(1, true);
	v->a[1326] = shift(1315);
	v->a[1327] = entry(1, true);
	v->a[1328] = shift(1274);
	v->a[1329] = entry(1, true);
	v->a[1330] = shift(1337);
	v->a[1331] = entry(2, false);
	v->a[1332] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1333] = shift_repeat(1337);
	v->a[1334] = entry(2, true);
	v->a[1335] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1336] = shift_repeat(1337);
	v->a[1337] = entry(2, false);
	v->a[1338] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1339] = shift_repeat(842);
	parse_actions_entries_67(v);
}

void	parse_actions_entries_67(t_parse_actions_entries_array *v)
{
	v->a[1340] = entry(1, true);
	v->a[1341] = shift(1343);
	v->a[1342] = entry(2, false);
	v->a[1343] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1344] = shift_repeat(1320);
	v->a[1345] = entry(2, true);
	v->a[1346] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1347] = shift_repeat(1320);
	v->a[1348] = entry(2, false);
	v->a[1349] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[1350] = shift_repeat(779);
	v->a[1351] = entry(2, false);
	v->a[1352] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[1353] = shift_repeat(708);
	v->a[1354] = entry(2, false);
	v->a[1355] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[1356] = shift_repeat(1697);
	v->a[1357] = entry(2, false);
	v->a[1358] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[1359] = shift_repeat(1671);
	parse_actions_entries_68(v);
}

void	parse_actions_entries_68(t_parse_actions_entries_array *v)
{
	v->a[1360] = entry(2, false);
	v->a[1361] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[1362] = shift_repeat(1595);
	v->a[1363] = entry(2, false);
	v->a[1364] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[1365] = shift_repeat(100);
	v->a[1366] = entry(2, false);
	v->a[1367] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[1368] = shift_repeat(102);
	v->a[1369] = entry(2, true);
	v->a[1370] = reduce(aux_sym_command_repeat2, 2, 0, 30);
	v->a[1371] = shift_repeat(910);
	v->a[1372] = entry(2, false);
	v->a[1373] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1374] = shift_repeat(852);
	v->a[1375] = entry(2, false);
	v->a[1376] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1377] = shift_repeat(773);
	v->a[1378] = entry(2, false);
	v->a[1379] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	parse_actions_entries_69(v);
}

void	parse_actions_entries_69(t_parse_actions_entries_array *v)
{
	v->a[1380] = shift_repeat(1670);
	v->a[1381] = entry(2, false);
	v->a[1382] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1383] = shift_repeat(1664);
	v->a[1384] = entry(2, false);
	v->a[1385] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1386] = shift_repeat(1540);
	v->a[1387] = entry(2, false);
	v->a[1388] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1389] = shift_repeat(45);
	v->a[1390] = entry(2, false);
	v->a[1391] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1392] = shift_repeat(44);
	v->a[1393] = entry(2, true);
	v->a[1394] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[1395] = shift(2103);
	v->a[1396] = entry(1, false);
	v->a[1397] = shift(136);
	v->a[1398] = entry(1, false);
	v->a[1399] = reduce(sym__heredoc_expression, 2, 0, 48);
	parse_actions_entries_70(v);
}

/* EOF parse_actions_entries_13.c */
