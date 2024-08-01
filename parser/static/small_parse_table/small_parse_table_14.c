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
	v->a[1400] = actions(11);
	v->a[1401] = 2;
	v->a[1402] = anon_sym_while;
	v->a[1403] = anon_sym_until;
	v->a[1404] = actions(59);
	v->a[1405] = 2;
	v->a[1406] = sym_raw_string;
	v->a[1407] = sym_number;
	v->a[1408] = actions(51);
	v->a[1409] = 3;
	v->a[1410] = anon_sym_LT;
	v->a[1411] = anon_sym_GT;
	v->a[1412] = anon_sym_GT_GT;
	v->a[1413] = state(401);
	v->a[1414] = 5;
	v->a[1415] = sym_arithmetic_expansion;
	v->a[1416] = sym_string;
	v->a[1417] = sym_simple_expansion;
	v->a[1418] = sym_expansion;
	v->a[1419] = sym_command_substitution;
	small_parse_table_71(v);
}

void	small_parse_table_71(t_small_parse_table_array *v)
{
	v->a[1420] = state(972);
	v->a[1421] = 12;
	v->a[1422] = sym_redirected_statement;
	v->a[1423] = sym_for_statement;
	v->a[1424] = sym_while_statement;
	v->a[1425] = sym_if_statement;
	v->a[1426] = sym_case_statement;
	v->a[1427] = sym_function_definition;
	v->a[1428] = sym_compound_statement;
	v->a[1429] = sym_subshell;
	v->a[1430] = sym_list;
	v->a[1431] = sym_negated_command;
	v->a[1432] = sym_command;
	v->a[1433] = sym__variable_assignments;
	v->a[1434] = 32;
	v->a[1435] = actions(3);
	v->a[1436] = 1;
	v->a[1437] = sym_comment;
	v->a[1438] = actions(79);
	v->a[1439] = 1;
	small_parse_table_72(v);
}

void	small_parse_table_72(t_small_parse_table_array *v)
{
	v->a[1440] = sym_word;
	v->a[1441] = actions(81);
	v->a[1442] = 1;
	v->a[1443] = anon_sym_for;
	v->a[1444] = actions(85);
	v->a[1445] = 1;
	v->a[1446] = anon_sym_if;
	v->a[1447] = actions(87);
	v->a[1448] = 1;
	v->a[1449] = anon_sym_case;
	v->a[1450] = actions(89);
	v->a[1451] = 1;
	v->a[1452] = anon_sym_LPAREN;
	v->a[1453] = actions(93);
	v->a[1454] = 1;
	v->a[1455] = anon_sym_LBRACE;
	v->a[1456] = actions(95);
	v->a[1457] = 1;
	v->a[1458] = anon_sym_BANG;
	v->a[1459] = actions(99);
	small_parse_table_73(v);
}

void	small_parse_table_73(t_small_parse_table_array *v)
{
	v->a[1460] = 1;
	v->a[1461] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[1462] = actions(101);
	v->a[1463] = 1;
	v->a[1464] = anon_sym_DOLLAR;
	v->a[1465] = actions(103);
	v->a[1466] = 1;
	v->a[1467] = anon_sym_DQUOTE;
	v->a[1468] = actions(107);
	v->a[1469] = 1;
	v->a[1470] = anon_sym_DOLLAR_LBRACE;
	v->a[1471] = actions(109);
	v->a[1472] = 1;
	v->a[1473] = anon_sym_DOLLAR_LPAREN;
	v->a[1474] = actions(111);
	v->a[1475] = 1;
	v->a[1476] = anon_sym_BQUOTE;
	v->a[1477] = actions(113);
	v->a[1478] = 1;
	v->a[1479] = sym_variable_name;
	small_parse_table_74(v);
}

void	small_parse_table_74(t_small_parse_table_array *v)
{
	v->a[1480] = actions(115);
	v->a[1481] = 1;
	v->a[1482] = anon_sym_LF;
	v->a[1483] = state(104);
	v->a[1484] = 1;
	v->a[1485] = aux_sym__statements_repeat1;
	v->a[1486] = state(170);
	v->a[1487] = 1;
	v->a[1488] = sym_command_name;
	v->a[1489] = state(177);
	v->a[1490] = 1;
	v->a[1491] = sym_variable_assignment;
	v->a[1492] = state(326);
	v->a[1493] = 1;
	v->a[1494] = aux_sym__case_item_last_repeat2;
	v->a[1495] = state(408);
	v->a[1496] = 1;
	v->a[1497] = aux_sym_command_repeat1;
	v->a[1498] = state(541);
	v->a[1499] = 1;
	small_parse_table_75(v);
}

/* EOF small_parse_table_14.c */
