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
	v->a[1800] = actions(49);
	v->a[1801] = 1;
	v->a[1802] = anon_sym_BANG;
	v->a[1803] = actions(53);
	v->a[1804] = 1;
	v->a[1805] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[1806] = actions(55);
	v->a[1807] = 1;
	v->a[1808] = anon_sym_DOLLAR;
	v->a[1809] = actions(57);
	v->a[1810] = 1;
	v->a[1811] = anon_sym_DQUOTE;
	v->a[1812] = actions(61);
	v->a[1813] = 1;
	v->a[1814] = anon_sym_DOLLAR_LBRACE;
	v->a[1815] = actions(63);
	v->a[1816] = 1;
	v->a[1817] = anon_sym_DOLLAR_LPAREN;
	v->a[1818] = actions(65);
	v->a[1819] = 1;
	small_parse_table_91(v);
}

void	small_parse_table_91(t_small_parse_table_array *v)
{
	v->a[1820] = anon_sym_BQUOTE;
	v->a[1821] = actions(67);
	v->a[1822] = 1;
	v->a[1823] = sym_variable_name;
	v->a[1824] = actions(121);
	v->a[1825] = 1;
	v->a[1826] = anon_sym_LF;
	v->a[1827] = state(9);
	v->a[1828] = 1;
	v->a[1829] = aux_sym__case_item_last_repeat2;
	v->a[1830] = state(118);
	v->a[1831] = 1;
	v->a[1832] = aux_sym__statements_repeat1;
	v->a[1833] = state(185);
	v->a[1834] = 1;
	v->a[1835] = sym_command_name;
	v->a[1836] = state(216);
	v->a[1837] = 1;
	v->a[1838] = sym_variable_assignment;
	v->a[1839] = state(411);
	small_parse_table_92(v);
}

void	small_parse_table_92(t_small_parse_table_array *v)
{
	v->a[1840] = 1;
	v->a[1841] = aux_sym_command_repeat1;
	v->a[1842] = state(551);
	v->a[1843] = 1;
	v->a[1844] = sym_file_redirect;
	v->a[1845] = state(555);
	v->a[1846] = 1;
	v->a[1847] = sym_concatenation;
	v->a[1848] = state(991);
	v->a[1849] = 1;
	v->a[1850] = sym_pipeline;
	v->a[1851] = state(1126);
	v->a[1852] = 1;
	v->a[1853] = aux_sym_redirected_statement_repeat2;
	v->a[1854] = state(1561);
	v->a[1855] = 1;
	v->a[1856] = sym__statement_not_pipeline;
	v->a[1857] = state(1605);
	v->a[1858] = 1;
	v->a[1859] = sym__statements;
	small_parse_table_93(v);
}

void	small_parse_table_93(t_small_parse_table_array *v)
{
	v->a[1860] = actions(11);
	v->a[1861] = 2;
	v->a[1862] = anon_sym_while;
	v->a[1863] = anon_sym_until;
	v->a[1864] = actions(59);
	v->a[1865] = 2;
	v->a[1866] = sym_raw_string;
	v->a[1867] = sym_number;
	v->a[1868] = actions(51);
	v->a[1869] = 3;
	v->a[1870] = anon_sym_LT;
	v->a[1871] = anon_sym_GT;
	v->a[1872] = anon_sym_GT_GT;
	v->a[1873] = state(401);
	v->a[1874] = 5;
	v->a[1875] = sym_arithmetic_expansion;
	v->a[1876] = sym_string;
	v->a[1877] = sym_simple_expansion;
	v->a[1878] = sym_expansion;
	v->a[1879] = sym_command_substitution;
	small_parse_table_94(v);
}

void	small_parse_table_94(t_small_parse_table_array *v)
{
	v->a[1880] = state(972);
	v->a[1881] = 12;
	v->a[1882] = sym_redirected_statement;
	v->a[1883] = sym_for_statement;
	v->a[1884] = sym_while_statement;
	v->a[1885] = sym_if_statement;
	v->a[1886] = sym_case_statement;
	v->a[1887] = sym_function_definition;
	v->a[1888] = sym_compound_statement;
	v->a[1889] = sym_subshell;
	v->a[1890] = sym_list;
	v->a[1891] = sym_negated_command;
	v->a[1892] = sym_command;
	v->a[1893] = sym__variable_assignments;
	v->a[1894] = 32;
	v->a[1895] = actions(3);
	v->a[1896] = 1;
	v->a[1897] = sym_comment;
	v->a[1898] = actions(9);
	v->a[1899] = 1;
	small_parse_table_95(v);
}

/* EOF small_parse_table_18.c */
