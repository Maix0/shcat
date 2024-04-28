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
	v->a[1800] = reduce(sym_declaration_command, 2, 0, 0);
	v->a[1801] = entry(1, false);
	v->a[1802] = shift(546);
	v->a[1803] = entry(1, false);
	v->a[1804] = shift(975);
	v->a[1805] = entry(1, false);
	v->a[1806] = shift(977);
	v->a[1807] = entry(1, true);
	v->a[1808] = shift(977);
	v->a[1809] = entry(1, false);
	v->a[1810] = shift(1062);
	v->a[1811] = entry(1, false);
	v->a[1812] = shift(5849);
	v->a[1813] = entry(1, false);
	v->a[1814] = shift(1063);
	v->a[1815] = entry(1, true);
	v->a[1816] = shift(1063);
	v->a[1817] = entry(1, false);
	v->a[1818] = shift(1126);
	v->a[1819] = entry(1, false);
	parse_actions_entries_91(v);
}

void	parse_actions_entries_91(t_parse_actions_entries_array *v)
{
	v->a[1820] = shift(5757);
	v->a[1821] = entry(1, false);
	v->a[1822] = shift(1128);
	v->a[1823] = entry(1, true);
	v->a[1824] = shift(1128);
	v->a[1825] = entry(1, false);
	v->a[1826] = shift(1171);
	v->a[1827] = entry(1, false);
	v->a[1828] = shift(3741);
	v->a[1829] = entry(1, false);
	v->a[1830] = shift(3742);
	v->a[1831] = entry(1, false);
	v->a[1832] = shift(6085);
	v->a[1833] = entry(1, false);
	v->a[1834] = shift(1266);
	v->a[1835] = entry(1, false);
	v->a[1836] = shift(5793);
	v->a[1837] = entry(1, false);
	v->a[1838] = shift(1469);
	v->a[1839] = entry(1, false);
	parse_actions_entries_92(v);
}

void	parse_actions_entries_92(t_parse_actions_entries_array *v)
{
	v->a[1840] = shift(6285);
	v->a[1841] = entry(1, false);
	v->a[1842] = shift(4677);
	v->a[1843] = entry(1, false);
	v->a[1844] = shift(311);
	v->a[1845] = entry(1, false);
	v->a[1846] = shift(310);
	v->a[1847] = entry(1, false);
	v->a[1848] = shift(309);
	v->a[1849] = entry(1, false);
	v->a[1850] = shift(381);
	v->a[1851] = entry(1, false);
	v->a[1852] = shift(565);
	v->a[1853] = entry(1, true);
	v->a[1854] = shift(6628);
	v->a[1855] = entry(1, true);
	v->a[1856] = shift(1170);
	v->a[1857] = entry(1, true);
	v->a[1858] = shift(7662);
	v->a[1859] = entry(2, false);
	parse_actions_entries_93(v);
}

void	parse_actions_entries_93(t_parse_actions_entries_array *v)
{
	v->a[1860] = reduce(aux_sym_command_repeat2, 2, 0, 38);
	v->a[1861] = shift_repeat(1023);
	v->a[1862] = entry(2, false);
	v->a[1863] = reduce(aux_sym_command_repeat2, 2, 0, 38);
	v->a[1864] = shift_repeat(4184);
	v->a[1865] = entry(2, false);
	v->a[1866] = reduce(aux_sym_command_repeat2, 2, 0, 38);
	v->a[1867] = shift_repeat(3686);
	v->a[1868] = entry(2, false);
	v->a[1869] = reduce(aux_sym_command_repeat2, 2, 0, 38);
	v->a[1870] = shift_repeat(3725);
	v->a[1871] = entry(2, false);
	v->a[1872] = reduce(aux_sym_command_repeat2, 2, 0, 38);
	v->a[1873] = shift_repeat(4183);
	v->a[1874] = entry(2, false);
	v->a[1875] = reduce(aux_sym_command_repeat2, 2, 0, 38);
	v->a[1876] = shift_repeat(5997);
	v->a[1877] = entry(2, false);
	v->a[1878] = reduce(aux_sym_command_repeat2, 2, 0, 38);
	v->a[1879] = shift_repeat(1091);
	parse_actions_entries_94(v);
}

void	parse_actions_entries_94(t_parse_actions_entries_array *v)
{
	v->a[1880] = entry(2, false);
	v->a[1881] = reduce(aux_sym_command_repeat2, 2, 0, 38);
	v->a[1882] = shift_repeat(5729);
	v->a[1883] = entry(2, false);
	v->a[1884] = reduce(aux_sym_command_repeat2, 2, 0, 38);
	v->a[1885] = shift_repeat(1268);
	v->a[1886] = entry(2, false);
	v->a[1887] = reduce(aux_sym_command_repeat2, 2, 0, 38);
	v->a[1888] = shift_repeat(6350);
	v->a[1889] = entry(2, false);
	v->a[1890] = reduce(aux_sym_command_repeat2, 2, 0, 38);
	v->a[1891] = shift_repeat(4641);
	v->a[1892] = entry(2, false);
	v->a[1893] = reduce(aux_sym_command_repeat2, 2, 0, 38);
	v->a[1894] = shift_repeat(249);
	v->a[1895] = entry(2, false);
	v->a[1896] = reduce(aux_sym_command_repeat2, 2, 0, 38);
	v->a[1897] = shift_repeat(251);
	v->a[1898] = entry(2, false);
	v->a[1899] = reduce(aux_sym_command_repeat2, 2, 0, 38);
	parse_actions_entries_95(v);
}

/* EOF parse_actions_entries_18.c */
