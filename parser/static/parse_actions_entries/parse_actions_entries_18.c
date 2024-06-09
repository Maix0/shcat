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
	v->a[1800] = shift_repeat(1674);
	v->a[1801] = entry(2, false);
	v->a[1802] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1803] = shift_repeat(117);
	v->a[1804] = entry(2, false);
	v->a[1805] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1806] = shift_repeat(116);
	v->a[1807] = entry(1, false);
	v->a[1808] = shift(1092);
	v->a[1809] = entry(1, false);
	v->a[1810] = shift(1097);
	v->a[1811] = entry(1, true);
	v->a[1812] = shift(1097);
	v->a[1813] = entry(2, false);
	v->a[1814] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1815] = shift(559);
	v->a[1816] = entry(2, false);
	v->a[1817] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1818] = shift(1374);
	v->a[1819] = entry(2, false);
	parse_actions_entries_91(v);
}

void	parse_actions_entries_91(t_parse_actions_entries_array *v)
{
	v->a[1820] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1821] = shift(1001);
	v->a[1822] = entry(2, false);
	v->a[1823] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1824] = shift(954);
	v->a[1825] = entry(2, false);
	v->a[1826] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1827] = shift(1860);
	v->a[1828] = entry(2, false);
	v->a[1829] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1830] = shift(645);
	v->a[1831] = entry(2, true);
	v->a[1832] = reduce(aux_sym_command_repeat1, 1, 0, 0);
	v->a[1833] = shift(2069);
	v->a[1834] = entry(2, false);
	v->a[1835] = reduce(sym_command_name, 1, 0, 0);
	v->a[1836] = shift(2213);
	v->a[1837] = entry(2, false);
	v->a[1838] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1839] = shift(351);
	parse_actions_entries_92(v);
}

void	parse_actions_entries_92(t_parse_actions_entries_array *v)
{
	v->a[1840] = entry(1, false);
	v->a[1841] = reduce(sym_negated_command, 2, 0, 0);
	v->a[1842] = entry(1, true);
	v->a[1843] = reduce(sym_negated_command, 2, 0, 0);
	v->a[1844] = entry(2, false);
	v->a[1845] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1846] = shift(363);
	v->a[1847] = entry(2, false);
	v->a[1848] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1849] = shift(871);
	v->a[1850] = entry(2, false);
	v->a[1851] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1852] = shift(858);
	v->a[1853] = entry(2, false);
	v->a[1854] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1855] = shift(2017);
	v->a[1856] = entry(2, false);
	v->a[1857] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1858] = shift(661);
	v->a[1859] = entry(2, false);
	parse_actions_entries_93(v);
}

void	parse_actions_entries_93(t_parse_actions_entries_array *v)
{
	v->a[1860] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1861] = shift(952);
	v->a[1862] = entry(2, false);
	v->a[1863] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1864] = shift(1890);
	v->a[1865] = entry(2, false);
	v->a[1866] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1867] = shift(928);
	v->a[1868] = entry(1, true);
	v->a[1869] = shift(1495);
	v->a[1870] = entry(2, false);
	v->a[1871] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1872] = shift(778);
	v->a[1873] = entry(2, false);
	v->a[1874] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1875] = shift(457);
	v->a[1876] = entry(2, false);
	v->a[1877] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1878] = shift(542);
	v->a[1879] = entry(2, false);
	parse_actions_entries_94(v);
}

void	parse_actions_entries_94(t_parse_actions_entries_array *v)
{
	v->a[1880] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1881] = shift(402);
	v->a[1882] = entry(2, false);
	v->a[1883] = reduce(aux_sym_redirected_statement_repeat2, 1, 0, 0);
	v->a[1884] = shift(531);
	v->a[1885] = entry(2, false);
	v->a[1886] = reduce(sym_command_name, 1, 0, 0);
	v->a[1887] = shift(2251);
	v->a[1888] = entry(1, false);
	v->a[1889] = shift(1363);
	v->a[1890] = entry(1, true);
	v->a[1891] = shift(1363);
	v->a[1892] = entry(1, true);
	v->a[1893] = shift(1438);
	v->a[1894] = entry(2, false);
	v->a[1895] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1896] = shift_repeat(1363);
	v->a[1897] = entry(2, true);
	v->a[1898] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1899] = shift_repeat(1363);
	parse_actions_entries_95(v);
}

/* EOF parse_actions_entries_18.c */
