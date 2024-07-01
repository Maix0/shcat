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
	v->a[1800] = sym_command;
	v->a[1801] = sym__variable_assignments;
	v->a[1802] = 34;
	v->a[1803] = actions(3);
	v->a[1804] = 1;
	v->a[1805] = sym_comment;
	v->a[1806] = actions(9);
	v->a[1807] = 1;
	v->a[1808] = anon_sym_for;
	v->a[1809] = actions(13);
	v->a[1810] = 1;
	v->a[1811] = anon_sym_if;
	v->a[1812] = actions(15);
	v->a[1813] = 1;
	v->a[1814] = anon_sym_case;
	v->a[1815] = actions(17);
	v->a[1816] = 1;
	v->a[1817] = anon_sym_LPAREN;
	v->a[1818] = actions(19);
	v->a[1819] = 1;
	small_parse_table_91(v);
}

void	small_parse_table_91(t_small_parse_table_array *v)
{
	v->a[1820] = anon_sym_LBRACE;
	v->a[1821] = actions(45);
	v->a[1822] = 1;
	v->a[1823] = sym_word;
	v->a[1824] = actions(53);
	v->a[1825] = 1;
	v->a[1826] = anon_sym_BANG;
	v->a[1827] = actions(59);
	v->a[1828] = 1;
	v->a[1829] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[1830] = actions(61);
	v->a[1831] = 1;
	v->a[1832] = anon_sym_DOLLAR;
	v->a[1833] = actions(63);
	v->a[1834] = 1;
	v->a[1835] = anon_sym_DQUOTE;
	v->a[1836] = actions(67);
	v->a[1837] = 1;
	v->a[1838] = anon_sym_DOLLAR_LBRACE;
	v->a[1839] = actions(69);
	small_parse_table_92(v);
}

void	small_parse_table_92(t_small_parse_table_array *v)
{
	v->a[1840] = 1;
	v->a[1841] = anon_sym_DOLLAR_LPAREN;
	v->a[1842] = actions(71);
	v->a[1843] = 1;
	v->a[1844] = anon_sym_BQUOTE;
	v->a[1845] = actions(73);
	v->a[1846] = 1;
	v->a[1847] = sym_file_descriptor;
	v->a[1848] = actions(75);
	v->a[1849] = 1;
	v->a[1850] = sym_variable_name;
	v->a[1851] = actions(87);
	v->a[1852] = 1;
	v->a[1853] = anon_sym_LF;
	v->a[1854] = state(135);
	v->a[1855] = 1;
	v->a[1856] = aux_sym__statements_repeat1;
	v->a[1857] = state(189);
	v->a[1858] = 1;
	v->a[1859] = sym_command_name;
	small_parse_table_93(v);
}

void	small_parse_table_93(t_small_parse_table_array *v)
{
	v->a[1860] = state(303);
	v->a[1861] = 1;
	v->a[1862] = sym_variable_assignment;
	v->a[1863] = state(650);
	v->a[1864] = 1;
	v->a[1865] = sym_concatenation;
	v->a[1866] = state(678);
	v->a[1867] = 1;
	v->a[1868] = aux_sym__case_item_last_repeat2;
	v->a[1869] = state(712);
	v->a[1870] = 1;
	v->a[1871] = sym_file_redirect;
	v->a[1872] = state(713);
	v->a[1873] = 1;
	v->a[1874] = aux_sym_command_repeat1;
	v->a[1875] = state(1227);
	v->a[1876] = 1;
	v->a[1877] = sym_pipeline;
	v->a[1878] = state(1333);
	v->a[1879] = 1;
	small_parse_table_94(v);
}

void	small_parse_table_94(t_small_parse_table_array *v)
{
	v->a[1880] = aux_sym_redirected_statement_repeat2;
	v->a[1881] = state(2103);
	v->a[1882] = 1;
	v->a[1883] = sym__statement_not_pipeline;
	v->a[1884] = state(2174);
	v->a[1885] = 1;
	v->a[1886] = sym__statements;
	v->a[1887] = actions(11);
	v->a[1888] = 2;
	v->a[1889] = anon_sym_while;
	v->a[1890] = anon_sym_until;
	v->a[1891] = actions(57);
	v->a[1892] = 2;
	v->a[1893] = anon_sym_LT_AMP_DASH;
	v->a[1894] = anon_sym_GT_AMP_DASH;
	v->a[1895] = actions(65);
	v->a[1896] = 2;
	v->a[1897] = sym_raw_string;
	v->a[1898] = sym_number;
	v->a[1899] = state(443);
	small_parse_table_95(v);
}

/* EOF small_parse_table_18.c */
