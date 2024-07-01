/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_actions_entries_22.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_actions_entries.h"

void	parse_actions_entries_110(t_parse_actions_entries_array *v)
{
	v->a[2200] = shift_repeat(1521);
	v->a[2201] = entry(1, true);
	v->a[2202] = shift(1503);
	v->a[2203] = entry(1, true);
	v->a[2204] = shift(1516);
	v->a[2205] = entry(1, true);
	v->a[2206] = shift(2306);
	v->a[2207] = entry(2, true);
	v->a[2208] = reduce(aux_sym__variable_assignments_repeat1, 2, 0, 0);
	v->a[2209] = shift_repeat(2306);
	v->a[2210] = entry(1, true);
	v->a[2211] = shift(641);
	v->a[2212] = entry(1, true);
	v->a[2213] = reduce(sym_heredoc_redirect, 5, 0, 6);
	v->a[2214] = entry(1, false);
	v->a[2215] = reduce(sym_heredoc_redirect, 5, 0, 6);
	v->a[2216] = entry(1, true);
	v->a[2217] = reduce(sym_function_definition, 4, 0, 42);
	v->a[2218] = entry(1, false);
	v->a[2219] = reduce(sym_function_definition, 4, 0, 42);
	parse_actions_entries_111(v);
}

void	parse_actions_entries_111(t_parse_actions_entries_array *v)
{
	v->a[2220] = entry(1, true);
	v->a[2221] = shift(1953);
	v->a[2222] = entry(1, true);
	v->a[2223] = reduce(sym_redirected_statement, 1, -1, 5);
	v->a[2224] = entry(1, false);
	v->a[2225] = reduce(sym_redirected_statement, 1, -1, 5);
	v->a[2226] = entry(1, true);
	v->a[2227] = shift(1969);
	v->a[2228] = entry(1, true);
	v->a[2229] = reduce(sym_do_group, 3, 0, 22);
	v->a[2230] = entry(1, false);
	v->a[2231] = reduce(sym_do_group, 3, 0, 22);
	v->a[2232] = entry(1, true);
	v->a[2233] = reduce(sym_if_statement, 5, 0, 44);
	v->a[2234] = entry(1, false);
	v->a[2235] = reduce(sym_if_statement, 5, 0, 44);
	v->a[2236] = entry(2, true);
	v->a[2237] = reduce(aux_sym__variable_assignments_repeat1, 2, 0, 0);
	v->a[2238] = shift_repeat(2251);
	v->a[2239] = entry(1, true);
	parse_actions_entries_112(v);
}

void	parse_actions_entries_112(t_parse_actions_entries_array *v)
{
	v->a[2240] = shift(1522);
	v->a[2241] = entry(1, true);
	v->a[2242] = reduce(sym_if_statement, 5, 0, 46);
	v->a[2243] = entry(1, false);
	v->a[2244] = reduce(sym_if_statement, 5, 0, 46);
	v->a[2245] = entry(1, true);
	v->a[2246] = shift(1965);
	v->a[2247] = entry(1, false);
	v->a[2248] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2249] = entry(2, false);
	v->a[2250] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2251] = shift_repeat(1594);
	v->a[2252] = entry(2, false);
	v->a[2253] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2254] = shift_repeat(357);
	v->a[2255] = entry(1, true);
	v->a[2256] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2257] = entry(2, true);
	v->a[2258] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2259] = shift_repeat(1969);
	parse_actions_entries_113(v);
}

void	parse_actions_entries_113(t_parse_actions_entries_array *v)
{
	v->a[2260] = entry(1, false);
	v->a[2261] = shift(1543);
	v->a[2262] = entry(1, false);
	v->a[2263] = shift(2114);
	v->a[2264] = entry(1, true);
	v->a[2265] = reduce(sym_case_statement, 5, 0, 47);
	v->a[2266] = entry(1, false);
	v->a[2267] = reduce(sym_case_statement, 5, 0, 47);
	v->a[2268] = entry(1, true);
	v->a[2269] = reduce(sym_command, 2, 0, 4);
	v->a[2270] = entry(1, false);
	v->a[2271] = reduce(sym_command, 2, 0, 4);
	v->a[2272] = entry(1, true);
	v->a[2273] = reduce(sym_case_statement, 5, 0, 36);
	v->a[2274] = entry(1, false);
	v->a[2275] = reduce(sym_case_statement, 5, 0, 36);
	v->a[2276] = entry(1, true);
	v->a[2277] = reduce(sym_if_statement, 5, 0, 45);
	v->a[2278] = entry(1, false);
	v->a[2279] = reduce(sym_if_statement, 5, 0, 45);
	parse_actions_entries_114(v);
}

void	parse_actions_entries_114(t_parse_actions_entries_array *v)
{
	v->a[2280] = entry(1, true);
	v->a[2281] = reduce(sym_case_statement, 4, 0, 36);
	v->a[2282] = entry(1, false);
	v->a[2283] = reduce(sym_case_statement, 4, 0, 36);
	v->a[2284] = entry(1, true);
	v->a[2285] = reduce(sym_if_statement, 4, 0, 35);
	v->a[2286] = entry(1, false);
	v->a[2287] = reduce(sym_if_statement, 4, 0, 35);
	v->a[2288] = entry(1, true);
	v->a[2289] = reduce(sym_case_statement, 6, 0, 57);
	v->a[2290] = entry(1, false);
	v->a[2291] = reduce(sym_case_statement, 6, 0, 57);
	v->a[2292] = entry(1, true);
	v->a[2293] = reduce(sym_do_group, 2, 0, 0);
	v->a[2294] = entry(1, false);
	v->a[2295] = reduce(sym_do_group, 2, 0, 0);
	v->a[2296] = entry(1, true);
	v->a[2297] = reduce(sym_for_statement, 4, 0, 34);
	v->a[2298] = entry(1, false);
	v->a[2299] = reduce(sym_for_statement, 4, 0, 34);
	parse_actions_entries_115(v);
}

/* EOF parse_actions_entries_22.c */
