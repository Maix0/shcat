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
	v->a[1700] = shift(1135);
	v->a[1701] = entry(1, true);
	v->a[1702] = shift(1444);
	v->a[1703] = entry(1, true);
	v->a[1704] = shift(564);
	v->a[1705] = entry(1, true);
	v->a[1706] = reduce(sym__statements, 2, 0, 8);
	v->a[1707] = entry(1, true);
	v->a[1708] = shift(450);
	v->a[1709] = entry(1, true);
	v->a[1710] = shift(1283);
	v->a[1711] = entry(1, false);
	v->a[1712] = shift(1523);
	v->a[1713] = entry(2, false);
	v->a[1714] = reduce(sym_command_name, 1, 0, 0);
	v->a[1715] = shift(1956);
	v->a[1716] = entry(1, true);
	v->a[1717] = shift(444);
	v->a[1718] = entry(1, true);
	v->a[1719] = shift(576);
	parse_actions_entries_86(v);
}

void	parse_actions_entries_86(t_parse_actions_entries_array *v)
{
	v->a[1720] = entry(1, true);
	v->a[1721] = shift(607);
	v->a[1722] = entry(1, true);
	v->a[1723] = shift(896);
	v->a[1724] = entry(1, false);
	v->a[1725] = shift(1267);
	v->a[1726] = entry(1, true);
	v->a[1727] = shift(1267);
	v->a[1728] = entry(1, false);
	v->a[1729] = shift(1325);
	v->a[1730] = entry(1, true);
	v->a[1731] = shift(1325);
	v->a[1732] = entry(2, false);
	v->a[1733] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1734] = shift_repeat(1267);
	v->a[1735] = entry(2, true);
	v->a[1736] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1737] = shift_repeat(1267);
	v->a[1738] = entry(1, true);
	v->a[1739] = shift(1277);
	parse_actions_entries_87(v);
}

void	parse_actions_entries_87(t_parse_actions_entries_array *v)
{
	v->a[1740] = entry(1, true);
	v->a[1741] = shift(821);
	v->a[1742] = entry(1, true);
	v->a[1743] = shift(795);
	v->a[1744] = entry(1, true);
	v->a[1745] = shift(796);
	v->a[1746] = entry(1, false);
	v->a[1747] = shift(798);
	v->a[1748] = entry(1, true);
	v->a[1749] = shift(798);
	v->a[1750] = entry(1, false);
	v->a[1751] = shift(1610);
	v->a[1752] = entry(1, true);
	v->a[1753] = shift(1611);
	v->a[1754] = entry(1, false);
	v->a[1755] = shift(260);
	v->a[1756] = entry(1, true);
	v->a[1757] = shift(1593);
	v->a[1758] = entry(1, true);
	v->a[1759] = shift(64);
	parse_actions_entries_88(v);
}

void	parse_actions_entries_88(t_parse_actions_entries_array *v)
{
	v->a[1760] = entry(1, true);
	v->a[1761] = shift(66);
	v->a[1762] = entry(1, true);
	v->a[1763] = shift(260);
	v->a[1764] = entry(1, true);
	v->a[1765] = shift(1271);
	v->a[1766] = entry(2, false);
	v->a[1767] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1768] = shift_repeat(1325);
	v->a[1769] = entry(2, true);
	v->a[1770] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1771] = shift_repeat(1325);
	v->a[1772] = entry(1, true);
	v->a[1773] = shift(1329);
	v->a[1774] = entry(1, false);
	v->a[1775] = shift(1327);
	v->a[1776] = entry(1, true);
	v->a[1777] = shift(1327);
	v->a[1778] = entry(2, false);
	v->a[1779] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	parse_actions_entries_89(v);
}

void	parse_actions_entries_89(t_parse_actions_entries_array *v)
{
	v->a[1780] = shift_repeat(1048);
	v->a[1781] = entry(2, false);
	v->a[1782] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1783] = shift_repeat(728);
	v->a[1784] = entry(2, false);
	v->a[1785] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1786] = shift_repeat(1625);
	v->a[1787] = entry(2, false);
	v->a[1788] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1789] = shift_repeat(1626);
	v->a[1790] = entry(2, false);
	v->a[1791] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1792] = shift_repeat(1581);
	v->a[1793] = entry(2, false);
	v->a[1794] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1795] = shift_repeat(62);
	v->a[1796] = entry(2, false);
	v->a[1797] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1798] = shift_repeat(63);
	v->a[1799] = entry(1, false);
	parse_actions_entries_90(v);
}

/* EOF parse_actions_entries_17.c */
