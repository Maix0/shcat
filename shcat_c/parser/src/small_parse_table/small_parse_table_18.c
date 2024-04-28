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
	v->a[1800] = actions(1549);
	v->a[1801] = 1;
	v->a[1802] = anon_sym_DOLLAR_LBRACK;
	v->a[1803] = actions(1551);
	v->a[1804] = 1;
	v->a[1805] = anon_sym_DOLLAR;
	v->a[1806] = actions(1555);
	v->a[1807] = 1;
	v->a[1808] = anon_sym_DQUOTE;
	v->a[1809] = actions(1557);
	v->a[1810] = 1;
	v->a[1811] = aux_sym_number_token1;
	v->a[1812] = actions(1559);
	v->a[1813] = 1;
	v->a[1814] = aux_sym_number_token2;
	v->a[1815] = actions(1561);
	v->a[1816] = 1;
	v->a[1817] = anon_sym_DOLLAR_LBRACE;
	v->a[1818] = actions(1563);
	v->a[1819] = 1;
	small_parse_table_91(v);
}

void	small_parse_table_91(t_small_parse_table_array *v)
{
	v->a[1820] = anon_sym_DOLLAR_LPAREN;
	v->a[1821] = actions(1565);
	v->a[1822] = 1;
	v->a[1823] = anon_sym_BQUOTE;
	v->a[1824] = actions(1567);
	v->a[1825] = 1;
	v->a[1826] = anon_sym_DOLLAR_BQUOTE;
	v->a[1827] = actions(1573);
	v->a[1828] = 1;
	v->a[1829] = sym__bare_dollar;
	v->a[1830] = actions(1575);
	v->a[1831] = 1;
	v->a[1832] = sym__brace_start;
	v->a[1833] = actions(1690);
	v->a[1834] = 1;
	v->a[1835] = anon_sym_LT_LT_LT;
	v->a[1836] = actions(1692);
	v->a[1837] = 1;
	v->a[1838] = sym__special_character;
	v->a[1839] = actions(1694);
	small_parse_table_92(v);
}

void	small_parse_table_92(t_small_parse_table_array *v)
{
	v->a[1840] = 1;
	v->a[1841] = sym_test_operator;
	v->a[1842] = state(582);
	v->a[1843] = 1;
	v->a[1844] = aux_sym_command_repeat2;
	v->a[1845] = state(1321);
	v->a[1846] = 1;
	v->a[1847] = aux_sym__literal_repeat1;
	v->a[1848] = state(1712);
	v->a[1849] = 1;
	v->a[1850] = sym_herestring_redirect;
	v->a[1851] = state(1716);
	v->a[1852] = 1;
	v->a[1853] = sym_concatenation;
	v->a[1854] = state(4911);
	v->a[1855] = 1;
	v->a[1856] = sym_subshell;
	v->a[1857] = actions(1408);
	v->a[1858] = 2;
	v->a[1859] = sym_file_descriptor;
	small_parse_table_93(v);
}

void	small_parse_table_93(t_small_parse_table_array *v)
{
	v->a[1860] = aux_sym_heredoc_redirect_token1;
	v->a[1861] = actions(1543);
	v->a[1862] = 2;
	v->a[1863] = anon_sym_LPAREN_LPAREN;
	v->a[1864] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[1865] = actions(1569);
	v->a[1866] = 2;
	v->a[1867] = anon_sym_LT_LPAREN;
	v->a[1868] = anon_sym_GT_LPAREN;
	v->a[1869] = actions(1688);
	v->a[1870] = 2;
	v->a[1871] = anon_sym_EQ_EQ;
	v->a[1872] = anon_sym_EQ_TILDE;
	v->a[1873] = actions(1686);
	v->a[1874] = 3;
	v->a[1875] = sym_raw_string;
	v->a[1876] = sym_ansi_c_string;
	v->a[1877] = sym_word;
	v->a[1878] = state(1219);
	v->a[1879] = 9;
	small_parse_table_94(v);
}

void	small_parse_table_94(t_small_parse_table_array *v)
{
	v->a[1880] = sym_arithmetic_expansion;
	v->a[1881] = sym_brace_expression;
	v->a[1882] = sym_string;
	v->a[1883] = sym_translated_string;
	v->a[1884] = sym_number;
	v->a[1885] = sym_simple_expansion;
	v->a[1886] = sym_expansion;
	v->a[1887] = sym_command_substitution;
	v->a[1888] = sym_process_substitution;
	v->a[1889] = actions(1404);
	v->a[1890] = 19;
	v->a[1891] = anon_sym_SEMI;
	v->a[1892] = anon_sym_PIPE_PIPE;
	v->a[1893] = anon_sym_AMP_AMP;
	v->a[1894] = anon_sym_PIPE;
	v->a[1895] = anon_sym_AMP;
	v->a[1896] = anon_sym_LT;
	v->a[1897] = anon_sym_GT;
	v->a[1898] = anon_sym_LT_LT;
	v->a[1899] = anon_sym_GT_GT;
	small_parse_table_95(v);
}

/* EOF small_parse_table_18.c */
