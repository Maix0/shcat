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
	v->a[1400] = reduce(sym_terminator, 1, 0, 0);
	v->a[1401] = entry(1, true);
	v->a[1402] = reduce(sym_terminator, 1, 0, 0);
	v->a[1403] = entry(2, false);
	v->a[1404] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	v->a[1405] = shift_repeat(864);
	v->a[1406] = entry(2, false);
	v->a[1407] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	v->a[1408] = shift_repeat(883);
	v->a[1409] = entry(2, false);
	v->a[1410] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	v->a[1411] = shift_repeat(1912);
	v->a[1412] = entry(2, false);
	v->a[1413] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	v->a[1414] = shift_repeat(1865);
	v->a[1415] = entry(2, false);
	v->a[1416] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	v->a[1417] = shift_repeat(1784);
	v->a[1418] = entry(2, false);
	v->a[1419] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	parse_actions_entries_71(v);
}

void	parse_actions_entries_71(t_parse_actions_entries_array *v)
{
	v->a[1420] = shift_repeat(96);
	v->a[1421] = entry(2, false);
	v->a[1422] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	v->a[1423] = shift_repeat(95);
	v->a[1424] = entry(2, true);
	v->a[1425] = reduce(aux_sym_command_repeat2, 2, 0, 31);
	v->a[1426] = shift_repeat(982);
	v->a[1427] = entry(1, true);
	v->a[1428] = shift(1483);
	v->a[1429] = entry(1, true);
	v->a[1430] = shift(1515);
	v->a[1431] = entry(1, false);
	v->a[1432] = shift(986);
	v->a[1433] = entry(1, false);
	v->a[1434] = shift(985);
	v->a[1435] = entry(1, true);
	v->a[1436] = shift(985);
	v->a[1437] = entry(1, true);
	v->a[1438] = shift(1431);
	v->a[1439] = entry(1, false);
	parse_actions_entries_72(v);
}

void	parse_actions_entries_72(t_parse_actions_entries_array *v)
{
	v->a[1440] = shift(1422);
	v->a[1441] = entry(1, true);
	v->a[1442] = shift(1422);
	v->a[1443] = entry(1, true);
	v->a[1444] = shift(1482);
	v->a[1445] = entry(1, false);
	v->a[1446] = shift(1115);
	v->a[1447] = entry(1, false);
	v->a[1448] = shift(1116);
	v->a[1449] = entry(1, true);
	v->a[1450] = shift(1116);
	v->a[1451] = entry(2, false);
	v->a[1452] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1453] = shift_repeat(1422);
	v->a[1454] = entry(2, true);
	v->a[1455] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1456] = shift_repeat(1422);
	v->a[1457] = entry(2, false);
	v->a[1458] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1459] = shift_repeat(1498);
	parse_actions_entries_73(v);
}

void	parse_actions_entries_73(t_parse_actions_entries_array *v)
{
	v->a[1460] = entry(2, true);
	v->a[1461] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1462] = shift_repeat(1498);
	v->a[1463] = entry(2, false);
	v->a[1464] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1465] = shift_repeat(884);
	v->a[1466] = entry(2, true);
	v->a[1467] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[1468] = shift(2311);
	v->a[1469] = entry(1, false);
	v->a[1470] = shift(1397);
	v->a[1471] = entry(1, false);
	v->a[1472] = shift(1399);
	v->a[1473] = entry(2, false);
	v->a[1474] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1475] = shift_repeat(926);
	v->a[1476] = entry(2, false);
	v->a[1477] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1478] = shift_repeat(866);
	v->a[1479] = entry(2, false);
	parse_actions_entries_74(v);
}

void	parse_actions_entries_74(t_parse_actions_entries_array *v)
{
	v->a[1480] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1481] = shift_repeat(1835);
	v->a[1482] = entry(2, false);
	v->a[1483] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1484] = shift_repeat(1825);
	v->a[1485] = entry(2, false);
	v->a[1486] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1487] = shift_repeat(1796);
	v->a[1488] = entry(2, false);
	v->a[1489] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1490] = shift_repeat(85);
	v->a[1491] = entry(2, false);
	v->a[1492] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1493] = shift_repeat(84);
	v->a[1494] = entry(1, true);
	v->a[1495] = shift(1488);
	v->a[1496] = entry(1, false);
	v->a[1497] = shift(155);
	v->a[1498] = entry(1, false);
	v->a[1499] = reduce(sym__heredoc_expression, 2, 0, 49);
	parse_actions_entries_75(v);
}

/* EOF parse_actions_entries_14.c */
