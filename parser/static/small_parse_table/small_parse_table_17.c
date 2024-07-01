/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_17.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_85(t_small_parse_table_array *v)
{
	v->a[1700] = anon_sym_BANG;
	v->a[1701] = actions(59);
	v->a[1702] = 1;
	v->a[1703] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[1704] = actions(61);
	v->a[1705] = 1;
	v->a[1706] = anon_sym_DOLLAR;
	v->a[1707] = actions(63);
	v->a[1708] = 1;
	v->a[1709] = anon_sym_DQUOTE;
	v->a[1710] = actions(67);
	v->a[1711] = 1;
	v->a[1712] = anon_sym_DOLLAR_LBRACE;
	v->a[1713] = actions(69);
	v->a[1714] = 1;
	v->a[1715] = anon_sym_DOLLAR_LPAREN;
	v->a[1716] = actions(71);
	v->a[1717] = 1;
	v->a[1718] = anon_sym_BQUOTE;
	v->a[1719] = actions(73);
	small_parse_table_86(v);
}

void	small_parse_table_86(t_small_parse_table_array *v)
{
	v->a[1720] = 1;
	v->a[1721] = sym_file_descriptor;
	v->a[1722] = actions(75);
	v->a[1723] = 1;
	v->a[1724] = sym_variable_name;
	v->a[1725] = actions(154);
	v->a[1726] = 1;
	v->a[1727] = anon_sym_LF;
	v->a[1728] = state(19);
	v->a[1729] = 1;
	v->a[1730] = aux_sym__case_item_last_repeat2;
	v->a[1731] = state(135);
	v->a[1732] = 1;
	v->a[1733] = aux_sym__statements_repeat1;
	v->a[1734] = state(189);
	v->a[1735] = 1;
	v->a[1736] = sym_command_name;
	v->a[1737] = state(303);
	v->a[1738] = 1;
	v->a[1739] = sym_variable_assignment;
	small_parse_table_87(v);
}

void	small_parse_table_87(t_small_parse_table_array *v)
{
	v->a[1740] = state(650);
	v->a[1741] = 1;
	v->a[1742] = sym_concatenation;
	v->a[1743] = state(712);
	v->a[1744] = 1;
	v->a[1745] = sym_file_redirect;
	v->a[1746] = state(713);
	v->a[1747] = 1;
	v->a[1748] = aux_sym_command_repeat1;
	v->a[1749] = state(1227);
	v->a[1750] = 1;
	v->a[1751] = sym_pipeline;
	v->a[1752] = state(1333);
	v->a[1753] = 1;
	v->a[1754] = aux_sym_redirected_statement_repeat2;
	v->a[1755] = state(2103);
	v->a[1756] = 1;
	v->a[1757] = sym__statement_not_pipeline;
	v->a[1758] = state(2177);
	v->a[1759] = 1;
	small_parse_table_88(v);
}

void	small_parse_table_88(t_small_parse_table_array *v)
{
	v->a[1760] = sym__statements;
	v->a[1761] = actions(11);
	v->a[1762] = 2;
	v->a[1763] = anon_sym_while;
	v->a[1764] = anon_sym_until;
	v->a[1765] = actions(57);
	v->a[1766] = 2;
	v->a[1767] = anon_sym_LT_AMP_DASH;
	v->a[1768] = anon_sym_GT_AMP_DASH;
	v->a[1769] = actions(65);
	v->a[1770] = 2;
	v->a[1771] = sym_raw_string;
	v->a[1772] = sym_number;
	v->a[1773] = state(443);
	v->a[1774] = 5;
	v->a[1775] = sym_arithmetic_expansion;
	v->a[1776] = sym_string;
	v->a[1777] = sym_simple_expansion;
	v->a[1778] = sym_expansion;
	v->a[1779] = sym_command_substitution;
	small_parse_table_89(v);
}

void	small_parse_table_89(t_small_parse_table_array *v)
{
	v->a[1780] = actions(55);
	v->a[1781] = 6;
	v->a[1782] = anon_sym_LT;
	v->a[1783] = anon_sym_GT;
	v->a[1784] = anon_sym_GT_GT;
	v->a[1785] = anon_sym_LT_AMP;
	v->a[1786] = anon_sym_GT_AMP;
	v->a[1787] = anon_sym_GT_PIPE;
	v->a[1788] = state(1179);
	v->a[1789] = 12;
	v->a[1790] = sym_redirected_statement;
	v->a[1791] = sym_for_statement;
	v->a[1792] = sym_while_statement;
	v->a[1793] = sym_if_statement;
	v->a[1794] = sym_case_statement;
	v->a[1795] = sym_function_definition;
	v->a[1796] = sym_compound_statement;
	v->a[1797] = sym_subshell;
	v->a[1798] = sym_list;
	v->a[1799] = sym_negated_command;
	small_parse_table_90(v);
}

/* EOF small_parse_table_17.c */
