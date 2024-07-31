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
	v->a[1400] = shift_repeat(1414);
	v->a[1401] = entry(2, false);
	v->a[1402] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1403] = shift_repeat(85);
	v->a[1404] = entry(2, false);
	v->a[1405] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1406] = shift_repeat(84);
	v->a[1407] = entry(2, false);
	v->a[1408] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1409] = shift(899);
	v->a[1410] = entry(2, false);
	v->a[1411] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1412] = shift(1513);
	v->a[1413] = entry(2, false);
	v->a[1414] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1415] = shift(374);
	v->a[1416] = entry(1, false);
	v->a[1417] = shift(1170);
	v->a[1418] = entry(1, false);
	v->a[1419] = shift(1177);
	parse_actions_entries_71(v);
}

void	parse_actions_entries_71(t_parse_actions_entries_array *v)
{
	v->a[1420] = entry(1, false);
	v->a[1421] = shift(1379);
	v->a[1422] = entry(2, false);
	v->a[1423] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1424] = shift(371);
	v->a[1425] = entry(1, false);
	v->a[1426] = shift(1035);
	v->a[1427] = entry(2, false);
	v->a[1428] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1429] = shift(1474);
	v->a[1430] = entry(1, false);
	v->a[1431] = shift(1353);
	v->a[1432] = entry(2, false);
	v->a[1433] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1434] = shift(430);
	v->a[1435] = entry(1, true);
	v->a[1436] = reduce(sym__statements, 2, 0, 8);
	v->a[1437] = entry(1, false);
	v->a[1438] = shift(1101);
	v->a[1439] = entry(1, true);
	parse_actions_entries_72(v);
}

void	parse_actions_entries_72(t_parse_actions_entries_array *v)
{
	v->a[1440] = shift(1101);
	v->a[1441] = entry(2, false);
	v->a[1442] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1443] = shift_repeat(1101);
	v->a[1444] = entry(2, true);
	v->a[1445] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1446] = shift_repeat(1101);
	v->a[1447] = entry(1, true);
	v->a[1448] = shift(1074);
	v->a[1449] = entry(1, true);
	v->a[1450] = shift(1111);
	v->a[1451] = entry(2, false);
	v->a[1452] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1453] = shift_repeat(1094);
	v->a[1454] = entry(2, true);
	v->a[1455] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1456] = shift_repeat(1094);
	v->a[1457] = entry(1, true);
	v->a[1458] = shift(1085);
	v->a[1459] = entry(2, false);
	parse_actions_entries_73(v);
}

void	parse_actions_entries_73(t_parse_actions_entries_array *v)
{
	v->a[1460] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1461] = shift_repeat(1083);
	v->a[1462] = entry(2, true);
	v->a[1463] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1464] = shift_repeat(1083);
	v->a[1465] = entry(2, false);
	v->a[1466] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1467] = shift_repeat(1124);
	v->a[1468] = entry(2, true);
	v->a[1469] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1470] = shift_repeat(1124);
	v->a[1471] = entry(1, false);
	v->a[1472] = shift(1124);
	v->a[1473] = entry(1, true);
	v->a[1474] = shift(1051);
	v->a[1475] = entry(2, false);
	v->a[1476] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1477] = shift_repeat(827);
	v->a[1478] = entry(2, false);
	v->a[1479] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	parse_actions_entries_74(v);
}

void	parse_actions_entries_74(t_parse_actions_entries_array *v)
{
	v->a[1480] = shift_repeat(788);
	v->a[1481] = entry(2, false);
	v->a[1482] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1483] = shift_repeat(1448);
	v->a[1484] = entry(2, false);
	v->a[1485] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1486] = shift_repeat(1359);
	v->a[1487] = entry(2, false);
	v->a[1488] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1489] = shift_repeat(1374);
	v->a[1490] = entry(2, false);
	v->a[1491] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1492] = shift_repeat(101);
	v->a[1493] = entry(2, false);
	v->a[1494] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1495] = shift_repeat(97);
	v->a[1496] = entry(1, true);
	v->a[1497] = shift(1124);
	v->a[1498] = entry(1, true);
	v->a[1499] = reduce(sym__expansion_body, 1, 0, 7);
	parse_actions_entries_75(v);
}

/* EOF parse_actions_entries_14.c */
