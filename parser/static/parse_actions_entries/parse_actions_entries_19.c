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
	v->a[1900] = reduce(sym_do_group, 3, 0, 18);
	v->a[1901] = entry(1, true);
	v->a[1902] = reduce(sym_case_statement, 4, 0, 35);
	v->a[1903] = entry(1, false);
	v->a[1904] = reduce(sym_case_statement, 4, 0, 35);
	v->a[1905] = entry(2, false);
	v->a[1906] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[1907] = shift_repeat(1186);
	v->a[1908] = entry(1, true);
	v->a[1909] = reduce(sym_if_statement, 5, 0, 47);
	v->a[1910] = entry(1, false);
	v->a[1911] = reduce(sym_if_statement, 5, 0, 47);
	v->a[1912] = entry(1, false);
	v->a[1913] = shift(127);
	v->a[1914] = entry(1, false);
	v->a[1915] = reduce(sym_pipeline, 2, 0, 0);
	v->a[1916] = entry(1, true);
	v->a[1917] = reduce(sym_pipeline, 2, 0, 0);
	v->a[1918] = entry(1, false);
	v->a[1919] = shift(1514);
	parse_actions_entries_96(v);
}

void	parse_actions_entries_96(t_parse_actions_entries_array *v)
{
	v->a[1920] = entry(1, false);
	v->a[1921] = shift(810);
	v->a[1922] = entry(1, false);
	v->a[1923] = shift(774);
	v->a[1924] = entry(1, false);
	v->a[1925] = shift(479);
	v->a[1926] = entry(1, false);
	v->a[1927] = shift(1411);
	v->a[1928] = entry(1, false);
	v->a[1929] = shift(1304);
	v->a[1930] = entry(1, false);
	v->a[1931] = shift(41);
	v->a[1932] = entry(1, false);
	v->a[1933] = shift(42);
	v->a[1934] = entry(1, true);
	v->a[1935] = shift(810);
	v->a[1936] = entry(1, false);
	v->a[1937] = shift(691);
	v->a[1938] = entry(1, false);
	v->a[1939] = shift(725);
	parse_actions_entries_97(v);
}

void	parse_actions_entries_97(t_parse_actions_entries_array *v)
{
	v->a[1940] = entry(1, true);
	v->a[1941] = shift(691);
	v->a[1942] = entry(1, false);
	v->a[1943] = shift(508);
	v->a[1944] = entry(1, false);
	v->a[1945] = shift(149);
	v->a[1946] = entry(1, true);
	v->a[1947] = shift(508);
	v->a[1948] = entry(1, false);
	v->a[1949] = shift(1542);
	v->a[1950] = entry(1, false);
	v->a[1951] = shift(458);
	v->a[1952] = entry(1, false);
	v->a[1953] = shift(763);
	v->a[1954] = entry(1, false);
	v->a[1955] = shift(146);
	v->a[1956] = entry(1, false);
	v->a[1957] = shift(1358);
	v->a[1958] = entry(1, false);
	v->a[1959] = shift(1348);
	parse_actions_entries_98(v);
}

void	parse_actions_entries_98(t_parse_actions_entries_array *v)
{
	v->a[1960] = entry(1, false);
	v->a[1961] = shift(61);
	v->a[1962] = entry(1, false);
	v->a[1963] = shift(62);
	v->a[1964] = entry(1, true);
	v->a[1965] = shift(458);
	v->a[1966] = entry(1, false);
	v->a[1967] = shift(1531);
	v->a[1968] = entry(2, false);
	v->a[1969] = reduce(aux_sym_pipeline_repeat1, 2, 0, 0);
	v->a[1970] = shift_repeat(127);
	v->a[1971] = entry(1, false);
	v->a[1972] = shift(352);
	v->a[1973] = entry(1, false);
	v->a[1974] = shift(1456);
	v->a[1975] = entry(1, false);
	v->a[1976] = shift(565);
	v->a[1977] = entry(1, true);
	v->a[1978] = shift(565);
	v->a[1979] = entry(1, false);
	parse_actions_entries_99(v);
}

void	parse_actions_entries_99(t_parse_actions_entries_array *v)
{
	v->a[1980] = shift(711);
	v->a[1981] = entry(1, false);
	v->a[1982] = shift(282);
	v->a[1983] = entry(1, true);
	v->a[1984] = shift(711);
	v->a[1985] = entry(1, false);
	v->a[1986] = shift(496);
	v->a[1987] = entry(1, false);
	v->a[1988] = shift(150);
	v->a[1989] = entry(1, true);
	v->a[1990] = shift(496);
	v->a[1991] = entry(1, false);
	v->a[1992] = shift(377);
	v->a[1993] = entry(1, false);
	v->a[1994] = shift(778);
	v->a[1995] = entry(1, false);
	v->a[1996] = shift(151);
	v->a[1997] = entry(1, false);
	v->a[1998] = shift(1316);
	v->a[1999] = entry(1, false);
	parse_actions_entries_100(v);
}

/* EOF parse_actions_entries_19.c */
