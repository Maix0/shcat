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
	v->a[1600] = sym_command;
	v->a[1601] = sym__variable_assignments;
	v->a[1602] = 32;
	v->a[1603] = actions(3);
	v->a[1604] = 1;
	v->a[1605] = sym_comment;
	v->a[1606] = actions(9);
	v->a[1607] = 1;
	v->a[1608] = anon_sym_for;
	v->a[1609] = actions(13);
	v->a[1610] = 1;
	v->a[1611] = anon_sym_if;
	v->a[1612] = actions(15);
	v->a[1613] = 1;
	v->a[1614] = anon_sym_case;
	v->a[1615] = actions(17);
	v->a[1616] = 1;
	v->a[1617] = anon_sym_LPAREN;
	v->a[1618] = actions(19);
	v->a[1619] = 1;
	small_parse_table_81(v);
}

void	small_parse_table_81(t_small_parse_table_array *v)
{
	v->a[1620] = anon_sym_LBRACE;
	v->a[1621] = actions(41);
	v->a[1622] = 1;
	v->a[1623] = sym_word;
	v->a[1624] = actions(49);
	v->a[1625] = 1;
	v->a[1626] = anon_sym_BANG;
	v->a[1627] = actions(53);
	v->a[1628] = 1;
	v->a[1629] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[1630] = actions(55);
	v->a[1631] = 1;
	v->a[1632] = anon_sym_DOLLAR;
	v->a[1633] = actions(57);
	v->a[1634] = 1;
	v->a[1635] = anon_sym_DQUOTE;
	v->a[1636] = actions(61);
	v->a[1637] = 1;
	v->a[1638] = anon_sym_DOLLAR_LBRACE;
	v->a[1639] = actions(63);
	small_parse_table_82(v);
}

void	small_parse_table_82(t_small_parse_table_array *v)
{
	v->a[1640] = 1;
	v->a[1641] = anon_sym_DOLLAR_LPAREN;
	v->a[1642] = actions(65);
	v->a[1643] = 1;
	v->a[1644] = anon_sym_BQUOTE;
	v->a[1645] = actions(67);
	v->a[1646] = 1;
	v->a[1647] = sym_variable_name;
	v->a[1648] = actions(115);
	v->a[1649] = 1;
	v->a[1650] = anon_sym_LF;
	v->a[1651] = state(117);
	v->a[1652] = 1;
	v->a[1653] = aux_sym__statements_repeat1;
	v->a[1654] = state(271);
	v->a[1655] = 1;
	v->a[1656] = sym_command_name;
	v->a[1657] = state(288);
	v->a[1658] = 1;
	v->a[1659] = sym_variable_assignment;
	small_parse_table_83(v);
}

void	small_parse_table_83(t_small_parse_table_array *v)
{
	v->a[1660] = state(482);
	v->a[1661] = 1;
	v->a[1662] = aux_sym_command_repeat1;
	v->a[1663] = state(511);
	v->a[1664] = 1;
	v->a[1665] = aux_sym__case_item_last_repeat2;
	v->a[1666] = state(600);
	v->a[1667] = 1;
	v->a[1668] = sym_file_redirect;
	v->a[1669] = state(602);
	v->a[1670] = 1;
	v->a[1671] = sym_concatenation;
	v->a[1672] = state(1014);
	v->a[1673] = 1;
	v->a[1674] = sym_pipeline;
	v->a[1675] = state(1068);
	v->a[1676] = 1;
	v->a[1677] = aux_sym_redirected_statement_repeat2;
	v->a[1678] = state(1609);
	v->a[1679] = 1;
	small_parse_table_84(v);
}

void	small_parse_table_84(t_small_parse_table_array *v)
{
	v->a[1680] = sym__statement_not_pipeline;
	v->a[1681] = state(1769);
	v->a[1682] = 1;
	v->a[1683] = sym__statements;
	v->a[1684] = actions(11);
	v->a[1685] = 2;
	v->a[1686] = anon_sym_while;
	v->a[1687] = anon_sym_until;
	v->a[1688] = actions(59);
	v->a[1689] = 2;
	v->a[1690] = sym_raw_string;
	v->a[1691] = sym_number;
	v->a[1692] = state(425);
	v->a[1693] = 5;
	v->a[1694] = sym_arithmetic_expansion;
	v->a[1695] = sym_string;
	v->a[1696] = sym_simple_expansion;
	v->a[1697] = sym_expansion;
	v->a[1698] = sym_command_substitution;
	v->a[1699] = actions(51);
	small_parse_table_85(v);
}

/* EOF small_parse_table_16.c */
