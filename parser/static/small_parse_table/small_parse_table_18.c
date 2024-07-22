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
	v->a[1800] = anon_sym_DOLLAR_LBRACE;
	v->a[1801] = actions(117);
	v->a[1802] = 1;
	v->a[1803] = anon_sym_DOLLAR_LPAREN;
	v->a[1804] = actions(119);
	v->a[1805] = 1;
	v->a[1806] = anon_sym_BQUOTE;
	v->a[1807] = actions(121);
	v->a[1808] = 1;
	v->a[1809] = sym_file_descriptor;
	v->a[1810] = actions(123);
	v->a[1811] = 1;
	v->a[1812] = sym_variable_name;
	v->a[1813] = actions(125);
	v->a[1814] = 1;
	v->a[1815] = anon_sym_LF;
	v->a[1816] = state(131);
	v->a[1817] = 1;
	v->a[1818] = aux_sym__statements_repeat1;
	v->a[1819] = state(173);
	small_parse_table_91(v);
}

void	small_parse_table_91(t_small_parse_table_array *v)
{
	v->a[1820] = 1;
	v->a[1821] = sym_command_name;
	v->a[1822] = state(263);
	v->a[1823] = 1;
	v->a[1824] = sym_variable_assignment;
	v->a[1825] = state(584);
	v->a[1826] = 1;
	v->a[1827] = aux_sym__case_item_last_repeat2;
	v->a[1828] = state(597);
	v->a[1829] = 1;
	v->a[1830] = aux_sym_command_repeat1;
	v->a[1831] = state(598);
	v->a[1832] = 1;
	v->a[1833] = sym_concatenation;
	v->a[1834] = state(714);
	v->a[1835] = 1;
	v->a[1836] = sym_file_redirect;
	v->a[1837] = state(1063);
	v->a[1838] = 1;
	v->a[1839] = sym_pipeline;
	small_parse_table_92(v);
}

void	small_parse_table_92(t_small_parse_table_array *v)
{
	v->a[1840] = state(1123);
	v->a[1841] = 1;
	v->a[1842] = aux_sym_redirected_statement_repeat2;
	v->a[1843] = state(1902);
	v->a[1844] = 1;
	v->a[1845] = sym__statements;
	v->a[1846] = state(1903);
	v->a[1847] = 1;
	v->a[1848] = sym__statement_not_pipeline;
	v->a[1849] = actions(91);
	v->a[1850] = 2;
	v->a[1851] = anon_sym_while;
	v->a[1852] = anon_sym_until;
	v->a[1853] = actions(113);
	v->a[1854] = 2;
	v->a[1855] = sym_raw_string;
	v->a[1856] = sym_number;
	v->a[1857] = state(378);
	v->a[1858] = 5;
	v->a[1859] = sym_arithmetic_expansion;
	small_parse_table_93(v);
}

void	small_parse_table_93(t_small_parse_table_array *v)
{
	v->a[1860] = sym_string;
	v->a[1861] = sym_simple_expansion;
	v->a[1862] = sym_expansion;
	v->a[1863] = sym_command_substitution;
	v->a[1864] = actions(105);
	v->a[1865] = 7;
	v->a[1866] = anon_sym_LT;
	v->a[1867] = anon_sym_GT;
	v->a[1868] = anon_sym_GT_GT;
	v->a[1869] = anon_sym_LT_AMP;
	v->a[1870] = anon_sym_GT_AMP;
	v->a[1871] = anon_sym_GT_PIPE;
	v->a[1872] = anon_sym_LT_GT;
	v->a[1873] = state(987);
	v->a[1874] = 12;
	v->a[1875] = sym_redirected_statement;
	v->a[1876] = sym_for_statement;
	v->a[1877] = sym_while_statement;
	v->a[1878] = sym_if_statement;
	v->a[1879] = sym_case_statement;
	small_parse_table_94(v);
}

void	small_parse_table_94(t_small_parse_table_array *v)
{
	v->a[1880] = sym_function_definition;
	v->a[1881] = sym_compound_statement;
	v->a[1882] = sym_subshell;
	v->a[1883] = sym_list;
	v->a[1884] = sym_negated_command;
	v->a[1885] = sym_command;
	v->a[1886] = sym__variable_assignments;
	v->a[1887] = 33;
	v->a[1888] = actions(3);
	v->a[1889] = 1;
	v->a[1890] = sym_comment;
	v->a[1891] = actions(87);
	v->a[1892] = 1;
	v->a[1893] = sym_word;
	v->a[1894] = actions(89);
	v->a[1895] = 1;
	v->a[1896] = anon_sym_for;
	v->a[1897] = actions(93);
	v->a[1898] = 1;
	v->a[1899] = anon_sym_if;
	small_parse_table_95(v);
}

/* EOF small_parse_table_18.c */
