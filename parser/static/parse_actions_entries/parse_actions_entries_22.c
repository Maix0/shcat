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
	v->a[2200] = entry(2, false);
	v->a[2201] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2202] = shift_repeat(304);
	v->a[2203] = entry(2, true);
	v->a[2204] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2205] = shift_repeat(1808);
	v->a[2206] = entry(1, true);
	v->a[2207] = reduce(sym_if_statement, 5, 0, 45);
	v->a[2208] = entry(1, false);
	v->a[2209] = reduce(sym_if_statement, 5, 0, 45);
	v->a[2210] = entry(1, false);
	v->a[2211] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2212] = entry(2, false);
	v->a[2213] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2214] = shift_repeat(1677);
	v->a[2215] = entry(2, false);
	v->a[2216] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2217] = shift_repeat(304);
	v->a[2218] = entry(1, true);
	v->a[2219] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	parse_actions_entries_111(v);
}

void	parse_actions_entries_111(t_parse_actions_entries_array *v)
{
	v->a[2220] = entry(2, true);
	v->a[2221] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2222] = shift_repeat(1940);
	v->a[2223] = entry(1, true);
	v->a[2224] = reduce(sym_while_statement, 3, 0, 21);
	v->a[2225] = entry(1, false);
	v->a[2226] = reduce(sym_while_statement, 3, 0, 21);
	v->a[2227] = entry(1, false);
	v->a[2228] = reduce(sym_redirected_statement, 1, -1, 5);
	v->a[2229] = entry(1, true);
	v->a[2230] = reduce(sym_redirected_statement, 1, -1, 5);
	v->a[2231] = entry(1, true);
	v->a[2232] = shift(1951);
	v->a[2233] = entry(2, false);
	v->a[2234] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2235] = shift_repeat(1638);
	v->a[2236] = entry(2, false);
	v->a[2237] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2238] = shift_repeat(268);
	v->a[2239] = entry(2, true);
	parse_actions_entries_112(v);
}

void	parse_actions_entries_112(t_parse_actions_entries_array *v)
{
	v->a[2240] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2241] = shift_repeat(1949);
	v->a[2242] = entry(1, true);
	v->a[2243] = reduce(sym_heredoc_redirect, 4, 0, 1);
	v->a[2244] = entry(1, false);
	v->a[2245] = reduce(sym_heredoc_redirect, 4, 0, 1);
	v->a[2246] = entry(2, false);
	v->a[2247] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2248] = shift_repeat(1668);
	v->a[2249] = entry(2, false);
	v->a[2250] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2251] = shift_repeat(282);
	v->a[2252] = entry(2, true);
	v->a[2253] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2254] = shift_repeat(1948);
	v->a[2255] = entry(1, true);
	v->a[2256] = reduce(sym_subshell, 3, 0, 22);
	v->a[2257] = entry(1, false);
	v->a[2258] = reduce(sym_subshell, 3, 0, 22);
	v->a[2259] = entry(1, true);
	parse_actions_entries_113(v);
}

void	parse_actions_entries_113(t_parse_actions_entries_array *v)
{
	v->a[2260] = reduce(sym_if_statement, 6, 0, 51);
	v->a[2261] = entry(1, false);
	v->a[2262] = reduce(sym_if_statement, 6, 0, 51);
	v->a[2263] = entry(1, true);
	v->a[2264] = reduce(sym_if_statement, 6, 0, 52);
	v->a[2265] = entry(1, false);
	v->a[2266] = reduce(sym_if_statement, 6, 0, 52);
	v->a[2267] = entry(1, true);
	v->a[2268] = reduce(sym_command, 3, 0, 17);
	v->a[2269] = entry(1, false);
	v->a[2270] = reduce(sym_command, 3, 0, 17);
	v->a[2271] = entry(1, true);
	v->a[2272] = reduce(sym_if_statement, 6, 0, 53);
	v->a[2273] = entry(1, false);
	v->a[2274] = reduce(sym_if_statement, 6, 0, 53);
	v->a[2275] = entry(1, true);
	v->a[2276] = shift(1940);
	v->a[2277] = entry(1, true);
	v->a[2278] = reduce(sym_do_group, 2, 0, 0);
	v->a[2279] = entry(1, false);
	parse_actions_entries_114(v);
}

void	parse_actions_entries_114(t_parse_actions_entries_array *v)
{
	v->a[2280] = reduce(sym_do_group, 2, 0, 0);
	v->a[2281] = entry(1, true);
	v->a[2282] = reduce(sym_compound_statement, 3, 0, 22);
	v->a[2283] = entry(1, false);
	v->a[2284] = reduce(sym_compound_statement, 3, 0, 22);
	v->a[2285] = entry(1, true);
	v->a[2286] = reduce(sym_case_statement, 6, 0, 56);
	v->a[2287] = entry(1, false);
	v->a[2288] = reduce(sym_case_statement, 6, 0, 56);
	v->a[2289] = entry(1, true);
	v->a[2290] = reduce(sym_case_statement, 6, 0, 57);
	v->a[2291] = entry(1, false);
	v->a[2292] = reduce(sym_case_statement, 6, 0, 57);
	v->a[2293] = entry(1, true);
	v->a[2294] = shift(1948);
	v->a[2295] = entry(2, false);
	v->a[2296] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2297] = shift_repeat(1643);
	v->a[2298] = entry(2, false);
	v->a[2299] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	parse_actions_entries_115(v);
}

/* EOF parse_actions_entries_22.c */
