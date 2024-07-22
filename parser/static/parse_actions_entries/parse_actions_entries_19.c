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
	v->a[1901] = shift(1262);
	v->a[1902] = entry(1, false);
	v->a[1903] = shift(1247);
	v->a[1904] = entry(1, true);
	v->a[1905] = shift(1281);
	v->a[1906] = entry(2, false);
	v->a[1907] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1908] = shift_repeat(1262);
	v->a[1909] = entry(2, true);
	v->a[1910] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1911] = shift_repeat(1262);
	v->a[1912] = entry(1, false);
	v->a[1913] = reduce(aux_sym_command_repeat1, 2, 0, 16);
	v->a[1914] = entry(2, false);
	v->a[1915] = reduce(aux_sym_command_repeat1, 2, 0, 16);
	v->a[1916] = shift_repeat(1412);
	v->a[1917] = entry(2, true);
	v->a[1918] = reduce(aux_sym_command_repeat1, 2, 0, 16);
	v->a[1919] = shift_repeat(1766);
	parse_actions_entries_96(v);
}

void	parse_actions_entries_96(t_parse_actions_entries_array *v)
{
	v->a[1920] = entry(2, true);
	v->a[1921] = reduce(aux_sym_command_repeat1, 2, 0, 16);
	v->a[1922] = shift_repeat(1950);
	v->a[1923] = entry(2, false);
	v->a[1924] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1925] = shift_repeat(1284);
	v->a[1926] = entry(2, true);
	v->a[1927] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1928] = shift_repeat(1284);
	v->a[1929] = entry(1, true);
	v->a[1930] = shift(1276);
	v->a[1931] = entry(1, false);
	v->a[1932] = shift(1366);
	v->a[1933] = entry(1, true);
	v->a[1934] = shift(1733);
	v->a[1935] = entry(1, true);
	v->a[1936] = shift(1247);
	v->a[1937] = entry(1, true);
	v->a[1938] = shift(1345);
	v->a[1939] = entry(1, true);
	parse_actions_entries_97(v);
}

void	parse_actions_entries_97(t_parse_actions_entries_array *v)
{
	v->a[1940] = shift(1287);
	v->a[1941] = entry(1, false);
	v->a[1942] = shift(1364);
	v->a[1943] = entry(1, true);
	v->a[1944] = shift(762);
	v->a[1945] = entry(1, true);
	v->a[1946] = shift(1729);
	v->a[1947] = entry(1, true);
	v->a[1948] = shift(683);
	v->a[1949] = entry(1, false);
	v->a[1950] = reduce(sym_redirected_statement, 2, -1, 9);
	v->a[1951] = entry(1, true);
	v->a[1952] = reduce(sym_redirected_statement, 2, -1, 9);
	v->a[1953] = entry(1, false);
	v->a[1954] = reduce(aux_sym__variable_assignments_repeat1, 2, 0, 0);
	v->a[1955] = entry(1, true);
	v->a[1956] = reduce(aux_sym__variable_assignments_repeat1, 2, 0, 0);
	v->a[1957] = entry(2, true);
	v->a[1958] = reduce(aux_sym__variable_assignments_repeat1, 2, 0, 0);
	v->a[1959] = shift_repeat(1986);
	parse_actions_entries_98(v);
}

void	parse_actions_entries_98(t_parse_actions_entries_array *v)
{
	v->a[1960] = entry(1, false);
	v->a[1961] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[1962] = entry(2, false);
	v->a[1963] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[1964] = shift_repeat(1366);
	v->a[1965] = entry(2, false);
	v->a[1966] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[1967] = shift_repeat(2052);
	v->a[1968] = entry(1, true);
	v->a[1969] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[1970] = entry(2, true);
	v->a[1971] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[1972] = shift_repeat(1733);
	v->a[1973] = entry(1, false);
	v->a[1974] = shift(1424);
	v->a[1975] = entry(1, false);
	v->a[1976] = shift(1920);
	v->a[1977] = entry(1, true);
	v->a[1978] = reduce(sym__variable_assignments, 2, 0, 0);
	v->a[1979] = entry(1, false);
	parse_actions_entries_99(v);
}

void	parse_actions_entries_99(t_parse_actions_entries_array *v)
{
	v->a[1980] = reduce(sym__variable_assignments, 2, 0, 0);
	v->a[1981] = entry(1, true);
	v->a[1982] = shift(1946);
	v->a[1983] = entry(2, false);
	v->a[1984] = reduce(aux_sym_case_statement_repeat1, 2, 0, 52);
	v->a[1985] = shift_repeat(1771);
	v->a[1986] = entry(2, false);
	v->a[1987] = reduce(aux_sym_case_statement_repeat1, 2, 0, 52);
	v->a[1988] = shift_repeat(1271);
	v->a[1989] = entry(2, false);
	v->a[1990] = reduce(aux_sym_case_statement_repeat1, 2, 0, 52);
	v->a[1991] = shift_repeat(723);
	v->a[1992] = entry(2, false);
	v->a[1993] = reduce(aux_sym_case_statement_repeat1, 2, 0, 52);
	v->a[1994] = shift_repeat(1711);
	v->a[1995] = entry(2, false);
	v->a[1996] = reduce(aux_sym_case_statement_repeat1, 2, 0, 52);
	v->a[1997] = shift_repeat(1643);
	v->a[1998] = entry(2, false);
	v->a[1999] = reduce(aux_sym_case_statement_repeat1, 2, 0, 52);
	parse_actions_entries_100(v);
}

/* EOF parse_actions_entries_19.c */
