/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_actions_entries_25.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./parse_actions_entries.h"

void	parse_actions_entries_125(t_parse_actions_entries_array *v)
{
	v->a[2500] = entry(1, false);
	v->a[2501] = reduce(sym__heredoc_body, 2, 0, 0);
	v->a[2502] = entry(1, true);
	v->a[2503] = shift(2174);
	v->a[2504] = entry(1, true);
	v->a[2505] = reduce(sym_heredoc_redirect, 6, 0, 50);
	v->a[2506] = entry(1, false);
	v->a[2507] = reduce(sym_heredoc_redirect, 6, 0, 50);
	v->a[2508] = entry(1, true);
	v->a[2509] = reduce(sym__simple_heredoc_body, 2, 0, 0);
	v->a[2510] = entry(1, false);
	v->a[2511] = reduce(sym__simple_heredoc_body, 2, 0, 0);
	v->a[2512] = entry(1, true);
	v->a[2513] = reduce(sym_heredoc_redirect, 6, 0, 51);
	v->a[2514] = entry(1, false);
	v->a[2515] = reduce(sym_heredoc_redirect, 6, 0, 51);
	v->a[2516] = entry(1, true);
	v->a[2517] = reduce(sym_do_group, 3, 0, 0);
	v->a[2518] = entry(1, false);
	v->a[2519] = reduce(sym_do_group, 3, 0, 0);
	parse_actions_entries_126(v);
}

void	parse_actions_entries_126(t_parse_actions_entries_array *v)
{
	v->a[2520] = entry(1, true);
	v->a[2521] = reduce(sym_heredoc_redirect, 5, 0, 4);
	v->a[2522] = entry(1, false);
	v->a[2523] = reduce(sym_heredoc_redirect, 5, 0, 4);
	v->a[2524] = entry(1, true);
	v->a[2525] = reduce(sym_if_statement, 5, 0, 25);
	v->a[2526] = entry(1, false);
	v->a[2527] = reduce(sym_if_statement, 5, 0, 25);
	v->a[2528] = entry(1, true);
	v->a[2529] = reduce(sym_case_statement, 6, 0, 35);
	v->a[2530] = entry(1, false);
	v->a[2531] = reduce(sym_case_statement, 6, 0, 35);
	v->a[2532] = entry(1, true);
	v->a[2533] = shift(1836);
	v->a[2534] = entry(1, true);
	v->a[2535] = shift(796);
	v->a[2536] = entry(1, true);
	v->a[2537] = reduce(sym_case_statement, 5, 0, 26);
	v->a[2538] = entry(1, false);
	v->a[2539] = reduce(sym_case_statement, 5, 0, 26);
	parse_actions_entries_127(v);
}

void	parse_actions_entries_127(t_parse_actions_entries_array *v)
{
	v->a[2540] = entry(1, true);
	v->a[2541] = reduce(sym_compound_statement, 3, 0, 0);
	v->a[2542] = entry(1, false);
	v->a[2543] = reduce(sym_compound_statement, 3, 0, 0);
	v->a[2544] = entry(1, true);
	v->a[2545] = reduce(sym_subshell, 3, 0, 0);
	v->a[2546] = entry(1, false);
	v->a[2547] = reduce(sym_subshell, 3, 0, 0);
	v->a[2548] = entry(1, true);
	v->a[2549] = shift(766);
	v->a[2550] = entry(1, true);
	v->a[2551] = reduce(sym_for_statement, 4, 0, 24);
	v->a[2552] = entry(1, false);
	v->a[2553] = reduce(sym_for_statement, 4, 0, 24);
	v->a[2554] = entry(1, true);
	v->a[2555] = reduce(sym_while_statement, 3, 0, 15);
	v->a[2556] = entry(1, false);
	v->a[2557] = reduce(sym_while_statement, 3, 0, 15);
	v->a[2558] = entry(1, true);
	v->a[2559] = reduce(sym_case_statement, 6, 0, 38);
	parse_actions_entries_128(v);
}

void	parse_actions_entries_128(t_parse_actions_entries_array *v)
{
	v->a[2560] = entry(1, false);
	v->a[2561] = reduce(sym_case_statement, 6, 0, 38);
	v->a[2562] = entry(1, true);
	v->a[2563] = reduce(sym_case_statement, 5, 0, 31);
	v->a[2564] = entry(1, false);
	v->a[2565] = reduce(sym_case_statement, 5, 0, 31);
	v->a[2566] = entry(1, true);
	v->a[2567] = reduce(sym_case_statement, 8, 0, 55);
	v->a[2568] = entry(1, false);
	v->a[2569] = reduce(sym_case_statement, 8, 0, 55);
	v->a[2570] = entry(1, true);
	v->a[2571] = shift(620);
	v->a[2572] = entry(1, true);
	v->a[2573] = reduce(sym_heredoc_redirect, 7, 0, 56);
	v->a[2574] = entry(1, false);
	v->a[2575] = reduce(sym_heredoc_redirect, 7, 0, 56);
	v->a[2576] = entry(2, false);
	v->a[2577] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2578] = shift_repeat(1417);
	v->a[2579] = entry(2, false);
	parse_actions_entries_129(v);
}

void	parse_actions_entries_129(t_parse_actions_entries_array *v)
{
	v->a[2580] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2581] = shift_repeat(235);
	v->a[2582] = entry(2, true);
	v->a[2583] = reduce(aux_sym_redirected_statement_repeat2, 2, 0, 0);
	v->a[2584] = shift_repeat(1836);
	v->a[2585] = entry(1, true);
	v->a[2586] = reduce(sym_command, 3, 0, 11);
	v->a[2587] = entry(1, false);
	v->a[2588] = reduce(sym_command, 3, 0, 11);
	v->a[2589] = entry(1, true);
	v->a[2590] = reduce(sym_for_statement, 6, 0, 34);
	v->a[2591] = entry(1, false);
	v->a[2592] = reduce(sym_for_statement, 6, 0, 34);
	v->a[2593] = entry(1, true);
	v->a[2594] = reduce(sym_if_statement, 6, 0, 25);
	v->a[2595] = entry(1, false);
	v->a[2596] = reduce(sym_if_statement, 6, 0, 25);
	v->a[2597] = entry(1, true);
	v->a[2598] = reduce(sym_case_statement, 7, 0, 47);
	v->a[2599] = entry(1, false);
	parse_actions_entries_130(v);
}

/* EOF parse_actions_entries_25.c */
