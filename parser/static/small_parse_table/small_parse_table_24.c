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
	v->a[2400] = anon_sym_LPAREN;
	v->a[2401] = actions(101);
	v->a[2402] = 1;
	v->a[2403] = anon_sym_LBRACE;
	v->a[2404] = actions(103);
	v->a[2405] = 1;
	v->a[2406] = anon_sym_BANG;
	v->a[2407] = actions(107);
	v->a[2408] = 1;
	v->a[2409] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[2410] = actions(109);
	v->a[2411] = 1;
	v->a[2412] = anon_sym_DOLLAR;
	v->a[2413] = actions(111);
	v->a[2414] = 1;
	v->a[2415] = anon_sym_DQUOTE;
	v->a[2416] = actions(115);
	v->a[2417] = 1;
	v->a[2418] = anon_sym_DOLLAR_LBRACE;
	v->a[2419] = actions(117);
	small_parse_table_121(v);
}

void	small_parse_table_121(t_small_parse_table_array *v)
{
	v->a[2420] = 1;
	v->a[2421] = anon_sym_DOLLAR_LPAREN;
	v->a[2422] = actions(119);
	v->a[2423] = 1;
	v->a[2424] = anon_sym_BQUOTE;
	v->a[2425] = actions(121);
	v->a[2426] = 1;
	v->a[2427] = sym_file_descriptor;
	v->a[2428] = actions(123);
	v->a[2429] = 1;
	v->a[2430] = sym_variable_name;
	v->a[2431] = state(127);
	v->a[2432] = 1;
	v->a[2433] = aux_sym__statements_repeat1;
	v->a[2434] = state(178);
	v->a[2435] = 1;
	v->a[2436] = sym_command_name;
	v->a[2437] = state(228);
	v->a[2438] = 1;
	v->a[2439] = sym_variable_assignment;
	small_parse_table_122(v);
}

void	small_parse_table_122(t_small_parse_table_array *v)
{
	v->a[2440] = state(592);
	v->a[2441] = 1;
	v->a[2442] = sym_concatenation;
	v->a[2443] = state(641);
	v->a[2444] = 1;
	v->a[2445] = sym_file_redirect;
	v->a[2446] = state(657);
	v->a[2447] = 1;
	v->a[2448] = aux_sym__case_item_last_repeat2;
	v->a[2449] = state(662);
	v->a[2450] = 1;
	v->a[2451] = aux_sym_command_repeat1;
	v->a[2452] = state(1017);
	v->a[2453] = 1;
	v->a[2454] = sym_pipeline;
	v->a[2455] = state(1168);
	v->a[2456] = 1;
	v->a[2457] = aux_sym_redirected_statement_repeat2;
	v->a[2458] = state(1901);
	v->a[2459] = 1;
	small_parse_table_123(v);
}

void	small_parse_table_123(t_small_parse_table_array *v)
{
	v->a[2460] = sym__statement_not_pipeline;
	v->a[2461] = state(1905);
	v->a[2462] = 1;
	v->a[2463] = sym__statements;
	v->a[2464] = actions(91);
	v->a[2465] = 2;
	v->a[2466] = anon_sym_while;
	v->a[2467] = anon_sym_until;
	v->a[2468] = actions(113);
	v->a[2469] = 2;
	v->a[2470] = sym_raw_string;
	v->a[2471] = sym_number;
	v->a[2472] = state(359);
	v->a[2473] = 5;
	v->a[2474] = sym_arithmetic_expansion;
	v->a[2475] = sym_string;
	v->a[2476] = sym_simple_expansion;
	v->a[2477] = sym_expansion;
	v->a[2478] = sym_command_substitution;
	v->a[2479] = actions(105);
	small_parse_table_124(v);
}

void	small_parse_table_124(t_small_parse_table_array *v)
{
	v->a[2480] = 7;
	v->a[2481] = anon_sym_LT;
	v->a[2482] = anon_sym_GT;
	v->a[2483] = anon_sym_GT_GT;
	v->a[2484] = anon_sym_LT_AMP;
	v->a[2485] = anon_sym_GT_AMP;
	v->a[2486] = anon_sym_GT_PIPE;
	v->a[2487] = anon_sym_LT_GT;
	v->a[2488] = state(1005);
	v->a[2489] = 12;
	v->a[2490] = sym_redirected_statement;
	v->a[2491] = sym_for_statement;
	v->a[2492] = sym_while_statement;
	v->a[2493] = sym_if_statement;
	v->a[2494] = sym_case_statement;
	v->a[2495] = sym_function_definition;
	v->a[2496] = sym_compound_statement;
	v->a[2497] = sym_subshell;
	v->a[2498] = sym_list;
	v->a[2499] = sym_negated_command;
	small_parse_table_125(v);
}

/* EOF small_parse_table_24.c */
