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
	v->a[2200] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2201] = shift_repeat(1783);
	v->a[2202] = entry(2, false);
	v->a[2203] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2204] = shift_repeat(1391);
	v->a[2205] = entry(2, true);
	v->a[2206] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2207] = shift_repeat(1755);
	v->a[2208] = entry(1, true);
	v->a[2209] = reduce(sym_if_statement, 6, 0, 58);
	v->a[2210] = entry(1, false);
	v->a[2211] = reduce(sym_if_statement, 6, 0, 58);
	v->a[2212] = entry(1, true);
	v->a[2213] = reduce(sym_if_statement, 6, 0, 57);
	v->a[2214] = entry(1, false);
	v->a[2215] = reduce(sym_if_statement, 6, 0, 57);
	v->a[2216] = entry(1, true);
	v->a[2217] = reduce(sym_command, 3, 0, 15);
	v->a[2218] = entry(1, false);
	v->a[2219] = reduce(sym_command, 3, 0, 15);
	parse_actions_entries_111(v);
}

void	parse_actions_entries_111(t_parse_actions_entries_array *v)
{
	v->a[2220] = entry(1, true);
	v->a[2221] = reduce(sym_if_statement, 7, 0, 69);
	v->a[2222] = entry(1, false);
	v->a[2223] = reduce(sym_if_statement, 7, 0, 69);
	v->a[2224] = entry(1, true);
	v->a[2225] = reduce(sym_for_statement, 6, 0, 55);
	v->a[2226] = entry(1, false);
	v->a[2227] = reduce(sym_for_statement, 6, 0, 55);
	v->a[2228] = entry(1, true);
	v->a[2229] = reduce(sym_heredoc_redirect, 5, 0, 68);
	v->a[2230] = entry(1, false);
	v->a[2231] = reduce(sym_heredoc_redirect, 5, 0, 68);
	v->a[2232] = entry(1, true);
	v->a[2233] = reduce(sym_heredoc_redirect, 5, 0, 67);
	v->a[2234] = entry(1, false);
	v->a[2235] = reduce(sym_heredoc_redirect, 5, 0, 67);
	v->a[2236] = entry(1, true);
	v->a[2237] = reduce(sym_for_statement, 4, 0, 35);
	v->a[2238] = entry(1, false);
	v->a[2239] = reduce(sym_for_statement, 4, 0, 35);
	parse_actions_entries_112(v);
}

void	parse_actions_entries_112(t_parse_actions_entries_array *v)
{
	v->a[2240] = entry(1, true);
	v->a[2241] = reduce(sym_do_group, 2, 0, 0);
	v->a[2242] = entry(1, false);
	v->a[2243] = reduce(sym_do_group, 2, 0, 0);
	v->a[2244] = entry(1, true);
	v->a[2245] = reduce(sym_if_statement, 4, 0, 36);
	v->a[2246] = entry(1, false);
	v->a[2247] = reduce(sym_if_statement, 4, 0, 36);
	v->a[2248] = entry(1, true);
	v->a[2249] = shift(2075);
	v->a[2250] = entry(1, true);
	v->a[2251] = reduce(sym__simple_heredoc_body, 2, 0, 0);
	v->a[2252] = entry(1, false);
	v->a[2253] = reduce(sym__simple_heredoc_body, 2, 0, 0);
	v->a[2254] = entry(1, true);
	v->a[2255] = reduce(sym__heredoc_body, 2, 0, 0);
	v->a[2256] = entry(1, false);
	v->a[2257] = reduce(sym__heredoc_body, 2, 0, 0);
	v->a[2258] = entry(1, true);
	v->a[2259] = reduce(sym_heredoc_redirect, 4, 0, 24);
	parse_actions_entries_113(v);
}

void	parse_actions_entries_113(t_parse_actions_entries_array *v)
{
	v->a[2260] = entry(1, false);
	v->a[2261] = reduce(sym_heredoc_redirect, 4, 0, 24);
	v->a[2262] = entry(2, false);
	v->a[2263] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[2264] = shift_repeat(1412);
	v->a[2265] = entry(2, false);
	v->a[2266] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[2267] = shift_repeat(739);
	v->a[2268] = entry(2, false);
	v->a[2269] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[2270] = shift_repeat(1643);
	v->a[2271] = entry(2, false);
	v->a[2272] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[2273] = shift_repeat(1644);
	v->a[2274] = entry(2, false);
	v->a[2275] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[2276] = shift_repeat(1611);
	v->a[2277] = entry(2, false);
	v->a[2278] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[2279] = shift_repeat(85);
	parse_actions_entries_114(v);
}

void	parse_actions_entries_114(t_parse_actions_entries_array *v)
{
	v->a[2280] = entry(2, false);
	v->a[2281] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[2282] = shift_repeat(89);
	v->a[2283] = entry(1, true);
	v->a[2284] = reduce(sym_heredoc_redirect, 5, 0, 24);
	v->a[2285] = entry(1, false);
	v->a[2286] = reduce(sym_heredoc_redirect, 5, 0, 24);
	v->a[2287] = entry(1, true);
	v->a[2288] = reduce(sym_heredoc_redirect, 5, 0, 66);
	v->a[2289] = entry(1, false);
	v->a[2290] = reduce(sym_heredoc_redirect, 5, 0, 66);
	v->a[2291] = entry(1, true);
	v->a[2292] = reduce(sym_case_statement, 4, 0, 37);
	v->a[2293] = entry(1, false);
	v->a[2294] = reduce(sym_case_statement, 4, 0, 37);
	v->a[2295] = entry(2, false);
	v->a[2296] = reduce(aux_sym_pipeline_repeat1, 2, 0, 0);
	v->a[2297] = shift_repeat(141);
	v->a[2298] = entry(2, false);
	v->a[2299] = reduce(aux_sym_pipeline_repeat1, 2, 0, 0);
	parse_actions_entries_115(v);
}

/* EOF parse_actions_entries_22.c */
