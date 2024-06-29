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
	v->a[1401] = shift(659);
	v->a[1402] = entry(1, true);
	v->a[1403] = shift(592);
	v->a[1404] = entry(1, false);
	v->a[1405] = shift(1127);
	v->a[1406] = entry(1, false);
	v->a[1407] = shift(1132);
	v->a[1408] = entry(1, true);
	v->a[1409] = shift(1132);
	v->a[1410] = entry(1, true);
	v->a[1411] = shift(509);
	v->a[1412] = entry(1, true);
	v->a[1413] = shift(581);
	v->a[1414] = entry(1, true);
	v->a[1415] = shift(1467);
	v->a[1416] = entry(2, false);
	v->a[1417] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1418] = shift_repeat(1530);
	v->a[1419] = entry(2, true);
	parse_actions_entries_71(v);
}

void	parse_actions_entries_71(t_parse_actions_entries_array *v)
{
	v->a[1420] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1421] = shift_repeat(1530);
	v->a[1422] = entry(1, false);
	v->a[1423] = shift(1242);
	v->a[1424] = entry(1, false);
	v->a[1425] = shift(1243);
	v->a[1426] = entry(1, true);
	v->a[1427] = shift(1243);
	v->a[1428] = entry(1, true);
	v->a[1429] = shift(415);
	v->a[1430] = entry(1, true);
	v->a[1431] = shift(880);
	v->a[1432] = entry(2, false);
	v->a[1433] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1434] = shift_repeat(827);
	v->a[1435] = entry(1, true);
	v->a[1436] = shift(1452);
	v->a[1437] = entry(1, true);
	v->a[1438] = shift(1977);
	v->a[1439] = entry(2, false);
	parse_actions_entries_72(v);
}

void	parse_actions_entries_72(t_parse_actions_entries_array *v)
{
	v->a[1440] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1441] = shift_repeat(828);
	v->a[1442] = entry(2, false);
	v->a[1443] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1444] = shift_repeat(907);
	v->a[1445] = entry(2, false);
	v->a[1446] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1447] = shift_repeat(1905);
	v->a[1448] = entry(2, false);
	v->a[1449] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1450] = shift_repeat(1911);
	v->a[1451] = entry(2, false);
	v->a[1452] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1453] = shift_repeat(1792);
	v->a[1454] = entry(2, false);
	v->a[1455] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1456] = shift_repeat(124);
	v->a[1457] = entry(2, false);
	v->a[1458] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1459] = shift_repeat(125);
	parse_actions_entries_73(v);
}

void	parse_actions_entries_73(t_parse_actions_entries_array *v)
{
	v->a[1460] = entry(1, true);
	v->a[1461] = shift(1499);
	v->a[1462] = entry(1, true);
	v->a[1463] = shift(881);
	v->a[1464] = entry(1, true);
	v->a[1465] = shift(1556);
	v->a[1466] = entry(1, false);
	v->a[1467] = reduce(aux_sym__terminated_statement, 2, 0, 10);
	v->a[1468] = entry(1, true);
	v->a[1469] = reduce(aux_sym__terminated_statement, 2, 0, 10);
	v->a[1470] = entry(1, false);
	v->a[1471] = shift(157);
	v->a[1472] = entry(1, false);
	v->a[1473] = reduce(sym__heredoc_pipeline, 2, 0, 0);
	v->a[1474] = entry(2, true);
	v->a[1475] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[1476] = shift(2311);
	v->a[1477] = entry(1, false);
	v->a[1478] = reduce(sym__heredoc_expression, 2, 0, 49);
	v->a[1479] = entry(1, true);
	parse_actions_entries_74(v);
}

void	parse_actions_entries_74(t_parse_actions_entries_array *v)
{
	v->a[1480] = shift(1525);
	v->a[1481] = entry(1, false);
	v->a[1482] = shift(856);
	v->a[1483] = entry(1, false);
	v->a[1484] = shift(926);
	v->a[1485] = entry(1, false);
	v->a[1486] = shift(1869);
	v->a[1487] = entry(1, false);
	v->a[1488] = shift(1851);
	v->a[1489] = entry(1, false);
	v->a[1490] = shift(1795);
	v->a[1491] = entry(1, false);
	v->a[1492] = shift(91);
	v->a[1493] = entry(1, false);
	v->a[1494] = shift(85);
	v->a[1495] = entry(2, false);
	v->a[1496] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1497] = shift_repeat(856);
	v->a[1498] = entry(2, false);
	v->a[1499] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	parse_actions_entries_75(v);
}

/* EOF parse_actions_entries_14.c */
