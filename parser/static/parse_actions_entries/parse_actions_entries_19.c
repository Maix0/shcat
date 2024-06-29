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
	v->a[1900] = shift(1961);
	v->a[1901] = entry(1, false);
	v->a[1902] = shift(1624);
	v->a[1903] = entry(1, false);
	v->a[1904] = shift(1618);
	v->a[1905] = entry(1, true);
	v->a[1906] = shift(877);
	v->a[1907] = entry(1, true);
	v->a[1908] = shift(874);
	v->a[1909] = entry(1, true);
	v->a[1910] = shift(1701);
	v->a[1911] = entry(1, true);
	v->a[1912] = shift(532);
	v->a[1913] = entry(1, true);
	v->a[1914] = shift(1172);
	v->a[1915] = entry(1, true);
	v->a[1916] = shift(1053);
	v->a[1917] = entry(1, true);
	v->a[1918] = shift(602);
	v->a[1919] = entry(1, true);
	parse_actions_entries_96(v);
}

void	parse_actions_entries_96(t_parse_actions_entries_array *v)
{
	v->a[1920] = shift(1438);
	v->a[1921] = entry(1, true);
	v->a[1922] = shift(560);
	v->a[1923] = entry(1, true);
	v->a[1924] = shift(418);
	v->a[1925] = entry(1, true);
	v->a[1926] = shift(520);
	v->a[1927] = entry(1, true);
	v->a[1928] = shift(1250);
	v->a[1929] = entry(1, false);
	v->a[1930] = shift(1225);
	v->a[1931] = entry(1, true);
	v->a[1932] = shift(938);
	v->a[1933] = entry(1, true);
	v->a[1934] = shift(994);
	v->a[1935] = entry(1, true);
	v->a[1936] = shift(1987);
	v->a[1937] = entry(1, true);
	v->a[1938] = shift(609);
	v->a[1939] = entry(1, true);
	parse_actions_entries_97(v);
}

void	parse_actions_entries_97(t_parse_actions_entries_array *v)
{
	v->a[1940] = shift(2070);
	v->a[1941] = entry(1, false);
	v->a[1942] = shift(1387);
	v->a[1943] = entry(1, true);
	v->a[1944] = shift(652);
	v->a[1945] = entry(1, false);
	v->a[1946] = shift(1252);
	v->a[1947] = entry(1, true);
	v->a[1948] = shift(605);
	v->a[1949] = entry(1, true);
	v->a[1950] = shift(1451);
	v->a[1951] = entry(1, true);
	v->a[1952] = shift(959);
	v->a[1953] = entry(1, true);
	v->a[1954] = shift(986);
	v->a[1955] = entry(1, true);
	v->a[1956] = shift(976);
	v->a[1957] = entry(1, false);
	v->a[1958] = shift(942);
	v->a[1959] = entry(1, true);
	parse_actions_entries_98(v);
}

void	parse_actions_entries_98(t_parse_actions_entries_array *v)
{
	v->a[1960] = shift(942);
	v->a[1961] = entry(1, false);
	v->a[1962] = shift(1894);
	v->a[1963] = entry(1, true);
	v->a[1964] = shift(1890);
	v->a[1965] = entry(1, false);
	v->a[1966] = shift(462);
	v->a[1967] = entry(1, true);
	v->a[1968] = shift(1776);
	v->a[1969] = entry(1, true);
	v->a[1970] = shift(52);
	v->a[1971] = entry(1, true);
	v->a[1972] = shift(50);
	v->a[1973] = entry(1, true);
	v->a[1974] = shift(462);
	v->a[1975] = entry(2, false);
	v->a[1976] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1977] = shift_repeat(1568);
	v->a[1978] = entry(2, true);
	v->a[1979] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	parse_actions_entries_99(v);
}

void	parse_actions_entries_99(t_parse_actions_entries_array *v)
{
	v->a[1980] = shift_repeat(1568);
	v->a[1981] = entry(2, false);
	v->a[1982] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1983] = shift_repeat(1537);
	v->a[1984] = entry(2, true);
	v->a[1985] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1986] = shift_repeat(1537);
	v->a[1987] = entry(1, false);
	v->a[1988] = shift(1568);
	v->a[1989] = entry(1, true);
	v->a[1990] = shift(1568);
	v->a[1991] = entry(1, false);
	v->a[1992] = shift(1585);
	v->a[1993] = entry(1, false);
	v->a[1994] = shift(1583);
	v->a[1995] = entry(1, true);
	v->a[1996] = shift(1583);
	v->a[1997] = entry(1, true);
	v->a[1998] = shift(1570);
	v->a[1999] = entry(1, false);
	parse_actions_entries_100(v);
}

/* EOF parse_actions_entries_19.c */
