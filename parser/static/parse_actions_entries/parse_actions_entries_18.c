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
	v->a[1800] = shift(1448);
	v->a[1801] = entry(1, false);
	v->a[1802] = shift(1747);
	v->a[1803] = entry(1, true);
	v->a[1804] = shift(967);
	v->a[1805] = entry(1, true);
	v->a[1806] = shift(1379);
	v->a[1807] = entry(1, true);
	v->a[1808] = shift(1747);
	v->a[1809] = entry(1, false);
	v->a[1810] = shift(1447);
	v->a[1811] = entry(1, true);
	v->a[1812] = shift(1447);
	v->a[1813] = entry(2, false);
	v->a[1814] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1815] = shift_repeat(1351);
	v->a[1816] = entry(2, true);
	v->a[1817] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1818] = shift_repeat(1351);
	v->a[1819] = entry(1, false);
	parse_actions_entries_91(v);
}

void	parse_actions_entries_91(t_parse_actions_entries_array *v)
{
	v->a[1820] = shift(1351);
	v->a[1821] = entry(1, true);
	v->a[1822] = shift(1336);
	v->a[1823] = entry(1, false);
	v->a[1824] = shift(1410);
	v->a[1825] = entry(1, false);
	v->a[1826] = shift(1411);
	v->a[1827] = entry(1, true);
	v->a[1828] = shift(1411);
	v->a[1829] = entry(1, true);
	v->a[1830] = shift(1351);
	v->a[1831] = entry(1, false);
	v->a[1832] = shift(1450);
	v->a[1833] = entry(1, false);
	v->a[1834] = shift(1452);
	v->a[1835] = entry(1, true);
	v->a[1836] = shift(1452);
	v->a[1837] = entry(2, false);
	v->a[1838] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1839] = shift_repeat(1268);
	parse_actions_entries_92(v);
}

void	parse_actions_entries_92(t_parse_actions_entries_array *v)
{
	v->a[1840] = entry(2, true);
	v->a[1841] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1842] = shift_repeat(1268);
	v->a[1843] = entry(2, false);
	v->a[1844] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1845] = shift_repeat(1310);
	v->a[1846] = entry(2, true);
	v->a[1847] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1848] = shift_repeat(1310);
	v->a[1849] = entry(1, false);
	v->a[1850] = shift(1310);
	v->a[1851] = entry(1, true);
	v->a[1852] = shift(1306);
	v->a[1853] = entry(1, true);
	v->a[1854] = shift(1310);
	v->a[1855] = entry(1, false);
	v->a[1856] = shift(1416);
	v->a[1857] = entry(1, true);
	v->a[1858] = shift(513);
	v->a[1859] = entry(1, true);
	parse_actions_entries_93(v);
}

void	parse_actions_entries_93(t_parse_actions_entries_array *v)
{
	v->a[1860] = shift(1728);
	v->a[1861] = entry(1, false);
	v->a[1862] = shift(1377);
	v->a[1863] = entry(1, true);
	v->a[1864] = shift(719);
	v->a[1865] = entry(1, true);
	v->a[1866] = shift(1733);
	v->a[1867] = entry(1, false);
	v->a[1868] = shift(1222);
	v->a[1869] = entry(1, false);
	v->a[1870] = shift(1371);
	v->a[1871] = entry(1, true);
	v->a[1872] = shift(1726);
	v->a[1873] = entry(1, false);
	v->a[1874] = shift(1101);
	v->a[1875] = entry(1, false);
	v->a[1876] = shift(1588);
	v->a[1877] = entry(1, false);
	v->a[1878] = shift(1357);
	v->a[1879] = entry(1, true);
	parse_actions_entries_94(v);
}

void	parse_actions_entries_94(t_parse_actions_entries_array *v)
{
	v->a[1880] = shift(1357);
	v->a[1881] = entry(1, false);
	v->a[1882] = shift(1268);
	v->a[1883] = entry(1, true);
	v->a[1884] = shift(1356);
	v->a[1885] = entry(1, false);
	v->a[1886] = shift(1800);
	v->a[1887] = entry(2, false);
	v->a[1888] = reduce(sym__expansion_regex, 1, 0, 24);
	v->a[1889] = reduce(sym__expansion_body, 2, 0, 28);
	v->a[1890] = entry(1, false);
	v->a[1891] = shift(1681);
	v->a[1892] = entry(1, false);
	v->a[1893] = shift(1749);
	v->a[1894] = entry(1, true);
	v->a[1895] = shift(1800);
	v->a[1896] = entry(1, true);
	v->a[1897] = shift(1749);
	v->a[1898] = entry(1, false);
	v->a[1899] = shift(1391);
	parse_actions_entries_95(v);
}

/* EOF parse_actions_entries_18.c */
