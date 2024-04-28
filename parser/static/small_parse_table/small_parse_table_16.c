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
	v->a[1601] = anon_sym_DOLLAR_BQUOTE;
	v->a[1602] = actions(1474);
	v->a[1603] = 1;
	v->a[1604] = sym_test_operator;
	v->a[1605] = actions(1476);
	v->a[1606] = 1;
	v->a[1607] = sym__bare_dollar;
	v->a[1608] = actions(1478);
	v->a[1609] = 1;
	v->a[1610] = sym__brace_start;
	v->a[1611] = state(541);
	v->a[1612] = 1;
	v->a[1613] = aux_sym_command_repeat2;
	v->a[1614] = state(1175);
	v->a[1615] = 1;
	v->a[1616] = aux_sym__literal_repeat1;
	v->a[1617] = state(1328);
	v->a[1618] = 1;
	v->a[1619] = sym_concatenation;
	small_parse_table_81(v);
}

void	small_parse_table_81(t_small_parse_table_array *v)
{
	v->a[1620] = state(1329);
	v->a[1621] = 1;
	v->a[1622] = sym_herestring_redirect;
	v->a[1623] = actions(1446);
	v->a[1624] = 2;
	v->a[1625] = anon_sym_LPAREN_LPAREN;
	v->a[1626] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[1627] = actions(1448);
	v->a[1628] = 2;
	v->a[1629] = anon_sym_EQ_EQ;
	v->a[1630] = anon_sym_EQ_TILDE;
	v->a[1631] = actions(1472);
	v->a[1632] = 2;
	v->a[1633] = anon_sym_LT_LPAREN;
	v->a[1634] = anon_sym_GT_LPAREN;
	v->a[1635] = actions(1627);
	v->a[1636] = 2;
	v->a[1637] = sym_file_descriptor;
	v->a[1638] = aux_sym_heredoc_redirect_token1;
	v->a[1639] = actions(1444);
	small_parse_table_82(v);
}

void	small_parse_table_82(t_small_parse_table_array *v)
{
	v->a[1640] = 3;
	v->a[1641] = sym_raw_string;
	v->a[1642] = sym_ansi_c_string;
	v->a[1643] = sym_word;
	v->a[1644] = state(985);
	v->a[1645] = 9;
	v->a[1646] = sym_arithmetic_expansion;
	v->a[1647] = sym_brace_expression;
	v->a[1648] = sym_string;
	v->a[1649] = sym_translated_string;
	v->a[1650] = sym_number;
	v->a[1651] = sym_simple_expansion;
	v->a[1652] = sym_expansion;
	v->a[1653] = sym_command_substitution;
	v->a[1654] = sym_process_substitution;
	v->a[1655] = actions(1625);
	v->a[1656] = 21;
	v->a[1657] = anon_sym_SEMI;
	v->a[1658] = anon_sym_PIPE_PIPE;
	v->a[1659] = anon_sym_AMP_AMP;
	small_parse_table_83(v);
}

void	small_parse_table_83(t_small_parse_table_array *v)
{
	v->a[1660] = anon_sym_PIPE;
	v->a[1661] = anon_sym_AMP;
	v->a[1662] = anon_sym_LT;
	v->a[1663] = anon_sym_GT;
	v->a[1664] = anon_sym_LT_LT;
	v->a[1665] = anon_sym_GT_GT;
	v->a[1666] = anon_sym_SEMI_SEMI;
	v->a[1667] = anon_sym_SEMI_AMP;
	v->a[1668] = anon_sym_SEMI_SEMI_AMP;
	v->a[1669] = anon_sym_PIPE_AMP;
	v->a[1670] = anon_sym_AMP_GT;
	v->a[1671] = anon_sym_AMP_GT_GT;
	v->a[1672] = anon_sym_LT_AMP;
	v->a[1673] = anon_sym_GT_AMP;
	v->a[1674] = anon_sym_GT_PIPE;
	v->a[1675] = anon_sym_LT_AMP_DASH;
	v->a[1676] = anon_sym_GT_AMP_DASH;
	v->a[1677] = anon_sym_LT_LT_DASH;
	v->a[1678] = 27;
	v->a[1679] = actions(3);
	small_parse_table_84(v);
}

void	small_parse_table_84(t_small_parse_table_array *v)
{
	v->a[1680] = 1;
	v->a[1681] = sym_comment;
	v->a[1682] = actions(19);
	v->a[1683] = 1;
	v->a[1684] = anon_sym_LPAREN;
	v->a[1685] = actions(1549);
	v->a[1686] = 1;
	v->a[1687] = anon_sym_DOLLAR_LBRACK;
	v->a[1688] = actions(1551);
	v->a[1689] = 1;
	v->a[1690] = anon_sym_DOLLAR;
	v->a[1691] = actions(1555);
	v->a[1692] = 1;
	v->a[1693] = anon_sym_DQUOTE;
	v->a[1694] = actions(1557);
	v->a[1695] = 1;
	v->a[1696] = aux_sym_number_token1;
	v->a[1697] = actions(1559);
	v->a[1698] = 1;
	v->a[1699] = aux_sym_number_token2;
	small_parse_table_85(v);
}

/* EOF small_parse_table_16.c */
