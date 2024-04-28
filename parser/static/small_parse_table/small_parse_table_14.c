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
	v->a[1400] = anon_sym_EQ_EQ;
	v->a[1401] = anon_sym_EQ_TILDE;
	v->a[1402] = actions(1432);
	v->a[1403] = 2;
	v->a[1404] = anon_sym_LT_LPAREN;
	v->a[1405] = anon_sym_GT_LPAREN;
	v->a[1406] = actions(1627);
	v->a[1407] = 2;
	v->a[1408] = sym_file_descriptor;
	v->a[1409] = aux_sym_heredoc_redirect_token1;
	v->a[1410] = actions(1400);
	v->a[1411] = 3;
	v->a[1412] = sym_raw_string;
	v->a[1413] = sym_ansi_c_string;
	v->a[1414] = sym_word;
	v->a[1415] = state(874);
	v->a[1416] = 9;
	v->a[1417] = sym_arithmetic_expansion;
	v->a[1418] = sym_brace_expression;
	v->a[1419] = sym_string;
	small_parse_table_71(v);
}

void	small_parse_table_71(t_small_parse_table_array *v)
{
	v->a[1420] = sym_translated_string;
	v->a[1421] = sym_number;
	v->a[1422] = sym_simple_expansion;
	v->a[1423] = sym_expansion;
	v->a[1424] = sym_command_substitution;
	v->a[1425] = sym_process_substitution;
	v->a[1426] = actions(1625);
	v->a[1427] = 22;
	v->a[1428] = anon_sym_SEMI;
	v->a[1429] = anon_sym_PIPE_PIPE;
	v->a[1430] = anon_sym_AMP_AMP;
	v->a[1431] = anon_sym_PIPE;
	v->a[1432] = anon_sym_AMP;
	v->a[1433] = anon_sym_LT;
	v->a[1434] = anon_sym_GT;
	v->a[1435] = anon_sym_LT_LT;
	v->a[1436] = anon_sym_GT_GT;
	v->a[1437] = anon_sym_esac;
	v->a[1438] = anon_sym_SEMI_SEMI;
	v->a[1439] = anon_sym_SEMI_AMP;
	small_parse_table_72(v);
}

void	small_parse_table_72(t_small_parse_table_array *v)
{
	v->a[1440] = anon_sym_SEMI_SEMI_AMP;
	v->a[1441] = anon_sym_PIPE_AMP;
	v->a[1442] = anon_sym_AMP_GT;
	v->a[1443] = anon_sym_AMP_GT_GT;
	v->a[1444] = anon_sym_LT_AMP;
	v->a[1445] = anon_sym_GT_AMP;
	v->a[1446] = anon_sym_GT_PIPE;
	v->a[1447] = anon_sym_LT_AMP_DASH;
	v->a[1448] = anon_sym_GT_AMP_DASH;
	v->a[1449] = anon_sym_LT_LT_DASH;
	v->a[1450] = 27;
	v->a[1451] = actions(3);
	v->a[1452] = 1;
	v->a[1453] = sym_comment;
	v->a[1454] = actions(1491);
	v->a[1455] = 1;
	v->a[1456] = aux_sym_heredoc_redirect_token1;
	v->a[1457] = actions(1638);
	v->a[1458] = 1;
	v->a[1459] = anon_sym_LT_LT_LT;
	small_parse_table_73(v);
}

void	small_parse_table_73(t_small_parse_table_array *v)
{
	v->a[1460] = actions(1641);
	v->a[1461] = 1;
	v->a[1462] = anon_sym_DOLLAR_LBRACK;
	v->a[1463] = actions(1644);
	v->a[1464] = 1;
	v->a[1465] = anon_sym_DOLLAR;
	v->a[1466] = actions(1647);
	v->a[1467] = 1;
	v->a[1468] = sym__special_character;
	v->a[1469] = actions(1650);
	v->a[1470] = 1;
	v->a[1471] = anon_sym_DQUOTE;
	v->a[1472] = actions(1653);
	v->a[1473] = 1;
	v->a[1474] = aux_sym_number_token1;
	v->a[1475] = actions(1656);
	v->a[1476] = 1;
	v->a[1477] = aux_sym_number_token2;
	v->a[1478] = actions(1659);
	v->a[1479] = 1;
	small_parse_table_74(v);
}

void	small_parse_table_74(t_small_parse_table_array *v)
{
	v->a[1480] = anon_sym_DOLLAR_LBRACE;
	v->a[1481] = actions(1662);
	v->a[1482] = 1;
	v->a[1483] = anon_sym_DOLLAR_LPAREN;
	v->a[1484] = actions(1665);
	v->a[1485] = 1;
	v->a[1486] = anon_sym_BQUOTE;
	v->a[1487] = actions(1668);
	v->a[1488] = 1;
	v->a[1489] = anon_sym_DOLLAR_BQUOTE;
	v->a[1490] = actions(1674);
	v->a[1491] = 1;
	v->a[1492] = sym_file_descriptor;
	v->a[1493] = actions(1677);
	v->a[1494] = 1;
	v->a[1495] = sym_test_operator;
	v->a[1496] = actions(1680);
	v->a[1497] = 1;
	v->a[1498] = sym__bare_dollar;
	v->a[1499] = actions(1683);
	small_parse_table_75(v);
}

/* EOF small_parse_table_14.c */
