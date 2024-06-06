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
	v->a[1600] = aux_sym__simple_variable_name_token1;
	v->a[1601] = actions(1031);
	v->a[1602] = 1;
	v->a[1603] = sym_variable_name;
	v->a[1604] = actions(1033);
	v->a[1605] = 1;
	v->a[1606] = sym_test_operator;
	v->a[1607] = actions(1035);
	v->a[1608] = 1;
	v->a[1609] = sym__brace_start;
	v->a[1610] = state(1024);
	v->a[1611] = 1;
	v->a[1612] = aux_sym__literal_repeat1;
	v->a[1613] = actions(822);
	v->a[1614] = 2;
	v->a[1615] = sym_file_descriptor;
	v->a[1616] = aux_sym_heredoc_redirect_token1;
	v->a[1617] = actions(1007);
	v->a[1618] = 2;
	v->a[1619] = sym_raw_string;
	small_parse_table_81(v);
}

void	small_parse_table_81(t_small_parse_table_array *v)
{
	v->a[1620] = sym_word;
	v->a[1621] = state(302);
	v->a[1622] = 3;
	v->a[1623] = sym_variable_assignment;
	v->a[1624] = sym_concatenation;
	v->a[1625] = aux_sym_declaration_command_repeat1;
	v->a[1626] = state(656);
	v->a[1627] = 7;
	v->a[1628] = sym_arithmetic_expansion;
	v->a[1629] = sym_brace_expression;
	v->a[1630] = sym_string;
	v->a[1631] = sym_number;
	v->a[1632] = sym_simple_expansion;
	v->a[1633] = sym_expansion;
	v->a[1634] = sym_command_substitution;
	v->a[1635] = actions(820);
	v->a[1636] = 20;
	v->a[1637] = anon_sym_PIPE;
	v->a[1638] = anon_sym_RPAREN;
	v->a[1639] = anon_sym_SEMI_SEMI;
	small_parse_table_82(v);
}

void	small_parse_table_82(t_small_parse_table_array *v)
{
	v->a[1640] = anon_sym_PIPE_AMP;
	v->a[1641] = anon_sym_AMP_AMP;
	v->a[1642] = anon_sym_PIPE_PIPE;
	v->a[1643] = anon_sym_LT;
	v->a[1644] = anon_sym_GT;
	v->a[1645] = anon_sym_GT_GT;
	v->a[1646] = anon_sym_AMP_GT;
	v->a[1647] = anon_sym_AMP_GT_GT;
	v->a[1648] = anon_sym_LT_AMP;
	v->a[1649] = anon_sym_GT_AMP;
	v->a[1650] = anon_sym_GT_PIPE;
	v->a[1651] = anon_sym_LT_AMP_DASH;
	v->a[1652] = anon_sym_GT_AMP_DASH;
	v->a[1653] = anon_sym_LT_LT;
	v->a[1654] = anon_sym_LT_LT_DASH;
	v->a[1655] = anon_sym_AMP;
	v->a[1656] = anon_sym_SEMI;
	v->a[1657] = 20;
	v->a[1658] = actions(3);
	v->a[1659] = 1;
	small_parse_table_83(v);
}

void	small_parse_table_83(t_small_parse_table_array *v)
{
	v->a[1660] = sym_comment;
	v->a[1661] = actions(1043);
	v->a[1662] = 1;
	v->a[1663] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[1664] = actions(1045);
	v->a[1665] = 1;
	v->a[1666] = anon_sym_DOLLAR;
	v->a[1667] = actions(1047);
	v->a[1668] = 1;
	v->a[1669] = sym__special_character;
	v->a[1670] = actions(1049);
	v->a[1671] = 1;
	v->a[1672] = anon_sym_DQUOTE;
	v->a[1673] = actions(1051);
	v->a[1674] = 1;
	v->a[1675] = aux_sym_number_token1;
	v->a[1676] = actions(1053);
	v->a[1677] = 1;
	v->a[1678] = aux_sym_number_token2;
	v->a[1679] = actions(1055);
	small_parse_table_84(v);
}

void	small_parse_table_84(t_small_parse_table_array *v)
{
	v->a[1680] = 1;
	v->a[1681] = anon_sym_DOLLAR_LBRACE;
	v->a[1682] = actions(1057);
	v->a[1683] = 1;
	v->a[1684] = anon_sym_DOLLAR_LPAREN;
	v->a[1685] = actions(1059);
	v->a[1686] = 1;
	v->a[1687] = anon_sym_BQUOTE;
	v->a[1688] = actions(1061);
	v->a[1689] = 1;
	v->a[1690] = anon_sym_DOLLAR_BQUOTE;
	v->a[1691] = actions(1063);
	v->a[1692] = 1;
	v->a[1693] = aux_sym__simple_variable_name_token1;
	v->a[1694] = actions(1065);
	v->a[1695] = 1;
	v->a[1696] = sym_test_operator;
	v->a[1697] = actions(1067);
	v->a[1698] = 1;
	v->a[1699] = sym__brace_start;
	small_parse_table_85(v);
}

/* EOF small_parse_table_16.c */
