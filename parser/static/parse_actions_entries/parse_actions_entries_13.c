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
	v->a[1300] = shift_repeat(2988);
	v->a[1301] = entry(2, false);
	v->a[1302] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1303] = shift_repeat(744);
	v->a[1304] = entry(2, false);
	v->a[1305] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1306] = shift_repeat(3315);
	v->a[1307] = entry(2, false);
	v->a[1308] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1309] = shift_repeat(3111);
	v->a[1310] = entry(2, false);
	v->a[1311] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1312] = shift_repeat(142);
	v->a[1313] = entry(2, false);
	v->a[1314] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1315] = shift_repeat(48);
	v->a[1316] = entry(2, false);
	v->a[1317] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1318] = shift_repeat(49);
	v->a[1319] = entry(2, true);
	parse_actions_entries_66(v);
}

void	parse_actions_entries_66(t_parse_actions_entries_array *v)
{
	v->a[1320] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1321] = shift_repeat(577);
	v->a[1322] = entry(2, true);
	v->a[1323] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1324] = shift_repeat(4071);
	v->a[1325] = entry(1, false);
	v->a[1326] = shift(631);
	v->a[1327] = entry(1, false);
	v->a[1328] = shift(629);
	v->a[1329] = entry(1, true);
	v->a[1330] = shift(629);
	v->a[1331] = entry(1, false);
	v->a[1332] = shift(614);
	v->a[1333] = entry(1, false);
	v->a[1334] = shift(613);
	v->a[1335] = entry(1, true);
	v->a[1336] = shift(613);
	v->a[1337] = entry(1, false);
	v->a[1338] = reduce(sym_command, 3, 0, 31);
	v->a[1339] = entry(1, true);
	parse_actions_entries_67(v);
}

void	parse_actions_entries_67(t_parse_actions_entries_array *v)
{
	v->a[1340] = reduce(sym_command, 3, 0, 31);
	v->a[1341] = entry(1, false);
	v->a[1342] = shift(304);
	v->a[1343] = entry(2, false);
	v->a[1344] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[1345] = shift_repeat(656);
	v->a[1346] = entry(2, false);
	v->a[1347] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[1348] = shift_repeat(1768);
	v->a[1349] = entry(2, false);
	v->a[1350] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[1351] = shift_repeat(3175);
	v->a[1352] = entry(2, false);
	v->a[1353] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[1354] = shift_repeat(753);
	v->a[1355] = entry(2, false);
	v->a[1356] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[1357] = shift_repeat(3136);
	v->a[1358] = entry(2, false);
	v->a[1359] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	parse_actions_entries_68(v);
}

void	parse_actions_entries_68(t_parse_actions_entries_array *v)
{
	v->a[1360] = shift_repeat(868);
	v->a[1361] = entry(2, false);
	v->a[1362] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[1363] = shift_repeat(3308);
	v->a[1364] = entry(2, false);
	v->a[1365] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[1366] = shift_repeat(3128);
	v->a[1367] = entry(2, false);
	v->a[1368] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[1369] = shift_repeat(99);
	v->a[1370] = entry(2, false);
	v->a[1371] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[1372] = shift_repeat(100);
	v->a[1373] = entry(2, false);
	v->a[1374] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[1375] = shift_repeat(103);
	v->a[1376] = entry(2, false);
	v->a[1377] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[1378] = shift_repeat(304);
	v->a[1379] = entry(2, true);
	parse_actions_entries_69(v);
}

void	parse_actions_entries_69(t_parse_actions_entries_array *v)
{
	v->a[1380] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[1381] = shift_repeat(3896);
	v->a[1382] = entry(2, true);
	v->a[1383] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[1384] = shift_repeat(656);
	v->a[1385] = entry(2, true);
	v->a[1386] = reduce(aux_sym_declaration_command_repeat1, 2, 0, 0);
	v->a[1387] = shift_repeat(4050);
	v->a[1388] = entry(1, false);
	v->a[1389] = reduce(sym_file_redirect, 2, 0, 5);
	v->a[1390] = entry(1, true);
	v->a[1391] = reduce(sym_file_redirect, 2, 0, 5);
	v->a[1392] = entry(1, false);
	v->a[1393] = shift(742);
	v->a[1394] = entry(1, false);
	v->a[1395] = shift(1771);
	v->a[1396] = entry(1, false);
	v->a[1397] = shift(3168);
	v->a[1398] = entry(1, false);
	v->a[1399] = shift(695);
	parse_actions_entries_70(v);
}

/* EOF parse_actions_entries_13.c */
