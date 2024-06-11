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
	v->a[1300] = entry(1, true);
	v->a[1301] = shift(362);
	v->a[1302] = entry(1, true);
	v->a[1303] = shift(1128);
	v->a[1304] = entry(1, true);
	v->a[1305] = shift(1129);
	v->a[1306] = entry(1, false);
	v->a[1307] = shift(1138);
	v->a[1308] = entry(1, false);
	v->a[1309] = shift(1131);
	v->a[1310] = entry(1, false);
	v->a[1311] = shift(1132);
	v->a[1312] = entry(1, true);
	v->a[1313] = shift(1133);
	v->a[1314] = entry(1, false);
	v->a[1315] = shift(1134);
	v->a[1316] = entry(1, false);
	v->a[1317] = shift(1135);
	v->a[1318] = entry(1, true);
	v->a[1319] = shift(1136);
	parse_actions_entries_66(v);
}

void	parse_actions_entries_66(t_parse_actions_entries_array *v)
{
	v->a[1320] = entry(1, true);
	v->a[1321] = shift(1131);
	v->a[1322] = entry(1, false);
	v->a[1323] = shift(1115);
	v->a[1324] = entry(1, false);
	v->a[1325] = shift(1141);
	v->a[1326] = entry(1, true);
	v->a[1327] = shift(1147);
	v->a[1328] = entry(1, true);
	v->a[1329] = shift(567);
	v->a[1330] = entry(1, true);
	v->a[1331] = shift(1716);
	v->a[1332] = entry(1, true);
	v->a[1333] = shift(2135);
	v->a[1334] = entry(1, true);
	v->a[1335] = shift(1397);
	v->a[1336] = entry(1, true);
	v->a[1337] = shift(642);
	v->a[1338] = entry(1, false);
	v->a[1339] = shift(1095);
	parse_actions_entries_67(v);
}

void	parse_actions_entries_67(t_parse_actions_entries_array *v)
{
	v->a[1340] = entry(1, false);
	v->a[1341] = shift(1098);
	v->a[1342] = entry(1, true);
	v->a[1343] = shift(1098);
	v->a[1344] = entry(1, false);
	v->a[1345] = shift(1645);
	v->a[1346] = entry(1, true);
	v->a[1347] = shift(1657);
	v->a[1348] = entry(1, true);
	v->a[1349] = shift(1175);
	v->a[1350] = entry(1, true);
	v->a[1351] = shift(1121);
	v->a[1352] = entry(1, true);
	v->a[1353] = shift(1845);
	v->a[1354] = entry(1, true);
	v->a[1355] = shift(582);
	v->a[1356] = entry(1, true);
	v->a[1357] = shift(1712);
	v->a[1358] = entry(2, false);
	v->a[1359] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	parse_actions_entries_68(v);
}

void	parse_actions_entries_68(t_parse_actions_entries_array *v)
{
	v->a[1360] = shift_repeat(951);
	v->a[1361] = entry(2, false);
	v->a[1362] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	v->a[1363] = shift_repeat(1060);
	v->a[1364] = entry(2, false);
	v->a[1365] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	v->a[1366] = shift_repeat(2063);
	v->a[1367] = entry(2, false);
	v->a[1368] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	v->a[1369] = shift_repeat(2062);
	v->a[1370] = entry(2, false);
	v->a[1371] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	v->a[1372] = shift_repeat(1919);
	v->a[1373] = entry(2, false);
	v->a[1374] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	v->a[1375] = shift_repeat(104);
	v->a[1376] = entry(2, false);
	v->a[1377] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	v->a[1378] = shift_repeat(105);
	v->a[1379] = entry(2, true);
	parse_actions_entries_69(v);
}

void	parse_actions_entries_69(t_parse_actions_entries_array *v)
{
	v->a[1380] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	v->a[1381] = shift_repeat(1109);
	v->a[1382] = entry(1, true);
	v->a[1383] = shift(340);
	v->a[1384] = entry(1, false);
	v->a[1385] = shift(941);
	v->a[1386] = entry(1, false);
	v->a[1387] = shift(1279);
	v->a[1388] = entry(1, false);
	v->a[1389] = shift(1278);
	v->a[1390] = entry(1, true);
	v->a[1391] = shift(1278);
	v->a[1392] = entry(2, false);
	v->a[1393] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1394] = shift_repeat(950);
	v->a[1395] = entry(2, false);
	v->a[1396] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1397] = shift_repeat(1066);
	v->a[1398] = entry(2, false);
	v->a[1399] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	parse_actions_entries_70(v);
}

/* EOF parse_actions_entries_13.c */
