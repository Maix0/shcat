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
	v->a[1400] = entry(1, false);
	v->a[1401] = reduce(aux_sym__terminated_statement, 2, 0, 8);
	v->a[1402] = entry(1, true);
	v->a[1403] = reduce(aux_sym__terminated_statement, 2, 0, 8);
	v->a[1404] = entry(1, true);
	v->a[1405] = shift(1316);
	v->a[1406] = entry(1, false);
	v->a[1407] = shift(852);
	v->a[1408] = entry(1, false);
	v->a[1409] = shift(773);
	v->a[1410] = entry(1, false);
	v->a[1411] = shift(1670);
	v->a[1412] = entry(1, false);
	v->a[1413] = shift(1664);
	v->a[1414] = entry(1, false);
	v->a[1415] = shift(1540);
	v->a[1416] = entry(1, false);
	v->a[1417] = shift(45);
	v->a[1418] = entry(1, false);
	v->a[1419] = shift(44);
	parse_actions_entries_71(v);
}

void	parse_actions_entries_71(t_parse_actions_entries_array *v)
{
	v->a[1420] = entry(1, false);
	v->a[1421] = reduce(sym__heredoc_pipeline, 2, 0, 0);
	v->a[1422] = entry(1, false);
	v->a[1423] = reduce(aux_sym_command_repeat1, 1, 0, 4);
	v->a[1424] = entry(1, false);
	v->a[1425] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1426] = entry(2, false);
	v->a[1427] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1428] = shift(1414);
	v->a[1429] = entry(2, false);
	v->a[1430] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1431] = reduce(aux_sym_command_repeat1, 1, 0, 4);
	v->a[1432] = entry(2, true);
	v->a[1433] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1434] = reduce(aux_sym_command_repeat1, 1, 0, 4);
	v->a[1435] = entry(1, true);
	v->a[1436] = reduce(aux_sym_command_repeat1, 1, 0, 4);
	v->a[1437] = entry(1, false);
	v->a[1438] = reduce(aux_sym__statements_repeat1, 2, 0, 8);
	v->a[1439] = entry(1, false);
	parse_actions_entries_72(v);
}

void	parse_actions_entries_72(t_parse_actions_entries_array *v)
{
	v->a[1440] = reduce(sym__statements, 3, 0, 31);
	v->a[1441] = entry(1, true);
	v->a[1442] = reduce(aux_sym__statements_repeat1, 2, 0, 8);
	v->a[1443] = entry(2, false);
	v->a[1444] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1445] = shift(489);
	v->a[1446] = entry(2, false);
	v->a[1447] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1448] = shift(482);
	v->a[1449] = entry(2, false);
	v->a[1450] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1451] = shift(887);
	v->a[1452] = entry(2, false);
	v->a[1453] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1454] = shift(1793);
	v->a[1455] = entry(1, false);
	v->a[1456] = reduce(aux_sym_command_repeat2, 1, 0, 10);
	v->a[1457] = entry(1, true);
	v->a[1458] = reduce(aux_sym_command_repeat2, 1, 0, 10);
	v->a[1459] = entry(2, false);
	parse_actions_entries_73(v);
}

void	parse_actions_entries_73(t_parse_actions_entries_array *v)
{
	v->a[1460] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1461] = shift(880);
	v->a[1462] = entry(1, false);
	v->a[1463] = reduce(sym__statements, 2, 0, 8);
	v->a[1464] = entry(2, false);
	v->a[1465] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1466] = shift(601);
	v->a[1467] = entry(1, false);
	v->a[1468] = reduce(sym_negated_command, 2, 0, 0);
	v->a[1469] = entry(1, true);
	v->a[1470] = reduce(sym_negated_command, 2, 0, 0);
	v->a[1471] = entry(2, false);
	v->a[1472] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1473] = shift(527);
	v->a[1474] = entry(2, false);
	v->a[1475] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1476] = shift(1006);
	v->a[1477] = entry(2, false);
	v->a[1478] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1479] = shift(1440);
	parse_actions_entries_74(v);
}

void	parse_actions_entries_74(t_parse_actions_entries_array *v)
{
	v->a[1480] = entry(2, false);
	v->a[1481] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1482] = shift(1146);
	v->a[1483] = entry(2, false);
	v->a[1484] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1485] = shift(507);
	v->a[1486] = entry(2, false);
	v->a[1487] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1488] = shift(392);
	v->a[1489] = entry(1, false);
	v->a[1490] = reduce(aux_sym__case_item_last_repeat2, 2, 0, 0);
	v->a[1491] = entry(2, false);
	v->a[1492] = reduce(aux_sym__case_item_last_repeat2, 2, 0, 0);
	v->a[1493] = shift_repeat(657);
	v->a[1494] = entry(1, true);
	v->a[1495] = reduce(aux_sym__case_item_last_repeat2, 2, 0, 0);
	v->a[1496] = entry(2, false);
	v->a[1497] = reduce(sym_command_name, 1, 0, 0);
	v->a[1498] = shift(2092);
	v->a[1499] = entry(2, false);
	parse_actions_entries_75(v);
}

/* EOF parse_actions_entries_14.c */
