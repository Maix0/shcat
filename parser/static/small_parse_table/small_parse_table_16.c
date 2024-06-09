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
	v->a[1600] = aux_sym_redirected_statement_repeat2;
	v->a[1601] = state(1190);
	v->a[1602] = 1;
	v->a[1603] = sym_pipeline;
	v->a[1604] = state(2027);
	v->a[1605] = 1;
	v->a[1606] = sym__statements;
	v->a[1607] = state(2040);
	v->a[1608] = 1;
	v->a[1609] = sym__statement_not_pipeline;
	v->a[1610] = actions(99);
	v->a[1611] = 2;
	v->a[1612] = anon_sym_while;
	v->a[1613] = anon_sym_until;
	v->a[1614] = actions(115);
	v->a[1615] = 2;
	v->a[1616] = anon_sym_LT_AMP_DASH;
	v->a[1617] = anon_sym_GT_AMP_DASH;
	v->a[1618] = state(282);
	v->a[1619] = 6;
	small_parse_table_81(v);
}

void	small_parse_table_81(t_small_parse_table_array *v)
{
	v->a[1620] = sym_arithmetic_expansion;
	v->a[1621] = sym_string;
	v->a[1622] = sym_number;
	v->a[1623] = sym_simple_expansion;
	v->a[1624] = sym_expansion;
	v->a[1625] = sym_command_substitution;
	v->a[1626] = actions(113);
	v->a[1627] = 8;
	v->a[1628] = anon_sym_LT;
	v->a[1629] = anon_sym_GT;
	v->a[1630] = anon_sym_GT_GT;
	v->a[1631] = anon_sym_AMP_GT;
	v->a[1632] = anon_sym_AMP_GT_GT;
	v->a[1633] = anon_sym_LT_AMP;
	v->a[1634] = anon_sym_GT_AMP;
	v->a[1635] = anon_sym_GT_PIPE;
	v->a[1636] = state(1048);
	v->a[1637] = 12;
	v->a[1638] = sym_redirected_statement;
	v->a[1639] = sym_for_statement;
	small_parse_table_82(v);
}

void	small_parse_table_82(t_small_parse_table_array *v)
{
	v->a[1640] = sym_while_statement;
	v->a[1641] = sym_if_statement;
	v->a[1642] = sym_case_statement;
	v->a[1643] = sym_function_definition;
	v->a[1644] = sym_compound_statement;
	v->a[1645] = sym_subshell;
	v->a[1646] = sym_list;
	v->a[1647] = sym_negated_command;
	v->a[1648] = sym_command;
	v->a[1649] = sym_variable_assignments;
	v->a[1650] = 36;
	v->a[1651] = actions(3);
	v->a[1652] = 1;
	v->a[1653] = sym_comment;
	v->a[1654] = actions(95);
	v->a[1655] = 1;
	v->a[1656] = sym_word;
	v->a[1657] = actions(97);
	v->a[1658] = 1;
	v->a[1659] = anon_sym_for;
	small_parse_table_83(v);
}

void	small_parse_table_83(t_small_parse_table_array *v)
{
	v->a[1660] = actions(101);
	v->a[1661] = 1;
	v->a[1662] = anon_sym_if;
	v->a[1663] = actions(103);
	v->a[1664] = 1;
	v->a[1665] = anon_sym_case;
	v->a[1666] = actions(105);
	v->a[1667] = 1;
	v->a[1668] = anon_sym_LPAREN;
	v->a[1669] = actions(109);
	v->a[1670] = 1;
	v->a[1671] = anon_sym_LBRACE;
	v->a[1672] = actions(111);
	v->a[1673] = 1;
	v->a[1674] = anon_sym_BANG;
	v->a[1675] = actions(117);
	v->a[1676] = 1;
	v->a[1677] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[1678] = actions(119);
	v->a[1679] = 1;
	small_parse_table_84(v);
}

void	small_parse_table_84(t_small_parse_table_array *v)
{
	v->a[1680] = anon_sym_DOLLAR;
	v->a[1681] = actions(121);
	v->a[1682] = 1;
	v->a[1683] = anon_sym_DQUOTE;
	v->a[1684] = actions(123);
	v->a[1685] = 1;
	v->a[1686] = sym_raw_string;
	v->a[1687] = actions(125);
	v->a[1688] = 1;
	v->a[1689] = aux_sym_number_token1;
	v->a[1690] = actions(127);
	v->a[1691] = 1;
	v->a[1692] = aux_sym_number_token2;
	v->a[1693] = actions(129);
	v->a[1694] = 1;
	v->a[1695] = anon_sym_DOLLAR_LBRACE;
	v->a[1696] = actions(131);
	v->a[1697] = 1;
	v->a[1698] = anon_sym_DOLLAR_LPAREN;
	v->a[1699] = actions(133);
	small_parse_table_85(v);
}

/* EOF small_parse_table_16.c */
