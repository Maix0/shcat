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
	v->a[1400] = shift_repeat(2050);
	v->a[1401] = entry(2, false);
	v->a[1402] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1403] = shift_repeat(1978);
	v->a[1404] = entry(2, false);
	v->a[1405] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1406] = shift_repeat(1918);
	v->a[1407] = entry(2, false);
	v->a[1408] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1409] = shift_repeat(94);
	v->a[1410] = entry(2, false);
	v->a[1411] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1412] = shift_repeat(103);
	v->a[1413] = entry(1, true);
	v->a[1414] = shift(2220);
	v->a[1415] = entry(1, false);
	v->a[1416] = shift(1401);
	v->a[1417] = entry(1, false);
	v->a[1418] = shift(1408);
	v->a[1419] = entry(1, true);
	parse_actions_entries_71(v);
}

void	parse_actions_entries_71(t_parse_actions_entries_array *v)
{
	v->a[1420] = shift(1408);
	v->a[1421] = entry(1, true);
	v->a[1422] = shift(1110);
	v->a[1423] = entry(1, true);
	v->a[1424] = shift(971);
	v->a[1425] = entry(1, true);
	v->a[1426] = shift(1169);
	v->a[1427] = entry(1, false);
	v->a[1428] = shift(1186);
	v->a[1429] = entry(1, false);
	v->a[1430] = shift(1184);
	v->a[1431] = entry(1, true);
	v->a[1432] = shift(1184);
	v->a[1433] = entry(1, true);
	v->a[1434] = shift(1784);
	v->a[1435] = entry(2, false);
	v->a[1436] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1437] = shift_repeat(1645);
	v->a[1438] = entry(2, true);
	v->a[1439] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	parse_actions_entries_72(v);
}

void	parse_actions_entries_72(t_parse_actions_entries_array *v)
{
	v->a[1440] = shift_repeat(1645);
	v->a[1441] = entry(1, true);
	v->a[1442] = shift(331);
	v->a[1443] = entry(1, true);
	v->a[1444] = shift(623);
	v->a[1445] = entry(1, true);
	v->a[1446] = shift(2103);
	v->a[1447] = entry(1, false);
	v->a[1448] = shift(1620);
	v->a[1449] = entry(1, true);
	v->a[1450] = shift(1620);
	v->a[1451] = entry(1, true);
	v->a[1452] = shift(1031);
	v->a[1453] = entry(1, true);
	v->a[1454] = shift(436);
	v->a[1455] = entry(1, true);
	v->a[1456] = shift(515);
	v->a[1457] = entry(1, true);
	v->a[1458] = shift(1058);
	v->a[1459] = entry(1, false);
	parse_actions_entries_73(v);
}

void	parse_actions_entries_73(t_parse_actions_entries_array *v)
{
	v->a[1460] = shift(1650);
	v->a[1461] = entry(1, true);
	v->a[1462] = shift(1722);
	v->a[1463] = entry(1, true);
	v->a[1464] = shift(1607);
	v->a[1465] = entry(1, true);
	v->a[1466] = shift(1719);
	v->a[1467] = entry(1, true);
	v->a[1468] = shift(653);
	v->a[1469] = entry(2, false);
	v->a[1470] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1471] = shift_repeat(1620);
	v->a[1472] = entry(2, true);
	v->a[1473] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1474] = shift_repeat(1620);
	v->a[1475] = entry(1, true);
	v->a[1476] = shift(1412);
	v->a[1477] = entry(1, true);
	v->a[1478] = shift(1568);
	v->a[1479] = entry(1, true);
	parse_actions_entries_74(v);
}

void	parse_actions_entries_74(t_parse_actions_entries_array *v)
{
	v->a[1480] = shift(1650);
	v->a[1481] = entry(1, true);
	v->a[1482] = shift(311);
	v->a[1483] = entry(1, true);
	v->a[1484] = shift(1203);
	v->a[1485] = entry(2, false);
	v->a[1486] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1487] = shift_repeat(1650);
	v->a[1488] = entry(2, true);
	v->a[1489] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1490] = shift_repeat(1650);
	v->a[1491] = entry(2, false);
	v->a[1492] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1493] = shift_repeat(941);
	v->a[1494] = entry(1, true);
	v->a[1495] = shift(1645);
	v->a[1496] = entry(1, true);
	v->a[1497] = shift(1149);
	v->a[1498] = entry(1, false);
	v->a[1499] = shift(1552);
	parse_actions_entries_75(v);
}

/* EOF parse_actions_entries_14.c */
