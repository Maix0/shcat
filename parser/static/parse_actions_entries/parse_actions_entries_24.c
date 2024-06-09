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
	v->a[2400] = reduce(aux_sym_redirected_statement_repeat1, 2, 0, 0);
	v->a[2401] = shift_repeat(1819);
	v->a[2402] = entry(1, true);
	v->a[2403] = reduce(sym_case_statement, 6, 0, 27);
	v->a[2404] = entry(1, false);
	v->a[2405] = reduce(sym_case_statement, 6, 0, 27);
	v->a[2406] = entry(1, false);
	v->a[2407] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2408] = entry(2, false);
	v->a[2409] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2410] = shift_repeat(1477);
	v->a[2411] = entry(2, false);
	v->a[2412] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2413] = shift_repeat(254);
	v->a[2414] = entry(1, true);
	v->a[2415] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2416] = entry(2, true);
	v->a[2417] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2418] = shift_repeat(1849);
	v->a[2419] = entry(1, true);
	parse_actions_entries_121(v);
}

void	parse_actions_entries_121(t_parse_actions_entries_array *v)
{
	v->a[2420] = reduce(sym_heredoc_redirect, 6, 0, 4);
	v->a[2421] = entry(1, false);
	v->a[2422] = reduce(sym_heredoc_redirect, 6, 0, 4);
	v->a[2423] = entry(1, true);
	v->a[2424] = reduce(sym_case_statement, 7, 0, 45);
	v->a[2425] = entry(1, false);
	v->a[2426] = reduce(sym_case_statement, 7, 0, 45);
	v->a[2427] = entry(1, true);
	v->a[2428] = reduce(sym_if_statement, 7, 0, 26);
	v->a[2429] = entry(1, false);
	v->a[2430] = reduce(sym_if_statement, 7, 0, 26);
	v->a[2431] = entry(1, true);
	v->a[2432] = shift(1449);
	v->a[2433] = entry(1, true);
	v->a[2434] = reduce(sym_heredoc_redirect, 5, 0, 43);
	v->a[2435] = entry(1, false);
	v->a[2436] = reduce(sym_heredoc_redirect, 5, 0, 43);
	v->a[2437] = entry(2, false);
	v->a[2438] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2439] = shift_repeat(1401);
	parse_actions_entries_122(v);
}

void	parse_actions_entries_122(t_parse_actions_entries_array *v)
{
	v->a[2440] = entry(2, false);
	v->a[2441] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2442] = shift_repeat(274);
	v->a[2443] = entry(2, true);
	v->a[2444] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2445] = shift_repeat(1841);
	v->a[2446] = entry(1, true);
	v->a[2447] = reduce(sym_heredoc_redirect, 5, 0, 42);
	v->a[2448] = entry(1, false);
	v->a[2449] = reduce(sym_heredoc_redirect, 5, 0, 42);
	v->a[2450] = entry(1, true);
	v->a[2451] = reduce(sym_do_group, 2, 0, 0);
	v->a[2452] = entry(1, false);
	v->a[2453] = reduce(sym_do_group, 2, 0, 0);
	v->a[2454] = entry(1, false);
	v->a[2455] = shift(1419);
	v->a[2456] = entry(1, false);
	v->a[2457] = shift(273);
	v->a[2458] = entry(1, true);
	v->a[2459] = shift(764);
	parse_actions_entries_123(v);
}

void	parse_actions_entries_123(t_parse_actions_entries_array *v)
{
	v->a[2460] = entry(1, true);
	v->a[2461] = shift(1732);
	v->a[2462] = entry(1, true);
	v->a[2463] = reduce(sym_heredoc_redirect, 5, 0, 41);
	v->a[2464] = entry(1, false);
	v->a[2465] = reduce(sym_heredoc_redirect, 5, 0, 41);
	v->a[2466] = entry(1, false);
	v->a[2467] = reduce(sym_redirected_statement, 1, -1, 3);
	v->a[2468] = entry(1, true);
	v->a[2469] = reduce(sym_redirected_statement, 1, -1, 3);
	v->a[2470] = entry(1, true);
	v->a[2471] = shift(1841);
	v->a[2472] = entry(1, true);
	v->a[2473] = reduce(sym_heredoc_redirect, 6, 0, 49);
	v->a[2474] = entry(1, false);
	v->a[2475] = reduce(sym_heredoc_redirect, 6, 0, 49);
	v->a[2476] = entry(1, true);
	v->a[2477] = shift(740);
	v->a[2478] = entry(1, true);
	v->a[2479] = shift(1850);
	parse_actions_entries_124(v);
}

void	parse_actions_entries_124(t_parse_actions_entries_array *v)
{
	v->a[2480] = entry(1, true);
	v->a[2481] = reduce(sym_function_definition, 4, 0, 31);
	v->a[2482] = entry(1, false);
	v->a[2483] = reduce(sym_function_definition, 4, 0, 31);
	v->a[2484] = entry(1, true);
	v->a[2485] = reduce(sym_heredoc_redirect, 5, 0, 1);
	v->a[2486] = entry(1, false);
	v->a[2487] = reduce(sym_heredoc_redirect, 5, 0, 1);
	v->a[2488] = entry(1, true);
	v->a[2489] = reduce(sym_case_statement, 4, 0, 27);
	v->a[2490] = entry(1, false);
	v->a[2491] = reduce(sym_case_statement, 4, 0, 27);
	v->a[2492] = entry(1, true);
	v->a[2493] = shift(1849);
	v->a[2494] = entry(1, true);
	v->a[2495] = reduce(sym_heredoc_redirect, 6, 0, 50);
	v->a[2496] = entry(1, false);
	v->a[2497] = reduce(sym_heredoc_redirect, 6, 0, 50);
	v->a[2498] = entry(1, true);
	v->a[2499] = reduce(sym__heredoc_body, 2, 0, 0);
	parse_actions_entries_125(v);
}

/* EOF parse_actions_entries_24.c */
