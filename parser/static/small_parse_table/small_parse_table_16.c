/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_16.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_80(t_small_parse_table_array *v)
{
	v->a[1600] = actions(53);
	v->a[1601] = 1;
	v->a[1602] = anon_sym_BANG;
	v->a[1603] = actions(59);
	v->a[1604] = 1;
	v->a[1605] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[1606] = actions(61);
	v->a[1607] = 1;
	v->a[1608] = anon_sym_DOLLAR;
	v->a[1609] = actions(63);
	v->a[1610] = 1;
	v->a[1611] = anon_sym_DQUOTE;
	v->a[1612] = actions(67);
	v->a[1613] = 1;
	v->a[1614] = anon_sym_DOLLAR_LBRACE;
	v->a[1615] = actions(69);
	v->a[1616] = 1;
	v->a[1617] = anon_sym_DOLLAR_LPAREN;
	v->a[1618] = actions(71);
	v->a[1619] = 1;
	small_parse_table_81(v);
}

void	small_parse_table_81(t_small_parse_table_array *v)
{
	v->a[1620] = anon_sym_BQUOTE;
	v->a[1621] = actions(73);
	v->a[1622] = 1;
	v->a[1623] = sym_file_descriptor;
	v->a[1624] = actions(75);
	v->a[1625] = 1;
	v->a[1626] = sym_variable_name;
	v->a[1627] = actions(99);
	v->a[1628] = 1;
	v->a[1629] = anon_sym_LF;
	v->a[1630] = state(130);
	v->a[1631] = 1;
	v->a[1632] = aux_sym__statements_repeat1;
	v->a[1633] = state(191);
	v->a[1634] = 1;
	v->a[1635] = sym_command_name;
	v->a[1636] = state(262);
	v->a[1637] = 1;
	v->a[1638] = sym_variable_assignment;
	v->a[1639] = state(624);
	small_parse_table_82(v);
}

void	small_parse_table_82(t_small_parse_table_array *v)
{
	v->a[1640] = 1;
	v->a[1641] = sym_concatenation;
	v->a[1642] = state(709);
	v->a[1643] = 1;
	v->a[1644] = aux_sym__case_item_last_repeat2;
	v->a[1645] = state(726);
	v->a[1646] = 1;
	v->a[1647] = sym_file_redirect;
	v->a[1648] = state(733);
	v->a[1649] = 1;
	v->a[1650] = aux_sym_command_repeat1;
	v->a[1651] = state(1216);
	v->a[1652] = 1;
	v->a[1653] = sym_pipeline;
	v->a[1654] = state(1307);
	v->a[1655] = 1;
	v->a[1656] = aux_sym_redirected_statement_repeat2;
	v->a[1657] = state(2117);
	v->a[1658] = 1;
	v->a[1659] = sym__statement_not_pipeline;
	small_parse_table_83(v);
}

void	small_parse_table_83(t_small_parse_table_array *v)
{
	v->a[1660] = state(2152);
	v->a[1661] = 1;
	v->a[1662] = sym__statements;
	v->a[1663] = actions(11);
	v->a[1664] = 2;
	v->a[1665] = anon_sym_while;
	v->a[1666] = anon_sym_until;
	v->a[1667] = actions(57);
	v->a[1668] = 2;
	v->a[1669] = anon_sym_LT_AMP_DASH;
	v->a[1670] = anon_sym_GT_AMP_DASH;
	v->a[1671] = actions(65);
	v->a[1672] = 2;
	v->a[1673] = sym_raw_string;
	v->a[1674] = sym_number;
	v->a[1675] = state(420);
	v->a[1676] = 5;
	v->a[1677] = sym_arithmetic_expansion;
	v->a[1678] = sym_string;
	v->a[1679] = sym_simple_expansion;
	small_parse_table_84(v);
}

void	small_parse_table_84(t_small_parse_table_array *v)
{
	v->a[1680] = sym_expansion;
	v->a[1681] = sym_command_substitution;
	v->a[1682] = actions(55);
	v->a[1683] = 8;
	v->a[1684] = anon_sym_LT;
	v->a[1685] = anon_sym_GT;
	v->a[1686] = anon_sym_GT_GT;
	v->a[1687] = anon_sym_AMP_GT;
	v->a[1688] = anon_sym_AMP_GT_GT;
	v->a[1689] = anon_sym_LT_AMP;
	v->a[1690] = anon_sym_GT_AMP;
	v->a[1691] = anon_sym_GT_PIPE;
	v->a[1692] = state(1146);
	v->a[1693] = 12;
	v->a[1694] = sym_redirected_statement;
	v->a[1695] = sym_for_statement;
	v->a[1696] = sym_while_statement;
	v->a[1697] = sym_if_statement;
	v->a[1698] = sym_case_statement;
	v->a[1699] = sym_function_definition;
	small_parse_table_85(v);
}

/* EOF small_parse_table_16.c */
