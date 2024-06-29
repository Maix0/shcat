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
	v->a[1800] = 2;
	v->a[1801] = sym_raw_string;
	v->a[1802] = sym_number;
	v->a[1803] = state(420);
	v->a[1804] = 5;
	v->a[1805] = sym_arithmetic_expansion;
	v->a[1806] = sym_string;
	v->a[1807] = sym_simple_expansion;
	v->a[1808] = sym_expansion;
	v->a[1809] = sym_command_substitution;
	v->a[1810] = actions(55);
	v->a[1811] = 8;
	v->a[1812] = anon_sym_LT;
	v->a[1813] = anon_sym_GT;
	v->a[1814] = anon_sym_GT_GT;
	v->a[1815] = anon_sym_AMP_GT;
	v->a[1816] = anon_sym_AMP_GT_GT;
	v->a[1817] = anon_sym_LT_AMP;
	v->a[1818] = anon_sym_GT_AMP;
	v->a[1819] = anon_sym_GT_PIPE;
	small_parse_table_91(v);
}

void	small_parse_table_91(t_small_parse_table_array *v)
{
	v->a[1820] = state(1146);
	v->a[1821] = 12;
	v->a[1822] = sym_redirected_statement;
	v->a[1823] = sym_for_statement;
	v->a[1824] = sym_while_statement;
	v->a[1825] = sym_if_statement;
	v->a[1826] = sym_case_statement;
	v->a[1827] = sym_function_definition;
	v->a[1828] = sym_compound_statement;
	v->a[1829] = sym_subshell;
	v->a[1830] = sym_list;
	v->a[1831] = sym_negated_command;
	v->a[1832] = sym_command;
	v->a[1833] = sym__variable_assignments;
	v->a[1834] = 34;
	v->a[1835] = actions(3);
	v->a[1836] = 1;
	v->a[1837] = sym_comment;
	v->a[1838] = actions(9);
	v->a[1839] = 1;
	small_parse_table_92(v);
}

void	small_parse_table_92(t_small_parse_table_array *v)
{
	v->a[1840] = anon_sym_for;
	v->a[1841] = actions(13);
	v->a[1842] = 1;
	v->a[1843] = anon_sym_if;
	v->a[1844] = actions(15);
	v->a[1845] = 1;
	v->a[1846] = anon_sym_case;
	v->a[1847] = actions(17);
	v->a[1848] = 1;
	v->a[1849] = anon_sym_LPAREN;
	v->a[1850] = actions(19);
	v->a[1851] = 1;
	v->a[1852] = anon_sym_LBRACE;
	v->a[1853] = actions(45);
	v->a[1854] = 1;
	v->a[1855] = sym_word;
	v->a[1856] = actions(53);
	v->a[1857] = 1;
	v->a[1858] = anon_sym_BANG;
	v->a[1859] = actions(59);
	small_parse_table_93(v);
}

void	small_parse_table_93(t_small_parse_table_array *v)
{
	v->a[1860] = 1;
	v->a[1861] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[1862] = actions(61);
	v->a[1863] = 1;
	v->a[1864] = anon_sym_DOLLAR;
	v->a[1865] = actions(63);
	v->a[1866] = 1;
	v->a[1867] = anon_sym_DQUOTE;
	v->a[1868] = actions(67);
	v->a[1869] = 1;
	v->a[1870] = anon_sym_DOLLAR_LBRACE;
	v->a[1871] = actions(69);
	v->a[1872] = 1;
	v->a[1873] = anon_sym_DOLLAR_LPAREN;
	v->a[1874] = actions(71);
	v->a[1875] = 1;
	v->a[1876] = anon_sym_BQUOTE;
	v->a[1877] = actions(73);
	v->a[1878] = 1;
	v->a[1879] = sym_file_descriptor;
	small_parse_table_94(v);
}

void	small_parse_table_94(t_small_parse_table_array *v)
{
	v->a[1880] = actions(75);
	v->a[1881] = 1;
	v->a[1882] = sym_variable_name;
	v->a[1883] = actions(135);
	v->a[1884] = 1;
	v->a[1885] = anon_sym_LF;
	v->a[1886] = state(10);
	v->a[1887] = 1;
	v->a[1888] = aux_sym__case_item_last_repeat2;
	v->a[1889] = state(130);
	v->a[1890] = 1;
	v->a[1891] = aux_sym__statements_repeat1;
	v->a[1892] = state(191);
	v->a[1893] = 1;
	v->a[1894] = sym_command_name;
	v->a[1895] = state(262);
	v->a[1896] = 1;
	v->a[1897] = sym_variable_assignment;
	v->a[1898] = state(624);
	v->a[1899] = 1;
	small_parse_table_95(v);
}

/* EOF small_parse_table_18.c */
