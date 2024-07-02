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
	v->a[1400] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1401] = shift_repeat(1677);
	v->a[1402] = entry(2, false);
	v->a[1403] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1404] = shift_repeat(1662);
	v->a[1405] = entry(2, false);
	v->a[1406] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1407] = shift_repeat(1528);
	v->a[1408] = entry(2, false);
	v->a[1409] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1410] = shift_repeat(39);
	v->a[1411] = entry(2, false);
	v->a[1412] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1413] = shift_repeat(101);
	v->a[1414] = entry(1, true);
	v->a[1415] = shift(1324);
	v->a[1416] = entry(1, false);
	v->a[1417] = shift(146);
	v->a[1418] = entry(1, false);
	v->a[1419] = reduce(sym__heredoc_expression, 2, 0, 54);
	parse_actions_entries_71(v);
}

void	parse_actions_entries_71(t_parse_actions_entries_array *v)
{
	v->a[1420] = entry(1, false);
	v->a[1421] = reduce(sym__heredoc_pipeline, 2, 0, 0);
	v->a[1422] = entry(1, false);
	v->a[1423] = reduce(aux_sym__statements_repeat1, 2, 0, 8);
	v->a[1424] = entry(1, false);
	v->a[1425] = reduce(sym__statements, 3, 0, 33);
	v->a[1426] = entry(1, true);
	v->a[1427] = reduce(aux_sym__statements_repeat1, 2, 0, 8);
	v->a[1428] = entry(1, false);
	v->a[1429] = reduce(aux_sym_command_repeat1, 1, 0, 4);
	v->a[1430] = entry(1, false);
	v->a[1431] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1432] = entry(2, false);
	v->a[1433] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1434] = reduce(aux_sym_command_repeat1, 1, 0, 4);
	v->a[1435] = entry(2, true);
	v->a[1436] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1437] = reduce(aux_sym_command_repeat1, 1, 0, 4);
	v->a[1438] = entry(1, true);
	v->a[1439] = reduce(aux_sym_command_repeat1, 1, 0, 4);
	parse_actions_entries_72(v);
}

void	parse_actions_entries_72(t_parse_actions_entries_array *v)
{
	v->a[1440] = entry(1, true);
	v->a[1441] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1442] = entry(2, false);
	v->a[1443] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1444] = shift(1857);
	v->a[1445] = entry(2, false);
	v->a[1446] = reduce(sym_command_name, 1, 0, 0);
	v->a[1447] = shift(2111);
	v->a[1448] = entry(2, false);
	v->a[1449] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1450] = shift(904);
	v->a[1451] = entry(2, false);
	v->a[1452] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1453] = shift(1895);
	v->a[1454] = entry(2, false);
	v->a[1455] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1456] = shift(1403);
	v->a[1457] = entry(1, true);
	v->a[1458] = reduce(sym_negated_command, 2, 0, 0);
	v->a[1459] = entry(1, false);
	parse_actions_entries_73(v);
}

void	parse_actions_entries_73(t_parse_actions_entries_array *v)
{
	v->a[1460] = reduce(sym_negated_command, 2, 0, 0);
	v->a[1461] = entry(2, false);
	v->a[1462] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1463] = shift(425);
	v->a[1464] = entry(2, false);
	v->a[1465] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1466] = shift(616);
	v->a[1467] = entry(1, true);
	v->a[1468] = reduce(aux_sym_command_repeat2, 1, 0, 10);
	v->a[1469] = entry(1, false);
	v->a[1470] = reduce(aux_sym_command_repeat2, 1, 0, 10);
	v->a[1471] = entry(2, false);
	v->a[1472] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1473] = shift(801);
	v->a[1474] = entry(2, false);
	v->a[1475] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1476] = shift(990);
	v->a[1477] = entry(2, false);
	v->a[1478] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1479] = shift(369);
	parse_actions_entries_74(v);
}

void	parse_actions_entries_74(t_parse_actions_entries_array *v)
{
	v->a[1480] = entry(2, true);
	v->a[1481] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[1482] = shift(1987);
	v->a[1483] = entry(1, false);
	v->a[1484] = reduce(sym__statements, 2, 0, 8);
	v->a[1485] = entry(2, false);
	v->a[1486] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1487] = shift(868);
	v->a[1488] = entry(2, false);
	v->a[1489] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1490] = shift(389);
	v->a[1491] = entry(1, false);
	v->a[1492] = reduce(aux_sym__case_item_last_repeat2, 2, 0, 0);
	v->a[1493] = entry(2, false);
	v->a[1494] = reduce(aux_sym__case_item_last_repeat2, 2, 0, 0);
	v->a[1495] = shift_repeat(672);
	v->a[1496] = entry(1, true);
	v->a[1497] = reduce(aux_sym__case_item_last_repeat2, 2, 0, 0);
	v->a[1498] = entry(1, false);
	v->a[1499] = shift(1168);
	parse_actions_entries_75(v);
}

/* EOF parse_actions_entries_14.c */
