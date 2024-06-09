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
	v->a[1901] = shift(1502);
	v->a[1902] = entry(1, false);
	v->a[1903] = shift(846);
	v->a[1904] = entry(1, false);
	v->a[1905] = shift(1794);
	v->a[1906] = entry(1, false);
	v->a[1907] = shift(1823);
	v->a[1908] = entry(1, false);
	v->a[1909] = shift(1543);
	v->a[1910] = entry(1, false);
	v->a[1911] = shift(1968);
	v->a[1912] = entry(1, false);
	v->a[1913] = shift(1675);
	v->a[1914] = entry(1, false);
	v->a[1915] = shift(114);
	v->a[1916] = entry(1, false);
	v->a[1917] = shift(113);
	v->a[1918] = entry(1, false);
	v->a[1919] = shift(1501);
	parse_actions_entries_96(v);
}

void	parse_actions_entries_96(t_parse_actions_entries_array *v)
{
	v->a[1920] = entry(1, true);
	v->a[1921] = reduce(sym__statements, 3, 0, 0);
	v->a[1922] = entry(1, true);
	v->a[1923] = shift(1475);
	v->a[1924] = entry(1, true);
	v->a[1925] = shift(1493);
	v->a[1926] = entry(1, false);
	v->a[1927] = shift(1462);
	v->a[1928] = entry(1, true);
	v->a[1929] = shift(1462);
	v->a[1930] = entry(1, true);
	v->a[1931] = shift(1467);
	v->a[1932] = entry(2, false);
	v->a[1933] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1934] = shift_repeat(1462);
	v->a[1935] = entry(2, true);
	v->a[1936] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1937] = shift_repeat(1462);
	v->a[1938] = entry(1, false);
	v->a[1939] = shift(1459);
	parse_actions_entries_97(v);
}

void	parse_actions_entries_97(t_parse_actions_entries_array *v)
{
	v->a[1940] = entry(1, true);
	v->a[1941] = shift(1457);
	v->a[1942] = entry(2, false);
	v->a[1943] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1944] = shift_repeat(1459);
	v->a[1945] = entry(2, true);
	v->a[1946] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1947] = shift_repeat(1459);
	v->a[1948] = entry(2, false);
	v->a[1949] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1950] = shift_repeat(985);
	v->a[1951] = entry(2, false);
	v->a[1952] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1953] = shift_repeat(814);
	v->a[1954] = entry(2, false);
	v->a[1955] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1956] = shift_repeat(1799);
	v->a[1957] = entry(2, false);
	v->a[1958] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1959] = shift_repeat(1802);
	parse_actions_entries_98(v);
}

void	parse_actions_entries_98(t_parse_actions_entries_array *v)
{
	v->a[1960] = entry(2, false);
	v->a[1961] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1962] = shift_repeat(1058);
	v->a[1963] = entry(2, false);
	v->a[1964] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1965] = shift_repeat(1966);
	v->a[1966] = entry(2, false);
	v->a[1967] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1968] = shift_repeat(1691);
	v->a[1969] = entry(2, false);
	v->a[1970] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1971] = shift_repeat(80);
	v->a[1972] = entry(2, false);
	v->a[1973] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[1974] = shift_repeat(67);
	v->a[1975] = entry(1, true);
	v->a[1976] = shift(1459);
	v->a[1977] = entry(1, true);
	v->a[1978] = shift(1452);
	v->a[1979] = entry(1, true);
	parse_actions_entries_99(v);
}

void	parse_actions_entries_99(t_parse_actions_entries_array *v)
{
	v->a[1980] = shift(875);
	v->a[1981] = entry(1, true);
	v->a[1982] = shift(876);
	v->a[1983] = entry(1, true);
	v->a[1984] = shift(388);
	v->a[1985] = entry(1, true);
	v->a[1986] = shift(877);
	v->a[1987] = entry(1, false);
	v->a[1988] = shift(878);
	v->a[1989] = entry(1, true);
	v->a[1990] = shift(878);
	v->a[1991] = entry(1, false);
	v->a[1992] = shift(1826);
	v->a[1993] = entry(1, true);
	v->a[1994] = shift(1829);
	v->a[1995] = entry(1, false);
	v->a[1996] = shift(450);
	v->a[1997] = entry(1, false);
	v->a[1998] = shift(1981);
	v->a[1999] = entry(1, true);
	parse_actions_entries_100(v);
}

/* EOF parse_actions_entries_19.c */
