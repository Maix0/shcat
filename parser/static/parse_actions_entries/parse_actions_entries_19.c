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
	v->a[1900] = entry(1, false);
	v->a[1901] = shift(1391);
	v->a[1902] = entry(1, false);
	v->a[1903] = shift(1381);
	v->a[1904] = entry(1, true);
	v->a[1905] = shift(708);
	v->a[1906] = entry(1, false);
	v->a[1907] = shift(1441);
	v->a[1908] = entry(1, false);
	v->a[1909] = shift(1465);
	v->a[1910] = entry(1, true);
	v->a[1911] = shift(1465);
	v->a[1912] = entry(1, true);
	v->a[1913] = shift(703);
	v->a[1914] = entry(2, false);
	v->a[1915] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1916] = shift_repeat(741);
	v->a[1917] = entry(2, true);
	v->a[1918] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1919] = shift_repeat(741);
	parse_actions_entries_96(v);
}

void	parse_actions_entries_96(t_parse_actions_entries_array *v)
{
	v->a[1920] = entry(1, true);
	v->a[1921] = shift(771);
	v->a[1922] = entry(1, true);
	v->a[1923] = reduce(sym__expansion_body, 1, 0, 3);
	v->a[1924] = entry(1, false);
	v->a[1925] = shift(810);
	v->a[1926] = entry(1, true);
	v->a[1927] = shift(264);
	v->a[1928] = entry(1, false);
	v->a[1929] = shift(1543);
	v->a[1930] = entry(1, true);
	v->a[1931] = shift(1543);
	v->a[1932] = entry(1, true);
	v->a[1933] = shift(1544);
	v->a[1934] = entry(1, true);
	v->a[1935] = shift(747);
	v->a[1936] = entry(1, false);
	v->a[1937] = reduce(sym_redirected_statement, 2, -1, 9);
	v->a[1938] = entry(1, true);
	v->a[1939] = reduce(sym_redirected_statement, 2, -1, 9);
	parse_actions_entries_97(v);
}

void	parse_actions_entries_97(t_parse_actions_entries_array *v)
{
	v->a[1940] = entry(1, false);
	v->a[1941] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[1942] = entry(2, false);
	v->a[1943] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[1944] = shift_repeat(798);
	v->a[1945] = entry(2, false);
	v->a[1946] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[1947] = shift_repeat(1690);
	v->a[1948] = entry(1, true);
	v->a[1949] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[1950] = entry(1, true);
	v->a[1951] = shift(459);
	v->a[1952] = entry(1, true);
	v->a[1953] = reduce(sym__variable_assignments, 2, 0, 0);
	v->a[1954] = entry(1, false);
	v->a[1955] = reduce(sym__variable_assignments, 2, 0, 0);
	v->a[1956] = entry(1, true);
	v->a[1957] = shift(1608);
	v->a[1958] = entry(2, false);
	v->a[1959] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	parse_actions_entries_98(v);
}

void	parse_actions_entries_98(t_parse_actions_entries_array *v)
{
	v->a[1960] = shift_repeat(807);
	v->a[1961] = entry(1, false);
	v->a[1962] = reduce(aux_sym__variable_assignments_repeat1, 2, 0, 0);
	v->a[1963] = entry(1, true);
	v->a[1964] = reduce(aux_sym__variable_assignments_repeat1, 2, 0, 0);
	v->a[1965] = entry(2, true);
	v->a[1966] = reduce(aux_sym__variable_assignments_repeat1, 2, 0, 0);
	v->a[1967] = shift_repeat(1630);
	v->a[1968] = entry(2, false);
	v->a[1969] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[1970] = shift_repeat(801);
	v->a[1971] = entry(2, false);
	v->a[1972] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[1973] = shift_repeat(1710);
	v->a[1974] = entry(1, true);
	v->a[1975] = reduce(aux_sym_pipeline_repeat1, 2, 0, 0);
	v->a[1976] = entry(2, false);
	v->a[1977] = reduce(aux_sym_pipeline_repeat1, 2, 0, 0);
	v->a[1978] = shift(127);
	v->a[1979] = entry(1, false);
	parse_actions_entries_99(v);
}

void	parse_actions_entries_99(t_parse_actions_entries_array *v)
{
	v->a[1980] = reduce(aux_sym_pipeline_repeat1, 2, 0, 0);
	v->a[1981] = entry(1, true);
	v->a[1982] = shift(463);
	v->a[1983] = entry(1, true);
	v->a[1984] = shift(454);
	v->a[1985] = entry(2, false);
	v->a[1986] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[1987] = shift_repeat(785);
	v->a[1988] = entry(1, true);
	v->a[1989] = shift(1737);
	v->a[1990] = entry(2, true);
	v->a[1991] = reduce(aux_sym__variable_assignments_repeat1, 2, 0, 0);
	v->a[1992] = shift_repeat(1737);
	v->a[1993] = entry(2, true);
	v->a[1994] = reduce(aux_sym__variable_assignments_repeat1, 2, 0, 0);
	v->a[1995] = shift_repeat(1608);
	v->a[1996] = entry(1, true);
	v->a[1997] = shift(1741);
	v->a[1998] = entry(2, true);
	v->a[1999] = reduce(aux_sym__variable_assignments_repeat1, 2, 0, 0);
	parse_actions_entries_100(v);
}

/* EOF parse_actions_entries_19.c */
