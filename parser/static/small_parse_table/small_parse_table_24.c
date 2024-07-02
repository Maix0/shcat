/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_24.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_120(t_small_parse_table_array *v)
{
	v->a[2400] = actions(55);
	v->a[2401] = 1;
	v->a[2402] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[2403] = actions(57);
	v->a[2404] = 1;
	v->a[2405] = anon_sym_DOLLAR;
	v->a[2406] = actions(59);
	v->a[2407] = 1;
	v->a[2408] = anon_sym_DQUOTE;
	v->a[2409] = actions(63);
	v->a[2410] = 1;
	v->a[2411] = anon_sym_DOLLAR_LBRACE;
	v->a[2412] = actions(65);
	v->a[2413] = 1;
	v->a[2414] = anon_sym_DOLLAR_LPAREN;
	v->a[2415] = actions(67);
	v->a[2416] = 1;
	v->a[2417] = anon_sym_BQUOTE;
	v->a[2418] = actions(69);
	v->a[2419] = 1;
	small_parse_table_121(v);
}

void	small_parse_table_121(t_small_parse_table_array *v)
{
	v->a[2420] = sym_file_descriptor;
	v->a[2421] = actions(71);
	v->a[2422] = 1;
	v->a[2423] = sym_variable_name;
	v->a[2424] = actions(131);
	v->a[2425] = 1;
	v->a[2426] = anon_sym_LF;
	v->a[2427] = state(12);
	v->a[2428] = 1;
	v->a[2429] = aux_sym__case_item_last_repeat2;
	v->a[2430] = state(129);
	v->a[2431] = 1;
	v->a[2432] = aux_sym__statements_repeat1;
	v->a[2433] = state(182);
	v->a[2434] = 1;
	v->a[2435] = sym_command_name;
	v->a[2436] = state(261);
	v->a[2437] = 1;
	v->a[2438] = sym_variable_assignment;
	v->a[2439] = state(584);
	small_parse_table_122(v);
}

void	small_parse_table_122(t_small_parse_table_array *v)
{
	v->a[2440] = 1;
	v->a[2441] = sym_concatenation;
	v->a[2442] = state(620);
	v->a[2443] = 1;
	v->a[2444] = sym_file_redirect;
	v->a[2445] = state(623);
	v->a[2446] = 1;
	v->a[2447] = aux_sym_command_repeat1;
	v->a[2448] = state(1114);
	v->a[2449] = 1;
	v->a[2450] = sym_pipeline;
	v->a[2451] = state(1201);
	v->a[2452] = 1;
	v->a[2453] = aux_sym_redirected_statement_repeat2;
	v->a[2454] = state(1911);
	v->a[2455] = 1;
	v->a[2456] = sym__statement_not_pipeline;
	v->a[2457] = state(1939);
	v->a[2458] = 1;
	v->a[2459] = sym__statements;
	small_parse_table_123(v);
}

void	small_parse_table_123(t_small_parse_table_array *v)
{
	v->a[2460] = actions(11);
	v->a[2461] = 2;
	v->a[2462] = anon_sym_while;
	v->a[2463] = anon_sym_until;
	v->a[2464] = actions(61);
	v->a[2465] = 2;
	v->a[2466] = sym_raw_string;
	v->a[2467] = sym_number;
	v->a[2468] = state(433);
	v->a[2469] = 5;
	v->a[2470] = sym_arithmetic_expansion;
	v->a[2471] = sym_string;
	v->a[2472] = sym_simple_expansion;
	v->a[2473] = sym_expansion;
	v->a[2474] = sym_command_substitution;
	v->a[2475] = actions(53);
	v->a[2476] = 7;
	v->a[2477] = anon_sym_LT;
	v->a[2478] = anon_sym_GT;
	v->a[2479] = anon_sym_GT_GT;
	small_parse_table_124(v);
}

void	small_parse_table_124(t_small_parse_table_array *v)
{
	v->a[2480] = anon_sym_LT_AMP;
	v->a[2481] = anon_sym_GT_AMP;
	v->a[2482] = anon_sym_GT_PIPE;
	v->a[2483] = anon_sym_LT_GT;
	v->a[2484] = state(1088);
	v->a[2485] = 12;
	v->a[2486] = sym_redirected_statement;
	v->a[2487] = sym_for_statement;
	v->a[2488] = sym_while_statement;
	v->a[2489] = sym_if_statement;
	v->a[2490] = sym_case_statement;
	v->a[2491] = sym_function_definition;
	v->a[2492] = sym_compound_statement;
	v->a[2493] = sym_subshell;
	v->a[2494] = sym_list;
	v->a[2495] = sym_negated_command;
	v->a[2496] = sym_command;
	v->a[2497] = sym__variable_assignments;
	v->a[2498] = 33;
	v->a[2499] = actions(3);
	small_parse_table_125(v);
}

/* EOF small_parse_table_24.c */
