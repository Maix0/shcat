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
	v->a[1400] = aux_sym_redirected_statement_repeat2;
	v->a[1401] = state(2254);
	v->a[1402] = 1;
	v->a[1403] = sym__statement_not_pipeline;
	v->a[1404] = state(2260);
	v->a[1405] = 1;
	v->a[1406] = sym__statements;
	v->a[1407] = actions(93);
	v->a[1408] = 2;
	v->a[1409] = anon_sym_while;
	v->a[1410] = anon_sym_until;
	v->a[1411] = actions(107);
	v->a[1412] = 2;
	v->a[1413] = anon_sym_LT_AMP_DASH;
	v->a[1414] = anon_sym_GT_AMP_DASH;
	v->a[1415] = actions(115);
	v->a[1416] = 2;
	v->a[1417] = sym_raw_string;
	v->a[1418] = sym_number;
	v->a[1419] = state(282);
	small_parse_table_71(v);
}

void	small_parse_table_71(t_small_parse_table_array *v)
{
	v->a[1420] = 5;
	v->a[1421] = sym_arithmetic_expansion;
	v->a[1422] = sym_string;
	v->a[1423] = sym_simple_expansion;
	v->a[1424] = sym_expansion;
	v->a[1425] = sym_command_substitution;
	v->a[1426] = actions(105);
	v->a[1427] = 8;
	v->a[1428] = anon_sym_LT;
	v->a[1429] = anon_sym_GT;
	v->a[1430] = anon_sym_GT_GT;
	v->a[1431] = anon_sym_AMP_GT;
	v->a[1432] = anon_sym_AMP_GT_GT;
	v->a[1433] = anon_sym_LT_AMP;
	v->a[1434] = anon_sym_GT_AMP;
	v->a[1435] = anon_sym_GT_PIPE;
	v->a[1436] = state(1296);
	v->a[1437] = 12;
	v->a[1438] = sym_redirected_statement;
	v->a[1439] = sym_for_statement;
	small_parse_table_72(v);
}

void	small_parse_table_72(t_small_parse_table_array *v)
{
	v->a[1440] = sym_while_statement;
	v->a[1441] = sym_if_statement;
	v->a[1442] = sym_case_statement;
	v->a[1443] = sym_function_definition;
	v->a[1444] = sym_compound_statement;
	v->a[1445] = sym_subshell;
	v->a[1446] = sym_list;
	v->a[1447] = sym_negated_command;
	v->a[1448] = sym_command;
	v->a[1449] = sym_variable_assignments;
	v->a[1450] = 34;
	v->a[1451] = actions(3);
	v->a[1452] = 1;
	v->a[1453] = sym_comment;
	v->a[1454] = actions(87);
	v->a[1455] = 1;
	v->a[1456] = anon_sym_LF;
	v->a[1457] = actions(89);
	v->a[1458] = 1;
	v->a[1459] = sym_word;
	small_parse_table_73(v);
}

void	small_parse_table_73(t_small_parse_table_array *v)
{
	v->a[1460] = actions(91);
	v->a[1461] = 1;
	v->a[1462] = anon_sym_for;
	v->a[1463] = actions(95);
	v->a[1464] = 1;
	v->a[1465] = anon_sym_if;
	v->a[1466] = actions(97);
	v->a[1467] = 1;
	v->a[1468] = anon_sym_case;
	v->a[1469] = actions(99);
	v->a[1470] = 1;
	v->a[1471] = anon_sym_LPAREN;
	v->a[1472] = actions(101);
	v->a[1473] = 1;
	v->a[1474] = anon_sym_LBRACE;
	v->a[1475] = actions(103);
	v->a[1476] = 1;
	v->a[1477] = anon_sym_BANG;
	v->a[1478] = actions(109);
	v->a[1479] = 1;
	small_parse_table_74(v);
}

void	small_parse_table_74(t_small_parse_table_array *v)
{
	v->a[1480] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[1481] = actions(111);
	v->a[1482] = 1;
	v->a[1483] = anon_sym_DOLLAR;
	v->a[1484] = actions(113);
	v->a[1485] = 1;
	v->a[1486] = anon_sym_DQUOTE;
	v->a[1487] = actions(117);
	v->a[1488] = 1;
	v->a[1489] = anon_sym_DOLLAR_LBRACE;
	v->a[1490] = actions(119);
	v->a[1491] = 1;
	v->a[1492] = anon_sym_DOLLAR_LPAREN;
	v->a[1493] = actions(121);
	v->a[1494] = 1;
	v->a[1495] = anon_sym_BQUOTE;
	v->a[1496] = actions(123);
	v->a[1497] = 1;
	v->a[1498] = sym_file_descriptor;
	v->a[1499] = actions(125);
	small_parse_table_75(v);
}

/* EOF small_parse_table_14.c */
