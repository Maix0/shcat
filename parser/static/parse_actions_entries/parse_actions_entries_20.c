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
	v->a[2000] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2001] = shift_repeat(1733);
	v->a[2002] = entry(1, false);
	v->a[2003] = reduce(aux_sym_command_repeat1, 2, 0, 16);
	v->a[2004] = entry(2, false);
	v->a[2005] = reduce(aux_sym_command_repeat1, 2, 0, 16);
	v->a[2006] = shift_repeat(1423);
	v->a[2007] = entry(2, true);
	v->a[2008] = reduce(aux_sym_command_repeat1, 2, 0, 16);
	v->a[2009] = shift_repeat(1770);
	v->a[2010] = entry(2, true);
	v->a[2011] = reduce(aux_sym_command_repeat1, 2, 0, 16);
	v->a[2012] = shift_repeat(1964);
	v->a[2013] = entry(2, false);
	v->a[2014] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[2015] = shift_repeat(1270);
	v->a[2016] = entry(2, true);
	v->a[2017] = reduce(aux_sym_concatenation_repeat1, 2, 0, 0);
	v->a[2018] = shift_repeat(1270);
	v->a[2019] = entry(1, true);
	parse_actions_entries_101(v);
}

void	parse_actions_entries_101(t_parse_actions_entries_array *v)
{
	v->a[2020] = shift(741);
	v->a[2021] = entry(1, true);
	v->a[2022] = shift(2115);
	v->a[2023] = entry(2, true);
	v->a[2024] = reduce(aux_sym__variable_assignments_repeat1, 2, 0, 0);
	v->a[2025] = shift_repeat(2115);
	v->a[2026] = entry(1, true);
	v->a[2027] = shift(1339);
	v->a[2028] = entry(1, true);
	v->a[2029] = shift(718);
	v->a[2030] = entry(1, true);
	v->a[2031] = shift(566);
	v->a[2032] = entry(1, true);
	v->a[2033] = reduce(sym_case_statement, 5, 0, 37);
	v->a[2034] = entry(1, false);
	v->a[2035] = reduce(sym_case_statement, 5, 0, 37);
	v->a[2036] = entry(1, false);
	v->a[2037] = reduce(sym_redirected_statement, 1, -1, 4);
	v->a[2038] = entry(1, true);
	v->a[2039] = reduce(sym_redirected_statement, 1, -1, 4);
	parse_actions_entries_102(v);
}

void	parse_actions_entries_102(t_parse_actions_entries_array *v)
{
	v->a[2040] = entry(1, true);
	v->a[2041] = shift(1778);
	v->a[2042] = entry(1, true);
	v->a[2043] = reduce(sym_case_statement, 5, 0, 51);
	v->a[2044] = entry(1, false);
	v->a[2045] = reduce(sym_case_statement, 5, 0, 51);
	v->a[2046] = entry(1, true);
	v->a[2047] = reduce(sym_case_statement, 6, 0, 37);
	v->a[2048] = entry(1, false);
	v->a[2049] = reduce(sym_case_statement, 6, 0, 37);
	v->a[2050] = entry(1, false);
	v->a[2051] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2052] = entry(2, false);
	v->a[2053] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2054] = shift_repeat(1371);
	v->a[2055] = entry(1, true);
	v->a[2056] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2057] = entry(2, true);
	v->a[2058] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2059] = shift_repeat(1778);
	parse_actions_entries_103(v);
}

void	parse_actions_entries_103(t_parse_actions_entries_array *v)
{
	v->a[2060] = entry(1, true);
	v->a[2061] = reduce(sym_case_statement, 7, 0, 74);
	v->a[2062] = entry(1, false);
	v->a[2063] = reduce(sym_case_statement, 7, 0, 74);
	v->a[2064] = entry(1, true);
	v->a[2065] = shift(1772);
	v->a[2066] = entry(1, true);
	v->a[2067] = reduce(sym_case_statement, 7, 0, 73);
	v->a[2068] = entry(1, false);
	v->a[2069] = reduce(sym_case_statement, 7, 0, 73);
	v->a[2070] = entry(1, true);
	v->a[2071] = reduce(sym_case_statement, 6, 0, 61);
	v->a[2072] = entry(1, false);
	v->a[2073] = reduce(sym_case_statement, 6, 0, 61);
	v->a[2074] = entry(1, true);
	v->a[2075] = reduce(sym_if_statement, 5, 0, 50);
	v->a[2076] = entry(1, false);
	v->a[2077] = reduce(sym_if_statement, 5, 0, 50);
	v->a[2078] = entry(1, true);
	v->a[2079] = reduce(sym_heredoc_redirect, 6, 0, 65);
	parse_actions_entries_104(v);
}

void	parse_actions_entries_104(t_parse_actions_entries_array *v)
{
	v->a[2080] = entry(1, false);
	v->a[2081] = reduce(sym_heredoc_redirect, 6, 0, 65);
	v->a[2082] = entry(1, true);
	v->a[2083] = reduce(sym_if_statement, 5, 0, 49);
	v->a[2084] = entry(1, false);
	v->a[2085] = reduce(sym_if_statement, 5, 0, 49);
	v->a[2086] = entry(1, true);
	v->a[2087] = reduce(sym_heredoc_redirect, 6, 0, 75);
	v->a[2088] = entry(1, false);
	v->a[2089] = reduce(sym_heredoc_redirect, 6, 0, 75);
	v->a[2090] = entry(1, true);
	v->a[2091] = reduce(sym_heredoc_redirect, 6, 0, 76);
	v->a[2092] = entry(1, false);
	v->a[2093] = reduce(sym_heredoc_redirect, 6, 0, 76);
	v->a[2094] = entry(1, true);
	v->a[2095] = reduce(sym_if_statement, 5, 0, 48);
	v->a[2096] = entry(1, false);
	v->a[2097] = reduce(sym_if_statement, 5, 0, 48);
	v->a[2098] = entry(2, false);
	v->a[2099] = reduce(aux_sym_case_statement_repeat1, 2, 0, 52);
	parse_actions_entries_105(v);
}

/* EOF parse_actions_entries_20.c */
