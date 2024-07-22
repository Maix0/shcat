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
	v->a[1300] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1301] = shift_repeat(1267);
	v->a[1302] = entry(2, true);
	v->a[1303] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1304] = shift_repeat(1267);
	v->a[1305] = entry(1, true);
	v->a[1306] = shift(1264);
	v->a[1307] = entry(1, true);
	v->a[1308] = shift(1269);
	v->a[1309] = entry(1, true);
	v->a[1310] = shift(1292);
	v->a[1311] = entry(2, false);
	v->a[1312] = reduce(sym_command_name, 1, 0, 0);
	v->a[1313] = shift(2045);
	v->a[1314] = entry(1, false);
	v->a[1315] = shift(931);
	v->a[1316] = entry(1, false);
	v->a[1317] = shift(930);
	v->a[1318] = entry(1, true);
	v->a[1319] = shift(930);
	parse_actions_entries_66(v);
}

void	parse_actions_entries_66(t_parse_actions_entries_array *v)
{
	v->a[1320] = entry(1, true);
	v->a[1321] = shift(1341);
	v->a[1322] = entry(2, false);
	v->a[1323] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1324] = shift_repeat(1252);
	v->a[1325] = entry(2, true);
	v->a[1326] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1327] = shift_repeat(1252);
	v->a[1328] = entry(1, false);
	v->a[1329] = shift(148);
	v->a[1330] = entry(1, false);
	v->a[1331] = reduce(sym__heredoc_pipeline, 2, 0, 0);
	v->a[1332] = entry(2, true);
	v->a[1333] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[1334] = shift(2122);
	v->a[1335] = entry(1, false);
	v->a[1336] = reduce(sym__heredoc_expression, 2, 0, 54);
	v->a[1337] = entry(1, false);
	v->a[1338] = shift(1275);
	v->a[1339] = entry(1, true);
	parse_actions_entries_67(v);
}

void	parse_actions_entries_67(t_parse_actions_entries_array *v)
{
	v->a[1340] = shift(1275);
	v->a[1341] = entry(2, false);
	v->a[1342] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1343] = shift_repeat(873);
	v->a[1344] = entry(2, false);
	v->a[1345] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1346] = shift_repeat(728);
	v->a[1347] = entry(2, false);
	v->a[1348] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1349] = shift_repeat(1683);
	v->a[1350] = entry(2, false);
	v->a[1351] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1352] = shift_repeat(1616);
	v->a[1353] = entry(2, false);
	v->a[1354] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1355] = shift_repeat(1630);
	v->a[1356] = entry(2, false);
	v->a[1357] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1358] = shift_repeat(103);
	v->a[1359] = entry(2, false);
	parse_actions_entries_68(v);
}

void	parse_actions_entries_68(t_parse_actions_entries_array *v)
{
	v->a[1360] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1361] = shift_repeat(101);
	v->a[1362] = entry(1, false);
	v->a[1363] = shift(873);
	v->a[1364] = entry(1, false);
	v->a[1365] = shift(728);
	v->a[1366] = entry(1, false);
	v->a[1367] = shift(1683);
	v->a[1368] = entry(1, false);
	v->a[1369] = shift(1616);
	v->a[1370] = entry(1, false);
	v->a[1371] = shift(1630);
	v->a[1372] = entry(1, false);
	v->a[1373] = shift(103);
	v->a[1374] = entry(1, false);
	v->a[1375] = shift(101);
	v->a[1376] = entry(1, true);
	v->a[1377] = shift(1356);
	v->a[1378] = entry(2, false);
	v->a[1379] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	parse_actions_entries_69(v);
}

void	parse_actions_entries_69(t_parse_actions_entries_array *v)
{
	v->a[1380] = shift_repeat(1275);
	v->a[1381] = entry(2, true);
	v->a[1382] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1383] = shift_repeat(1275);
	v->a[1384] = entry(2, false);
	v->a[1385] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1386] = shift_repeat(1258);
	v->a[1387] = entry(2, true);
	v->a[1388] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1389] = shift_repeat(1258);
	v->a[1390] = entry(1, true);
	v->a[1391] = shift(1242);
	v->a[1392] = entry(1, false);
	v->a[1393] = shift(1258);
	v->a[1394] = entry(1, true);
	v->a[1395] = shift(1273);
	v->a[1396] = entry(1, false);
	v->a[1397] = shift(1252);
	v->a[1398] = entry(1, true);
	v->a[1399] = shift(1252);
	parse_actions_entries_70(v);
}

/* EOF parse_actions_entries_13.c */
