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
	v->a[2000] = shift_repeat(1741);
	v->a[2001] = entry(1, true);
	v->a[2002] = shift(1630);
	v->a[2003] = entry(1, false);
	v->a[2004] = shift(1488);
	v->a[2005] = entry(1, false);
	v->a[2006] = shift(1487);
	v->a[2007] = entry(1, true);
	v->a[2008] = shift(1487);
	v->a[2009] = entry(1, false);
	v->a[2010] = shift(1395);
	v->a[2011] = entry(1, false);
	v->a[2012] = shift(355);
	v->a[2013] = entry(1, false);
	v->a[2014] = shift(1389);
	v->a[2015] = entry(1, false);
	v->a[2016] = shift(1396);
	v->a[2017] = entry(1, true);
	v->a[2018] = shift(1396);
	v->a[2019] = entry(1, false);
	return (parse_actions_entries_101(v));
}

void	parse_actions_entries_101(t_parse_actions_entries_array *v)
{
	v->a[2020] = shift(489);
	v->a[2021] = entry(1, true);
	v->a[2022] = reduce(sym__heredoc_body, 2, 0, 0);
	v->a[2023] = entry(1, false);
	v->a[2024] = reduce(sym__heredoc_body, 2, 0, 0);
	v->a[2025] = entry(1, true);
	v->a[2026] = reduce(sym_while_statement, 3, 0, 17);
	v->a[2027] = entry(1, false);
	v->a[2028] = reduce(sym_while_statement, 3, 0, 17);
	v->a[2029] = entry(1, true);
	v->a[2030] = reduce(sym_subshell, 3, 0, 18);
	v->a[2031] = entry(1, false);
	v->a[2032] = reduce(sym_subshell, 3, 0, 18);
	v->a[2033] = entry(1, true);
	v->a[2034] = reduce(sym_compound_statement, 3, 0, 18);
	v->a[2035] = entry(1, false);
	v->a[2036] = reduce(sym_compound_statement, 3, 0, 18);
	v->a[2037] = entry(1, false);
	v->a[2038] = shift(391);
	v->a[2039] = entry(1, true);
	return (parse_actions_entries_102(v));
}

void	parse_actions_entries_102(t_parse_actions_entries_array *v)
{
	v->a[2040] = reduce(sym_for_statement, 4, 0, 32);
	v->a[2041] = entry(1, false);
	v->a[2042] = reduce(sym_for_statement, 4, 0, 32);
	v->a[2043] = entry(1, true);
	v->a[2044] = reduce(sym_do_group, 2, 0, 0);
	v->a[2045] = entry(1, false);
	v->a[2046] = reduce(sym_do_group, 2, 0, 0);
	v->a[2047] = entry(1, true);
	v->a[2048] = reduce(sym_if_statement, 4, 0, 33);
	v->a[2049] = entry(1, false);
	v->a[2050] = reduce(sym_if_statement, 4, 0, 33);
	v->a[2051] = entry(1, true);
	v->a[2052] = reduce(sym_case_statement, 4, 0, 34);
	v->a[2053] = entry(1, false);
	v->a[2054] = reduce(sym_case_statement, 4, 0, 34);
	v->a[2055] = entry(1, false);
	v->a[2056] = shift(1375);
	v->a[2057] = entry(1, false);
	v->a[2058] = shift(1480);
	v->a[2059] = entry(1, true);
	return (parse_actions_entries_103(v));
}

void	parse_actions_entries_103(t_parse_actions_entries_array *v)
{
	v->a[2060] = reduce(sym__simple_heredoc_body, 2, 0, 0);
	v->a[2061] = entry(1, false);
	v->a[2062] = reduce(sym__simple_heredoc_body, 2, 0, 0);
	v->a[2063] = entry(1, false);
	v->a[2064] = reduce(sym_redirected_statement, 1, -1, 4);
	v->a[2065] = entry(1, true);
	v->a[2066] = reduce(sym_redirected_statement, 1, -1, 4);
	v->a[2067] = entry(1, true);
	v->a[2068] = reduce(sym_case_statement, 6, 0, 59);
	v->a[2069] = entry(1, false);
	v->a[2070] = reduce(sym_case_statement, 6, 0, 59);
	v->a[2071] = entry(2, true);
	v->a[2072] = reduce(aux_sym__variable_assignments_repeat1, 2, 0, 0);
	v->a[2073] = shift_repeat(1706);
	v->a[2074] = entry(1, false);
	v->a[2075] = shift(1369);
	v->a[2076] = entry(1, true);
	v->a[2077] = shift(1706);
	v->a[2078] = entry(1, true);
	v->a[2079] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	return (parse_actions_entries_104(v));
}

void	parse_actions_entries_104(t_parse_actions_entries_array *v)
{
	v->a[2080] = entry(1, false);
	v->a[2081] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2082] = entry(2, false);
	v->a[2083] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2084] = shift_repeat(785);
	v->a[2085] = entry(1, true);
	v->a[2086] = reduce(sym_heredoc_redirect, 5, 0, 64);
	v->a[2087] = entry(1, false);
	v->a[2088] = reduce(sym_heredoc_redirect, 5, 0, 64);
	v->a[2089] = entry(1, false);
	v->a[2090] = shift(417);
	v->a[2091] = entry(1, false);
	v->a[2092] = reduce(sym_function_definition, 4, 0, 43);
	v->a[2093] = entry(1, true);
	v->a[2094] = reduce(sym_function_definition, 4, 0, 43);
	v->a[2095] = entry(1, true);
	v->a[2096] = reduce(sym_heredoc_redirect, 5, 0, 19);
	v->a[2097] = entry(1, false);
	v->a[2098] = reduce(sym_heredoc_redirect, 5, 0, 19);
	v->a[2099] = entry(1, false);
	return (parse_actions_entries_105(v));
}

/* EOF parse_actions_entries_20.c */
