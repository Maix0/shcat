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
	v->a[1700] = actions(61);
	v->a[1701] = 1;
	v->a[1702] = anon_sym_DOLLAR_LBRACE;
	v->a[1703] = actions(63);
	v->a[1704] = 1;
	v->a[1705] = anon_sym_DOLLAR_LPAREN;
	v->a[1706] = actions(65);
	v->a[1707] = 1;
	v->a[1708] = anon_sym_BQUOTE;
	v->a[1709] = actions(67);
	v->a[1710] = 1;
	v->a[1711] = sym_variable_name;
	v->a[1712] = state(27);
	v->a[1713] = 1;
	v->a[1714] = aux_sym__terminated_statement;
	v->a[1715] = state(185);
	v->a[1716] = 1;
	v->a[1717] = sym_command_name;
	v->a[1718] = state(231);
	v->a[1719] = 1;
	small_parse_table_86(v);
}

void	small_parse_table_86(t_small_parse_table_array *v)
{
	v->a[1720] = sym_variable_assignment;
	v->a[1721] = state(411);
	v->a[1722] = 1;
	v->a[1723] = aux_sym_command_repeat1;
	v->a[1724] = state(551);
	v->a[1725] = 1;
	v->a[1726] = sym_file_redirect;
	v->a[1727] = state(555);
	v->a[1728] = 1;
	v->a[1729] = sym_concatenation;
	v->a[1730] = state(1070);
	v->a[1731] = 1;
	v->a[1732] = sym_pipeline;
	v->a[1733] = state(1126);
	v->a[1734] = 1;
	v->a[1735] = aux_sym_redirected_statement_repeat2;
	v->a[1736] = state(1561);
	v->a[1737] = 1;
	v->a[1738] = sym__statement_not_pipeline;
	v->a[1739] = actions(11);
	small_parse_table_87(v);
}

void	small_parse_table_87(t_small_parse_table_array *v)
{
	v->a[1740] = 2;
	v->a[1741] = anon_sym_while;
	v->a[1742] = anon_sym_until;
	v->a[1743] = actions(59);
	v->a[1744] = 2;
	v->a[1745] = sym_raw_string;
	v->a[1746] = sym_number;
	v->a[1747] = actions(51);
	v->a[1748] = 3;
	v->a[1749] = anon_sym_LT;
	v->a[1750] = anon_sym_GT;
	v->a[1751] = anon_sym_GT_GT;
	v->a[1752] = actions(119);
	v->a[1753] = 3;
	v->a[1754] = anon_sym_fi;
	v->a[1755] = anon_sym_elif;
	v->a[1756] = anon_sym_else;
	v->a[1757] = state(401);
	v->a[1758] = 5;
	v->a[1759] = sym_arithmetic_expansion;
	small_parse_table_88(v);
}

void	small_parse_table_88(t_small_parse_table_array *v)
{
	v->a[1760] = sym_string;
	v->a[1761] = sym_simple_expansion;
	v->a[1762] = sym_expansion;
	v->a[1763] = sym_command_substitution;
	v->a[1764] = state(905);
	v->a[1765] = 12;
	v->a[1766] = sym_redirected_statement;
	v->a[1767] = sym_for_statement;
	v->a[1768] = sym_while_statement;
	v->a[1769] = sym_if_statement;
	v->a[1770] = sym_case_statement;
	v->a[1771] = sym_function_definition;
	v->a[1772] = sym_compound_statement;
	v->a[1773] = sym_subshell;
	v->a[1774] = sym_list;
	v->a[1775] = sym_negated_command;
	v->a[1776] = sym_command;
	v->a[1777] = sym__variable_assignments;
	v->a[1778] = 32;
	v->a[1779] = actions(3);
	small_parse_table_89(v);
}

void	small_parse_table_89(t_small_parse_table_array *v)
{
	v->a[1780] = 1;
	v->a[1781] = sym_comment;
	v->a[1782] = actions(9);
	v->a[1783] = 1;
	v->a[1784] = anon_sym_for;
	v->a[1785] = actions(13);
	v->a[1786] = 1;
	v->a[1787] = anon_sym_if;
	v->a[1788] = actions(15);
	v->a[1789] = 1;
	v->a[1790] = anon_sym_case;
	v->a[1791] = actions(17);
	v->a[1792] = 1;
	v->a[1793] = anon_sym_LPAREN;
	v->a[1794] = actions(19);
	v->a[1795] = 1;
	v->a[1796] = anon_sym_LBRACE;
	v->a[1797] = actions(41);
	v->a[1798] = 1;
	v->a[1799] = sym_word;
	small_parse_table_90(v);
}

/* EOF small_parse_table_17.c */
