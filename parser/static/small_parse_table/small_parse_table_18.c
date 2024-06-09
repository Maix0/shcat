/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_18.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_90(t_small_parse_table_array *v)
{
	v->a[1800] = actions(19);
	v->a[1801] = 1;
	v->a[1802] = anon_sym_LBRACE;
	v->a[1803] = actions(49);
	v->a[1804] = 1;
	v->a[1805] = sym_word;
	v->a[1806] = actions(57);
	v->a[1807] = 1;
	v->a[1808] = anon_sym_BANG;
	v->a[1809] = actions(63);
	v->a[1810] = 1;
	v->a[1811] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[1812] = actions(65);
	v->a[1813] = 1;
	v->a[1814] = anon_sym_DOLLAR;
	v->a[1815] = actions(67);
	v->a[1816] = 1;
	v->a[1817] = anon_sym_DQUOTE;
	v->a[1818] = actions(69);
	v->a[1819] = 1;
	small_parse_table_91(v);
}

void	small_parse_table_91(t_small_parse_table_array *v)
{
	v->a[1820] = sym_raw_string;
	v->a[1821] = actions(71);
	v->a[1822] = 1;
	v->a[1823] = aux_sym_number_token1;
	v->a[1824] = actions(73);
	v->a[1825] = 1;
	v->a[1826] = aux_sym_number_token2;
	v->a[1827] = actions(75);
	v->a[1828] = 1;
	v->a[1829] = anon_sym_DOLLAR_LBRACE;
	v->a[1830] = actions(77);
	v->a[1831] = 1;
	v->a[1832] = anon_sym_DOLLAR_LPAREN;
	v->a[1833] = actions(79);
	v->a[1834] = 1;
	v->a[1835] = anon_sym_BQUOTE;
	v->a[1836] = actions(81);
	v->a[1837] = 1;
	v->a[1838] = sym_file_descriptor;
	v->a[1839] = actions(83);
	small_parse_table_92(v);
}

void	small_parse_table_92(t_small_parse_table_array *v)
{
	v->a[1840] = 1;
	v->a[1841] = sym_variable_name;
	v->a[1842] = actions(145);
	v->a[1843] = 1;
	v->a[1844] = anon_sym_LF;
	v->a[1845] = state(11);
	v->a[1846] = 1;
	v->a[1847] = aux_sym__case_item_last_repeat2;
	v->a[1848] = state(131);
	v->a[1849] = 1;
	v->a[1850] = aux_sym__statements_repeat1;
	v->a[1851] = state(190);
	v->a[1852] = 1;
	v->a[1853] = sym_command_name;
	v->a[1854] = state(314);
	v->a[1855] = 1;
	v->a[1856] = sym_variable_assignment;
	v->a[1857] = state(582);
	v->a[1858] = 1;
	v->a[1859] = sym_concatenation;
	small_parse_table_93(v);
}

void	small_parse_table_93(t_small_parse_table_array *v)
{
	v->a[1860] = state(587);
	v->a[1861] = 1;
	v->a[1862] = aux_sym_command_repeat1;
	v->a[1863] = state(718);
	v->a[1864] = 1;
	v->a[1865] = sym_file_redirect;
	v->a[1866] = state(1211);
	v->a[1867] = 1;
	v->a[1868] = sym_pipeline;
	v->a[1869] = state(1213);
	v->a[1870] = 1;
	v->a[1871] = aux_sym_redirected_statement_repeat2;
	v->a[1872] = state(2035);
	v->a[1873] = 1;
	v->a[1874] = sym__statement_not_pipeline;
	v->a[1875] = state(2082);
	v->a[1876] = 1;
	v->a[1877] = sym__statements;
	v->a[1878] = actions(11);
	v->a[1879] = 2;
	small_parse_table_94(v);
}

void	small_parse_table_94(t_small_parse_table_array *v)
{
	v->a[1880] = anon_sym_while;
	v->a[1881] = anon_sym_until;
	v->a[1882] = actions(61);
	v->a[1883] = 2;
	v->a[1884] = anon_sym_LT_AMP_DASH;
	v->a[1885] = anon_sym_GT_AMP_DASH;
	v->a[1886] = state(397);
	v->a[1887] = 6;
	v->a[1888] = sym_arithmetic_expansion;
	v->a[1889] = sym_string;
	v->a[1890] = sym_number;
	v->a[1891] = sym_simple_expansion;
	v->a[1892] = sym_expansion;
	v->a[1893] = sym_command_substitution;
	v->a[1894] = actions(59);
	v->a[1895] = 8;
	v->a[1896] = anon_sym_LT;
	v->a[1897] = anon_sym_GT;
	v->a[1898] = anon_sym_GT_GT;
	v->a[1899] = anon_sym_AMP_GT;
	small_parse_table_95(v);
}

/* EOF small_parse_table_18.c */
