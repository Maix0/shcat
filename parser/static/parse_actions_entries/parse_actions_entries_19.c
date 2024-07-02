/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_actions_entries_19.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_actions_entries.h"

void	parse_actions_entries_95(t_parse_actions_entries_array *v)
{
	v->a[1900] = entry(1, true);
	v->a[1901] = shift(698);
	v->a[1902] = entry(1, true);
	v->a[1903] = shift(1731);
	v->a[1904] = entry(1, true);
	v->a[1905] = shift(1268);
	v->a[1906] = entry(2, false);
	v->a[1907] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1908] = shift_repeat(1357);
	v->a[1909] = entry(2, true);
	v->a[1910] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1911] = shift_repeat(1357);
	v->a[1912] = entry(1, true);
	v->a[1913] = shift(1280);
	v->a[1914] = entry(1, true);
	v->a[1915] = shift(1359);
	v->a[1916] = entry(1, true);
	v->a[1917] = shift(1293);
	v->a[1918] = entry(1, true);
	v->a[1919] = reduce(aux_sym_pipeline_repeat1, 2, 0, 0);
	parse_actions_entries_96(v);
}

void	parse_actions_entries_96(t_parse_actions_entries_array *v)
{
	v->a[1920] = entry(2, false);
	v->a[1921] = reduce(aux_sym_pipeline_repeat1, 2, 0, 0);
	v->a[1922] = shift(149);
	v->a[1923] = entry(1, false);
	v->a[1924] = reduce(aux_sym_pipeline_repeat1, 2, 0, 0);
	v->a[1925] = entry(1, false);
	v->a[1926] = shift(1270);
	v->a[1927] = entry(1, true);
	v->a[1928] = shift(1270);
	v->a[1929] = entry(1, false);
	v->a[1930] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[1931] = entry(2, false);
	v->a[1932] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[1933] = shift_repeat(1371);
	v->a[1934] = entry(2, false);
	v->a[1935] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[1936] = shift_repeat(2052);
	v->a[1937] = entry(1, true);
	v->a[1938] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[1939] = entry(2, true);
	parse_actions_entries_97(v);
}

void	parse_actions_entries_97(t_parse_actions_entries_array *v)
{
	v->a[1940] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[1941] = shift_repeat(1726);
	v->a[1942] = entry(1, false);
	v->a[1943] = shift(1367);
	v->a[1944] = entry(1, true);
	v->a[1945] = shift(755);
	v->a[1946] = entry(1, true);
	v->a[1947] = shift(1730);
	v->a[1948] = entry(2, false);
	v->a[1949] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[1950] = shift_repeat(1391);
	v->a[1951] = entry(2, false);
	v->a[1952] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[1953] = shift_repeat(2079);
	v->a[1954] = entry(2, true);
	v->a[1955] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[1956] = shift_repeat(1731);
	v->a[1957] = entry(1, false);
	v->a[1958] = reduce(aux_sym__variable_assignments_repeat1, 2, 0, 0);
	v->a[1959] = entry(1, true);
	parse_actions_entries_98(v);
}

void	parse_actions_entries_98(t_parse_actions_entries_array *v)
{
	v->a[1960] = reduce(aux_sym__variable_assignments_repeat1, 2, 0, 0);
	v->a[1961] = entry(2, true);
	v->a[1962] = reduce(aux_sym__variable_assignments_repeat1, 2, 0, 0);
	v->a[1963] = shift_repeat(1991);
	v->a[1964] = entry(1, false);
	v->a[1965] = shift(1412);
	v->a[1966] = entry(1, false);
	v->a[1967] = shift(1924);
	v->a[1968] = entry(2, false);
	v->a[1969] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[1970] = shift_repeat(1416);
	v->a[1971] = entry(2, true);
	v->a[1972] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[1973] = shift_repeat(1728);
	v->a[1974] = entry(1, false);
	v->a[1975] = reduce(sym_redirected_statement, 2, -1, 9);
	v->a[1976] = entry(1, true);
	v->a[1977] = reduce(sym_redirected_statement, 2, -1, 9);
	v->a[1978] = entry(1, true);
	v->a[1979] = shift(1322);
	parse_actions_entries_99(v);
}

void	parse_actions_entries_99(t_parse_actions_entries_array *v)
{
	v->a[1980] = entry(1, false);
	v->a[1981] = reduce(sym__variable_assignments, 2, 0, 0);
	v->a[1982] = entry(1, true);
	v->a[1983] = reduce(sym__variable_assignments, 2, 0, 0);
	v->a[1984] = entry(1, true);
	v->a[1985] = shift(2119);
	v->a[1986] = entry(2, true);
	v->a[1987] = reduce(aux_sym__variable_assignments_repeat1, 2, 0, 0);
	v->a[1988] = shift_repeat(2119);
	v->a[1989] = entry(1, true);
	v->a[1990] = shift(2032);
	v->a[1991] = entry(1, true);
	v->a[1992] = shift(1991);
	v->a[1993] = entry(2, true);
	v->a[1994] = reduce(aux_sym__variable_assignments_repeat1, 2, 0, 0);
	v->a[1995] = shift_repeat(2032);
	v->a[1996] = entry(2, false);
	v->a[1997] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[1998] = shift_repeat(1377);
	v->a[1999] = entry(2, true);
	parse_actions_entries_100(v);
}

/* EOF parse_actions_entries_19.c */
