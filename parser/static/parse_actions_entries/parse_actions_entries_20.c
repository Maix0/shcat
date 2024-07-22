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
	v->a[2000] = shift_repeat(1650);
	v->a[2001] = entry(2, false);
	v->a[2002] = reduce(aux_sym_case_statement_repeat1, 2, 0, 52);
	v->a[2003] = shift_repeat(46);
	v->a[2004] = entry(2, false);
	v->a[2005] = reduce(aux_sym_case_statement_repeat1, 2, 0, 52);
	v->a[2006] = shift_repeat(49);
	v->a[2007] = entry(2, true);
	v->a[2008] = reduce(aux_sym_case_statement_repeat1, 2, 0, 52);
	v->a[2009] = shift_repeat(1727);
	v->a[2010] = entry(2, false);
	v->a[2011] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2012] = shift_repeat(1416);
	v->a[2013] = entry(2, false);
	v->a[2014] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2015] = shift_repeat(2079);
	v->a[2016] = entry(2, true);
	v->a[2017] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2018] = shift_repeat(1731);
	v->a[2019] = entry(1, true);
	parse_actions_entries_101(v);
}

void	parse_actions_entries_101(t_parse_actions_entries_array *v)
{
	v->a[2020] = shift(1324);
	v->a[2021] = entry(1, true);
	v->a[2022] = shift(476);
	v->a[2023] = entry(1, true);
	v->a[2024] = shift(698);
	v->a[2025] = entry(1, true);
	v->a[2026] = shift(1986);
	v->a[2027] = entry(2, false);
	v->a[2028] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2029] = shift_repeat(1384);
	v->a[2030] = entry(2, true);
	v->a[2031] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2032] = shift_repeat(1730);
	v->a[2033] = entry(1, true);
	v->a[2034] = reduce(aux_sym_pipeline_repeat1, 2, 0, 0);
	v->a[2035] = entry(2, false);
	v->a[2036] = reduce(aux_sym_pipeline_repeat1, 2, 0, 0);
	v->a[2037] = shift(135);
	v->a[2038] = entry(1, false);
	v->a[2039] = reduce(aux_sym_pipeline_repeat1, 2, 0, 0);
	parse_actions_entries_102(v);
}

void	parse_actions_entries_102(t_parse_actions_entries_array *v)
{
	v->a[2040] = entry(2, false);
	v->a[2041] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2042] = shift_repeat(1373);
	v->a[2043] = entry(2, true);
	v->a[2044] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2045] = shift_repeat(1726);
	v->a[2046] = entry(2, true);
	v->a[2047] = reduce(aux_sym__variable_assignments_repeat1, 2, 0, 0);
	v->a[2048] = shift_repeat(1946);
	v->a[2049] = entry(1, true);
	v->a[2050] = shift(2115);
	v->a[2051] = entry(2, true);
	v->a[2052] = reduce(aux_sym__variable_assignments_repeat1, 2, 0, 0);
	v->a[2053] = shift_repeat(2115);
	v->a[2054] = entry(1, true);
	v->a[2055] = shift(2119);
	v->a[2056] = entry(2, true);
	v->a[2057] = reduce(aux_sym__variable_assignments_repeat1, 2, 0, 0);
	v->a[2058] = shift_repeat(2119);
	v->a[2059] = entry(1, false);
	parse_actions_entries_103(v);
}

void	parse_actions_entries_103(t_parse_actions_entries_array *v)
{
	v->a[2060] = reduce(sym_function_definition, 4, 0, 46);
	v->a[2061] = entry(1, true);
	v->a[2062] = reduce(sym_function_definition, 4, 0, 46);
	v->a[2063] = entry(1, true);
	v->a[2064] = shift(1765);
	v->a[2065] = entry(1, true);
	v->a[2066] = reduce(sym_case_statement, 7, 0, 73);
	v->a[2067] = entry(1, false);
	v->a[2068] = reduce(sym_case_statement, 7, 0, 73);
	v->a[2069] = entry(1, false);
	v->a[2070] = reduce(sym_redirected_statement, 1, -1, 4);
	v->a[2071] = entry(1, true);
	v->a[2072] = reduce(sym_redirected_statement, 1, -1, 4);
	v->a[2073] = entry(1, true);
	v->a[2074] = shift(1753);
	v->a[2075] = entry(1, true);
	v->a[2076] = reduce(sym_for_statement, 4, 0, 35);
	v->a[2077] = entry(1, false);
	v->a[2078] = reduce(sym_for_statement, 4, 0, 35);
	v->a[2079] = entry(1, true);
	parse_actions_entries_104(v);
}

void	parse_actions_entries_104(t_parse_actions_entries_array *v)
{
	v->a[2080] = reduce(sym_do_group, 2, 0, 0);
	v->a[2081] = entry(1, false);
	v->a[2082] = reduce(sym_do_group, 2, 0, 0);
	v->a[2083] = entry(1, true);
	v->a[2084] = reduce(sym_if_statement, 4, 0, 36);
	v->a[2085] = entry(1, false);
	v->a[2086] = reduce(sym_if_statement, 4, 0, 36);
	v->a[2087] = entry(1, true);
	v->a[2088] = reduce(sym_heredoc_redirect, 6, 0, 75);
	v->a[2089] = entry(1, false);
	v->a[2090] = reduce(sym_heredoc_redirect, 6, 0, 75);
	v->a[2091] = entry(1, true);
	v->a[2092] = reduce(sym_heredoc_redirect, 4, 0, 24);
	v->a[2093] = entry(1, false);
	v->a[2094] = reduce(sym_heredoc_redirect, 4, 0, 24);
	v->a[2095] = entry(1, true);
	v->a[2096] = reduce(sym_case_statement, 7, 0, 74);
	v->a[2097] = entry(1, false);
	v->a[2098] = reduce(sym_case_statement, 7, 0, 74);
	v->a[2099] = entry(1, true);
	parse_actions_entries_105(v);
}

/* EOF parse_actions_entries_20.c */
