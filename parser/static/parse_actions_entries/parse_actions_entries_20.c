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
	v->a[2000] = shift(1668);
	v->a[2001] = entry(1, false);
	v->a[2002] = shift(282);
	v->a[2003] = entry(1, true);
	v->a[2004] = shift(716);
	v->a[2005] = entry(1, true);
	v->a[2006] = shift(1826);
	v->a[2007] = entry(2, false);
	v->a[2008] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[2009] = shift_repeat(1485);
	v->a[2010] = entry(2, true);
	v->a[2011] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[2012] = shift_repeat(1485);
	v->a[2013] = entry(1, false);
	v->a[2014] = shift(1638);
	v->a[2015] = entry(1, false);
	v->a[2016] = shift(268);
	v->a[2017] = entry(1, true);
	v->a[2018] = shift(782);
	v->a[2019] = entry(1, true);
	parse_actions_entries_101(v);
}

void	parse_actions_entries_101(t_parse_actions_entries_array *v)
{
	v->a[2020] = shift(1847);
	v->a[2021] = entry(1, false);
	v->a[2022] = shift(1485);
	v->a[2023] = entry(1, true);
	v->a[2024] = shift(1485);
	v->a[2025] = entry(1, true);
	v->a[2026] = shift(1471);
	v->a[2027] = entry(1, false);
	v->a[2028] = shift(1677);
	v->a[2029] = entry(1, false);
	v->a[2030] = shift(304);
	v->a[2031] = entry(1, true);
	v->a[2032] = shift(437);
	v->a[2033] = entry(1, true);
	v->a[2034] = shift(1808);
	v->a[2035] = entry(1, false);
	v->a[2036] = shift(1576);
	v->a[2037] = entry(1, true);
	v->a[2038] = shift(1513);
	v->a[2039] = entry(1, false);
	parse_actions_entries_102(v);
}

void	parse_actions_entries_102(t_parse_actions_entries_array *v)
{
	v->a[2040] = shift(1643);
	v->a[2041] = entry(1, false);
	v->a[2042] = shift(258);
	v->a[2043] = entry(1, true);
	v->a[2044] = shift(1872);
	v->a[2045] = entry(1, true);
	v->a[2046] = shift(1501);
	v->a[2047] = entry(1, true);
	v->a[2048] = shift(1555);
	v->a[2049] = entry(1, true);
	v->a[2050] = shift(1576);
	v->a[2051] = entry(1, false);
	v->a[2052] = shift(1500);
	v->a[2053] = entry(1, true);
	v->a[2054] = shift(1500);
	v->a[2055] = entry(1, false);
	v->a[2056] = reduce(aux_sym__variable_assignments_repeat1, 2, 0, 0);
	v->a[2057] = entry(1, true);
	v->a[2058] = reduce(aux_sym__variable_assignments_repeat1, 2, 0, 0);
	v->a[2059] = entry(2, true);
	parse_actions_entries_103(v);
}

void	parse_actions_entries_103(t_parse_actions_entries_array *v)
{
	v->a[2060] = reduce(aux_sym__variable_assignments_repeat1, 2, 0, 0);
	v->a[2061] = shift_repeat(2301);
	v->a[2062] = entry(1, false);
	v->a[2063] = shift(1664);
	v->a[2064] = entry(1, false);
	v->a[2065] = shift(290);
	v->a[2066] = entry(1, true);
	v->a[2067] = shift(1831);
	v->a[2068] = entry(1, false);
	v->a[2069] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2070] = entry(2, false);
	v->a[2071] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2072] = shift_repeat(1668);
	v->a[2073] = entry(2, false);
	v->a[2074] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2075] = shift_repeat(282);
	v->a[2076] = entry(2, false);
	v->a[2077] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2078] = shift_repeat(2255);
	v->a[2079] = entry(1, true);
	parse_actions_entries_104(v);
}

void	parse_actions_entries_104(t_parse_actions_entries_array *v)
{
	v->a[2080] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2081] = entry(2, true);
	v->a[2082] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2083] = shift_repeat(1826);
	v->a[2084] = entry(2, true);
	v->a[2085] = reduce(aux_sym__variable_assignments_repeat1, 2, 0, 0);
	v->a[2086] = shift_repeat(2149);
	v->a[2087] = entry(1, false);
	v->a[2088] = reduce(aux_sym_command_repeat1, 2, 0, 18);
	v->a[2089] = entry(2, false);
	v->a[2090] = reduce(aux_sym_command_repeat1, 2, 0, 18);
	v->a[2091] = shift_repeat(1598);
	v->a[2092] = entry(2, false);
	v->a[2093] = reduce(aux_sym_command_repeat1, 2, 0, 18);
	v->a[2094] = shift_repeat(927);
	v->a[2095] = entry(2, true);
	v->a[2096] = reduce(aux_sym_command_repeat1, 2, 0, 18);
	v->a[2097] = shift_repeat(1939);
	v->a[2098] = entry(2, true);
	v->a[2099] = reduce(aux_sym_command_repeat1, 2, 0, 18);
	parse_actions_entries_105(v);
}

/* EOF parse_actions_entries_20.c */
