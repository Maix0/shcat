/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_actions_entries_20.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_actions_entries.h"

void	parse_actions_entries_100(t_parse_actions_entries_array *v)
{
	v->a[2000] = shift(1682);
	v->a[2001] = entry(1, true);
	v->a[2002] = shift(63);
	v->a[2003] = entry(1, true);
	v->a[2004] = shift(62);
	v->a[2005] = entry(1, false);
	v->a[2006] = shift(530);
	v->a[2007] = entry(1, true);
	v->a[2008] = shift(530);
	v->a[2009] = entry(1, true);
	v->a[2010] = shift(944);
	v->a[2011] = entry(1, true);
	v->a[2012] = shift(481);
	v->a[2013] = entry(1, true);
	v->a[2014] = shift(517);
	v->a[2015] = entry(1, true);
	v->a[2016] = shift(1061);
	v->a[2017] = entry(1, true);
	v->a[2018] = shift(499);
	v->a[2019] = entry(1, true);
	parse_actions_entries_101(v);
}

void	parse_actions_entries_101(t_parse_actions_entries_array *v)
{
	v->a[2020] = shift(333);
	v->a[2021] = entry(1, true);
	v->a[2022] = shift(600);
	v->a[2023] = entry(1, true);
	v->a[2024] = shift(801);
	v->a[2025] = entry(1, true);
	v->a[2026] = shift(547);
	v->a[2027] = entry(1, true);
	v->a[2028] = shift(835);
	v->a[2029] = entry(1, true);
	v->a[2030] = shift(967);
	v->a[2031] = entry(1, true);
	v->a[2032] = shift(1026);
	v->a[2033] = entry(1, true);
	v->a[2034] = shift(994);
	v->a[2035] = entry(1, true);
	v->a[2036] = shift(1559);
	v->a[2037] = entry(1, true);
	v->a[2038] = shift(453);
	v->a[2039] = entry(1, false);
	parse_actions_entries_102(v);
}

void	parse_actions_entries_102(t_parse_actions_entries_array *v)
{
	v->a[2040] = shift(1448);
	v->a[2041] = entry(1, true);
	v->a[2042] = shift(1448);
	v->a[2043] = entry(1, true);
	v->a[2044] = shift(828);
	v->a[2045] = entry(1, true);
	v->a[2046] = shift(1883);
	v->a[2047] = entry(1, true);
	v->a[2048] = shift(349);
	v->a[2049] = entry(1, true);
	v->a[2050] = shift(1858);
	v->a[2051] = entry(2, false);
	v->a[2052] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[2053] = shift_repeat(1448);
	v->a[2054] = entry(2, true);
	v->a[2055] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[2056] = shift_repeat(1448);
	v->a[2057] = entry(1, true);
	v->a[2058] = shift(1315);
	v->a[2059] = entry(1, true);
	parse_actions_entries_103(v);
}

void	parse_actions_entries_103(t_parse_actions_entries_array *v)
{
	v->a[2060] = shift(885);
	v->a[2061] = entry(1, true);
	v->a[2062] = shift(1535);
	v->a[2063] = entry(1, true);
	v->a[2064] = shift(1185);
	v->a[2065] = entry(1, true);
	v->a[2066] = shift(2000);
	v->a[2067] = entry(1, true);
	v->a[2068] = shift(602);
	v->a[2069] = entry(1, true);
	v->a[2070] = shift(666);
	v->a[2071] = entry(1, true);
	v->a[2072] = shift(1435);
	v->a[2073] = entry(1, true);
	v->a[2074] = shift(1434);
	v->a[2075] = entry(1, true);
	v->a[2076] = shift(492);
	v->a[2077] = entry(1, true);
	v->a[2078] = shift(887);
	v->a[2079] = entry(1, true);
	parse_actions_entries_104(v);
}

void	parse_actions_entries_104(t_parse_actions_entries_array *v)
{
	v->a[2080] = shift(908);
	v->a[2081] = entry(1, true);
	v->a[2082] = shift(909);
	v->a[2083] = entry(1, false);
	v->a[2084] = shift(912);
	v->a[2085] = entry(1, true);
	v->a[2086] = shift(912);
	v->a[2087] = entry(1, false);
	v->a[2088] = shift(1806);
	v->a[2089] = entry(1, true);
	v->a[2090] = shift(1805);
	v->a[2091] = entry(1, false);
	v->a[2092] = shift(596);
	v->a[2093] = entry(1, false);
	v->a[2094] = shift(1974);
	v->a[2095] = entry(1, true);
	v->a[2096] = shift(1684);
	v->a[2097] = entry(1, true);
	v->a[2098] = shift(97);
	v->a[2099] = entry(1, true);
	parse_actions_entries_105(v);
}

/* EOF parse_actions_entries_20.c */
