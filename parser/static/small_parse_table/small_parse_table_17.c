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
	v->a[1700] = 7;
	v->a[1701] = anon_sym_LT;
	v->a[1702] = anon_sym_GT;
	v->a[1703] = anon_sym_GT_GT;
	v->a[1704] = anon_sym_LT_AMP;
	v->a[1705] = anon_sym_GT_AMP;
	v->a[1706] = anon_sym_GT_PIPE;
	v->a[1707] = anon_sym_LT_GT;
	v->a[1708] = state(936);
	v->a[1709] = 12;
	v->a[1710] = sym_redirected_statement;
	v->a[1711] = sym_for_statement;
	v->a[1712] = sym_while_statement;
	v->a[1713] = sym_if_statement;
	v->a[1714] = sym_case_statement;
	v->a[1715] = sym_function_definition;
	v->a[1716] = sym_compound_statement;
	v->a[1717] = sym_subshell;
	v->a[1718] = sym_list;
	v->a[1719] = sym_negated_command;
	small_parse_table_86(v);
}

void	small_parse_table_86(t_small_parse_table_array *v)
{
	v->a[1720] = sym_command;
	v->a[1721] = sym__variable_assignments;
	v->a[1722] = 32;
	v->a[1723] = actions(3);
	v->a[1724] = 1;
	v->a[1725] = sym_comment;
	v->a[1726] = actions(9);
	v->a[1727] = 1;
	v->a[1728] = anon_sym_for;
	v->a[1729] = actions(13);
	v->a[1730] = 1;
	v->a[1731] = anon_sym_if;
	v->a[1732] = actions(15);
	v->a[1733] = 1;
	v->a[1734] = anon_sym_case;
	v->a[1735] = actions(17);
	v->a[1736] = 1;
	v->a[1737] = anon_sym_LPAREN;
	v->a[1738] = actions(19);
	v->a[1739] = 1;
	small_parse_table_87(v);
}

void	small_parse_table_87(t_small_parse_table_array *v)
{
	v->a[1740] = anon_sym_LBRACE;
	v->a[1741] = actions(41);
	v->a[1742] = 1;
	v->a[1743] = sym_word;
	v->a[1744] = actions(49);
	v->a[1745] = 1;
	v->a[1746] = anon_sym_BANG;
	v->a[1747] = actions(53);
	v->a[1748] = 1;
	v->a[1749] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[1750] = actions(55);
	v->a[1751] = 1;
	v->a[1752] = anon_sym_DOLLAR;
	v->a[1753] = actions(57);
	v->a[1754] = 1;
	v->a[1755] = anon_sym_DQUOTE;
	v->a[1756] = actions(61);
	v->a[1757] = 1;
	v->a[1758] = anon_sym_DOLLAR_LBRACE;
	v->a[1759] = actions(63);
	small_parse_table_88(v);
}

void	small_parse_table_88(t_small_parse_table_array *v)
{
	v->a[1760] = 1;
	v->a[1761] = anon_sym_DOLLAR_LPAREN;
	v->a[1762] = actions(65);
	v->a[1763] = 1;
	v->a[1764] = anon_sym_BQUOTE;
	v->a[1765] = actions(67);
	v->a[1766] = 1;
	v->a[1767] = sym_variable_name;
	v->a[1768] = actions(115);
	v->a[1769] = 1;
	v->a[1770] = anon_sym_LF;
	v->a[1771] = state(117);
	v->a[1772] = 1;
	v->a[1773] = aux_sym__statements_repeat1;
	v->a[1774] = state(271);
	v->a[1775] = 1;
	v->a[1776] = sym_command_name;
	v->a[1777] = state(288);
	v->a[1778] = 1;
	v->a[1779] = sym_variable_assignment;
	small_parse_table_89(v);
}

void	small_parse_table_89(t_small_parse_table_array *v)
{
	v->a[1780] = state(482);
	v->a[1781] = 1;
	v->a[1782] = aux_sym_command_repeat1;
	v->a[1783] = state(511);
	v->a[1784] = 1;
	v->a[1785] = aux_sym__case_item_last_repeat2;
	v->a[1786] = state(600);
	v->a[1787] = 1;
	v->a[1788] = sym_file_redirect;
	v->a[1789] = state(602);
	v->a[1790] = 1;
	v->a[1791] = sym_concatenation;
	v->a[1792] = state(1014);
	v->a[1793] = 1;
	v->a[1794] = sym_pipeline;
	v->a[1795] = state(1068);
	v->a[1796] = 1;
	v->a[1797] = aux_sym_redirected_statement_repeat2;
	v->a[1798] = state(1609);
	v->a[1799] = 1;
	small_parse_table_90(v);
}

/* EOF small_parse_table_17.c */
