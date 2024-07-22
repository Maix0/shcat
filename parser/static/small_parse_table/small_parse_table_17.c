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
	v->a[1701] = sym_variable_assignment;
	v->a[1702] = state(584);
	v->a[1703] = 1;
	v->a[1704] = aux_sym__case_item_last_repeat2;
	v->a[1705] = state(655);
	v->a[1706] = 1;
	v->a[1707] = aux_sym_command_repeat1;
	v->a[1708] = state(661);
	v->a[1709] = 1;
	v->a[1710] = sym_concatenation;
	v->a[1711] = state(665);
	v->a[1712] = 1;
	v->a[1713] = sym_file_redirect;
	v->a[1714] = state(1141);
	v->a[1715] = 1;
	v->a[1716] = sym_pipeline;
	v->a[1717] = state(1198);
	v->a[1718] = 1;
	v->a[1719] = aux_sym_redirected_statement_repeat2;
	small_parse_table_86(v);
}

void	small_parse_table_86(t_small_parse_table_array *v)
{
	v->a[1720] = state(1901);
	v->a[1721] = 1;
	v->a[1722] = sym__statement_not_pipeline;
	v->a[1723] = state(2123);
	v->a[1724] = 1;
	v->a[1725] = sym__statements;
	v->a[1726] = actions(11);
	v->a[1727] = 2;
	v->a[1728] = anon_sym_while;
	v->a[1729] = anon_sym_until;
	v->a[1730] = actions(61);
	v->a[1731] = 2;
	v->a[1732] = sym_raw_string;
	v->a[1733] = sym_number;
	v->a[1734] = state(455);
	v->a[1735] = 5;
	v->a[1736] = sym_arithmetic_expansion;
	v->a[1737] = sym_string;
	v->a[1738] = sym_simple_expansion;
	v->a[1739] = sym_expansion;
	small_parse_table_87(v);
}

void	small_parse_table_87(t_small_parse_table_array *v)
{
	v->a[1740] = sym_command_substitution;
	v->a[1741] = actions(53);
	v->a[1742] = 7;
	v->a[1743] = anon_sym_LT;
	v->a[1744] = anon_sym_GT;
	v->a[1745] = anon_sym_GT_GT;
	v->a[1746] = anon_sym_LT_AMP;
	v->a[1747] = anon_sym_GT_AMP;
	v->a[1748] = anon_sym_GT_PIPE;
	v->a[1749] = anon_sym_LT_GT;
	v->a[1750] = state(1091);
	v->a[1751] = 12;
	v->a[1752] = sym_redirected_statement;
	v->a[1753] = sym_for_statement;
	v->a[1754] = sym_while_statement;
	v->a[1755] = sym_if_statement;
	v->a[1756] = sym_case_statement;
	v->a[1757] = sym_function_definition;
	v->a[1758] = sym_compound_statement;
	v->a[1759] = sym_subshell;
	small_parse_table_88(v);
}

void	small_parse_table_88(t_small_parse_table_array *v)
{
	v->a[1760] = sym_list;
	v->a[1761] = sym_negated_command;
	v->a[1762] = sym_command;
	v->a[1763] = sym__variable_assignments;
	v->a[1764] = 33;
	v->a[1765] = actions(3);
	v->a[1766] = 1;
	v->a[1767] = sym_comment;
	v->a[1768] = actions(87);
	v->a[1769] = 1;
	v->a[1770] = sym_word;
	v->a[1771] = actions(89);
	v->a[1772] = 1;
	v->a[1773] = anon_sym_for;
	v->a[1774] = actions(93);
	v->a[1775] = 1;
	v->a[1776] = anon_sym_if;
	v->a[1777] = actions(95);
	v->a[1778] = 1;
	v->a[1779] = anon_sym_case;
	small_parse_table_89(v);
}

void	small_parse_table_89(t_small_parse_table_array *v)
{
	v->a[1780] = actions(97);
	v->a[1781] = 1;
	v->a[1782] = anon_sym_LPAREN;
	v->a[1783] = actions(101);
	v->a[1784] = 1;
	v->a[1785] = anon_sym_LBRACE;
	v->a[1786] = actions(103);
	v->a[1787] = 1;
	v->a[1788] = anon_sym_BANG;
	v->a[1789] = actions(107);
	v->a[1790] = 1;
	v->a[1791] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[1792] = actions(109);
	v->a[1793] = 1;
	v->a[1794] = anon_sym_DOLLAR;
	v->a[1795] = actions(111);
	v->a[1796] = 1;
	v->a[1797] = anon_sym_DQUOTE;
	v->a[1798] = actions(115);
	v->a[1799] = 1;
	small_parse_table_90(v);
}

/* EOF small_parse_table_17.c */
