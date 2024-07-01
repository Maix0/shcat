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
	v->a[1400] = sym_expansion;
	v->a[1401] = sym_command_substitution;
	v->a[1402] = actions(55);
	v->a[1403] = 6;
	v->a[1404] = anon_sym_LT;
	v->a[1405] = anon_sym_GT;
	v->a[1406] = anon_sym_GT_GT;
	v->a[1407] = anon_sym_LT_AMP;
	v->a[1408] = anon_sym_GT_AMP;
	v->a[1409] = anon_sym_GT_PIPE;
	v->a[1410] = state(1179);
	v->a[1411] = 12;
	v->a[1412] = sym_redirected_statement;
	v->a[1413] = sym_for_statement;
	v->a[1414] = sym_while_statement;
	v->a[1415] = sym_if_statement;
	v->a[1416] = sym_case_statement;
	v->a[1417] = sym_function_definition;
	v->a[1418] = sym_compound_statement;
	v->a[1419] = sym_subshell;
	small_parse_table_71(v);
}

void	small_parse_table_71(t_small_parse_table_array *v)
{
	v->a[1420] = sym_list;
	v->a[1421] = sym_negated_command;
	v->a[1422] = sym_command;
	v->a[1423] = sym__variable_assignments;
	v->a[1424] = 34;
	v->a[1425] = actions(3);
	v->a[1426] = 1;
	v->a[1427] = sym_comment;
	v->a[1428] = actions(9);
	v->a[1429] = 1;
	v->a[1430] = anon_sym_for;
	v->a[1431] = actions(13);
	v->a[1432] = 1;
	v->a[1433] = anon_sym_if;
	v->a[1434] = actions(15);
	v->a[1435] = 1;
	v->a[1436] = anon_sym_case;
	v->a[1437] = actions(17);
	v->a[1438] = 1;
	v->a[1439] = anon_sym_LPAREN;
	small_parse_table_72(v);
}

void	small_parse_table_72(t_small_parse_table_array *v)
{
	v->a[1440] = actions(19);
	v->a[1441] = 1;
	v->a[1442] = anon_sym_LBRACE;
	v->a[1443] = actions(45);
	v->a[1444] = 1;
	v->a[1445] = sym_word;
	v->a[1446] = actions(53);
	v->a[1447] = 1;
	v->a[1448] = anon_sym_BANG;
	v->a[1449] = actions(59);
	v->a[1450] = 1;
	v->a[1451] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[1452] = actions(61);
	v->a[1453] = 1;
	v->a[1454] = anon_sym_DOLLAR;
	v->a[1455] = actions(63);
	v->a[1456] = 1;
	v->a[1457] = anon_sym_DQUOTE;
	v->a[1458] = actions(67);
	v->a[1459] = 1;
	small_parse_table_73(v);
}

void	small_parse_table_73(t_small_parse_table_array *v)
{
	v->a[1460] = anon_sym_DOLLAR_LBRACE;
	v->a[1461] = actions(69);
	v->a[1462] = 1;
	v->a[1463] = anon_sym_DOLLAR_LPAREN;
	v->a[1464] = actions(71);
	v->a[1465] = 1;
	v->a[1466] = anon_sym_BQUOTE;
	v->a[1467] = actions(73);
	v->a[1468] = 1;
	v->a[1469] = sym_file_descriptor;
	v->a[1470] = actions(75);
	v->a[1471] = 1;
	v->a[1472] = sym_variable_name;
	v->a[1473] = actions(87);
	v->a[1474] = 1;
	v->a[1475] = anon_sym_LF;
	v->a[1476] = state(135);
	v->a[1477] = 1;
	v->a[1478] = aux_sym__statements_repeat1;
	v->a[1479] = state(189);
	small_parse_table_74(v);
}

void	small_parse_table_74(t_small_parse_table_array *v)
{
	v->a[1480] = 1;
	v->a[1481] = sym_command_name;
	v->a[1482] = state(303);
	v->a[1483] = 1;
	v->a[1484] = sym_variable_assignment;
	v->a[1485] = state(650);
	v->a[1486] = 1;
	v->a[1487] = sym_concatenation;
	v->a[1488] = state(678);
	v->a[1489] = 1;
	v->a[1490] = aux_sym__case_item_last_repeat2;
	v->a[1491] = state(712);
	v->a[1492] = 1;
	v->a[1493] = sym_file_redirect;
	v->a[1494] = state(713);
	v->a[1495] = 1;
	v->a[1496] = aux_sym_command_repeat1;
	v->a[1497] = state(1227);
	v->a[1498] = 1;
	v->a[1499] = sym_pipeline;
	small_parse_table_75(v);
}

/* EOF small_parse_table_14.c */
