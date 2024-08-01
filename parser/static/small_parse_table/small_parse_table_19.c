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
	v->a[1900] = anon_sym_for;
	v->a[1901] = actions(13);
	v->a[1902] = 1;
	v->a[1903] = anon_sym_if;
	v->a[1904] = actions(15);
	v->a[1905] = 1;
	v->a[1906] = anon_sym_case;
	v->a[1907] = actions(17);
	v->a[1908] = 1;
	v->a[1909] = anon_sym_LPAREN;
	v->a[1910] = actions(19);
	v->a[1911] = 1;
	v->a[1912] = anon_sym_LBRACE;
	v->a[1913] = actions(41);
	v->a[1914] = 1;
	v->a[1915] = sym_word;
	v->a[1916] = actions(49);
	v->a[1917] = 1;
	v->a[1918] = anon_sym_BANG;
	v->a[1919] = actions(53);
	small_parse_table_96(v);
}

void	small_parse_table_96(t_small_parse_table_array *v)
{
	v->a[1920] = 1;
	v->a[1921] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[1922] = actions(55);
	v->a[1923] = 1;
	v->a[1924] = anon_sym_DOLLAR;
	v->a[1925] = actions(57);
	v->a[1926] = 1;
	v->a[1927] = anon_sym_DQUOTE;
	v->a[1928] = actions(61);
	v->a[1929] = 1;
	v->a[1930] = anon_sym_DOLLAR_LBRACE;
	v->a[1931] = actions(63);
	v->a[1932] = 1;
	v->a[1933] = anon_sym_DOLLAR_LPAREN;
	v->a[1934] = actions(65);
	v->a[1935] = 1;
	v->a[1936] = anon_sym_BQUOTE;
	v->a[1937] = actions(67);
	v->a[1938] = 1;
	v->a[1939] = sym_variable_name;
	small_parse_table_97(v);
}

void	small_parse_table_97(t_small_parse_table_array *v)
{
	v->a[1940] = actions(115);
	v->a[1941] = 1;
	v->a[1942] = anon_sym_LF;
	v->a[1943] = state(118);
	v->a[1944] = 1;
	v->a[1945] = aux_sym__statements_repeat1;
	v->a[1946] = state(185);
	v->a[1947] = 1;
	v->a[1948] = sym_command_name;
	v->a[1949] = state(216);
	v->a[1950] = 1;
	v->a[1951] = sym_variable_assignment;
	v->a[1952] = state(326);
	v->a[1953] = 1;
	v->a[1954] = aux_sym__case_item_last_repeat2;
	v->a[1955] = state(411);
	v->a[1956] = 1;
	v->a[1957] = aux_sym_command_repeat1;
	v->a[1958] = state(551);
	v->a[1959] = 1;
	small_parse_table_98(v);
}

void	small_parse_table_98(t_small_parse_table_array *v)
{
	v->a[1960] = sym_file_redirect;
	v->a[1961] = state(555);
	v->a[1962] = 1;
	v->a[1963] = sym_concatenation;
	v->a[1964] = state(991);
	v->a[1965] = 1;
	v->a[1966] = sym_pipeline;
	v->a[1967] = state(1126);
	v->a[1968] = 1;
	v->a[1969] = aux_sym_redirected_statement_repeat2;
	v->a[1970] = state(1561);
	v->a[1971] = 1;
	v->a[1972] = sym__statement_not_pipeline;
	v->a[1973] = state(1722);
	v->a[1974] = 1;
	v->a[1975] = sym__statements;
	v->a[1976] = actions(11);
	v->a[1977] = 2;
	v->a[1978] = anon_sym_while;
	v->a[1979] = anon_sym_until;
	small_parse_table_99(v);
}

void	small_parse_table_99(t_small_parse_table_array *v)
{
	v->a[1980] = actions(59);
	v->a[1981] = 2;
	v->a[1982] = sym_raw_string;
	v->a[1983] = sym_number;
	v->a[1984] = actions(51);
	v->a[1985] = 3;
	v->a[1986] = anon_sym_LT;
	v->a[1987] = anon_sym_GT;
	v->a[1988] = anon_sym_GT_GT;
	v->a[1989] = state(401);
	v->a[1990] = 5;
	v->a[1991] = sym_arithmetic_expansion;
	v->a[1992] = sym_string;
	v->a[1993] = sym_simple_expansion;
	v->a[1994] = sym_expansion;
	v->a[1995] = sym_command_substitution;
	v->a[1996] = state(972);
	v->a[1997] = 12;
	v->a[1998] = sym_redirected_statement;
	v->a[1999] = sym_for_statement;
	small_parse_table_100(v);
}

/* EOF small_parse_table_19.c */
