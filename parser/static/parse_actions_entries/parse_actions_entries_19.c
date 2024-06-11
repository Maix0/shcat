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
	v->a[1900] = shift(2106);
	v->a[1901] = entry(1, true);
	v->a[1902] = shift(477);
	v->a[1903] = entry(1, true);
	v->a[1904] = shift(2216);
	v->a[1905] = entry(1, true);
	v->a[1906] = shift(457);
	v->a[1907] = entry(1, true);
	v->a[1908] = shift(1305);
	v->a[1909] = entry(1, true);
	v->a[1910] = shift(1112);
	v->a[1911] = entry(1, true);
	v->a[1912] = shift(445);
	v->a[1913] = entry(1, true);
	v->a[1914] = shift(972);
	v->a[1915] = entry(1, true);
	v->a[1916] = shift(1170);
	v->a[1917] = entry(1, true);
	v->a[1918] = shift(1779);
	v->a[1919] = entry(1, true);
	parse_actions_entries_96(v);
}

void	parse_actions_entries_96(t_parse_actions_entries_array *v)
{
	v->a[1920] = shift(330);
	v->a[1921] = entry(1, true);
	v->a[1922] = shift(378);
	v->a[1923] = entry(1, true);
	v->a[1924] = shift(338);
	v->a[1925] = entry(1, true);
	v->a[1926] = shift(1182);
	v->a[1927] = entry(1, true);
	v->a[1928] = shift(1033);
	v->a[1929] = entry(1, true);
	v->a[1930] = shift(450);
	v->a[1931] = entry(1, true);
	v->a[1932] = shift(468);
	v->a[1933] = entry(1, true);
	v->a[1934] = shift(1062);
	v->a[1935] = entry(1, true);
	v->a[1936] = shift(1002);
	v->a[1937] = entry(1, true);
	v->a[1938] = shift(556);
	v->a[1939] = entry(1, true);
	parse_actions_entries_97(v);
}

void	parse_actions_entries_97(t_parse_actions_entries_array *v)
{
	v->a[1940] = shift(1609);
	v->a[1941] = entry(1, true);
	v->a[1942] = shift(659);
	v->a[1943] = entry(1, true);
	v->a[1944] = shift(1411);
	v->a[1945] = entry(1, true);
	v->a[1946] = shift(1578);
	v->a[1947] = entry(1, true);
	v->a[1948] = shift(1202);
	v->a[1949] = entry(1, true);
	v->a[1950] = shift(2124);
	v->a[1951] = entry(1, false);
	v->a[1952] = shift(1626);
	v->a[1953] = entry(1, true);
	v->a[1954] = shift(1626);
	v->a[1955] = entry(1, false);
	v->a[1956] = shift(2157);
	v->a[1957] = entry(1, false);
	v->a[1958] = shift(1514);
	v->a[1959] = entry(1, false);
	parse_actions_entries_98(v);
}

void	parse_actions_entries_98(t_parse_actions_entries_array *v)
{
	v->a[1960] = shift(1706);
	v->a[1961] = entry(1, false);
	v->a[1962] = shift(1458);
	v->a[1963] = entry(1, false);
	v->a[1964] = shift(1045);
	v->a[1965] = entry(1, false);
	v->a[1966] = shift(1976);
	v->a[1967] = entry(1, false);
	v->a[1968] = shift(1977);
	v->a[1969] = entry(1, false);
	v->a[1970] = shift(1946);
	v->a[1971] = entry(1, false);
	v->a[1972] = shift(78);
	v->a[1973] = entry(1, false);
	v->a[1974] = shift(79);
	v->a[1975] = entry(1, true);
	v->a[1976] = shift(2100);
	v->a[1977] = entry(2, false);
	v->a[1978] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1979] = shift_repeat(1626);
	parse_actions_entries_99(v);
}

void	parse_actions_entries_99(t_parse_actions_entries_array *v)
{
	v->a[1980] = entry(2, true);
	v->a[1981] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1982] = shift_repeat(1626);
	v->a[1983] = entry(1, false);
	v->a[1984] = shift(1414);
	v->a[1985] = entry(1, false);
	v->a[1986] = shift(1447);
	v->a[1987] = entry(1, true);
	v->a[1988] = shift(1660);
	v->a[1989] = entry(1, false);
	v->a[1990] = shift(1774);
	v->a[1991] = entry(1, false);
	v->a[1992] = shift(1453);
	v->a[1993] = entry(1, false);
	v->a[1994] = shift(1742);
	v->a[1995] = entry(1, false);
	v->a[1996] = shift(1456);
	v->a[1997] = entry(2, false);
	v->a[1998] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[1999] = shift_repeat(1647);
	parse_actions_entries_100(v);
}

/* EOF parse_actions_entries_19.c */
