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
	v->a[1401] = reduce(sym_arithmetic_binary_expression, 3, 0, 28);
	v->a[1402] = entry(1, true);
	v->a[1403] = shift(438);
	v->a[1404] = entry(1, true);
	v->a[1405] = shift_extra();
	v->a[1406] = entry(1, false);
	v->a[1407] = shift(906);
	v->a[1408] = entry(1, false);
	v->a[1409] = shift(898);
	v->a[1410] = entry(1, false);
	v->a[1411] = shift(899);
	v->a[1412] = entry(1, true);
	v->a[1413] = shift(898);
	v->a[1414] = entry(1, false);
	v->a[1415] = shift(872);
	v->a[1416] = entry(1, true);
	v->a[1417] = shift(926);
	v->a[1418] = entry(1, false);
	v->a[1419] = shift(904);
	parse_actions_entries_71(v);
}

void	parse_actions_entries_71(t_parse_actions_entries_array *v)
{
	v->a[1420] = entry(1, false);
	v->a[1421] = shift(894);
	v->a[1422] = entry(1, true);
	v->a[1423] = shift(895);
	v->a[1424] = entry(1, true);
	v->a[1425] = shift(896);
	v->a[1426] = entry(1, false);
	v->a[1427] = shift(897);
	v->a[1428] = entry(1, false);
	v->a[1429] = shift(903);
	v->a[1430] = entry(1, true);
	v->a[1431] = shift(907);
	v->a[1432] = entry(1, false);
	v->a[1433] = reduce(sym_arithmetic_parenthesized_expression, 3, 0, 0);
	v->a[1434] = entry(1, true);
	v->a[1435] = reduce(sym_arithmetic_parenthesized_expression, 3, 0, 0);
	v->a[1436] = entry(2, false);
	v->a[1437] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1438] = shift_repeat(832);
	v->a[1439] = entry(2, false);
	parse_actions_entries_72(v);
}

void	parse_actions_entries_72(t_parse_actions_entries_array *v)
{
	v->a[1440] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1441] = shift_repeat(844);
	v->a[1442] = entry(2, false);
	v->a[1443] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1444] = shift_repeat(1756);
	v->a[1445] = entry(2, false);
	v->a[1446] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1447] = shift_repeat(1722);
	v->a[1448] = entry(2, false);
	v->a[1449] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1450] = shift_repeat(881);
	v->a[1451] = entry(2, false);
	v->a[1452] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1453] = shift_repeat(1934);
	v->a[1454] = entry(2, false);
	v->a[1455] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1456] = shift_repeat(1707);
	v->a[1457] = entry(2, false);
	v->a[1458] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1459] = shift_repeat(123);
	parse_actions_entries_73(v);
}

void	parse_actions_entries_73(t_parse_actions_entries_array *v)
{
	v->a[1460] = entry(2, false);
	v->a[1461] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1462] = shift_repeat(111);
	v->a[1463] = entry(1, false);
	v->a[1464] = shift(1429);
	v->a[1465] = entry(1, true);
	v->a[1466] = shift(1429);
	v->a[1467] = entry(2, false);
	v->a[1468] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1469] = shift_repeat(1485);
	v->a[1470] = entry(2, true);
	v->a[1471] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1472] = shift_repeat(1485);
	v->a[1473] = entry(1, false);
	v->a[1474] = shift(1296);
	v->a[1475] = entry(1, true);
	v->a[1476] = shift(1465);
	v->a[1477] = entry(1, false);
	v->a[1478] = shift(832);
	v->a[1479] = entry(1, false);
	parse_actions_entries_74(v);
}

void	parse_actions_entries_74(t_parse_actions_entries_array *v)
{
	v->a[1480] = shift(844);
	v->a[1481] = entry(1, false);
	v->a[1482] = shift(1756);
	v->a[1483] = entry(1, false);
	v->a[1484] = shift(1722);
	v->a[1485] = entry(1, false);
	v->a[1486] = shift(881);
	v->a[1487] = entry(1, false);
	v->a[1488] = shift(1934);
	v->a[1489] = entry(1, false);
	v->a[1490] = shift(1707);
	v->a[1491] = entry(1, false);
	v->a[1492] = shift(123);
	v->a[1493] = entry(1, false);
	v->a[1494] = shift(111);
	v->a[1495] = entry(1, false);
	v->a[1496] = reduce(sym_arithmetic_postfix_expression, 2, 0, 16);
	v->a[1497] = entry(1, true);
	v->a[1498] = reduce(sym_arithmetic_postfix_expression, 2, 0, 16);
	v->a[1499] = entry(2, false);
	parse_actions_entries_75(v);
}

/* EOF parse_actions_entries_14.c */
