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
	v->a[1700] = shift(1078);
	v->a[1701] = entry(2, false);
	v->a[1702] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1703] = shift(1599);
	v->a[1704] = entry(2, false);
	v->a[1705] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1706] = shift(651);
	v->a[1707] = entry(2, false);
	v->a[1708] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1709] = shift(1351);
	v->a[1710] = entry(2, false);
	v->a[1711] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1712] = shift(1571);
	v->a[1713] = entry(2, false);
	v->a[1714] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1715] = shift(1275);
	v->a[1716] = entry(1, true);
	v->a[1717] = shift(1705);
	v->a[1718] = entry(1, true);
	v->a[1719] = reduce(sym__statements, 3, 0, 32);
	parse_actions_entries_86(v);
}

void	parse_actions_entries_86(t_parse_actions_entries_array *v)
{
	v->a[1720] = entry(1, true);
	v->a[1721] = reduce(sym__statements, 2, 0, 10);
	v->a[1722] = entry(1, true);
	v->a[1723] = shift(1703);
	v->a[1724] = entry(1, true);
	v->a[1725] = shift(1704);
	v->a[1726] = entry(2, false);
	v->a[1727] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1728] = shift_repeat(1084);
	v->a[1729] = entry(2, false);
	v->a[1730] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1731] = shift_repeat(1051);
	v->a[1732] = entry(2, false);
	v->a[1733] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1734] = shift_repeat(2011);
	v->a[1735] = entry(2, false);
	v->a[1736] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1737] = shift_repeat(2038);
	v->a[1738] = entry(2, false);
	v->a[1739] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	parse_actions_entries_87(v);
}

void	parse_actions_entries_87(t_parse_actions_entries_array *v)
{
	v->a[1740] = shift_repeat(1930);
	v->a[1741] = entry(2, false);
	v->a[1742] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1743] = shift_repeat(88);
	v->a[1744] = entry(2, false);
	v->a[1745] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1746] = shift_repeat(89);
	v->a[1747] = entry(1, false);
	v->a[1748] = shift(1084);
	v->a[1749] = entry(1, false);
	v->a[1750] = shift(1051);
	v->a[1751] = entry(1, false);
	v->a[1752] = shift(2011);
	v->a[1753] = entry(1, false);
	v->a[1754] = shift(2038);
	v->a[1755] = entry(1, false);
	v->a[1756] = shift(1930);
	v->a[1757] = entry(1, false);
	v->a[1758] = shift(88);
	v->a[1759] = entry(1, false);
	parse_actions_entries_88(v);
}

void	parse_actions_entries_88(t_parse_actions_entries_array *v)
{
	v->a[1760] = shift(89);
	v->a[1761] = entry(2, false);
	v->a[1762] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1763] = shift_repeat(1633);
	v->a[1764] = entry(2, true);
	v->a[1765] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1766] = shift_repeat(1633);
	v->a[1767] = entry(1, false);
	v->a[1768] = shift(1633);
	v->a[1769] = entry(1, true);
	v->a[1770] = shift(1618);
	v->a[1771] = entry(1, true);
	v->a[1772] = shift(1633);
	v->a[1773] = entry(2, false);
	v->a[1774] = reduce(sym_command_name, 1, 0, 0);
	v->a[1775] = shift(2354);
	v->a[1776] = entry(2, false);
	v->a[1777] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1778] = shift_repeat(1619);
	v->a[1779] = entry(2, true);
	parse_actions_entries_89(v);
}

void	parse_actions_entries_89(t_parse_actions_entries_array *v)
{
	v->a[1780] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1781] = shift_repeat(1619);
	v->a[1782] = entry(1, false);
	v->a[1783] = shift(1617);
	v->a[1784] = entry(1, true);
	v->a[1785] = shift(1653);
	v->a[1786] = entry(2, false);
	v->a[1787] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1788] = shift_repeat(1617);
	v->a[1789] = entry(2, true);
	v->a[1790] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1791] = shift_repeat(1617);
	v->a[1792] = entry(1, false);
	v->a[1793] = shift(1619);
	v->a[1794] = entry(1, true);
	v->a[1795] = shift(1619);
	v->a[1796] = entry(1, true);
	v->a[1797] = shift(1617);
	v->a[1798] = entry(1, true);
	v->a[1799] = shift(1697);
	parse_actions_entries_90(v);
}

/* EOF parse_actions_entries_17.c */
