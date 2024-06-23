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
	v->a[1700] = sym_compound_statement;
	v->a[1701] = sym_subshell;
	v->a[1702] = sym_list;
	v->a[1703] = sym_negated_command;
	v->a[1704] = sym_command;
	v->a[1705] = sym__variable_assignments;
	v->a[1706] = 34;
	v->a[1707] = actions(3);
	v->a[1708] = 1;
	v->a[1709] = sym_comment;
	v->a[1710] = actions(9);
	v->a[1711] = 1;
	v->a[1712] = anon_sym_for;
	v->a[1713] = actions(13);
	v->a[1714] = 1;
	v->a[1715] = anon_sym_if;
	v->a[1716] = actions(15);
	v->a[1717] = 1;
	v->a[1718] = anon_sym_case;
	v->a[1719] = actions(17);
	small_parse_table_86(v);
}

void	small_parse_table_86(t_small_parse_table_array *v)
{
	v->a[1720] = 1;
	v->a[1721] = anon_sym_LPAREN;
	v->a[1722] = actions(19);
	v->a[1723] = 1;
	v->a[1724] = anon_sym_LBRACE;
	v->a[1725] = actions(45);
	v->a[1726] = 1;
	v->a[1727] = sym_word;
	v->a[1728] = actions(53);
	v->a[1729] = 1;
	v->a[1730] = anon_sym_BANG;
	v->a[1731] = actions(59);
	v->a[1732] = 1;
	v->a[1733] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[1734] = actions(61);
	v->a[1735] = 1;
	v->a[1736] = anon_sym_DOLLAR;
	v->a[1737] = actions(63);
	v->a[1738] = 1;
	v->a[1739] = anon_sym_DQUOTE;
	small_parse_table_87(v);
}

void	small_parse_table_87(t_small_parse_table_array *v)
{
	v->a[1740] = actions(67);
	v->a[1741] = 1;
	v->a[1742] = anon_sym_DOLLAR_LBRACE;
	v->a[1743] = actions(69);
	v->a[1744] = 1;
	v->a[1745] = anon_sym_DOLLAR_LPAREN;
	v->a[1746] = actions(71);
	v->a[1747] = 1;
	v->a[1748] = anon_sym_BQUOTE;
	v->a[1749] = actions(73);
	v->a[1750] = 1;
	v->a[1751] = sym_file_descriptor;
	v->a[1752] = actions(75);
	v->a[1753] = 1;
	v->a[1754] = sym_variable_name;
	v->a[1755] = actions(131);
	v->a[1756] = 1;
	v->a[1757] = anon_sym_LF;
	v->a[1758] = state(8);
	v->a[1759] = 1;
	small_parse_table_88(v);
}

void	small_parse_table_88(t_small_parse_table_array *v)
{
	v->a[1760] = aux_sym__case_item_last_repeat2;
	v->a[1761] = state(136);
	v->a[1762] = 1;
	v->a[1763] = aux_sym__statements_repeat1;
	v->a[1764] = state(187);
	v->a[1765] = 1;
	v->a[1766] = sym_command_name;
	v->a[1767] = state(275);
	v->a[1768] = 1;
	v->a[1769] = sym_variable_assignment;
	v->a[1770] = state(647);
	v->a[1771] = 1;
	v->a[1772] = sym_concatenation;
	v->a[1773] = state(736);
	v->a[1774] = 1;
	v->a[1775] = aux_sym_command_repeat1;
	v->a[1776] = state(738);
	v->a[1777] = 1;
	v->a[1778] = sym_file_redirect;
	v->a[1779] = state(1450);
	small_parse_table_89(v);
}

void	small_parse_table_89(t_small_parse_table_array *v)
{
	v->a[1780] = 1;
	v->a[1781] = sym_pipeline;
	v->a[1782] = state(1460);
	v->a[1783] = 1;
	v->a[1784] = aux_sym_redirected_statement_repeat2;
	v->a[1785] = state(2269);
	v->a[1786] = 1;
	v->a[1787] = sym__statement_not_pipeline;
	v->a[1788] = state(2398);
	v->a[1789] = 1;
	v->a[1790] = sym__statements;
	v->a[1791] = actions(11);
	v->a[1792] = 2;
	v->a[1793] = anon_sym_while;
	v->a[1794] = anon_sym_until;
	v->a[1795] = actions(57);
	v->a[1796] = 2;
	v->a[1797] = anon_sym_LT_AMP_DASH;
	v->a[1798] = anon_sym_GT_AMP_DASH;
	v->a[1799] = actions(65);
	small_parse_table_90(v);
}

/* EOF small_parse_table_17.c */
