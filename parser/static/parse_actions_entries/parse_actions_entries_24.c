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
	v->a[2400] = reduce(sym_case_statement, 6, 0, 56);
	v->a[2401] = entry(1, false);
	v->a[2402] = reduce(sym_case_statement, 6, 0, 56);
	v->a[2403] = entry(1, true);
	v->a[2404] = reduce(sym_case_statement, 7, 0, 67);
	v->a[2405] = entry(1, false);
	v->a[2406] = reduce(sym_case_statement, 7, 0, 67);
	v->a[2407] = entry(1, true);
	v->a[2408] = reduce(sym_if_statement, 7, 0, 62);
	v->a[2409] = entry(1, false);
	v->a[2410] = reduce(sym_if_statement, 7, 0, 62);
	v->a[2411] = entry(1, true);
	v->a[2412] = reduce(sym_heredoc_redirect, 5, 0, 61);
	v->a[2413] = entry(1, false);
	v->a[2414] = reduce(sym_heredoc_redirect, 5, 0, 61);
	v->a[2415] = entry(1, true);
	v->a[2416] = reduce(sym_heredoc_redirect, 5, 0, 60);
	v->a[2417] = entry(1, false);
	v->a[2418] = reduce(sym_heredoc_redirect, 5, 0, 60);
	v->a[2419] = entry(1, true);
	parse_actions_entries_121(v);
}

void	parse_actions_entries_121(t_parse_actions_entries_array *v)
{
	v->a[2420] = reduce(sym_heredoc_redirect, 5, 0, 59);
	v->a[2421] = entry(1, false);
	v->a[2422] = reduce(sym_heredoc_redirect, 5, 0, 59);
	v->a[2423] = entry(1, true);
	v->a[2424] = reduce(sym_heredoc_redirect, 5, 0, 1);
	v->a[2425] = entry(1, false);
	v->a[2426] = reduce(sym_heredoc_redirect, 5, 0, 1);
	v->a[2427] = entry(1, true);
	v->a[2428] = reduce(sym__heredoc_body, 2, 0, 0);
	v->a[2429] = entry(1, false);
	v->a[2430] = reduce(sym__heredoc_body, 2, 0, 0);
	v->a[2431] = entry(1, true);
	v->a[2432] = reduce(sym__simple_heredoc_body, 2, 0, 0);
	v->a[2433] = entry(1, false);
	v->a[2434] = reduce(sym__simple_heredoc_body, 2, 0, 0);
	v->a[2435] = entry(2, false);
	v->a[2436] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2437] = shift_repeat(1571);
	v->a[2438] = entry(2, false);
	v->a[2439] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	parse_actions_entries_122(v);
}

void	parse_actions_entries_122(t_parse_actions_entries_array *v)
{
	v->a[2440] = shift_repeat(364);
	v->a[2441] = entry(2, true);
	v->a[2442] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2443] = shift_repeat(1936);
	v->a[2444] = entry(1, true);
	v->a[2445] = reduce(sym_case_statement, 6, 0, 36);
	v->a[2446] = entry(1, false);
	v->a[2447] = reduce(sym_case_statement, 6, 0, 36);
	v->a[2448] = entry(1, true);
	v->a[2449] = shift(1962);
	v->a[2450] = entry(2, false);
	v->a[2451] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2452] = shift_repeat(1571);
	v->a[2453] = entry(2, false);
	v->a[2454] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2455] = shift_repeat(364);
	v->a[2456] = entry(2, true);
	v->a[2457] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2458] = shift_repeat(1962);
	v->a[2459] = entry(2, false);
	parse_actions_entries_123(v);
}

void	parse_actions_entries_123(t_parse_actions_entries_array *v)
{
	v->a[2460] = reduce(aux_sym_pipeline_repeat1, 2, 0, 0);
	v->a[2461] = shift_repeat(144);
	v->a[2462] = entry(1, true);
	v->a[2463] = reduce(sym_pipeline, 2, 0, 0);
	v->a[2464] = entry(1, false);
	v->a[2465] = shift(154);
	v->a[2466] = entry(1, false);
	v->a[2467] = reduce(sym_pipeline, 2, 0, 0);
	v->a[2468] = entry(2, false);
	v->a[2469] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[2470] = shift_repeat(1543);
	v->a[2471] = entry(2, false);
	v->a[2472] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[2473] = shift_repeat(846);
	v->a[2474] = entry(2, false);
	v->a[2475] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[2476] = shift_repeat(1811);
	v->a[2477] = entry(2, false);
	v->a[2478] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[2479] = shift_repeat(1812);
	parse_actions_entries_124(v);
}

void	parse_actions_entries_124(t_parse_actions_entries_array *v)
{
	v->a[2480] = entry(2, false);
	v->a[2481] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[2482] = shift_repeat(1799);
	v->a[2483] = entry(2, false);
	v->a[2484] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[2485] = shift_repeat(110);
	v->a[2486] = entry(2, false);
	v->a[2487] = reduce(aux_sym_for_statement_repeat1, 2, 0, 0);
	v->a[2488] = shift_repeat(111);
	v->a[2489] = entry(1, false);
	v->a[2490] = shift(144);
	v->a[2491] = entry(2, false);
	v->a[2492] = reduce(aux_sym_case_statement_repeat1, 2, 0, 48);
	v->a[2493] = shift_repeat(1993);
	v->a[2494] = entry(2, false);
	v->a[2495] = reduce(aux_sym_case_statement_repeat1, 2, 0, 48);
	v->a[2496] = shift_repeat(1485);
	v->a[2497] = entry(2, false);
	v->a[2498] = reduce(aux_sym_case_statement_repeat1, 2, 0, 48);
	v->a[2499] = shift_repeat(822);
	parse_actions_entries_125(v);
}

/* EOF parse_actions_entries_24.c */
