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
	v->a[1401] = anon_sym_DOLLAR_LPAREN;
	v->a[1402] = actions(65);
	v->a[1403] = 1;
	v->a[1404] = anon_sym_BQUOTE;
	v->a[1405] = actions(67);
	v->a[1406] = 1;
	v->a[1407] = sym_variable_name;
	v->a[1408] = actions(115);
	v->a[1409] = 1;
	v->a[1410] = anon_sym_LF;
	v->a[1411] = state(117);
	v->a[1412] = 1;
	v->a[1413] = aux_sym__statements_repeat1;
	v->a[1414] = state(271);
	v->a[1415] = 1;
	v->a[1416] = sym_command_name;
	v->a[1417] = state(288);
	v->a[1418] = 1;
	v->a[1419] = sym_variable_assignment;
	small_parse_table_71(v);
}

void	small_parse_table_71(t_small_parse_table_array *v)
{
	v->a[1420] = state(482);
	v->a[1421] = 1;
	v->a[1422] = aux_sym_command_repeat1;
	v->a[1423] = state(511);
	v->a[1424] = 1;
	v->a[1425] = aux_sym__case_item_last_repeat2;
	v->a[1426] = state(600);
	v->a[1427] = 1;
	v->a[1428] = sym_file_redirect;
	v->a[1429] = state(602);
	v->a[1430] = 1;
	v->a[1431] = sym_concatenation;
	v->a[1432] = state(1014);
	v->a[1433] = 1;
	v->a[1434] = sym_pipeline;
	v->a[1435] = state(1068);
	v->a[1436] = 1;
	v->a[1437] = aux_sym_redirected_statement_repeat2;
	v->a[1438] = state(1609);
	v->a[1439] = 1;
	small_parse_table_72(v);
}

void	small_parse_table_72(t_small_parse_table_array *v)
{
	v->a[1440] = sym__statement_not_pipeline;
	v->a[1441] = state(1798);
	v->a[1442] = 1;
	v->a[1443] = sym__statements;
	v->a[1444] = actions(11);
	v->a[1445] = 2;
	v->a[1446] = anon_sym_while;
	v->a[1447] = anon_sym_until;
	v->a[1448] = actions(59);
	v->a[1449] = 2;
	v->a[1450] = sym_raw_string;
	v->a[1451] = sym_number;
	v->a[1452] = state(425);
	v->a[1453] = 5;
	v->a[1454] = sym_arithmetic_expansion;
	v->a[1455] = sym_string;
	v->a[1456] = sym_simple_expansion;
	v->a[1457] = sym_expansion;
	v->a[1458] = sym_command_substitution;
	v->a[1459] = actions(51);
	small_parse_table_73(v);
}

void	small_parse_table_73(t_small_parse_table_array *v)
{
	v->a[1460] = 7;
	v->a[1461] = anon_sym_LT;
	v->a[1462] = anon_sym_GT;
	v->a[1463] = anon_sym_GT_GT;
	v->a[1464] = anon_sym_LT_AMP;
	v->a[1465] = anon_sym_GT_AMP;
	v->a[1466] = anon_sym_GT_PIPE;
	v->a[1467] = anon_sym_LT_GT;
	v->a[1468] = state(936);
	v->a[1469] = 12;
	v->a[1470] = sym_redirected_statement;
	v->a[1471] = sym_for_statement;
	v->a[1472] = sym_while_statement;
	v->a[1473] = sym_if_statement;
	v->a[1474] = sym_case_statement;
	v->a[1475] = sym_function_definition;
	v->a[1476] = sym_compound_statement;
	v->a[1477] = sym_subshell;
	v->a[1478] = sym_list;
	v->a[1479] = sym_negated_command;
	small_parse_table_74(v);
}

void	small_parse_table_74(t_small_parse_table_array *v)
{
	v->a[1480] = sym_command;
	v->a[1481] = sym__variable_assignments;
	v->a[1482] = 32;
	v->a[1483] = actions(3);
	v->a[1484] = 1;
	v->a[1485] = sym_comment;
	v->a[1486] = actions(79);
	v->a[1487] = 1;
	v->a[1488] = sym_word;
	v->a[1489] = actions(81);
	v->a[1490] = 1;
	v->a[1491] = anon_sym_for;
	v->a[1492] = actions(85);
	v->a[1493] = 1;
	v->a[1494] = anon_sym_if;
	v->a[1495] = actions(87);
	v->a[1496] = 1;
	v->a[1497] = anon_sym_case;
	v->a[1498] = actions(89);
	v->a[1499] = 1;
	small_parse_table_75(v);
}

/* EOF small_parse_table_14.c */
