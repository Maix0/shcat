/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_actions_entries_18.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_actions_entries.h"

void	parse_actions_entries_90(t_parse_actions_entries_array *v)
{
	v->a[1800] = entry(1, true);
	v->a[1801] = shift(1649);
	v->a[1802] = entry(1, false);
	v->a[1803] = shift(1718);
	v->a[1804] = entry(1, false);
	v->a[1805] = shift(1052);
	v->a[1806] = entry(1, false);
	v->a[1807] = shift(2024);
	v->a[1808] = entry(1, false);
	v->a[1809] = shift(2051);
	v->a[1810] = entry(1, false);
	v->a[1811] = shift(1925);
	v->a[1812] = entry(1, false);
	v->a[1813] = shift(90);
	v->a[1814] = entry(1, false);
	v->a[1815] = shift(91);
	v->a[1816] = entry(1, false);
	v->a[1817] = shift(1707);
	v->a[1818] = entry(2, false);
	v->a[1819] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	parse_actions_entries_91(v);
}

void	parse_actions_entries_91(t_parse_actions_entries_array *v)
{
	v->a[1820] = shift_repeat(1628);
	v->a[1821] = entry(2, true);
	v->a[1822] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1823] = shift_repeat(1628);
	v->a[1824] = entry(1, false);
	v->a[1825] = shift(1628);
	v->a[1826] = entry(1, true);
	v->a[1827] = shift(1686);
	v->a[1828] = entry(1, false);
	v->a[1829] = shift(1576);
	v->a[1830] = entry(1, false);
	v->a[1831] = shift(1575);
	v->a[1832] = entry(1, true);
	v->a[1833] = shift(1575);
	v->a[1834] = entry(1, true);
	v->a[1835] = shift(1628);
	v->a[1836] = entry(1, false);
	v->a[1837] = shift(1595);
	v->a[1838] = entry(1, false);
	v->a[1839] = shift(1592);
	parse_actions_entries_92(v);
}

void	parse_actions_entries_92(t_parse_actions_entries_array *v)
{
	v->a[1840] = entry(1, true);
	v->a[1841] = shift(1592);
	v->a[1842] = entry(2, false);
	v->a[1843] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1844] = shift_repeat(1200);
	v->a[1845] = entry(2, false);
	v->a[1846] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1847] = shift_repeat(1047);
	v->a[1848] = entry(2, false);
	v->a[1849] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1850] = shift_repeat(2039);
	v->a[1851] = entry(2, false);
	v->a[1852] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1853] = shift_repeat(2023);
	v->a[1854] = entry(2, false);
	v->a[1855] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1856] = shift_repeat(1923);
	v->a[1857] = entry(2, false);
	v->a[1858] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1859] = shift_repeat(66);
	parse_actions_entries_93(v);
}

void	parse_actions_entries_93(t_parse_actions_entries_array *v)
{
	v->a[1860] = entry(2, false);
	v->a[1861] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1862] = shift_repeat(67);
	v->a[1863] = entry(2, false);
	v->a[1864] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1865] = shift_repeat(1638);
	v->a[1866] = entry(2, true);
	v->a[1867] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1868] = shift_repeat(1638);
	v->a[1869] = entry(1, true);
	v->a[1870] = shift(1125);
	v->a[1871] = entry(1, true);
	v->a[1872] = shift(1082);
	v->a[1873] = entry(1, true);
	v->a[1874] = shift(1846);
	v->a[1875] = entry(1, true);
	v->a[1876] = shift(1137);
	v->a[1877] = entry(1, false);
	v->a[1878] = shift(1140);
	v->a[1879] = entry(1, true);
	parse_actions_entries_94(v);
}

void	parse_actions_entries_94(t_parse_actions_entries_array *v)
{
	v->a[1880] = shift(1140);
	v->a[1881] = entry(1, false);
	v->a[1882] = shift(1997);
	v->a[1883] = entry(1, true);
	v->a[1884] = shift(1996);
	v->a[1885] = entry(1, false);
	v->a[1886] = shift(365);
	v->a[1887] = entry(1, true);
	v->a[1888] = shift(1917);
	v->a[1889] = entry(1, true);
	v->a[1890] = shift(56);
	v->a[1891] = entry(1, true);
	v->a[1892] = shift(57);
	v->a[1893] = entry(1, true);
	v->a[1894] = shift(365);
	v->a[1895] = entry(1, true);
	v->a[1896] = shift(625);
	v->a[1897] = entry(1, true);
	v->a[1898] = shift(604);
	v->a[1899] = entry(1, true);
	parse_actions_entries_95(v);
}

/* EOF parse_actions_entries_18.c */
