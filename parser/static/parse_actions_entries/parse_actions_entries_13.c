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
	v->a[1300] = reduce(sym_command_substitution, 3, 0, 0);
	v->a[1301] = entry(1, true);
	v->a[1302] = reduce(sym_command_substitution, 3, 0, 0);
	v->a[1303] = entry(2, false);
	v->a[1304] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1305] = shift_repeat(1494);
	v->a[1306] = entry(2, true);
	v->a[1307] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1308] = shift_repeat(1494);
	v->a[1309] = entry(1, false);
	v->a[1310] = reduce(sym_command_substitution, 3, 0, 20);
	v->a[1311] = entry(1, true);
	v->a[1312] = reduce(sym_command_substitution, 3, 0, 20);
	v->a[1313] = entry(1, false);
	v->a[1314] = reduce(sym_expansion, 3, 0, 19);
	v->a[1315] = entry(1, true);
	v->a[1316] = reduce(sym_expansion, 3, 0, 19);
	v->a[1317] = entry(1, false);
	v->a[1318] = reduce(sym_string, 3, 0, 0);
	v->a[1319] = entry(1, true);
	parse_actions_entries_66(v);
}

void	parse_actions_entries_66(t_parse_actions_entries_array *v)
{
	v->a[1320] = reduce(sym_string, 3, 0, 0);
	v->a[1321] = entry(1, true);
	v->a[1322] = shift(1432);
	v->a[1323] = entry(1, false);
	v->a[1324] = shift(1454);
	v->a[1325] = entry(1, true);
	v->a[1326] = shift(1454);
	v->a[1327] = entry(1, false);
	v->a[1328] = reduce(sym_arithmetic_expansion, 3, 0, 0);
	v->a[1329] = entry(1, true);
	v->a[1330] = reduce(sym_arithmetic_expansion, 3, 0, 0);
	v->a[1331] = entry(2, false);
	v->a[1332] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1333] = shift_repeat(1454);
	v->a[1334] = entry(2, true);
	v->a[1335] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1336] = shift_repeat(1454);
	v->a[1337] = entry(2, false);
	v->a[1338] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1339] = shift_repeat(784);
	parse_actions_entries_67(v);
}

void	parse_actions_entries_67(t_parse_actions_entries_array *v)
{
	v->a[1340] = entry(2, false);
	v->a[1341] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1342] = shift_repeat(834);
	v->a[1343] = entry(2, false);
	v->a[1344] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1345] = shift_repeat(1822);
	v->a[1346] = entry(2, false);
	v->a[1347] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1348] = shift_repeat(1796);
	v->a[1349] = entry(2, false);
	v->a[1350] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1351] = shift_repeat(833);
	v->a[1352] = entry(2, false);
	v->a[1353] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1354] = shift_repeat(1987);
	v->a[1355] = entry(2, false);
	v->a[1356] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1357] = shift_repeat(1688);
	v->a[1358] = entry(2, false);
	v->a[1359] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	parse_actions_entries_68(v);
}

void	parse_actions_entries_68(t_parse_actions_entries_array *v)
{
	v->a[1360] = shift_repeat(100);
	v->a[1361] = entry(2, false);
	v->a[1362] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1363] = shift_repeat(96);
	v->a[1364] = entry(2, false);
	v->a[1365] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1366] = shift_repeat(1431);
	v->a[1367] = entry(2, true);
	v->a[1368] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1369] = shift_repeat(1431);
	v->a[1370] = entry(1, true);
	v->a[1371] = shift(1439);
	v->a[1372] = entry(2, false);
	v->a[1373] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1374] = shift_repeat(1455);
	v->a[1375] = entry(2, true);
	v->a[1376] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1377] = shift_repeat(1455);
	v->a[1378] = entry(1, true);
	v->a[1379] = shift(1440);
	parse_actions_entries_69(v);
}

void	parse_actions_entries_69(t_parse_actions_entries_array *v)
{
	v->a[1380] = entry(1, true);
	v->a[1381] = shift(1411);
	v->a[1382] = entry(2, false);
	v->a[1383] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1384] = shift_repeat(805);
	v->a[1385] = entry(1, false);
	v->a[1386] = shift(805);
	v->a[1387] = entry(2, false);
	v->a[1388] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1389] = shift_repeat(1451);
	v->a[1390] = entry(2, true);
	v->a[1391] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1392] = shift_repeat(1451);
	v->a[1393] = entry(2, false);
	v->a[1394] = reduce(sym_command_name, 1, 0, 0);
	v->a[1395] = shift(2198);
	v->a[1396] = entry(1, true);
	v->a[1397] = shift(1458);
	v->a[1398] = entry(1, false);
	v->a[1399] = reduce(sym_arithmetic_binary_expression, 3, 0, 28);
	parse_actions_entries_70(v);
}

/* EOF parse_actions_entries_13.c */
