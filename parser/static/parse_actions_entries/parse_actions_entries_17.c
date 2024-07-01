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
	v->a[1700] = entry(1, false);
	v->a[1701] = shift(106);
	v->a[1702] = entry(1, true);
	v->a[1703] = shift(1415);
	v->a[1704] = entry(1, false);
	v->a[1705] = shift(1468);
	v->a[1706] = entry(1, true);
	v->a[1707] = shift(1468);
	v->a[1708] = entry(1, true);
	v->a[1709] = shift(1420);
	v->a[1710] = entry(2, false);
	v->a[1711] = reduce(sym_command_name, 1, 0, 0);
	v->a[1712] = shift(2182);
	v->a[1713] = entry(2, false);
	v->a[1714] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1715] = shift_repeat(1468);
	v->a[1716] = entry(2, true);
	v->a[1717] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1718] = shift_repeat(1468);
	v->a[1719] = entry(1, true);
	parse_actions_entries_86(v);
}

void	parse_actions_entries_86(t_parse_actions_entries_array *v)
{
	v->a[1720] = reduce(sym__statements, 2, 0, 10);
	v->a[1721] = entry(2, false);
	v->a[1722] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1723] = shift_repeat(1003);
	v->a[1724] = entry(2, false);
	v->a[1725] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1726] = shift_repeat(872);
	v->a[1727] = entry(2, false);
	v->a[1728] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1729] = shift_repeat(1866);
	v->a[1730] = entry(2, false);
	v->a[1731] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1732] = shift_repeat(1893);
	v->a[1733] = entry(2, false);
	v->a[1734] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1735] = shift_repeat(1777);
	v->a[1736] = entry(2, false);
	v->a[1737] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1738] = shift_repeat(107);
	v->a[1739] = entry(2, false);
	parse_actions_entries_87(v);
}

void	parse_actions_entries_87(t_parse_actions_entries_array *v)
{
	v->a[1740] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1741] = shift_repeat(106);
	v->a[1742] = entry(1, true);
	v->a[1743] = shift(1414);
	v->a[1744] = entry(1, true);
	v->a[1745] = shift(893);
	v->a[1746] = entry(1, true);
	v->a[1747] = shift(894);
	v->a[1748] = entry(1, true);
	v->a[1749] = shift(1977);
	v->a[1750] = entry(1, true);
	v->a[1751] = shift(896);
	v->a[1752] = entry(1, false);
	v->a[1753] = shift(898);
	v->a[1754] = entry(1, true);
	v->a[1755] = shift(898);
	v->a[1756] = entry(1, false);
	v->a[1757] = shift(1864);
	v->a[1758] = entry(1, true);
	v->a[1759] = shift(1862);
	parse_actions_entries_88(v);
}

void	parse_actions_entries_88(t_parse_actions_entries_array *v)
{
	v->a[1760] = entry(1, false);
	v->a[1761] = shift(271);
	v->a[1762] = entry(1, true);
	v->a[1763] = shift(1785);
	v->a[1764] = entry(1, true);
	v->a[1765] = shift(54);
	v->a[1766] = entry(1, true);
	v->a[1767] = shift(56);
	v->a[1768] = entry(1, true);
	v->a[1769] = shift(271);
	v->a[1770] = entry(1, false);
	v->a[1771] = shift(2001);
	v->a[1772] = entry(1, false);
	v->a[1773] = shift(1686);
	v->a[1774] = entry(1, false);
	v->a[1775] = shift(1454);
	v->a[1776] = entry(1, false);
	v->a[1777] = shift(1860);
	v->a[1778] = entry(1, false);
	v->a[1779] = shift(822);
	parse_actions_entries_89(v);
}

void	parse_actions_entries_89(t_parse_actions_entries_array *v)
{
	v->a[1780] = entry(1, false);
	v->a[1781] = shift(1830);
	v->a[1782] = entry(1, false);
	v->a[1783] = shift(1831);
	v->a[1784] = entry(1, false);
	v->a[1785] = shift(1792);
	v->a[1786] = entry(1, false);
	v->a[1787] = shift(114);
	v->a[1788] = entry(1, false);
	v->a[1789] = shift(118);
	v->a[1790] = entry(1, true);
	v->a[1791] = shift(1940);
	v->a[1792] = entry(1, true);
	v->a[1793] = shift(605);
	v->a[1794] = entry(1, false);
	v->a[1795] = shift(1624);
	v->a[1796] = entry(1, false);
	v->a[1797] = shift(869);
	v->a[1798] = entry(1, false);
	v->a[1799] = shift(1879);
	parse_actions_entries_90(v);
}

/* EOF parse_actions_entries_17.c */
