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
	v->a[2200] = shift(1448);
	v->a[2201] = entry(1, false);
	v->a[2202] = shift(1289);
	v->a[2203] = entry(1, false);
	v->a[2204] = shift(407);
	v->a[2205] = entry(1, false);
	v->a[2206] = shift(653);
	v->a[2207] = entry(1, false);
	v->a[2208] = shift(1474);
	v->a[2209] = entry(1, false);
	v->a[2210] = shift(433);
	v->a[2211] = entry(1, false);
	v->a[2212] = shift(443);
	v->a[2213] = entry(1, true);
	v->a[2214] = reduce(sym_heredoc_redirect, 6, 0, 71);
	v->a[2215] = entry(1, false);
	v->a[2216] = reduce(sym_heredoc_redirect, 6, 0, 71);
	v->a[2217] = entry(1, true);
	v->a[2218] = reduce(sym_case_statement, 6, 0, 34);
	v->a[2219] = entry(1, false);
	return (parse_actions_entries_111(v));
}

void	parse_actions_entries_111(t_parse_actions_entries_array *v)
{
	v->a[2220] = reduce(sym_case_statement, 6, 0, 34);
	v->a[2221] = entry(1, true);
	v->a[2222] = reduce(sym_if_statement, 7, 0, 65);
	v->a[2223] = entry(1, false);
	v->a[2224] = reduce(sym_if_statement, 7, 0, 65);
	v->a[2225] = entry(1, true);
	v->a[2226] = reduce(sym_if_statement, 6, 0, 54);
	v->a[2227] = entry(1, false);
	v->a[2228] = reduce(sym_if_statement, 6, 0, 54);
	v->a[2229] = entry(1, true);
	v->a[2230] = reduce(sym_case_statement, 7, 0, 69);
	v->a[2231] = entry(1, false);
	v->a[2232] = reduce(sym_case_statement, 7, 0, 69);
	v->a[2233] = entry(1, false);
	v->a[2234] = shift(687);
	v->a[2235] = entry(1, false);
	v->a[2236] = shift(660);
	v->a[2237] = entry(1, false);
	v->a[2238] = shift(697);
	v->a[2239] = entry(1, false);
	return (parse_actions_entries_112(v));
}

void	parse_actions_entries_112(t_parse_actions_entries_array *v)
{
	v->a[2240] = shift(432);
	v->a[2241] = entry(1, false);
	v->a[2242] = shift(662);
	v->a[2243] = entry(1, true);
	v->a[2244] = reduce(sym_case_statement, 8, 0, 75);
	v->a[2245] = entry(1, false);
	v->a[2246] = reduce(sym_case_statement, 8, 0, 75);
	v->a[2247] = entry(1, false);
	v->a[2248] = shift(322);
	v->a[2249] = entry(1, false);
	v->a[2250] = shift(349);
	v->a[2251] = entry(1, true);
	v->a[2252] = reduce(sym_case_statement, 7, 0, 70);
	v->a[2253] = entry(1, false);
	v->a[2254] = reduce(sym_case_statement, 7, 0, 70);
	v->a[2255] = entry(1, false);
	v->a[2256] = shift(375);
	v->a[2257] = entry(1, false);
	v->a[2258] = shift(667);
	v->a[2259] = entry(1, true);
	return (parse_actions_entries_113(v));
}

void	parse_actions_entries_113(t_parse_actions_entries_array *v)
{
	v->a[2260] = reduce(sym_if_statement, 6, 0, 53);
	v->a[2261] = entry(1, false);
	v->a[2262] = reduce(sym_if_statement, 6, 0, 53);
	v->a[2263] = entry(1, false);
	v->a[2264] = shift(352);
	v->a[2265] = entry(1, false);
	v->a[2266] = shift(1295);
	v->a[2267] = entry(1, false);
	v->a[2268] = shift(1286);
	v->a[2269] = entry(1, true);
	v->a[2270] = reduce(sym_for_statement, 6, 0, 52);
	v->a[2271] = entry(1, false);
	v->a[2272] = reduce(sym_for_statement, 6, 0, 52);
	v->a[2273] = entry(1, true);
	v->a[2274] = shift(643);
	v->a[2275] = entry(1, true);
	v->a[2276] = shift(893);
	v->a[2277] = entry(1, true);
	v->a[2278] = shift(268);
	v->a[2279] = entry(1, false);
	return (parse_actions_entries_114(v));
}

void	parse_actions_entries_114(t_parse_actions_entries_array *v)
{
	v->a[2280] = shift(899);
	v->a[2281] = entry(1, false);
	v->a[2282] = shift(893);
	v->a[2283] = entry(1, true);
	v->a[2284] = shift(899);
	v->a[2285] = entry(1, true);
	v->a[2286] = shift(694);
	v->a[2287] = entry(1, false);
	v->a[2288] = reduce(sym_case_item, 4, 0, 56);
	v->a[2289] = entry(1, false);
	v->a[2290] = reduce(sym__case_item_last, 4, 0, 56);
	v->a[2291] = entry(1, true);
	v->a[2292] = reduce(sym_case_item, 4, 0, 56);
	v->a[2293] = entry(1, false);
	v->a[2294] = shift(664);
	v->a[2295] = entry(1, false);
	v->a[2296] = shift(998);
	v->a[2297] = entry(1, false);
	v->a[2298] = shift(390);
	v->a[2299] = entry(1, false);
	return (parse_actions_entries_115(v));
}

/* EOF parse_actions_entries_22.c */
