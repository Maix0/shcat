/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_15.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_75(t_small_parse_table_array *v)
{
	v->a[1500] = 1;
	v->a[1501] = sym__brace_start;
	v->a[1502] = state(541);
	v->a[1503] = 1;
	v->a[1504] = aux_sym_command_repeat2;
	v->a[1505] = state(1175);
	v->a[1506] = 1;
	v->a[1507] = aux_sym__literal_repeat1;
	v->a[1508] = state(1328);
	v->a[1509] = 1;
	v->a[1510] = sym_concatenation;
	v->a[1511] = state(1329);
	v->a[1512] = 1;
	v->a[1513] = sym_herestring_redirect;
	v->a[1514] = actions(1632);
	v->a[1515] = 2;
	v->a[1516] = anon_sym_LPAREN_LPAREN;
	v->a[1517] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[1518] = actions(1635);
	v->a[1519] = 2;
	small_parse_table_76(v);
}

void	small_parse_table_76(t_small_parse_table_array *v)
{
	v->a[1520] = anon_sym_EQ_EQ;
	v->a[1521] = anon_sym_EQ_TILDE;
	v->a[1522] = actions(1671);
	v->a[1523] = 2;
	v->a[1524] = anon_sym_LT_LPAREN;
	v->a[1525] = anon_sym_GT_LPAREN;
	v->a[1526] = actions(1629);
	v->a[1527] = 3;
	v->a[1528] = sym_raw_string;
	v->a[1529] = sym_ansi_c_string;
	v->a[1530] = sym_word;
	v->a[1531] = state(985);
	v->a[1532] = 9;
	v->a[1533] = sym_arithmetic_expansion;
	v->a[1534] = sym_brace_expression;
	v->a[1535] = sym_string;
	v->a[1536] = sym_translated_string;
	v->a[1537] = sym_number;
	v->a[1538] = sym_simple_expansion;
	v->a[1539] = sym_expansion;
	small_parse_table_77(v);
}

void	small_parse_table_77(t_small_parse_table_array *v)
{
	v->a[1540] = sym_command_substitution;
	v->a[1541] = sym_process_substitution;
	v->a[1542] = actions(1486);
	v->a[1543] = 21;
	v->a[1544] = anon_sym_SEMI;
	v->a[1545] = anon_sym_PIPE_PIPE;
	v->a[1546] = anon_sym_AMP_AMP;
	v->a[1547] = anon_sym_PIPE;
	v->a[1548] = anon_sym_AMP;
	v->a[1549] = anon_sym_LT;
	v->a[1550] = anon_sym_GT;
	v->a[1551] = anon_sym_LT_LT;
	v->a[1552] = anon_sym_GT_GT;
	v->a[1553] = anon_sym_SEMI_SEMI;
	v->a[1554] = anon_sym_SEMI_AMP;
	v->a[1555] = anon_sym_SEMI_SEMI_AMP;
	v->a[1556] = anon_sym_PIPE_AMP;
	v->a[1557] = anon_sym_AMP_GT;
	v->a[1558] = anon_sym_AMP_GT_GT;
	v->a[1559] = anon_sym_LT_AMP;
	small_parse_table_78(v);
}

void	small_parse_table_78(t_small_parse_table_array *v)
{
	v->a[1560] = anon_sym_GT_AMP;
	v->a[1561] = anon_sym_GT_PIPE;
	v->a[1562] = anon_sym_LT_AMP_DASH;
	v->a[1563] = anon_sym_GT_AMP_DASH;
	v->a[1564] = anon_sym_LT_LT_DASH;
	v->a[1565] = 26;
	v->a[1566] = actions(3);
	v->a[1567] = 1;
	v->a[1568] = sym_comment;
	v->a[1569] = actions(1450);
	v->a[1570] = 1;
	v->a[1571] = anon_sym_LT_LT_LT;
	v->a[1572] = actions(1452);
	v->a[1573] = 1;
	v->a[1574] = anon_sym_DOLLAR_LBRACK;
	v->a[1575] = actions(1454);
	v->a[1576] = 1;
	v->a[1577] = anon_sym_DOLLAR;
	v->a[1578] = actions(1456);
	v->a[1579] = 1;
	small_parse_table_79(v);
}

void	small_parse_table_79(t_small_parse_table_array *v)
{
	v->a[1580] = sym__special_character;
	v->a[1581] = actions(1458);
	v->a[1582] = 1;
	v->a[1583] = anon_sym_DQUOTE;
	v->a[1584] = actions(1460);
	v->a[1585] = 1;
	v->a[1586] = aux_sym_number_token1;
	v->a[1587] = actions(1462);
	v->a[1588] = 1;
	v->a[1589] = aux_sym_number_token2;
	v->a[1590] = actions(1464);
	v->a[1591] = 1;
	v->a[1592] = anon_sym_DOLLAR_LBRACE;
	v->a[1593] = actions(1466);
	v->a[1594] = 1;
	v->a[1595] = anon_sym_DOLLAR_LPAREN;
	v->a[1596] = actions(1468);
	v->a[1597] = 1;
	v->a[1598] = anon_sym_BQUOTE;
	v->a[1599] = actions(1470);
	small_parse_table_80(v);
}

/* EOF small_parse_table_15.c */
