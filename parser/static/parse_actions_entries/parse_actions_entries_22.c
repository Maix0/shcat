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
	v->a[2200] = reduce(sym_command, 2, 0, 3);
	v->a[2201] = entry(1, false);
	v->a[2202] = reduce(sym_command, 2, 0, 3);
	v->a[2203] = entry(1, true);
	v->a[2204] = reduce(sym_case_statement, 6, 0, 62);
	v->a[2205] = entry(1, false);
	v->a[2206] = reduce(sym_case_statement, 6, 0, 62);
	v->a[2207] = entry(1, true);
	v->a[2208] = shift(1769);
	v->a[2209] = entry(1, true);
	v->a[2210] = reduce(sym_heredoc_redirect, 6, 0, 78);
	v->a[2211] = entry(1, false);
	v->a[2212] = reduce(sym_heredoc_redirect, 6, 0, 78);
	v->a[2213] = entry(1, true);
	v->a[2214] = reduce(sym_if_statement, 7, 0, 69);
	v->a[2215] = entry(1, false);
	v->a[2216] = reduce(sym_if_statement, 7, 0, 69);
	v->a[2217] = entry(1, true);
	v->a[2218] = reduce(sym_heredoc_redirect, 5, 0, 68);
	v->a[2219] = entry(1, false);
	parse_actions_entries_111(v);
}

void	parse_actions_entries_111(t_parse_actions_entries_array *v)
{
	v->a[2220] = reduce(sym_heredoc_redirect, 5, 0, 68);
	v->a[2221] = entry(1, true);
	v->a[2222] = reduce(sym_heredoc_redirect, 5, 0, 67);
	v->a[2223] = entry(1, false);
	v->a[2224] = reduce(sym_heredoc_redirect, 5, 0, 67);
	v->a[2225] = entry(2, false);
	v->a[2226] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2227] = shift_repeat(1366);
	v->a[2228] = entry(2, true);
	v->a[2229] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2230] = shift_repeat(1769);
	v->a[2231] = entry(1, true);
	v->a[2232] = reduce(sym_heredoc_redirect, 5, 0, 66);
	v->a[2233] = entry(1, false);
	v->a[2234] = reduce(sym_heredoc_redirect, 5, 0, 66);
	v->a[2235] = entry(1, true);
	v->a[2236] = reduce(sym_case_statement, 6, 0, 37);
	v->a[2237] = entry(1, false);
	v->a[2238] = reduce(sym_case_statement, 6, 0, 37);
	v->a[2239] = entry(1, true);
	parse_actions_entries_112(v);
}

void	parse_actions_entries_112(t_parse_actions_entries_array *v)
{
	v->a[2240] = shift(1768);
	v->a[2241] = entry(1, true);
	v->a[2242] = reduce(sym_heredoc_redirect, 5, 0, 24);
	v->a[2243] = entry(1, false);
	v->a[2244] = reduce(sym_heredoc_redirect, 5, 0, 24);
	v->a[2245] = entry(1, true);
	v->a[2246] = reduce(sym__heredoc_body, 2, 0, 0);
	v->a[2247] = entry(1, false);
	v->a[2248] = reduce(sym__heredoc_body, 2, 0, 0);
	v->a[2249] = entry(1, true);
	v->a[2250] = reduce(sym__simple_heredoc_body, 2, 0, 0);
	v->a[2251] = entry(1, false);
	v->a[2252] = reduce(sym__simple_heredoc_body, 2, 0, 0);
	v->a[2253] = entry(1, true);
	v->a[2254] = reduce(sym_command, 3, 0, 15);
	v->a[2255] = entry(1, false);
	v->a[2256] = reduce(sym_command, 3, 0, 15);
	v->a[2257] = entry(1, true);
	v->a[2258] = reduce(sym_if_statement, 6, 0, 56);
	v->a[2259] = entry(1, false);
	parse_actions_entries_113(v);
}

void	parse_actions_entries_113(t_parse_actions_entries_array *v)
{
	v->a[2260] = reduce(sym_if_statement, 6, 0, 56);
	v->a[2261] = entry(1, true);
	v->a[2262] = reduce(sym_case_statement, 8, 0, 82);
	v->a[2263] = entry(1, false);
	v->a[2264] = reduce(sym_case_statement, 8, 0, 82);
	v->a[2265] = entry(1, true);
	v->a[2266] = reduce(sym_if_statement, 5, 0, 50);
	v->a[2267] = entry(1, false);
	v->a[2268] = reduce(sym_if_statement, 5, 0, 50);
	v->a[2269] = entry(1, true);
	v->a[2270] = reduce(sym_heredoc_redirect, 7, 0, 83);
	v->a[2271] = entry(1, false);
	v->a[2272] = reduce(sym_heredoc_redirect, 7, 0, 83);
	v->a[2273] = entry(2, false);
	v->a[2274] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2275] = shift_repeat(1364);
	v->a[2276] = entry(2, true);
	v->a[2277] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2278] = shift_repeat(1729);
	v->a[2279] = entry(1, true);
	parse_actions_entries_114(v);
}

void	parse_actions_entries_114(t_parse_actions_entries_array *v)
{
	v->a[2280] = reduce(sym_heredoc_redirect, 5, 0, 65);
	v->a[2281] = entry(1, false);
	v->a[2282] = reduce(sym_heredoc_redirect, 5, 0, 65);
	v->a[2283] = entry(1, true);
	v->a[2284] = reduce(sym_if_statement, 5, 0, 49);
	v->a[2285] = entry(1, false);
	v->a[2286] = reduce(sym_if_statement, 5, 0, 49);
	v->a[2287] = entry(1, true);
	v->a[2288] = reduce(sym_if_statement, 5, 0, 48);
	v->a[2289] = entry(1, false);
	v->a[2290] = reduce(sym_if_statement, 5, 0, 48);
	v->a[2291] = entry(1, true);
	v->a[2292] = reduce(sym_do_group, 3, 0, 20);
	v->a[2293] = entry(1, false);
	v->a[2294] = reduce(sym_do_group, 3, 0, 20);
	v->a[2295] = entry(1, true);
	v->a[2296] = shift(1758);
	v->a[2297] = entry(2, false);
	v->a[2298] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2299] = shift_repeat(1364);
	parse_actions_entries_115(v);
}

/* EOF parse_actions_entries_22.c */
