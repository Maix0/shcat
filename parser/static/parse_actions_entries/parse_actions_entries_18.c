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
	v->a[1800] = reduce(sym_if_statement, 6, 0, 56);
	v->a[1801] = entry(1, false);
	v->a[1802] = reduce(sym_if_statement, 6, 0, 56);
	v->a[1803] = entry(1, true);
	v->a[1804] = reduce(sym_subshell, 3, 0, 18);
	v->a[1805] = entry(1, false);
	v->a[1806] = reduce(sym_subshell, 3, 0, 18);
	v->a[1807] = entry(1, true);
	v->a[1808] = reduce(sym_if_statement, 6, 0, 55);
	v->a[1809] = entry(1, false);
	v->a[1810] = reduce(sym_if_statement, 6, 0, 55);
	v->a[1811] = entry(1, true);
	v->a[1812] = reduce(sym_while_statement, 3, 0, 17);
	v->a[1813] = entry(1, false);
	v->a[1814] = reduce(sym_while_statement, 3, 0, 17);
	v->a[1815] = entry(1, true);
	v->a[1816] = reduce(sym_if_statement, 6, 0, 54);
	v->a[1817] = entry(1, false);
	v->a[1818] = reduce(sym_if_statement, 6, 0, 54);
	v->a[1819] = entry(1, true);
	parse_actions_entries_91(v);
}

void	parse_actions_entries_91(t_parse_actions_entries_array *v)
{
	v->a[1820] = reduce(sym_for_statement, 6, 0, 53);
	v->a[1821] = entry(1, false);
	v->a[1822] = reduce(sym_for_statement, 6, 0, 53);
	v->a[1823] = entry(2, true);
	v->a[1824] = reduce(aux_sym__variable_assignments_repeat1, 2, 0, 0);
	v->a[1825] = shift_repeat(1754);
	v->a[1826] = entry(1, false);
	v->a[1827] = reduce(sym_redirected_statement, 1, -1, 4);
	v->a[1828] = entry(1, true);
	v->a[1829] = reduce(sym_redirected_statement, 1, -1, 4);
	v->a[1830] = entry(1, true);
	v->a[1831] = shift(1754);
	v->a[1832] = entry(1, true);
	v->a[1833] = reduce(sym_heredoc_redirect, 5, 0, 65);
	v->a[1834] = entry(1, false);
	v->a[1835] = reduce(sym_heredoc_redirect, 5, 0, 65);
	v->a[1836] = entry(1, true);
	v->a[1837] = reduce(sym_heredoc_redirect, 4, 0, 22);
	v->a[1838] = entry(1, false);
	v->a[1839] = reduce(sym_heredoc_redirect, 4, 0, 22);
	parse_actions_entries_92(v);
}

void	parse_actions_entries_92(t_parse_actions_entries_array *v)
{
	v->a[1840] = entry(2, false);
	v->a[1841] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[1842] = shift_repeat(1171);
	v->a[1843] = entry(2, false);
	v->a[1844] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[1845] = shift_repeat(1133);
	v->a[1846] = entry(1, true);
	v->a[1847] = reduce(sym_if_statement, 7, 0, 66);
	v->a[1848] = entry(1, false);
	v->a[1849] = reduce(sym_if_statement, 7, 0, 66);
	v->a[1850] = entry(1, true);
	v->a[1851] = reduce(sym_case_statement, 7, 0, 70);
	v->a[1852] = entry(1, false);
	v->a[1853] = reduce(sym_case_statement, 7, 0, 70);
	v->a[1854] = entry(1, true);
	v->a[1855] = reduce(sym_case_statement, 7, 0, 71);
	v->a[1856] = entry(1, false);
	v->a[1857] = reduce(sym_case_statement, 7, 0, 71);
	v->a[1858] = entry(1, true);
	v->a[1859] = reduce(sym_heredoc_redirect, 5, 0, 64);
	parse_actions_entries_93(v);
}

void	parse_actions_entries_93(t_parse_actions_entries_array *v)
{
	v->a[1860] = entry(1, false);
	v->a[1861] = reduce(sym_heredoc_redirect, 5, 0, 64);
	v->a[1862] = entry(1, true);
	v->a[1863] = reduce(sym_heredoc_redirect, 6, 0, 72);
	v->a[1864] = entry(1, false);
	v->a[1865] = reduce(sym_heredoc_redirect, 6, 0, 72);
	v->a[1866] = entry(2, false);
	v->a[1867] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[1868] = shift_repeat(1132);
	v->a[1869] = entry(1, true);
	v->a[1870] = reduce(sym_case_statement, 8, 0, 76);
	v->a[1871] = entry(1, false);
	v->a[1872] = reduce(sym_case_statement, 8, 0, 76);
	v->a[1873] = entry(1, true);
	v->a[1874] = reduce(sym_case_statement, 5, 0, 35);
	v->a[1875] = entry(1, false);
	v->a[1876] = reduce(sym_case_statement, 5, 0, 35);
	v->a[1877] = entry(1, true);
	v->a[1878] = reduce(sym_for_statement, 4, 0, 33);
	v->a[1879] = entry(1, false);
	parse_actions_entries_94(v);
}

void	parse_actions_entries_94(t_parse_actions_entries_array *v)
{
	v->a[1880] = reduce(sym_for_statement, 4, 0, 33);
	v->a[1881] = entry(1, true);
	v->a[1882] = reduce(sym_case_statement, 5, 0, 49);
	v->a[1883] = entry(1, false);
	v->a[1884] = reduce(sym_case_statement, 5, 0, 49);
	v->a[1885] = entry(1, true);
	v->a[1886] = reduce(sym_do_group, 2, 0, 0);
	v->a[1887] = entry(1, false);
	v->a[1888] = reduce(sym_do_group, 2, 0, 0);
	v->a[1889] = entry(1, true);
	v->a[1890] = reduce(sym_if_statement, 5, 0, 46);
	v->a[1891] = entry(1, false);
	v->a[1892] = reduce(sym_if_statement, 5, 0, 46);
	v->a[1893] = entry(1, true);
	v->a[1894] = reduce(sym_if_statement, 4, 0, 34);
	v->a[1895] = entry(1, false);
	v->a[1896] = reduce(sym_if_statement, 4, 0, 34);
	v->a[1897] = entry(1, true);
	v->a[1898] = reduce(sym_do_group, 3, 0, 18);
	v->a[1899] = entry(1, false);
	parse_actions_entries_95(v);
}

/* EOF parse_actions_entries_18.c */
