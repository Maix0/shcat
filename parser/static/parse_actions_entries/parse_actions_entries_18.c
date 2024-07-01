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
	v->a[1800] = entry(1, false);
	v->a[1801] = shift(1903);
	v->a[1802] = entry(1, false);
	v->a[1803] = shift(1773);
	v->a[1804] = entry(1, false);
	v->a[1805] = shift(105);
	v->a[1806] = entry(1, false);
	v->a[1807] = shift(102);
	v->a[1808] = entry(1, false);
	v->a[1809] = shift(1631);
	v->a[1810] = entry(1, false);
	v->a[1811] = shift(1679);
	v->a[1812] = entry(1, true);
	v->a[1813] = shift(2071);
	v->a[1814] = entry(1, false);
	v->a[1815] = shift(1528);
	v->a[1816] = entry(1, true);
	v->a[1817] = shift(1528);
	v->a[1818] = entry(1, true);
	v->a[1819] = shift(1274);
	parse_actions_entries_91(v);
}

void	parse_actions_entries_91(t_parse_actions_entries_array *v)
{
	v->a[1820] = entry(1, true);
	v->a[1821] = shift(547);
	v->a[1822] = entry(1, true);
	v->a[1823] = shift(1472);
	v->a[1824] = entry(1, true);
	v->a[1825] = shift(514);
	v->a[1826] = entry(1, true);
	v->a[1827] = shift(434);
	v->a[1828] = entry(1, true);
	v->a[1829] = shift(611);
	v->a[1830] = entry(1, true);
	v->a[1831] = shift(1958);
	v->a[1832] = entry(1, true);
	v->a[1833] = shift(1053);
	v->a[1834] = entry(1, true);
	v->a[1835] = shift(1539);
	v->a[1836] = entry(1, true);
	v->a[1837] = shift(1632);
	v->a[1838] = entry(1, true);
	v->a[1839] = shift(544);
	parse_actions_entries_92(v);
}

void	parse_actions_entries_92(t_parse_actions_entries_array *v)
{
	v->a[1840] = entry(1, false);
	v->a[1841] = shift(1379);
	v->a[1842] = entry(1, true);
	v->a[1843] = shift(1486);
	v->a[1844] = entry(1, true);
	v->a[1845] = shift(574);
	v->a[1846] = entry(1, false);
	v->a[1847] = shift(1350);
	v->a[1848] = entry(1, true);
	v->a[1849] = shift(1287);
	v->a[1850] = entry(1, false);
	v->a[1851] = shift(1508);
	v->a[1852] = entry(1, true);
	v->a[1853] = shift(1510);
	v->a[1854] = entry(1, true);
	v->a[1855] = shift(1517);
	v->a[1856] = entry(1, true);
	v->a[1857] = shift(548);
	v->a[1858] = entry(1, true);
	v->a[1859] = shift(980);
	parse_actions_entries_93(v);
}

void	parse_actions_entries_93(t_parse_actions_entries_array *v)
{
	v->a[1860] = entry(2, false);
	v->a[1861] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1862] = shift_repeat(1528);
	v->a[1863] = entry(2, true);
	v->a[1864] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1865] = shift_repeat(1528);
	v->a[1866] = entry(1, true);
	v->a[1867] = shift(1508);
	v->a[1868] = entry(1, true);
	v->a[1869] = shift(964);
	v->a[1870] = entry(1, true);
	v->a[1871] = shift(433);
	v->a[1872] = entry(1, true);
	v->a[1873] = shift(834);
	v->a[1874] = entry(1, true);
	v->a[1875] = shift(1668);
	v->a[1876] = entry(1, true);
	v->a[1877] = shift(1025);
	v->a[1878] = entry(1, true);
	v->a[1879] = shift(464);
	parse_actions_entries_94(v);
}

void	parse_actions_entries_94(t_parse_actions_entries_array *v)
{
	v->a[1880] = entry(1, false);
	v->a[1881] = shift(1239);
	v->a[1882] = entry(1, true);
	v->a[1883] = shift(1121);
	v->a[1884] = entry(1, false);
	v->a[1885] = shift(1250);
	v->a[1886] = entry(1, true);
	v->a[1887] = shift(497);
	v->a[1888] = entry(2, false);
	v->a[1889] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1890] = shift_repeat(1508);
	v->a[1891] = entry(2, true);
	v->a[1892] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1893] = shift_repeat(1508);
	v->a[1894] = entry(1, true);
	v->a[1895] = shift(646);
	v->a[1896] = entry(1, true);
	v->a[1897] = shift(908);
	v->a[1898] = entry(1, true);
	v->a[1899] = shift(902);
	parse_actions_entries_95(v);
}

/* EOF parse_actions_entries_18.c */
