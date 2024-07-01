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
	v->a[2201] = shift_repeat(1774);
	v->a[2202] = entry(1, true);
	v->a[2203] = reduce(sym_case_statement, 6, 0, 35);
	v->a[2204] = entry(1, false);
	v->a[2205] = reduce(sym_case_statement, 6, 0, 35);
	v->a[2206] = entry(2, false);
	v->a[2207] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2208] = shift_repeat(1364);
	v->a[2209] = entry(2, true);
	v->a[2210] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2211] = shift_repeat(1776);
	v->a[2212] = entry(1, true);
	v->a[2213] = reduce(sym_compound_statement, 3, 0, 20);
	v->a[2214] = entry(1, false);
	v->a[2215] = reduce(sym_compound_statement, 3, 0, 20);
	v->a[2216] = entry(2, false);
	v->a[2217] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[2218] = shift_repeat(1398);
	v->a[2219] = entry(2, false);
	parse_actions_entries_111(v);
}

void	parse_actions_entries_111(t_parse_actions_entries_array *v)
{
	v->a[2220] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[2221] = shift_repeat(747);
	v->a[2222] = entry(2, false);
	v->a[2223] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[2224] = shift_repeat(1622);
	v->a[2225] = entry(2, false);
	v->a[2226] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[2227] = shift_repeat(1623);
	v->a[2228] = entry(2, false);
	v->a[2229] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[2230] = shift_repeat(1537);
	v->a[2231] = entry(2, false);
	v->a[2232] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[2233] = shift_repeat(76);
	v->a[2234] = entry(2, false);
	v->a[2235] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[2236] = shift_repeat(77);
	v->a[2237] = entry(1, true);
	v->a[2238] = reduce(sym_subshell, 3, 0, 20);
	v->a[2239] = entry(1, false);
	parse_actions_entries_112(v);
}

void	parse_actions_entries_112(t_parse_actions_entries_array *v)
{
	v->a[2240] = reduce(sym_subshell, 3, 0, 20);
	v->a[2241] = entry(1, true);
	v->a[2242] = reduce(sym_case_statement, 6, 0, 56);
	v->a[2243] = entry(1, false);
	v->a[2244] = reduce(sym_case_statement, 6, 0, 56);
	v->a[2245] = entry(1, true);
	v->a[2246] = reduce(sym_case_statement, 7, 0, 67);
	v->a[2247] = entry(1, false);
	v->a[2248] = reduce(sym_case_statement, 7, 0, 67);
	v->a[2249] = entry(1, true);
	v->a[2250] = reduce(sym_case_statement, 8, 0, 75);
	v->a[2251] = entry(1, false);
	v->a[2252] = reduce(sym_case_statement, 8, 0, 75);
	v->a[2253] = entry(2, true);
	v->a[2254] = reduce(aux_sym__variable_assignments_repeat1, 2, 0, 0);
	v->a[2255] = shift_repeat(2056);
	v->a[2256] = entry(1, true);
	v->a[2257] = reduce(sym_case_statement, 5, 0, 46);
	v->a[2258] = entry(1, false);
	v->a[2259] = reduce(sym_case_statement, 5, 0, 46);
	parse_actions_entries_113(v);
}

void	parse_actions_entries_113(t_parse_actions_entries_array *v)
{
	v->a[2260] = entry(1, true);
	v->a[2261] = reduce(sym_heredoc_redirect, 7, 0, 76);
	v->a[2262] = entry(1, false);
	v->a[2263] = reduce(sym_heredoc_redirect, 7, 0, 76);
	v->a[2264] = entry(1, true);
	v->a[2265] = shift(1751);
	v->a[2266] = entry(2, false);
	v->a[2267] = reduce(aux_sym_pipeline_repeat1, 2, 0, 0);
	v->a[2268] = shift_repeat(139);
	v->a[2269] = entry(1, true);
	v->a[2270] = reduce(sym_pipeline, 2, 0, 0);
	v->a[2271] = entry(1, false);
	v->a[2272] = shift(149);
	v->a[2273] = entry(1, false);
	v->a[2274] = reduce(sym_pipeline, 2, 0, 0);
	v->a[2275] = entry(1, false);
	v->a[2276] = shift(139);
	v->a[2277] = entry(2, false);
	v->a[2278] = reduce(aux_sym_pipeline_repeat1, 2, 0, 0);
	v->a[2279] = shift_repeat(140);
	parse_actions_entries_114(v);
}

void	parse_actions_entries_114(t_parse_actions_entries_array *v)
{
	v->a[2280] = entry(2, false);
	v->a[2281] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2282] = shift_repeat(1374);
	v->a[2283] = entry(2, true);
	v->a[2284] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2285] = shift_repeat(1751);
	v->a[2286] = entry(1, false);
	v->a[2287] = shift(147);
	v->a[2288] = entry(2, false);
	v->a[2289] = reduce(aux_sym_pipeline_repeat1, 2, 0, 0);
	v->a[2290] = shift_repeat(147);
	v->a[2291] = entry(1, false);
	v->a[2292] = shift(140);
	v->a[2293] = entry(2, false);
	v->a[2294] = reduce(aux_sym_pipeline_repeat1, 2, 0, 0);
	v->a[2295] = shift_repeat(149);
	v->a[2296] = entry(1, true);
	v->a[2297] = shift(1270);
	v->a[2298] = entry(1, false);
	v->a[2299] = shift(135);
	parse_actions_entries_115(v);
}

/* EOF parse_actions_entries_22.c */
