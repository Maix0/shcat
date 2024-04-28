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
	v->a[1300] = entry(1, false);
	v->a[1301] = reduce(sym_brace_expression, 5, 0, 0);
	v->a[1302] = entry(1, true);
	v->a[1303] = reduce(sym_brace_expression, 5, 0, 0);
	v->a[1304] = entry(1, false);
	v->a[1305] = reduce(sym_command_substitution, 3, 0, 35);
	v->a[1306] = entry(1, true);
	v->a[1307] = reduce(sym_command_substitution, 3, 0, 35);
	v->a[1308] = entry(1, false);
	v->a[1309] = reduce(sym_command_substitution, 3, 0, 0);
	v->a[1310] = entry(1, true);
	v->a[1311] = reduce(sym_command_substitution, 3, 0, 0);
	v->a[1312] = entry(1, false);
	v->a[1313] = reduce(sym_expansion, 3, 0, 31);
	v->a[1314] = entry(1, true);
	v->a[1315] = reduce(sym_expansion, 3, 0, 31);
	v->a[1316] = entry(1, false);
	v->a[1317] = reduce(sym_number, 1, 0, 0);
	v->a[1318] = entry(1, true);
	v->a[1319] = reduce(sym_number, 1, 0, 0);
	parse_actions_entries_66(v);
}

void	parse_actions_entries_66(t_parse_actions_entries_array *v)
{
	v->a[1320] = entry(1, false);
	v->a[1321] = reduce(sym_string, 2, 0, 0);
	v->a[1322] = entry(1, true);
	v->a[1323] = reduce(sym_string, 2, 0, 0);
	v->a[1324] = entry(1, false);
	v->a[1325] = reduce(aux_sym_concatenation_repeat1, 2, 0, 10);
	v->a[1326] = entry(1, true);
	v->a[1327] = reduce(aux_sym_concatenation_repeat1, 2, 0, 10);
	v->a[1328] = entry(1, false);
	v->a[1329] = reduce(sym_number, 2, 0, 0);
	v->a[1330] = entry(1, true);
	v->a[1331] = reduce(sym_number, 2, 0, 0);
	v->a[1332] = entry(1, false);
	v->a[1333] = reduce(sym_arithmetic_expansion, 3, 0, 0);
	v->a[1334] = entry(1, true);
	v->a[1335] = reduce(sym_arithmetic_expansion, 3, 0, 0);
	v->a[1336] = entry(1, false);
	v->a[1337] = reduce(sym_expansion, 2, 0, 0);
	v->a[1338] = entry(1, true);
	v->a[1339] = reduce(sym_expansion, 2, 0, 0);
	parse_actions_entries_67(v);
}

void	parse_actions_entries_67(t_parse_actions_entries_array *v)
{
	v->a[1340] = entry(1, false);
	v->a[1341] = reduce(sym_string, 3, 0, 0);
	v->a[1342] = entry(1, true);
	v->a[1343] = reduce(sym_string, 3, 0, 0);
	v->a[1344] = entry(1, false);
	v->a[1345] = reduce(sym_simple_expansion, 2, 0, 11);
	v->a[1346] = entry(1, true);
	v->a[1347] = reduce(sym_simple_expansion, 2, 0, 11);
	v->a[1348] = entry(1, false);
	v->a[1349] = reduce(sym_translated_string, 2, 0, 0);
	v->a[1350] = entry(1, true);
	v->a[1351] = reduce(sym_translated_string, 2, 0, 0);
	v->a[1352] = entry(1, false);
	v->a[1353] = reduce(sym_string, 4, 0, 0);
	v->a[1354] = entry(1, true);
	v->a[1355] = reduce(sym_string, 4, 0, 0);
	v->a[1356] = entry(1, false);
	v->a[1357] = reduce(sym_simple_expansion, 2, 0, 0);
	v->a[1358] = entry(1, true);
	v->a[1359] = reduce(sym_simple_expansion, 2, 0, 0);
	parse_actions_entries_68(v);
}

void	parse_actions_entries_68(t_parse_actions_entries_array *v)
{
	v->a[1360] = entry(1, false);
	v->a[1361] = shift(495);
	v->a[1362] = entry(1, false);
	v->a[1363] = reduce(aux_sym__literal_repeat1, 2, 0, 0);
	v->a[1364] = entry(1, true);
	v->a[1365] = reduce(aux_sym__literal_repeat1, 2, 0, 0);
	v->a[1366] = entry(2, false);
	v->a[1367] = reduce(aux_sym__literal_repeat1, 2, 0, 0);
	v->a[1368] = shift_repeat(495);
	v->a[1369] = entry(1, true);
	v->a[1370] = reduce(sym__expression, 1, 0, 0);
	v->a[1371] = entry(2, false);
	v->a[1372] = reduce(sym_command_name, 1, 0, 0);
	v->a[1373] = shift(7064);
	v->a[1374] = entry(1, true);
	v->a[1375] = shift(3991);
	v->a[1376] = entry(1, true);
	v->a[1377] = shift(3969);
	v->a[1378] = entry(2, true);
	v->a[1379] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	parse_actions_entries_69(v);
}

void	parse_actions_entries_69(t_parse_actions_entries_array *v)
{
	v->a[1380] = shift_repeat(3921);
	v->a[1381] = entry(1, false);
	v->a[1382] = shift(525);
	v->a[1383] = entry(2, false);
	v->a[1384] = reduce(aux_sym__literal_repeat1, 2, 0, 0);
	v->a[1385] = shift_repeat(525);
	v->a[1386] = entry(1, false);
	v->a[1387] = shift(472);
	v->a[1388] = entry(1, false);
	v->a[1389] = shift(3677);
	v->a[1390] = entry(1, true);
	v->a[1391] = shift(3677);
	v->a[1392] = entry(1, true);
	v->a[1393] = shift(2138);
	v->a[1394] = entry(1, true);
	v->a[1395] = shift(3965);
	v->a[1396] = entry(1, true);
	v->a[1397] = shift(6132);
	v->a[1398] = entry(1, false);
	v->a[1399] = shift(496);
	parse_actions_entries_70(v);
}

/* EOF parse_actions_entries_13.c */
