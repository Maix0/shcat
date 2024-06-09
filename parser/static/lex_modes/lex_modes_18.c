/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lex_modes_18.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lex_modes.h"

void	lex_modes_90(t_lex_modes_array *v)
{
	v->a[1800] = lex_mode_normal(210);
	v->a[1801] = lex_mode_normal(210);
	v->a[1802] = lex_mode_normal(210);
	v->a[1803] = lex_mode_normal(210);
	v->a[1804] = lex_mode_normal(210);
	v->a[1805] = lex_mode_normal(210);
	v->a[1806] = lex_mode_external(200, 52);
	v->a[1807] = lex_mode_external(195, 53);
	v->a[1808] = lex_mode_external(200, 52);
	v->a[1809] = lex_mode_normal(210);
	v->a[1810] = lex_mode_external(202, 44);
	v->a[1811] = lex_mode_normal(210);
	v->a[1812] = lex_mode_external(200, 52);
	v->a[1813] = lex_mode_external(195, 53);
	v->a[1814] = lex_mode_normal(210);
	v->a[1815] = lex_mode_external(200, 52);
	v->a[1816] = lex_mode_normal(210);
	v->a[1817] = lex_mode_normal(210);
	v->a[1818] = lex_mode_normal(210);
	v->a[1819] = lex_mode_external(195, 53);
	lex_modes_91(v);
}

void	lex_modes_91(t_lex_modes_array *v)
{
	v->a[1820] = lex_mode_normal(210);
	v->a[1821] = lex_mode_external(200, 52);
	v->a[1822] = lex_mode_external(200, 52);
	v->a[1823] = lex_mode_normal(210);
	v->a[1824] = lex_mode_normal(210);
	v->a[1825] = lex_mode_external(195, 53);
	v->a[1826] = lex_mode_external(200, 52);
	v->a[1827] = lex_mode_normal(210);
	v->a[1828] = lex_mode_normal(210);
	v->a[1829] = lex_mode_normal(210);
	v->a[1830] = lex_mode_normal(210);
	v->a[1831] = lex_mode_normal(210);
	v->a[1832] = lex_mode_external(240, 45);
	v->a[1833] = lex_mode_normal(195);
	v->a[1834] = lex_mode_normal(195);
	v->a[1835] = lex_mode_normal(195);
	v->a[1836] = lex_mode_normal(195);
	v->a[1837] = lex_mode_external(250, 54);
	v->a[1838] = lex_mode_normal(195);
	v->a[1839] = lex_mode_normal(195);
	lex_modes_92(v);
}

void	lex_modes_92(t_lex_modes_array *v)
{
	v->a[1840] = lex_mode_normal(195);
	v->a[1841] = lex_mode_normal(195);
	v->a[1842] = lex_mode_external(250, 54);
	v->a[1843] = lex_mode_normal(195);
	v->a[1844] = lex_mode_normal(195);
	v->a[1845] = lex_mode_external(250, 54);
	v->a[1846] = lex_mode_normal(195);
	v->a[1847] = lex_mode_normal(195);
	v->a[1848] = lex_mode_normal(195);
	v->a[1849] = lex_mode_normal(195);
	v->a[1850] = lex_mode_normal(195);
	v->a[1851] = lex_mode_normal(205);
	v->a[1852] = lex_mode_external(208, 55);
	v->a[1853] = lex_mode_external(68, 49);
	v->a[1854] = lex_mode_external(68, 49);
	v->a[1855] = lex_mode_external(210, 56);
	v->a[1856] = lex_mode_external(208, 55);
	v->a[1857] = lex_mode_external(210, 56);
	v->a[1858] = lex_mode_external(210, 56);
	v->a[1859] = lex_mode_external(210, 56);
	lex_modes_93(v);
}

void	lex_modes_93(t_lex_modes_array *v)
{
	v->a[1860] = lex_mode_external(210, 56);
	v->a[1861] = lex_mode_external(210, 56);
	v->a[1862] = lex_mode_external(210, 56);
	v->a[1863] = lex_mode_external(68, 49);
	v->a[1864] = lex_mode_external(210, 56);
	v->a[1865] = lex_mode_external(208, 55);
	v->a[1866] = lex_mode_external(210, 56);
	v->a[1867] = lex_mode_external(68, 49);
	v->a[1868] = lex_mode_external(68, 49);
	v->a[1869] = lex_mode_external(210, 56);
	v->a[1870] = lex_mode_external(210, 56);
	v->a[1871] = lex_mode_external(68, 49);
	v->a[1872] = lex_mode_external(68, 49);
	v->a[1873] = lex_mode_external(68, 49);
	v->a[1874] = lex_mode_external(68, 49);
	v->a[1875] = lex_mode_normal(210);
	v->a[1876] = lex_mode_normal(210);
	v->a[1877] = lex_mode_external(68, 49);
	v->a[1878] = lex_mode_external(68, 49);
	v->a[1879] = lex_mode_external(68, 49);
	lex_modes_94(v);
}

void	lex_modes_94(t_lex_modes_array *v)
{
	v->a[1880] = lex_mode_external(68, 49);
	v->a[1881] = lex_mode_external(68, 49);
	v->a[1882] = lex_mode_external(68, 49);
	v->a[1883] = lex_mode_external(68, 49);
	v->a[1884] = lex_mode_external(68, 49);
	v->a[1885] = lex_mode_external(68, 49);
	v->a[1886] = lex_mode_external(68, 49);
	v->a[1887] = lex_mode_external(68, 49);
	v->a[1888] = lex_mode_normal(250);
	v->a[1889] = lex_mode_external(250, 54);
	v->a[1890] = lex_mode_external(250, 54);
	v->a[1891] = lex_mode_external(250, 54);
	v->a[1892] = lex_mode_external(213, 56);
	v->a[1893] = lex_mode_external(208, 55);
	v->a[1894] = lex_mode_external(250, 54);
	v->a[1895] = lex_mode_normal(250);
	v->a[1896] = lex_mode_external(213, 56);
	v->a[1897] = lex_mode_normal(250);
	v->a[1898] = lex_mode_external(213, 56);
	v->a[1899] = lex_mode_external(208, 55);
	lex_modes_95(v);
}

/* EOF lex_modes_18.c */
