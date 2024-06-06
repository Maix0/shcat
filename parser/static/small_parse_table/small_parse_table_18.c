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
	v->a[1800] = sym_word;
	v->a[1801] = actions(822);
	v->a[1802] = 3;
	v->a[1803] = sym_file_descriptor;
	v->a[1804] = ts_builtin_sym_end;
	v->a[1805] = aux_sym_heredoc_redirect_token1;
	v->a[1806] = state(285);
	v->a[1807] = 3;
	v->a[1808] = sym_variable_assignment;
	v->a[1809] = sym_concatenation;
	v->a[1810] = aux_sym_declaration_command_repeat1;
	v->a[1811] = state(693);
	v->a[1812] = 7;
	v->a[1813] = sym_arithmetic_expansion;
	v->a[1814] = sym_brace_expression;
	v->a[1815] = sym_string;
	v->a[1816] = sym_number;
	v->a[1817] = sym_simple_expansion;
	v->a[1818] = sym_expansion;
	v->a[1819] = sym_command_substitution;
	small_parse_table_91(v);
}

void	small_parse_table_91(t_small_parse_table_array *v)
{
	v->a[1820] = actions(820);
	v->a[1821] = 19;
	v->a[1822] = anon_sym_PIPE;
	v->a[1823] = anon_sym_SEMI_SEMI;
	v->a[1824] = anon_sym_PIPE_AMP;
	v->a[1825] = anon_sym_AMP_AMP;
	v->a[1826] = anon_sym_PIPE_PIPE;
	v->a[1827] = anon_sym_LT;
	v->a[1828] = anon_sym_GT;
	v->a[1829] = anon_sym_GT_GT;
	v->a[1830] = anon_sym_AMP_GT;
	v->a[1831] = anon_sym_AMP_GT_GT;
	v->a[1832] = anon_sym_LT_AMP;
	v->a[1833] = anon_sym_GT_AMP;
	v->a[1834] = anon_sym_GT_PIPE;
	v->a[1835] = anon_sym_LT_AMP_DASH;
	v->a[1836] = anon_sym_GT_AMP_DASH;
	v->a[1837] = anon_sym_LT_LT;
	v->a[1838] = anon_sym_LT_LT_DASH;
	v->a[1839] = anon_sym_AMP;
	small_parse_table_92(v);
}

void	small_parse_table_92(t_small_parse_table_array *v)
{
	v->a[1840] = anon_sym_SEMI;
	v->a[1841] = 21;
	v->a[1842] = actions(3);
	v->a[1843] = 1;
	v->a[1844] = sym_comment;
	v->a[1845] = actions(1102);
	v->a[1846] = 1;
	v->a[1847] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[1848] = actions(1105);
	v->a[1849] = 1;
	v->a[1850] = anon_sym_DOLLAR;
	v->a[1851] = actions(1108);
	v->a[1852] = 1;
	v->a[1853] = sym__special_character;
	v->a[1854] = actions(1111);
	v->a[1855] = 1;
	v->a[1856] = anon_sym_DQUOTE;
	v->a[1857] = actions(1114);
	v->a[1858] = 1;
	v->a[1859] = aux_sym_number_token1;
	small_parse_table_93(v);
}

void	small_parse_table_93(t_small_parse_table_array *v)
{
	v->a[1860] = actions(1117);
	v->a[1861] = 1;
	v->a[1862] = aux_sym_number_token2;
	v->a[1863] = actions(1120);
	v->a[1864] = 1;
	v->a[1865] = anon_sym_DOLLAR_LBRACE;
	v->a[1866] = actions(1123);
	v->a[1867] = 1;
	v->a[1868] = anon_sym_DOLLAR_LPAREN;
	v->a[1869] = actions(1126);
	v->a[1870] = 1;
	v->a[1871] = anon_sym_BQUOTE;
	v->a[1872] = actions(1129);
	v->a[1873] = 1;
	v->a[1874] = anon_sym_DOLLAR_BQUOTE;
	v->a[1875] = actions(1132);
	v->a[1876] = 1;
	v->a[1877] = aux_sym__simple_variable_name_token1;
	v->a[1878] = actions(1135);
	v->a[1879] = 1;
	small_parse_table_94(v);
}

void	small_parse_table_94(t_small_parse_table_array *v)
{
	v->a[1880] = sym_variable_name;
	v->a[1881] = actions(1138);
	v->a[1882] = 1;
	v->a[1883] = sym_test_operator;
	v->a[1884] = actions(1141);
	v->a[1885] = 1;
	v->a[1886] = sym__brace_start;
	v->a[1887] = state(1062);
	v->a[1888] = 1;
	v->a[1889] = aux_sym__literal_repeat1;
	v->a[1890] = actions(1099);
	v->a[1891] = 2;
	v->a[1892] = sym_raw_string;
	v->a[1893] = sym_word;
	v->a[1894] = actions(766);
	v->a[1895] = 3;
	v->a[1896] = sym_file_descriptor;
	v->a[1897] = ts_builtin_sym_end;
	v->a[1898] = aux_sym_heredoc_redirect_token1;
	v->a[1899] = state(279);
	small_parse_table_95(v);
}

/* EOF small_parse_table_18.c */
