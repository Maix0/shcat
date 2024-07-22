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
	v->a[1600] = state(2077);
	v->a[1601] = 1;
	v->a[1602] = sym__statements;
	v->a[1603] = actions(11);
	v->a[1604] = 2;
	v->a[1605] = anon_sym_while;
	v->a[1606] = anon_sym_until;
	v->a[1607] = actions(61);
	v->a[1608] = 2;
	v->a[1609] = sym_raw_string;
	v->a[1610] = sym_number;
	v->a[1611] = state(455);
	v->a[1612] = 5;
	v->a[1613] = sym_arithmetic_expansion;
	v->a[1614] = sym_string;
	v->a[1615] = sym_simple_expansion;
	v->a[1616] = sym_expansion;
	v->a[1617] = sym_command_substitution;
	v->a[1618] = actions(53);
	v->a[1619] = 7;
	small_parse_table_81(v);
}

void	small_parse_table_81(t_small_parse_table_array *v)
{
	v->a[1620] = anon_sym_LT;
	v->a[1621] = anon_sym_GT;
	v->a[1622] = anon_sym_GT_GT;
	v->a[1623] = anon_sym_LT_AMP;
	v->a[1624] = anon_sym_GT_AMP;
	v->a[1625] = anon_sym_GT_PIPE;
	v->a[1626] = anon_sym_LT_GT;
	v->a[1627] = state(1091);
	v->a[1628] = 12;
	v->a[1629] = sym_redirected_statement;
	v->a[1630] = sym_for_statement;
	v->a[1631] = sym_while_statement;
	v->a[1632] = sym_if_statement;
	v->a[1633] = sym_case_statement;
	v->a[1634] = sym_function_definition;
	v->a[1635] = sym_compound_statement;
	v->a[1636] = sym_subshell;
	v->a[1637] = sym_list;
	v->a[1638] = sym_negated_command;
	v->a[1639] = sym_command;
	small_parse_table_82(v);
}

void	small_parse_table_82(t_small_parse_table_array *v)
{
	v->a[1640] = sym__variable_assignments;
	v->a[1641] = 33;
	v->a[1642] = actions(3);
	v->a[1643] = 1;
	v->a[1644] = sym_comment;
	v->a[1645] = actions(9);
	v->a[1646] = 1;
	v->a[1647] = anon_sym_for;
	v->a[1648] = actions(13);
	v->a[1649] = 1;
	v->a[1650] = anon_sym_if;
	v->a[1651] = actions(15);
	v->a[1652] = 1;
	v->a[1653] = anon_sym_case;
	v->a[1654] = actions(17);
	v->a[1655] = 1;
	v->a[1656] = anon_sym_LPAREN;
	v->a[1657] = actions(19);
	v->a[1658] = 1;
	v->a[1659] = anon_sym_LBRACE;
	small_parse_table_83(v);
}

void	small_parse_table_83(t_small_parse_table_array *v)
{
	v->a[1660] = actions(43);
	v->a[1661] = 1;
	v->a[1662] = sym_word;
	v->a[1663] = actions(51);
	v->a[1664] = 1;
	v->a[1665] = anon_sym_BANG;
	v->a[1666] = actions(55);
	v->a[1667] = 1;
	v->a[1668] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[1669] = actions(57);
	v->a[1670] = 1;
	v->a[1671] = anon_sym_DOLLAR;
	v->a[1672] = actions(59);
	v->a[1673] = 1;
	v->a[1674] = anon_sym_DQUOTE;
	v->a[1675] = actions(63);
	v->a[1676] = 1;
	v->a[1677] = anon_sym_DOLLAR_LBRACE;
	v->a[1678] = actions(65);
	v->a[1679] = 1;
	small_parse_table_84(v);
}

void	small_parse_table_84(t_small_parse_table_array *v)
{
	v->a[1680] = anon_sym_DOLLAR_LPAREN;
	v->a[1681] = actions(67);
	v->a[1682] = 1;
	v->a[1683] = anon_sym_BQUOTE;
	v->a[1684] = actions(69);
	v->a[1685] = 1;
	v->a[1686] = sym_file_descriptor;
	v->a[1687] = actions(71);
	v->a[1688] = 1;
	v->a[1689] = sym_variable_name;
	v->a[1690] = actions(125);
	v->a[1691] = 1;
	v->a[1692] = anon_sym_LF;
	v->a[1693] = state(119);
	v->a[1694] = 1;
	v->a[1695] = aux_sym__statements_repeat1;
	v->a[1696] = state(183);
	v->a[1697] = 1;
	v->a[1698] = sym_command_name;
	v->a[1699] = state(323);
	small_parse_table_85(v);
}

/* EOF small_parse_table_16.c */
