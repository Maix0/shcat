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
	v->a[1600] = 1;
	v->a[1601] = anon_sym_LF;
	v->a[1602] = state(8);
	v->a[1603] = 1;
	v->a[1604] = aux_sym__case_item_last_repeat2;
	v->a[1605] = state(135);
	v->a[1606] = 1;
	v->a[1607] = aux_sym__statements_repeat1;
	v->a[1608] = state(189);
	v->a[1609] = 1;
	v->a[1610] = sym_command_name;
	v->a[1611] = state(303);
	v->a[1612] = 1;
	v->a[1613] = sym_variable_assignment;
	v->a[1614] = state(650);
	v->a[1615] = 1;
	v->a[1616] = sym_concatenation;
	v->a[1617] = state(712);
	v->a[1618] = 1;
	v->a[1619] = sym_file_redirect;
	small_parse_table_81(v);
}

void	small_parse_table_81(t_small_parse_table_array *v)
{
	v->a[1620] = state(713);
	v->a[1621] = 1;
	v->a[1622] = aux_sym_command_repeat1;
	v->a[1623] = state(1227);
	v->a[1624] = 1;
	v->a[1625] = sym_pipeline;
	v->a[1626] = state(1333);
	v->a[1627] = 1;
	v->a[1628] = aux_sym_redirected_statement_repeat2;
	v->a[1629] = state(2103);
	v->a[1630] = 1;
	v->a[1631] = sym__statement_not_pipeline;
	v->a[1632] = state(2178);
	v->a[1633] = 1;
	v->a[1634] = sym__statements;
	v->a[1635] = actions(11);
	v->a[1636] = 2;
	v->a[1637] = anon_sym_while;
	v->a[1638] = anon_sym_until;
	v->a[1639] = actions(57);
	small_parse_table_82(v);
}

void	small_parse_table_82(t_small_parse_table_array *v)
{
	v->a[1640] = 2;
	v->a[1641] = anon_sym_LT_AMP_DASH;
	v->a[1642] = anon_sym_GT_AMP_DASH;
	v->a[1643] = actions(65);
	v->a[1644] = 2;
	v->a[1645] = sym_raw_string;
	v->a[1646] = sym_number;
	v->a[1647] = state(443);
	v->a[1648] = 5;
	v->a[1649] = sym_arithmetic_expansion;
	v->a[1650] = sym_string;
	v->a[1651] = sym_simple_expansion;
	v->a[1652] = sym_expansion;
	v->a[1653] = sym_command_substitution;
	v->a[1654] = actions(55);
	v->a[1655] = 6;
	v->a[1656] = anon_sym_LT;
	v->a[1657] = anon_sym_GT;
	v->a[1658] = anon_sym_GT_GT;
	v->a[1659] = anon_sym_LT_AMP;
	small_parse_table_83(v);
}

void	small_parse_table_83(t_small_parse_table_array *v)
{
	v->a[1660] = anon_sym_GT_AMP;
	v->a[1661] = anon_sym_GT_PIPE;
	v->a[1662] = state(1179);
	v->a[1663] = 12;
	v->a[1664] = sym_redirected_statement;
	v->a[1665] = sym_for_statement;
	v->a[1666] = sym_while_statement;
	v->a[1667] = sym_if_statement;
	v->a[1668] = sym_case_statement;
	v->a[1669] = sym_function_definition;
	v->a[1670] = sym_compound_statement;
	v->a[1671] = sym_subshell;
	v->a[1672] = sym_list;
	v->a[1673] = sym_negated_command;
	v->a[1674] = sym_command;
	v->a[1675] = sym__variable_assignments;
	v->a[1676] = 34;
	v->a[1677] = actions(3);
	v->a[1678] = 1;
	v->a[1679] = sym_comment;
	small_parse_table_84(v);
}

void	small_parse_table_84(t_small_parse_table_array *v)
{
	v->a[1680] = actions(9);
	v->a[1681] = 1;
	v->a[1682] = anon_sym_for;
	v->a[1683] = actions(13);
	v->a[1684] = 1;
	v->a[1685] = anon_sym_if;
	v->a[1686] = actions(15);
	v->a[1687] = 1;
	v->a[1688] = anon_sym_case;
	v->a[1689] = actions(17);
	v->a[1690] = 1;
	v->a[1691] = anon_sym_LPAREN;
	v->a[1692] = actions(19);
	v->a[1693] = 1;
	v->a[1694] = anon_sym_LBRACE;
	v->a[1695] = actions(45);
	v->a[1696] = 1;
	v->a[1697] = sym_word;
	v->a[1698] = actions(53);
	v->a[1699] = 1;
	small_parse_table_85(v);
}

/* EOF small_parse_table_16.c */
