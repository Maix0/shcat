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
	v->a[1301] = reduce(aux_sym_command_repeat2, 2, 0, 32);
	v->a[1302] = shift_repeat(724);
	v->a[1303] = entry(2, false);
	v->a[1304] = reduce(aux_sym_command_repeat2, 2, 0, 32);
	v->a[1305] = shift_repeat(1665);
	v->a[1306] = entry(2, false);
	v->a[1307] = reduce(aux_sym_command_repeat2, 2, 0, 32);
	v->a[1308] = shift_repeat(1692);
	v->a[1309] = entry(2, false);
	v->a[1310] = reduce(aux_sym_command_repeat2, 2, 0, 32);
	v->a[1311] = shift_repeat(1598);
	v->a[1312] = entry(2, false);
	v->a[1313] = reduce(aux_sym_command_repeat2, 2, 0, 32);
	v->a[1314] = shift_repeat(90);
	v->a[1315] = entry(2, false);
	v->a[1316] = reduce(aux_sym_command_repeat2, 2, 0, 32);
	v->a[1317] = shift_repeat(108);
	v->a[1318] = entry(2, true);
	v->a[1319] = reduce(aux_sym_command_repeat2, 2, 0, 32);
	parse_actions_entries_66(v);
}

void	parse_actions_entries_66(t_parse_actions_entries_array *v)
{
	v->a[1320] = shift_repeat(923);
	v->a[1321] = entry(1, true);
	v->a[1322] = shift(1303);
	v->a[1323] = entry(1, true);
	v->a[1324] = shift(1312);
	v->a[1325] = entry(1, false);
	v->a[1326] = reduce(sym_terminator, 1, 0, 0);
	v->a[1327] = entry(1, true);
	v->a[1328] = reduce(sym_terminator, 1, 0, 0);
	v->a[1329] = entry(1, true);
	v->a[1330] = shift(1298);
	v->a[1331] = entry(2, false);
	v->a[1332] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1333] = shift_repeat(1291);
	v->a[1334] = entry(2, true);
	v->a[1335] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1336] = shift_repeat(1291);
	v->a[1337] = entry(1, false);
	v->a[1338] = shift(1291);
	v->a[1339] = entry(1, true);
	parse_actions_entries_67(v);
}

void	parse_actions_entries_67(t_parse_actions_entries_array *v)
{
	v->a[1340] = shift(1291);
	v->a[1341] = entry(1, true);
	v->a[1342] = shift(1273);
	v->a[1343] = entry(1, false);
	v->a[1344] = shift(1008);
	v->a[1345] = entry(1, false);
	v->a[1346] = shift(1046);
	v->a[1347] = entry(1, true);
	v->a[1348] = shift(1046);
	v->a[1349] = entry(1, true);
	v->a[1350] = shift(1313);
	v->a[1351] = entry(2, false);
	v->a[1352] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1353] = shift_repeat(802);
	v->a[1354] = entry(2, false);
	v->a[1355] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1356] = shift_repeat(767);
	v->a[1357] = entry(2, false);
	v->a[1358] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1359] = shift_repeat(1637);
	parse_actions_entries_68(v);
}

void	parse_actions_entries_68(t_parse_actions_entries_array *v)
{
	v->a[1360] = entry(2, false);
	v->a[1361] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1362] = shift_repeat(1701);
	v->a[1363] = entry(2, false);
	v->a[1364] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1365] = shift_repeat(1600);
	v->a[1366] = entry(2, false);
	v->a[1367] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1368] = shift_repeat(82);
	v->a[1369] = entry(2, false);
	v->a[1370] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1371] = shift_repeat(87);
	v->a[1372] = entry(2, true);
	v->a[1373] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[1374] = shift(2122);
	v->a[1375] = entry(1, false);
	v->a[1376] = reduce(aux_sym__terminated_statement, 2, 0, 8);
	v->a[1377] = entry(1, true);
	v->a[1378] = reduce(aux_sym__terminated_statement, 2, 0, 8);
	v->a[1379] = entry(1, false);
	parse_actions_entries_69(v);
}

void	parse_actions_entries_69(t_parse_actions_entries_array *v)
{
	v->a[1380] = shift(884);
	v->a[1381] = entry(1, false);
	v->a[1382] = shift(758);
	v->a[1383] = entry(1, false);
	v->a[1384] = shift(1677);
	v->a[1385] = entry(1, false);
	v->a[1386] = shift(1662);
	v->a[1387] = entry(1, false);
	v->a[1388] = shift(1528);
	v->a[1389] = entry(1, false);
	v->a[1390] = shift(39);
	v->a[1391] = entry(1, false);
	v->a[1392] = shift(101);
	v->a[1393] = entry(2, false);
	v->a[1394] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1395] = shift_repeat(884);
	v->a[1396] = entry(2, false);
	v->a[1397] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1398] = shift_repeat(758);
	v->a[1399] = entry(2, false);
	parse_actions_entries_70(v);
}

/* EOF parse_actions_entries_13.c */
