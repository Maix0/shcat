/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_actions_entries_24.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_actions_entries.h"

void	parse_actions_entries_120(t_parse_actions_entries_array *v)
{
	v->a[2400] = entry(2, false);
	v->a[2401] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2402] = shift_repeat(1664);
	v->a[2403] = entry(2, false);
	v->a[2404] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2405] = shift_repeat(290);
	v->a[2406] = entry(2, true);
	v->a[2407] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2408] = shift_repeat(1831);
	v->a[2409] = entry(1, true);
	v->a[2410] = shift(2251);
	v->a[2411] = entry(1, true);
	v->a[2412] = reduce(sym_heredoc_redirect, 6, 0, 69);
	v->a[2413] = entry(1, false);
	v->a[2414] = reduce(sym_heredoc_redirect, 6, 0, 69);
	v->a[2415] = entry(1, true);
	v->a[2416] = reduce(sym_heredoc_redirect, 6, 0, 70);
	v->a[2417] = entry(1, false);
	v->a[2418] = reduce(sym_heredoc_redirect, 6, 0, 70);
	v->a[2419] = entry(1, true);
	parse_actions_entries_121(v);
}

void	parse_actions_entries_121(t_parse_actions_entries_array *v)
{
	v->a[2420] = reduce(sym_heredoc_redirect, 6, 0, 71);
	v->a[2421] = entry(1, false);
	v->a[2422] = reduce(sym_heredoc_redirect, 6, 0, 71);
	v->a[2423] = entry(1, true);
	v->a[2424] = reduce(sym_heredoc_redirect, 7, 0, 76);
	v->a[2425] = entry(1, false);
	v->a[2426] = reduce(sym_heredoc_redirect, 7, 0, 76);
	v->a[2427] = entry(1, true);
	v->a[2428] = reduce(sym_for_statement, 6, 0, 50);
	v->a[2429] = entry(1, false);
	v->a[2430] = reduce(sym_for_statement, 6, 0, 50);
	v->a[2431] = entry(2, true);
	v->a[2432] = reduce(aux_sym__variable_assignments_repeat1, 2, 0, 0);
	v->a[2433] = shift_repeat(2251);
	v->a[2434] = entry(1, true);
	v->a[2435] = reduce(sym_case_statement, 8, 0, 75);
	v->a[2436] = entry(1, false);
	v->a[2437] = reduce(sym_case_statement, 8, 0, 75);
	v->a[2438] = entry(1, false);
	v->a[2439] = shift(1337);
	parse_actions_entries_122(v);
}

void	parse_actions_entries_122(t_parse_actions_entries_array *v)
{
	v->a[2440] = entry(1, true);
	v->a[2441] = reduce(sym_pipeline, 2, 0, 0);
	v->a[2442] = entry(1, false);
	v->a[2443] = shift(156);
	v->a[2444] = entry(1, false);
	v->a[2445] = reduce(sym_pipeline, 2, 0, 0);
	v->a[2446] = entry(1, false);
	v->a[2447] = shift(147);
	v->a[2448] = entry(2, false);
	v->a[2449] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2450] = shift_repeat(1664);
	v->a[2451] = entry(2, false);
	v->a[2452] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2453] = shift_repeat(290);
	v->a[2454] = entry(2, true);
	v->a[2455] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2456] = shift_repeat(1937);
	v->a[2457] = entry(2, false);
	v->a[2458] = reduce(aux_sym_pipeline_repeat1, 2, 0, 0);
	v->a[2459] = shift_repeat(156);
	parse_actions_entries_123(v);
}

void	parse_actions_entries_123(t_parse_actions_entries_array *v)
{
	v->a[2460] = entry(1, false);
	v->a[2461] = shift(1220);
	v->a[2462] = entry(1, true);
	v->a[2463] = shift(1937);
	v->a[2464] = entry(2, false);
	v->a[2465] = reduce(aux_sym_pipeline_repeat1, 2, 0, 0);
	v->a[2466] = shift_repeat(147);
	v->a[2467] = entry(2, false);
	v->a[2468] = reduce(aux_sym_pipeline_repeat1, 2, 0, 0);
	v->a[2469] = shift_repeat(149);
	v->a[2470] = entry(1, false);
	v->a[2471] = shift(1633);
	v->a[2472] = entry(1, false);
	v->a[2473] = shift(150);
	v->a[2474] = entry(2, false);
	v->a[2475] = reduce(aux_sym_pipeline_repeat1, 2, 0, 0);
	v->a[2476] = shift_repeat(150);
	v->a[2477] = entry(1, false);
	v->a[2478] = shift(149);
	v->a[2479] = entry(1, false);
	parse_actions_entries_124(v);
}

void	parse_actions_entries_124(t_parse_actions_entries_array *v)
{
	v->a[2480] = shift(1669);
	v->a[2481] = entry(1, false);
	v->a[2482] = shift(2111);
	v->a[2483] = entry(2, false);
	v->a[2484] = reduce(aux_sym_pipeline_repeat1, 2, 0, 0);
	v->a[2485] = shift_repeat(154);
	v->a[2486] = entry(1, false);
	v->a[2487] = shift(154);
	v->a[2488] = entry(1, true);
	v->a[2489] = shift(1481);
	v->a[2490] = entry(1, false);
	v->a[2491] = shift(1615);
	v->a[2492] = entry(1, false);
	v->a[2493] = shift(665);
	v->a[2494] = entry(1, true);
	v->a[2495] = reduce(sym__heredoc_pipeline, 2, 0, 0);
	v->a[2496] = entry(1, true);
	v->a[2497] = shift(1877);
	v->a[2498] = entry(2, false);
	v->a[2499] = reduce(aux_sym_case_statement_repeat1, 2, 0, 48);
	parse_actions_entries_125(v);
}

/* EOF parse_actions_entries_24.c */
