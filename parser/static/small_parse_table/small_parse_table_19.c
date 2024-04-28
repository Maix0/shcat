/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_19.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_95(t_small_parse_table_array *v)
{
	v->a[1900] = anon_sym_SEMI_SEMI;
	v->a[1901] = anon_sym_PIPE_AMP;
	v->a[1902] = anon_sym_AMP_GT;
	v->a[1903] = anon_sym_AMP_GT_GT;
	v->a[1904] = anon_sym_LT_AMP;
	v->a[1905] = anon_sym_GT_AMP;
	v->a[1906] = anon_sym_GT_PIPE;
	v->a[1907] = anon_sym_LT_AMP_DASH;
	v->a[1908] = anon_sym_GT_AMP_DASH;
	v->a[1909] = anon_sym_LT_LT_DASH;
	v->a[1910] = 28;
	v->a[1911] = actions(3);
	v->a[1912] = 1;
	v->a[1913] = sym_comment;
	v->a[1914] = actions(19);
	v->a[1915] = 1;
	v->a[1916] = anon_sym_LPAREN;
	v->a[1917] = actions(1549);
	v->a[1918] = 1;
	v->a[1919] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_96(v);
}

void	small_parse_table_96(t_small_parse_table_array *v)
{
	v->a[1920] = actions(1551);
	v->a[1921] = 1;
	v->a[1922] = anon_sym_DOLLAR;
	v->a[1923] = actions(1555);
	v->a[1924] = 1;
	v->a[1925] = anon_sym_DQUOTE;
	v->a[1926] = actions(1557);
	v->a[1927] = 1;
	v->a[1928] = aux_sym_number_token1;
	v->a[1929] = actions(1559);
	v->a[1930] = 1;
	v->a[1931] = aux_sym_number_token2;
	v->a[1932] = actions(1561);
	v->a[1933] = 1;
	v->a[1934] = anon_sym_DOLLAR_LBRACE;
	v->a[1935] = actions(1563);
	v->a[1936] = 1;
	v->a[1937] = anon_sym_DOLLAR_LPAREN;
	v->a[1938] = actions(1565);
	v->a[1939] = 1;
	small_parse_table_97(v);
}

void	small_parse_table_97(t_small_parse_table_array *v)
{
	v->a[1940] = anon_sym_BQUOTE;
	v->a[1941] = actions(1567);
	v->a[1942] = 1;
	v->a[1943] = anon_sym_DOLLAR_BQUOTE;
	v->a[1944] = actions(1573);
	v->a[1945] = 1;
	v->a[1946] = sym__bare_dollar;
	v->a[1947] = actions(1575);
	v->a[1948] = 1;
	v->a[1949] = sym__brace_start;
	v->a[1950] = actions(1690);
	v->a[1951] = 1;
	v->a[1952] = anon_sym_LT_LT_LT;
	v->a[1953] = actions(1692);
	v->a[1954] = 1;
	v->a[1955] = sym__special_character;
	v->a[1956] = actions(1694);
	v->a[1957] = 1;
	v->a[1958] = sym_test_operator;
	v->a[1959] = state(571);
	small_parse_table_98(v);
}

void	small_parse_table_98(t_small_parse_table_array *v)
{
	v->a[1960] = 1;
	v->a[1961] = aux_sym_command_repeat2;
	v->a[1962] = state(1321);
	v->a[1963] = 1;
	v->a[1964] = aux_sym__literal_repeat1;
	v->a[1965] = state(1712);
	v->a[1966] = 1;
	v->a[1967] = sym_herestring_redirect;
	v->a[1968] = state(1716);
	v->a[1969] = 1;
	v->a[1970] = sym_concatenation;
	v->a[1971] = state(4952);
	v->a[1972] = 1;
	v->a[1973] = sym_subshell;
	v->a[1974] = actions(1442);
	v->a[1975] = 2;
	v->a[1976] = sym_file_descriptor;
	v->a[1977] = aux_sym_heredoc_redirect_token1;
	v->a[1978] = actions(1543);
	v->a[1979] = 2;
	small_parse_table_99(v);
}

void	small_parse_table_99(t_small_parse_table_array *v)
{
	v->a[1980] = anon_sym_LPAREN_LPAREN;
	v->a[1981] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[1982] = actions(1569);
	v->a[1983] = 2;
	v->a[1984] = anon_sym_LT_LPAREN;
	v->a[1985] = anon_sym_GT_LPAREN;
	v->a[1986] = actions(1688);
	v->a[1987] = 2;
	v->a[1988] = anon_sym_EQ_EQ;
	v->a[1989] = anon_sym_EQ_TILDE;
	v->a[1990] = actions(1686);
	v->a[1991] = 3;
	v->a[1992] = sym_raw_string;
	v->a[1993] = sym_ansi_c_string;
	v->a[1994] = sym_word;
	v->a[1995] = state(1219);
	v->a[1996] = 9;
	v->a[1997] = sym_arithmetic_expansion;
	v->a[1998] = sym_brace_expression;
	v->a[1999] = sym_string;
	small_parse_table_100(v);
}

/* EOF small_parse_table_19.c */
