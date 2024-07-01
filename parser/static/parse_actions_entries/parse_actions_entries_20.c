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
	v->a[2000] = shift(1636);
	v->a[2001] = entry(1, true);
	v->a[2002] = shift(1636);
	v->a[2003] = entry(1, true);
	v->a[2004] = shift(1453);
	v->a[2005] = entry(1, false);
	v->a[2006] = shift(1546);
	v->a[2007] = entry(1, false);
	v->a[2008] = shift(248);
	v->a[2009] = entry(1, true);
	v->a[2010] = shift(522);
	v->a[2011] = entry(1, true);
	v->a[2012] = shift(1933);
	v->a[2013] = entry(1, false);
	v->a[2014] = shift(1564);
	v->a[2015] = entry(1, false);
	v->a[2016] = shift(255);
	v->a[2017] = entry(1, true);
	v->a[2018] = shift(719);
	v->a[2019] = entry(1, true);
	parse_actions_entries_101(v);
}

void	parse_actions_entries_101(t_parse_actions_entries_array *v)
{
	v->a[2020] = shift(1935);
	v->a[2021] = entry(1, false);
	v->a[2022] = shift(1474);
	v->a[2023] = entry(1, true);
	v->a[2024] = shift(1474);
	v->a[2025] = entry(1, false);
	v->a[2026] = shift(1573);
	v->a[2027] = entry(1, false);
	v->a[2028] = shift(270);
	v->a[2029] = entry(1, true);
	v->a[2030] = shift(784);
	v->a[2031] = entry(1, true);
	v->a[2032] = shift(1932);
	v->a[2033] = entry(1, false);
	v->a[2034] = shift(1507);
	v->a[2035] = entry(1, true);
	v->a[2036] = shift(1507);
	v->a[2037] = entry(1, false);
	v->a[2038] = shift(1594);
	v->a[2039] = entry(1, false);
	parse_actions_entries_102(v);
}

void	parse_actions_entries_102(t_parse_actions_entries_array *v)
{
	v->a[2040] = shift(357);
	v->a[2041] = entry(1, true);
	v->a[2042] = shift(1930);
	v->a[2043] = entry(1, true);
	v->a[2044] = shift(1436);
	v->a[2045] = entry(1, true);
	v->a[2046] = shift(1430);
	v->a[2047] = entry(1, true);
	v->a[2048] = shift(1423);
	v->a[2049] = entry(2, false);
	v->a[2050] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[2051] = shift_repeat(1507);
	v->a[2052] = entry(2, true);
	v->a[2053] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[2054] = shift_repeat(1507);
	v->a[2055] = entry(1, true);
	v->a[2056] = shift(1527);
	v->a[2057] = entry(1, false);
	v->a[2058] = shift(1509);
	v->a[2059] = entry(1, true);
	parse_actions_entries_103(v);
}

void	parse_actions_entries_103(t_parse_actions_entries_array *v)
{
	v->a[2060] = shift(1509);
	v->a[2061] = entry(1, false);
	v->a[2062] = shift(1571);
	v->a[2063] = entry(1, false);
	v->a[2064] = shift(364);
	v->a[2065] = entry(1, true);
	v->a[2066] = shift(1936);
	v->a[2067] = entry(1, true);
	v->a[2068] = reduce(aux_sym__variable_assignments_repeat1, 2, 0, 0);
	v->a[2069] = entry(1, false);
	v->a[2070] = reduce(aux_sym__variable_assignments_repeat1, 2, 0, 0);
	v->a[2071] = entry(2, true);
	v->a[2072] = reduce(aux_sym__variable_assignments_repeat1, 2, 0, 0);
	v->a[2073] = shift_repeat(2173);
	v->a[2074] = entry(1, true);
	v->a[2075] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2076] = entry(1, false);
	v->a[2077] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2078] = entry(2, false);
	v->a[2079] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	parse_actions_entries_104(v);
}

void	parse_actions_entries_104(t_parse_actions_entries_array *v)
{
	v->a[2080] = shift_repeat(1573);
	v->a[2081] = entry(2, false);
	v->a[2082] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2083] = shift_repeat(270);
	v->a[2084] = entry(2, false);
	v->a[2085] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2086] = shift_repeat(2317);
	v->a[2087] = entry(2, true);
	v->a[2088] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2089] = shift_repeat(1932);
	v->a[2090] = entry(1, true);
	v->a[2091] = reduce(aux_sym_pipeline_repeat1, 2, 0, 0);
	v->a[2092] = entry(2, false);
	v->a[2093] = reduce(aux_sym_pipeline_repeat1, 2, 0, 0);
	v->a[2094] = shift(156);
	v->a[2095] = entry(1, false);
	v->a[2096] = reduce(aux_sym_pipeline_repeat1, 2, 0, 0);
	v->a[2097] = entry(1, false);
	v->a[2098] = shift(1521);
	v->a[2099] = entry(1, true);
	parse_actions_entries_105(v);
}

/* EOF parse_actions_entries_20.c */
