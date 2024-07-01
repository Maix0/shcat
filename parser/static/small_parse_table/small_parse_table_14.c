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
	v->a[1400] = 1;
	v->a[1401] = anon_sym_for;
	v->a[1402] = actions(13);
	v->a[1403] = 1;
	v->a[1404] = anon_sym_if;
	v->a[1405] = actions(15);
	v->a[1406] = 1;
	v->a[1407] = anon_sym_case;
	v->a[1408] = actions(17);
	v->a[1409] = 1;
	v->a[1410] = anon_sym_LPAREN;
	v->a[1411] = actions(19);
	v->a[1412] = 1;
	v->a[1413] = anon_sym_LBRACE;
	v->a[1414] = actions(43);
	v->a[1415] = 1;
	v->a[1416] = sym_word;
	v->a[1417] = actions(51);
	v->a[1418] = 1;
	v->a[1419] = anon_sym_BANG;
	small_parse_table_71(v);
}

void	small_parse_table_71(t_small_parse_table_array *v)
{
	v->a[1420] = actions(55);
	v->a[1421] = 1;
	v->a[1422] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[1423] = actions(57);
	v->a[1424] = 1;
	v->a[1425] = anon_sym_DOLLAR;
	v->a[1426] = actions(59);
	v->a[1427] = 1;
	v->a[1428] = anon_sym_DQUOTE;
	v->a[1429] = actions(63);
	v->a[1430] = 1;
	v->a[1431] = anon_sym_DOLLAR_LBRACE;
	v->a[1432] = actions(65);
	v->a[1433] = 1;
	v->a[1434] = anon_sym_DOLLAR_LPAREN;
	v->a[1435] = actions(67);
	v->a[1436] = 1;
	v->a[1437] = anon_sym_BQUOTE;
	v->a[1438] = actions(69);
	v->a[1439] = 1;
	small_parse_table_72(v);
}

void	small_parse_table_72(t_small_parse_table_array *v)
{
	v->a[1440] = sym_file_descriptor;
	v->a[1441] = actions(71);
	v->a[1442] = 1;
	v->a[1443] = sym_variable_name;
	v->a[1444] = actions(127);
	v->a[1445] = 1;
	v->a[1446] = anon_sym_LF;
	v->a[1447] = state(9);
	v->a[1448] = 1;
	v->a[1449] = aux_sym__case_item_last_repeat2;
	v->a[1450] = state(128);
	v->a[1451] = 1;
	v->a[1452] = aux_sym__statements_repeat1;
	v->a[1453] = state(183);
	v->a[1454] = 1;
	v->a[1455] = sym_command_name;
	v->a[1456] = state(271);
	v->a[1457] = 1;
	v->a[1458] = sym_variable_assignment;
	v->a[1459] = state(603);
	small_parse_table_73(v);
}

void	small_parse_table_73(t_small_parse_table_array *v)
{
	v->a[1460] = 1;
	v->a[1461] = sym_concatenation;
	v->a[1462] = state(639);
	v->a[1463] = 1;
	v->a[1464] = aux_sym_command_repeat1;
	v->a[1465] = state(644);
	v->a[1466] = 1;
	v->a[1467] = sym_file_redirect;
	v->a[1468] = state(1171);
	v->a[1469] = 1;
	v->a[1470] = sym_pipeline;
	v->a[1471] = state(1196);
	v->a[1472] = 1;
	v->a[1473] = aux_sym_redirected_statement_repeat2;
	v->a[1474] = state(1910);
	v->a[1475] = 1;
	v->a[1476] = sym__statement_not_pipeline;
	v->a[1477] = state(2013);
	v->a[1478] = 1;
	v->a[1479] = sym__statements;
	small_parse_table_74(v);
}

void	small_parse_table_74(t_small_parse_table_array *v)
{
	v->a[1480] = actions(11);
	v->a[1481] = 2;
	v->a[1482] = anon_sym_while;
	v->a[1483] = anon_sym_until;
	v->a[1484] = actions(61);
	v->a[1485] = 2;
	v->a[1486] = sym_raw_string;
	v->a[1487] = sym_number;
	v->a[1488] = state(436);
	v->a[1489] = 5;
	v->a[1490] = sym_arithmetic_expansion;
	v->a[1491] = sym_string;
	v->a[1492] = sym_simple_expansion;
	v->a[1493] = sym_expansion;
	v->a[1494] = sym_command_substitution;
	v->a[1495] = actions(53);
	v->a[1496] = 7;
	v->a[1497] = anon_sym_LT;
	v->a[1498] = anon_sym_GT;
	v->a[1499] = anon_sym_GT_GT;
	small_parse_table_75(v);
}

/* EOF small_parse_table_14.c */
