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
	v->a[1900] = entry(2, true);
	v->a[1901] = reduce(aux_sym_command_repeat1, 2, 0, 16);
	v->a[1902] = shift_repeat(1759);
	v->a[1903] = entry(2, true);
	v->a[1904] = reduce(aux_sym_command_repeat1, 2, 0, 16);
	v->a[1905] = shift_repeat(1934);
	v->a[1906] = entry(1, false);
	v->a[1907] = reduce(sym__variable_assignments, 2, 0, 0);
	v->a[1908] = entry(1, true);
	v->a[1909] = reduce(sym__variable_assignments, 2, 0, 0);
	v->a[1910] = entry(1, true);
	v->a[1911] = shift(2100);
	v->a[1912] = entry(1, true);
	v->a[1913] = shift(772);
	v->a[1914] = entry(1, true);
	v->a[1915] = reduce(aux_sym__variable_assignments_repeat1, 2, 0, 0);
	v->a[1916] = entry(1, false);
	v->a[1917] = reduce(aux_sym__variable_assignments_repeat1, 2, 0, 0);
	v->a[1918] = entry(2, true);
	v->a[1919] = reduce(aux_sym__variable_assignments_repeat1, 2, 0, 0);
	parse_actions_entries_96(v);
}

void	parse_actions_entries_96(t_parse_actions_entries_array *v)
{
	v->a[1920] = shift_repeat(1918);
	v->a[1921] = entry(1, true);
	v->a[1922] = shift(1967);
	v->a[1923] = entry(1, true);
	v->a[1924] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[1925] = entry(1, false);
	v->a[1926] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[1927] = entry(2, false);
	v->a[1928] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[1929] = shift_repeat(1376);
	v->a[1930] = entry(2, false);
	v->a[1931] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[1932] = shift_repeat(2108);
	v->a[1933] = entry(2, true);
	v->a[1934] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[1935] = shift_repeat(1732);
	v->a[1936] = entry(2, true);
	v->a[1937] = reduce(aux_sym__variable_assignments_repeat1, 2, 0, 0);
	v->a[1938] = shift_repeat(2096);
	v->a[1939] = entry(1, true);
	parse_actions_entries_97(v);
}

void	parse_actions_entries_97(t_parse_actions_entries_array *v)
{
	v->a[1940] = shift(2096);
	v->a[1941] = entry(1, false);
	v->a[1942] = shift(1318);
	v->a[1943] = entry(1, true);
	v->a[1944] = shift(1318);
	v->a[1945] = entry(1, true);
	v->a[1946] = shift(716);
	v->a[1947] = entry(2, false);
	v->a[1948] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[1949] = shift_repeat(1366);
	v->a[1950] = entry(2, true);
	v->a[1951] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[1952] = shift_repeat(1731);
	v->a[1953] = entry(1, false);
	v->a[1954] = reduce(sym_redirected_statement, 2, -1, 9);
	v->a[1955] = entry(1, true);
	v->a[1956] = reduce(sym_redirected_statement, 2, -1, 9);
	v->a[1957] = entry(2, true);
	v->a[1958] = reduce(aux_sym__variable_assignments_repeat1, 2, 0, 0);
	v->a[1959] = shift_repeat(2100);
	parse_actions_entries_98(v);
}

void	parse_actions_entries_98(t_parse_actions_entries_array *v)
{
	v->a[1960] = entry(1, true);
	v->a[1961] = shift(1918);
	v->a[1962] = entry(2, true);
	v->a[1963] = reduce(aux_sym__variable_assignments_repeat1, 2, 0, 0);
	v->a[1964] = shift_repeat(1967);
	v->a[1965] = entry(2, false);
	v->a[1966] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[1967] = shift_repeat(1412);
	v->a[1968] = entry(2, false);
	v->a[1969] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[1970] = shift_repeat(2060);
	v->a[1971] = entry(2, true);
	v->a[1972] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[1973] = shift_repeat(1725);
	v->a[1974] = entry(1, true);
	v->a[1975] = reduce(aux_sym_pipeline_repeat1, 2, 0, 0);
	v->a[1976] = entry(2, false);
	v->a[1977] = reduce(aux_sym_pipeline_repeat1, 2, 0, 0);
	v->a[1978] = shift(134);
	v->a[1979] = entry(1, false);
	parse_actions_entries_99(v);
}

void	parse_actions_entries_99(t_parse_actions_entries_array *v)
{
	v->a[1980] = reduce(aux_sym_pipeline_repeat1, 2, 0, 0);
	v->a[1981] = entry(2, false);
	v->a[1982] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[1983] = shift_repeat(1364);
	v->a[1984] = entry(2, true);
	v->a[1985] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[1986] = shift_repeat(1728);
	v->a[1987] = entry(1, true);
	v->a[1988] = shift(595);
	v->a[1989] = entry(1, true);
	v->a[1990] = shift(774);
	v->a[1991] = entry(2, false);
	v->a[1992] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1993] = shift_repeat(1318);
	v->a[1994] = entry(2, true);
	v->a[1995] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1996] = shift_repeat(1318);
	v->a[1997] = entry(1, true);
	v->a[1998] = shift(1328);
	v->a[1999] = entry(1, true);
	parse_actions_entries_100(v);
}

/* EOF parse_actions_entries_19.c */
