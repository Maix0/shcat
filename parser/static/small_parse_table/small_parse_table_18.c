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
	v->a[1800] = sym__statement_not_pipeline;
	v->a[1801] = state(1715);
	v->a[1802] = 1;
	v->a[1803] = sym__statements;
	v->a[1804] = actions(11);
	v->a[1805] = 2;
	v->a[1806] = anon_sym_while;
	v->a[1807] = anon_sym_until;
	v->a[1808] = actions(59);
	v->a[1809] = 2;
	v->a[1810] = sym_raw_string;
	v->a[1811] = sym_number;
	v->a[1812] = state(425);
	v->a[1813] = 5;
	v->a[1814] = sym_arithmetic_expansion;
	v->a[1815] = sym_string;
	v->a[1816] = sym_simple_expansion;
	v->a[1817] = sym_expansion;
	v->a[1818] = sym_command_substitution;
	v->a[1819] = actions(51);
	small_parse_table_91(v);
}

void	small_parse_table_91(t_small_parse_table_array *v)
{
	v->a[1820] = 7;
	v->a[1821] = anon_sym_LT;
	v->a[1822] = anon_sym_GT;
	v->a[1823] = anon_sym_GT_GT;
	v->a[1824] = anon_sym_LT_AMP;
	v->a[1825] = anon_sym_GT_AMP;
	v->a[1826] = anon_sym_GT_PIPE;
	v->a[1827] = anon_sym_LT_GT;
	v->a[1828] = state(936);
	v->a[1829] = 12;
	v->a[1830] = sym_redirected_statement;
	v->a[1831] = sym_for_statement;
	v->a[1832] = sym_while_statement;
	v->a[1833] = sym_if_statement;
	v->a[1834] = sym_case_statement;
	v->a[1835] = sym_function_definition;
	v->a[1836] = sym_compound_statement;
	v->a[1837] = sym_subshell;
	v->a[1838] = sym_list;
	v->a[1839] = sym_negated_command;
	small_parse_table_92(v);
}

void	small_parse_table_92(t_small_parse_table_array *v)
{
	v->a[1840] = sym_command;
	v->a[1841] = sym__variable_assignments;
	v->a[1842] = 32;
	v->a[1843] = actions(3);
	v->a[1844] = 1;
	v->a[1845] = sym_comment;
	v->a[1846] = actions(9);
	v->a[1847] = 1;
	v->a[1848] = anon_sym_for;
	v->a[1849] = actions(13);
	v->a[1850] = 1;
	v->a[1851] = anon_sym_if;
	v->a[1852] = actions(15);
	v->a[1853] = 1;
	v->a[1854] = anon_sym_case;
	v->a[1855] = actions(17);
	v->a[1856] = 1;
	v->a[1857] = anon_sym_LPAREN;
	v->a[1858] = actions(19);
	v->a[1859] = 1;
	small_parse_table_93(v);
}

void	small_parse_table_93(t_small_parse_table_array *v)
{
	v->a[1860] = anon_sym_LBRACE;
	v->a[1861] = actions(41);
	v->a[1862] = 1;
	v->a[1863] = sym_word;
	v->a[1864] = actions(49);
	v->a[1865] = 1;
	v->a[1866] = anon_sym_BANG;
	v->a[1867] = actions(53);
	v->a[1868] = 1;
	v->a[1869] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[1870] = actions(55);
	v->a[1871] = 1;
	v->a[1872] = anon_sym_DOLLAR;
	v->a[1873] = actions(57);
	v->a[1874] = 1;
	v->a[1875] = anon_sym_DQUOTE;
	v->a[1876] = actions(61);
	v->a[1877] = 1;
	v->a[1878] = anon_sym_DOLLAR_LBRACE;
	v->a[1879] = actions(63);
	small_parse_table_94(v);
}

void	small_parse_table_94(t_small_parse_table_array *v)
{
	v->a[1880] = 1;
	v->a[1881] = anon_sym_DOLLAR_LPAREN;
	v->a[1882] = actions(65);
	v->a[1883] = 1;
	v->a[1884] = anon_sym_BQUOTE;
	v->a[1885] = actions(67);
	v->a[1886] = 1;
	v->a[1887] = sym_variable_name;
	v->a[1888] = actions(115);
	v->a[1889] = 1;
	v->a[1890] = anon_sym_LF;
	v->a[1891] = state(117);
	v->a[1892] = 1;
	v->a[1893] = aux_sym__statements_repeat1;
	v->a[1894] = state(271);
	v->a[1895] = 1;
	v->a[1896] = sym_command_name;
	v->a[1897] = state(288);
	v->a[1898] = 1;
	v->a[1899] = sym_variable_assignment;
	small_parse_table_95(v);
}

/* EOF small_parse_table_18.c */
