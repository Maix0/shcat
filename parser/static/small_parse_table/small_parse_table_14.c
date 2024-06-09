/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_14.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_70(t_small_parse_table_array *v)
{
	v->a[1400] = anon_sym_LPAREN;
	v->a[1401] = actions(109);
	v->a[1402] = 1;
	v->a[1403] = anon_sym_LBRACE;
	v->a[1404] = actions(111);
	v->a[1405] = 1;
	v->a[1406] = anon_sym_BANG;
	v->a[1407] = actions(117);
	v->a[1408] = 1;
	v->a[1409] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[1410] = actions(119);
	v->a[1411] = 1;
	v->a[1412] = anon_sym_DOLLAR;
	v->a[1413] = actions(121);
	v->a[1414] = 1;
	v->a[1415] = anon_sym_DQUOTE;
	v->a[1416] = actions(123);
	v->a[1417] = 1;
	v->a[1418] = sym_raw_string;
	v->a[1419] = actions(125);
	small_parse_table_71(v);
}

void	small_parse_table_71(t_small_parse_table_array *v)
{
	v->a[1420] = 1;
	v->a[1421] = aux_sym_number_token1;
	v->a[1422] = actions(127);
	v->a[1423] = 1;
	v->a[1424] = aux_sym_number_token2;
	v->a[1425] = actions(129);
	v->a[1426] = 1;
	v->a[1427] = anon_sym_DOLLAR_LBRACE;
	v->a[1428] = actions(131);
	v->a[1429] = 1;
	v->a[1430] = anon_sym_DOLLAR_LPAREN;
	v->a[1431] = actions(133);
	v->a[1432] = 1;
	v->a[1433] = anon_sym_BQUOTE;
	v->a[1434] = actions(135);
	v->a[1435] = 1;
	v->a[1436] = sym_file_descriptor;
	v->a[1437] = actions(137);
	v->a[1438] = 1;
	v->a[1439] = sym_variable_name;
	small_parse_table_72(v);
}

void	small_parse_table_72(t_small_parse_table_array *v)
{
	v->a[1440] = actions(141);
	v->a[1441] = 1;
	v->a[1442] = anon_sym_LF;
	v->a[1443] = state(139);
	v->a[1444] = 1;
	v->a[1445] = aux_sym__statements_repeat1;
	v->a[1446] = state(173);
	v->a[1447] = 1;
	v->a[1448] = sym_command_name;
	v->a[1449] = state(269);
	v->a[1450] = 1;
	v->a[1451] = sym_variable_assignment;
	v->a[1452] = state(663);
	v->a[1453] = 1;
	v->a[1454] = aux_sym_command_repeat1;
	v->a[1455] = state(665);
	v->a[1456] = 1;
	v->a[1457] = sym_concatenation;
	v->a[1458] = state(689);
	v->a[1459] = 1;
	small_parse_table_73(v);
}

void	small_parse_table_73(t_small_parse_table_array *v)
{
	v->a[1460] = aux_sym__case_item_last_repeat2;
	v->a[1461] = state(749);
	v->a[1462] = 1;
	v->a[1463] = sym_file_redirect;
	v->a[1464] = state(1145);
	v->a[1465] = 1;
	v->a[1466] = aux_sym_redirected_statement_repeat2;
	v->a[1467] = state(1190);
	v->a[1468] = 1;
	v->a[1469] = sym_pipeline;
	v->a[1470] = state(2040);
	v->a[1471] = 1;
	v->a[1472] = sym__statement_not_pipeline;
	v->a[1473] = state(2050);
	v->a[1474] = 1;
	v->a[1475] = sym__statements;
	v->a[1476] = actions(99);
	v->a[1477] = 2;
	v->a[1478] = anon_sym_while;
	v->a[1479] = anon_sym_until;
	small_parse_table_74(v);
}

void	small_parse_table_74(t_small_parse_table_array *v)
{
	v->a[1480] = actions(115);
	v->a[1481] = 2;
	v->a[1482] = anon_sym_LT_AMP_DASH;
	v->a[1483] = anon_sym_GT_AMP_DASH;
	v->a[1484] = state(282);
	v->a[1485] = 6;
	v->a[1486] = sym_arithmetic_expansion;
	v->a[1487] = sym_string;
	v->a[1488] = sym_number;
	v->a[1489] = sym_simple_expansion;
	v->a[1490] = sym_expansion;
	v->a[1491] = sym_command_substitution;
	v->a[1492] = actions(113);
	v->a[1493] = 8;
	v->a[1494] = anon_sym_LT;
	v->a[1495] = anon_sym_GT;
	v->a[1496] = anon_sym_GT_GT;
	v->a[1497] = anon_sym_AMP_GT;
	v->a[1498] = anon_sym_AMP_GT_GT;
	v->a[1499] = anon_sym_LT_AMP;
	small_parse_table_75(v);
}

/* EOF small_parse_table_14.c */
