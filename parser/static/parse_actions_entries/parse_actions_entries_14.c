/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_actions_entries_14.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_actions_entries.h"

void	parse_actions_entries_70(t_parse_actions_entries_array *v)
{
	v->a[1400] = entry(1, true);
	v->a[1401] = shift(1258);
	v->a[1402] = entry(1, false);
	v->a[1403] = reduce(aux_sym__terminated_statement, 2, 0, 8);
	v->a[1404] = entry(1, true);
	v->a[1405] = reduce(aux_sym__terminated_statement, 2, 0, 8);
	v->a[1406] = entry(1, true);
	v->a[1407] = shift(1344);
	v->a[1408] = entry(1, false);
	v->a[1409] = reduce(aux_sym__statements_repeat1, 2, 0, 8);
	v->a[1410] = entry(1, false);
	v->a[1411] = reduce(sym__statements, 3, 0, 33);
	v->a[1412] = entry(1, true);
	v->a[1413] = reduce(aux_sym__statements_repeat1, 2, 0, 8);
	v->a[1414] = entry(1, false);
	v->a[1415] = shift(1084);
	v->a[1416] = entry(1, false);
	v->a[1417] = shift(1083);
	v->a[1418] = entry(1, true);
	v->a[1419] = shift(1083);
	parse_actions_entries_71(v);
}

void	parse_actions_entries_71(t_parse_actions_entries_array *v)
{
	v->a[1420] = entry(1, false);
	v->a[1421] = reduce(sym__statements, 2, 0, 8);
	v->a[1422] = entry(1, false);
	v->a[1423] = reduce(aux_sym__case_item_last_repeat2, 2, 0, 0);
	v->a[1424] = entry(2, false);
	v->a[1425] = reduce(aux_sym__case_item_last_repeat2, 2, 0, 0);
	v->a[1426] = shift_repeat(584);
	v->a[1427] = entry(1, true);
	v->a[1428] = reduce(aux_sym__case_item_last_repeat2, 2, 0, 0);
	v->a[1429] = entry(1, false);
	v->a[1430] = shift(924);
	v->a[1431] = entry(1, false);
	v->a[1432] = shift(925);
	v->a[1433] = entry(1, true);
	v->a[1434] = shift(925);
	v->a[1435] = entry(2, true);
	v->a[1436] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[1437] = shift(1981);
	v->a[1438] = entry(1, true);
	v->a[1439] = shift(1291);
	parse_actions_entries_72(v);
}

void	parse_actions_entries_72(t_parse_actions_entries_array *v)
{
	v->a[1440] = entry(2, false);
	v->a[1441] = reduce(sym_command_name, 1, 0, 0);
	v->a[1442] = shift(2111);
	v->a[1443] = entry(1, true);
	v->a[1444] = shift(1304);
	v->a[1445] = entry(1, true);
	v->a[1446] = reduce(sym__statements, 3, 0, 33);
	v->a[1447] = entry(1, false);
	v->a[1448] = reduce(aux_sym_command_repeat1, 1, 0, 4);
	v->a[1449] = entry(1, false);
	v->a[1450] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1451] = entry(2, false);
	v->a[1452] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1453] = shift(524);
	v->a[1454] = entry(2, false);
	v->a[1455] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1456] = reduce(aux_sym_command_repeat1, 1, 0, 4);
	v->a[1457] = entry(2, true);
	v->a[1458] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1459] = reduce(aux_sym_command_repeat1, 1, 0, 4);
	parse_actions_entries_73(v);
}

void	parse_actions_entries_73(t_parse_actions_entries_array *v)
{
	v->a[1460] = entry(1, true);
	v->a[1461] = reduce(aux_sym_command_repeat1, 1, 0, 4);
	v->a[1462] = entry(2, false);
	v->a[1463] = reduce(sym_command_name, 1, 0, 0);
	v->a[1464] = shift(2019);
	v->a[1465] = entry(1, false);
	v->a[1466] = shift(1245);
	v->a[1467] = entry(1, true);
	v->a[1468] = shift(1245);
	v->a[1469] = entry(1, true);
	v->a[1470] = shift(800);
	v->a[1471] = entry(1, true);
	v->a[1472] = shift(808);
	v->a[1473] = entry(1, true);
	v->a[1474] = shift(1458);
	v->a[1475] = entry(1, true);
	v->a[1476] = shift(809);
	v->a[1477] = entry(1, false);
	v->a[1478] = shift(810);
	v->a[1479] = entry(1, true);
	parse_actions_entries_74(v);
}

void	parse_actions_entries_74(t_parse_actions_entries_array *v)
{
	v->a[1480] = shift(810);
	v->a[1481] = entry(1, false);
	v->a[1482] = shift(1713);
	v->a[1483] = entry(1, true);
	v->a[1484] = shift(1654);
	v->a[1485] = entry(1, false);
	v->a[1486] = shift(194);
	v->a[1487] = entry(1, true);
	v->a[1488] = shift(1652);
	v->a[1489] = entry(1, true);
	v->a[1490] = shift(74);
	v->a[1491] = entry(1, true);
	v->a[1492] = shift(72);
	v->a[1493] = entry(1, true);
	v->a[1494] = shift(194);
	v->a[1495] = entry(2, false);
	v->a[1496] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1497] = shift(289);
	v->a[1498] = entry(1, false);
	v->a[1499] = reduce(sym_negated_command, 2, 0, 0);
	parse_actions_entries_75(v);
}

/* EOF parse_actions_entries_14.c */
