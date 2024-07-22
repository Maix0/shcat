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
	v->a[1701] = shift(782);
	v->a[1702] = entry(1, false);
	v->a[1703] = shift(1717);
	v->a[1704] = entry(1, true);
	v->a[1705] = shift(1613);
	v->a[1706] = entry(1, false);
	v->a[1707] = shift(238);
	v->a[1708] = entry(1, true);
	v->a[1709] = shift(1626);
	v->a[1710] = entry(1, true);
	v->a[1711] = shift(47);
	v->a[1712] = entry(1, true);
	v->a[1713] = shift(53);
	v->a[1714] = entry(1, true);
	v->a[1715] = shift(238);
	v->a[1716] = entry(1, false);
	v->a[1717] = shift(1772);
	v->a[1718] = entry(1, false);
	v->a[1719] = shift(1135);
	parse_actions_entries_86(v);
}

void	parse_actions_entries_86(t_parse_actions_entries_array *v)
{
	v->a[1720] = entry(1, false);
	v->a[1721] = shift(1350);
	v->a[1722] = entry(1, false);
	v->a[1723] = shift(1679);
	v->a[1724] = entry(1, false);
	v->a[1725] = shift(723);
	v->a[1726] = entry(1, false);
	v->a[1727] = shift(1711);
	v->a[1728] = entry(1, false);
	v->a[1729] = shift(1643);
	v->a[1730] = entry(1, false);
	v->a[1731] = shift(1650);
	v->a[1732] = entry(1, false);
	v->a[1733] = shift(46);
	v->a[1734] = entry(1, false);
	v->a[1735] = shift(49);
	v->a[1736] = entry(1, true);
	v->a[1737] = shift(1727);
	v->a[1738] = entry(1, false);
	v->a[1739] = shift(1235);
	parse_actions_entries_87(v);
}

void	parse_actions_entries_87(t_parse_actions_entries_array *v)
{
	v->a[1740] = entry(1, true);
	v->a[1741] = shift(1340);
	v->a[1742] = entry(1, false);
	v->a[1743] = shift(1294);
	v->a[1744] = entry(2, false);
	v->a[1745] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1746] = shift_repeat(1235);
	v->a[1747] = entry(2, true);
	v->a[1748] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1749] = shift_repeat(1235);
	v->a[1750] = entry(2, false);
	v->a[1751] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1752] = shift_repeat(1234);
	v->a[1753] = entry(2, true);
	v->a[1754] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1755] = shift_repeat(1234);
	v->a[1756] = entry(1, true);
	v->a[1757] = shift(1325);
	v->a[1758] = entry(1, false);
	v->a[1759] = shift(1227);
	parse_actions_entries_88(v);
}

void	parse_actions_entries_88(t_parse_actions_entries_array *v)
{
	v->a[1760] = entry(1, false);
	v->a[1761] = shift(1234);
	v->a[1762] = entry(1, true);
	v->a[1763] = shift(1310);
	v->a[1764] = entry(1, false);
	v->a[1765] = shift(1499);
	v->a[1766] = entry(1, false);
	v->a[1767] = shift(1517);
	v->a[1768] = entry(1, true);
	v->a[1769] = shift(1235);
	v->a[1770] = entry(1, true);
	v->a[1771] = shift(1234);
	v->a[1772] = entry(1, false);
	v->a[1773] = shift(1136);
	v->a[1774] = entry(2, false);
	v->a[1775] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1776] = shift_repeat(1257);
	v->a[1777] = entry(2, true);
	v->a[1778] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1779] = shift_repeat(1257);
	parse_actions_entries_89(v);
}

void	parse_actions_entries_89(t_parse_actions_entries_array *v)
{
	v->a[1780] = entry(2, false);
	v->a[1781] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1782] = shift_repeat(959);
	v->a[1783] = entry(2, false);
	v->a[1784] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1785] = shift_repeat(766);
	v->a[1786] = entry(2, false);
	v->a[1787] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1788] = shift_repeat(1690);
	v->a[1789] = entry(2, false);
	v->a[1790] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1791] = shift_repeat(1598);
	v->a[1792] = entry(2, false);
	v->a[1793] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1794] = shift_repeat(1614);
	v->a[1795] = entry(2, false);
	v->a[1796] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1797] = shift_repeat(88);
	v->a[1798] = entry(2, false);
	v->a[1799] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	parse_actions_entries_90(v);
}

/* EOF parse_actions_entries_17.c */
