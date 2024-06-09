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
	v->a[1700] = 1;
	v->a[1701] = anon_sym_BQUOTE;
	v->a[1702] = actions(135);
	v->a[1703] = 1;
	v->a[1704] = sym_file_descriptor;
	v->a[1705] = actions(137);
	v->a[1706] = 1;
	v->a[1707] = sym_variable_name;
	v->a[1708] = actions(143);
	v->a[1709] = 1;
	v->a[1710] = anon_sym_LF;
	v->a[1711] = state(10);
	v->a[1712] = 1;
	v->a[1713] = aux_sym__case_item_last_repeat2;
	v->a[1714] = state(139);
	v->a[1715] = 1;
	v->a[1716] = aux_sym__statements_repeat1;
	v->a[1717] = state(173);
	v->a[1718] = 1;
	v->a[1719] = sym_command_name;
	small_parse_table_86(v);
}

void	small_parse_table_86(t_small_parse_table_array *v)
{
	v->a[1720] = state(269);
	v->a[1721] = 1;
	v->a[1722] = sym_variable_assignment;
	v->a[1723] = state(663);
	v->a[1724] = 1;
	v->a[1725] = aux_sym_command_repeat1;
	v->a[1726] = state(665);
	v->a[1727] = 1;
	v->a[1728] = sym_concatenation;
	v->a[1729] = state(749);
	v->a[1730] = 1;
	v->a[1731] = sym_file_redirect;
	v->a[1732] = state(1145);
	v->a[1733] = 1;
	v->a[1734] = aux_sym_redirected_statement_repeat2;
	v->a[1735] = state(1190);
	v->a[1736] = 1;
	v->a[1737] = sym_pipeline;
	v->a[1738] = state(2032);
	v->a[1739] = 1;
	small_parse_table_87(v);
}

void	small_parse_table_87(t_small_parse_table_array *v)
{
	v->a[1740] = sym__statements;
	v->a[1741] = state(2040);
	v->a[1742] = 1;
	v->a[1743] = sym__statement_not_pipeline;
	v->a[1744] = actions(99);
	v->a[1745] = 2;
	v->a[1746] = anon_sym_while;
	v->a[1747] = anon_sym_until;
	v->a[1748] = actions(115);
	v->a[1749] = 2;
	v->a[1750] = anon_sym_LT_AMP_DASH;
	v->a[1751] = anon_sym_GT_AMP_DASH;
	v->a[1752] = state(282);
	v->a[1753] = 6;
	v->a[1754] = sym_arithmetic_expansion;
	v->a[1755] = sym_string;
	v->a[1756] = sym_number;
	v->a[1757] = sym_simple_expansion;
	v->a[1758] = sym_expansion;
	v->a[1759] = sym_command_substitution;
	small_parse_table_88(v);
}

void	small_parse_table_88(t_small_parse_table_array *v)
{
	v->a[1760] = actions(113);
	v->a[1761] = 8;
	v->a[1762] = anon_sym_LT;
	v->a[1763] = anon_sym_GT;
	v->a[1764] = anon_sym_GT_GT;
	v->a[1765] = anon_sym_AMP_GT;
	v->a[1766] = anon_sym_AMP_GT_GT;
	v->a[1767] = anon_sym_LT_AMP;
	v->a[1768] = anon_sym_GT_AMP;
	v->a[1769] = anon_sym_GT_PIPE;
	v->a[1770] = state(1048);
	v->a[1771] = 12;
	v->a[1772] = sym_redirected_statement;
	v->a[1773] = sym_for_statement;
	v->a[1774] = sym_while_statement;
	v->a[1775] = sym_if_statement;
	v->a[1776] = sym_case_statement;
	v->a[1777] = sym_function_definition;
	v->a[1778] = sym_compound_statement;
	v->a[1779] = sym_subshell;
	small_parse_table_89(v);
}

void	small_parse_table_89(t_small_parse_table_array *v)
{
	v->a[1780] = sym_list;
	v->a[1781] = sym_negated_command;
	v->a[1782] = sym_command;
	v->a[1783] = sym_variable_assignments;
	v->a[1784] = 36;
	v->a[1785] = actions(3);
	v->a[1786] = 1;
	v->a[1787] = sym_comment;
	v->a[1788] = actions(9);
	v->a[1789] = 1;
	v->a[1790] = anon_sym_for;
	v->a[1791] = actions(13);
	v->a[1792] = 1;
	v->a[1793] = anon_sym_if;
	v->a[1794] = actions(15);
	v->a[1795] = 1;
	v->a[1796] = anon_sym_case;
	v->a[1797] = actions(17);
	v->a[1798] = 1;
	v->a[1799] = anon_sym_LPAREN;
	small_parse_table_90(v);
}

/* EOF small_parse_table_17.c */
