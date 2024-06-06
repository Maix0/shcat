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
	v->a[1500] = anon_sym_DOLLAR_LPAREN;
	v->a[1501] = actions(992);
	v->a[1502] = 1;
	v->a[1503] = anon_sym_BQUOTE;
	v->a[1504] = actions(995);
	v->a[1505] = 1;
	v->a[1506] = anon_sym_DOLLAR_BQUOTE;
	v->a[1507] = actions(998);
	v->a[1508] = 1;
	v->a[1509] = aux_sym__simple_variable_name_token1;
	v->a[1510] = actions(1001);
	v->a[1511] = 1;
	v->a[1512] = sym_test_operator;
	v->a[1513] = actions(1004);
	v->a[1514] = 1;
	v->a[1515] = sym__brace_start;
	v->a[1516] = state(879);
	v->a[1517] = 1;
	v->a[1518] = aux_sym__literal_repeat1;
	v->a[1519] = actions(961);
	small_parse_table_76(v);
}

void	small_parse_table_76(t_small_parse_table_array *v)
{
	v->a[1520] = 2;
	v->a[1521] = sym_raw_string;
	v->a[1522] = sym_word;
	v->a[1523] = actions(966);
	v->a[1524] = 2;
	v->a[1525] = sym_file_descriptor;
	v->a[1526] = aux_sym_heredoc_redirect_token1;
	v->a[1527] = state(275);
	v->a[1528] = 2;
	v->a[1529] = sym_concatenation;
	v->a[1530] = aux_sym_unset_command_repeat1;
	v->a[1531] = state(566);
	v->a[1532] = 7;
	v->a[1533] = sym_arithmetic_expansion;
	v->a[1534] = sym_brace_expression;
	v->a[1535] = sym_string;
	v->a[1536] = sym_number;
	v->a[1537] = sym_simple_expansion;
	v->a[1538] = sym_expansion;
	v->a[1539] = sym_command_substitution;
	small_parse_table_77(v);
}

void	small_parse_table_77(t_small_parse_table_array *v)
{
	v->a[1540] = actions(964);
	v->a[1541] = 22;
	v->a[1542] = anon_sym_esac;
	v->a[1543] = anon_sym_PIPE;
	v->a[1544] = anon_sym_SEMI_SEMI;
	v->a[1545] = anon_sym_SEMI_AMP;
	v->a[1546] = anon_sym_SEMI_SEMI_AMP;
	v->a[1547] = anon_sym_PIPE_AMP;
	v->a[1548] = anon_sym_AMP_AMP;
	v->a[1549] = anon_sym_PIPE_PIPE;
	v->a[1550] = anon_sym_LT;
	v->a[1551] = anon_sym_GT;
	v->a[1552] = anon_sym_GT_GT;
	v->a[1553] = anon_sym_AMP_GT;
	v->a[1554] = anon_sym_AMP_GT_GT;
	v->a[1555] = anon_sym_LT_AMP;
	v->a[1556] = anon_sym_GT_AMP;
	v->a[1557] = anon_sym_GT_PIPE;
	v->a[1558] = anon_sym_LT_AMP_DASH;
	v->a[1559] = anon_sym_GT_AMP_DASH;
	small_parse_table_78(v);
}

void	small_parse_table_78(t_small_parse_table_array *v)
{
	v->a[1560] = anon_sym_LT_LT;
	v->a[1561] = anon_sym_LT_LT_DASH;
	v->a[1562] = anon_sym_AMP;
	v->a[1563] = anon_sym_SEMI;
	v->a[1564] = 21;
	v->a[1565] = actions(3);
	v->a[1566] = 1;
	v->a[1567] = sym_comment;
	v->a[1568] = actions(1009);
	v->a[1569] = 1;
	v->a[1570] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[1571] = actions(1011);
	v->a[1572] = 1;
	v->a[1573] = anon_sym_DOLLAR;
	v->a[1574] = actions(1013);
	v->a[1575] = 1;
	v->a[1576] = sym__special_character;
	v->a[1577] = actions(1015);
	v->a[1578] = 1;
	v->a[1579] = anon_sym_DQUOTE;
	small_parse_table_79(v);
}

void	small_parse_table_79(t_small_parse_table_array *v)
{
	v->a[1580] = actions(1017);
	v->a[1581] = 1;
	v->a[1582] = aux_sym_number_token1;
	v->a[1583] = actions(1019);
	v->a[1584] = 1;
	v->a[1585] = aux_sym_number_token2;
	v->a[1586] = actions(1021);
	v->a[1587] = 1;
	v->a[1588] = anon_sym_DOLLAR_LBRACE;
	v->a[1589] = actions(1023);
	v->a[1590] = 1;
	v->a[1591] = anon_sym_DOLLAR_LPAREN;
	v->a[1592] = actions(1025);
	v->a[1593] = 1;
	v->a[1594] = anon_sym_BQUOTE;
	v->a[1595] = actions(1027);
	v->a[1596] = 1;
	v->a[1597] = anon_sym_DOLLAR_BQUOTE;
	v->a[1598] = actions(1029);
	v->a[1599] = 1;
	small_parse_table_80(v);
}

/* EOF small_parse_table_15.c */
