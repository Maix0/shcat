/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_actions_entries_17.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_actions_entries.h"

void	parse_actions_entries_85(t_parse_actions_entries_array *v)
{
	v->a[1700] = entry(1, true);
	v->a[1701] = reduce(aux_sym__variable_assignments_repeat1, 2, 0, 0);
	v->a[1702] = entry(1, false);
	v->a[1703] = reduce(aux_sym__variable_assignments_repeat1, 2, 0, 0);
	v->a[1704] = entry(2, true);
	v->a[1705] = reduce(aux_sym__variable_assignments_repeat1, 2, 0, 0);
	v->a[1706] = shift_repeat(1780);
	v->a[1707] = entry(2, false);
	v->a[1708] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[1709] = shift_repeat(1133);
	v->a[1710] = entry(1, true);
	v->a[1711] = shift(1678);
	v->a[1712] = entry(1, true);
	v->a[1713] = reduce(aux_sym_pipeline_repeat1, 2, 0, 0);
	v->a[1714] = entry(2, false);
	v->a[1715] = reduce(aux_sym_pipeline_repeat1, 2, 0, 0);
	v->a[1716] = shift(131);
	v->a[1717] = entry(1, false);
	v->a[1718] = reduce(aux_sym_pipeline_repeat1, 2, 0, 0);
	v->a[1719] = entry(1, true);
	parse_actions_entries_86(v);
}

void	parse_actions_entries_86(t_parse_actions_entries_array *v)
{
	v->a[1720] = shift(612);
	v->a[1721] = entry(1, true);
	v->a[1722] = shift(576);
	v->a[1723] = entry(2, false);
	v->a[1724] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1725] = shift_repeat(1227);
	v->a[1726] = entry(1, true);
	v->a[1727] = shift(387);
	v->a[1728] = entry(2, true);
	v->a[1729] = reduce(aux_sym__variable_assignments_repeat1, 2, 0, 0);
	v->a[1730] = shift_repeat(1678);
	v->a[1731] = entry(1, true);
	v->a[1732] = shift(556);
	v->a[1733] = entry(2, false);
	v->a[1734] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[1735] = shift_repeat(1186);
	v->a[1736] = entry(2, false);
	v->a[1737] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[1738] = shift_repeat(1758);
	v->a[1739] = entry(1, true);
	parse_actions_entries_87(v);
}

void	parse_actions_entries_87(t_parse_actions_entries_array *v)
{
	v->a[1740] = shift(1785);
	v->a[1741] = entry(2, false);
	v->a[1742] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[1743] = shift_repeat(1178);
	v->a[1744] = entry(2, true);
	v->a[1745] = reduce(aux_sym__variable_assignments_repeat1, 2, 0, 0);
	v->a[1746] = shift_repeat(1785);
	v->a[1747] = entry(1, true);
	v->a[1748] = shift(1789);
	v->a[1749] = entry(2, true);
	v->a[1750] = reduce(aux_sym__variable_assignments_repeat1, 2, 0, 0);
	v->a[1751] = shift_repeat(1789);
	v->a[1752] = entry(1, true);
	v->a[1753] = reduce(sym_function_definition, 4, 0, 44);
	v->a[1754] = entry(1, false);
	v->a[1755] = reduce(sym_function_definition, 4, 0, 44);
	v->a[1756] = entry(1, true);
	v->a[1757] = reduce(sym_if_statement, 5, 0, 48);
	v->a[1758] = entry(1, false);
	v->a[1759] = reduce(sym_if_statement, 5, 0, 48);
	parse_actions_entries_88(v);
}

void	parse_actions_entries_88(t_parse_actions_entries_array *v)
{
	v->a[1760] = entry(1, true);
	v->a[1761] = reduce(sym_heredoc_redirect, 5, 0, 63);
	v->a[1762] = entry(1, false);
	v->a[1763] = reduce(sym_heredoc_redirect, 5, 0, 63);
	v->a[1764] = entry(1, true);
	v->a[1765] = reduce(sym_heredoc_redirect, 5, 0, 22);
	v->a[1766] = entry(1, false);
	v->a[1767] = reduce(sym_heredoc_redirect, 5, 0, 22);
	v->a[1768] = entry(1, true);
	v->a[1769] = reduce(sym__heredoc_body, 2, 0, 0);
	v->a[1770] = entry(1, false);
	v->a[1771] = reduce(sym__heredoc_body, 2, 0, 0);
	v->a[1772] = entry(1, true);
	v->a[1773] = reduce(sym__simple_heredoc_body, 2, 0, 0);
	v->a[1774] = entry(1, false);
	v->a[1775] = reduce(sym__simple_heredoc_body, 2, 0, 0);
	v->a[1776] = entry(1, false);
	v->a[1777] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[1778] = entry(2, false);
	v->a[1779] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	parse_actions_entries_89(v);
}

void	parse_actions_entries_89(t_parse_actions_entries_array *v)
{
	v->a[1780] = shift_repeat(1178);
	v->a[1781] = entry(1, true);
	v->a[1782] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[1783] = entry(1, true);
	v->a[1784] = reduce(sym_case_statement, 6, 0, 35);
	v->a[1785] = entry(1, false);
	v->a[1786] = reduce(sym_case_statement, 6, 0, 35);
	v->a[1787] = entry(1, true);
	v->a[1788] = reduce(sym_case_statement, 6, 0, 59);
	v->a[1789] = entry(1, false);
	v->a[1790] = reduce(sym_case_statement, 6, 0, 59);
	v->a[1791] = entry(1, true);
	v->a[1792] = reduce(sym_case_statement, 6, 0, 60);
	v->a[1793] = entry(1, false);
	v->a[1794] = reduce(sym_case_statement, 6, 0, 60);
	v->a[1795] = entry(1, true);
	v->a[1796] = reduce(sym_compound_statement, 3, 0, 18);
	v->a[1797] = entry(1, false);
	v->a[1798] = reduce(sym_compound_statement, 3, 0, 18);
	v->a[1799] = entry(1, true);
	parse_actions_entries_90(v);
}

/* EOF parse_actions_entries_17.c */
