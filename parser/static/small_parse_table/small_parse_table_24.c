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
	v->a[2400] = aux_sym__case_item_last_repeat2;
	v->a[2401] = state(136);
	v->a[2402] = 1;
	v->a[2403] = aux_sym__statements_repeat1;
	v->a[2404] = state(187);
	v->a[2405] = 1;
	v->a[2406] = sym_command_name;
	v->a[2407] = state(275);
	v->a[2408] = 1;
	v->a[2409] = sym_variable_assignment;
	v->a[2410] = state(647);
	v->a[2411] = 1;
	v->a[2412] = sym_concatenation;
	v->a[2413] = state(736);
	v->a[2414] = 1;
	v->a[2415] = aux_sym_command_repeat1;
	v->a[2416] = state(738);
	v->a[2417] = 1;
	v->a[2418] = sym_file_redirect;
	v->a[2419] = state(1450);
	small_parse_table_121(v);
}

void	small_parse_table_121(t_small_parse_table_array *v)
{
	v->a[2420] = 1;
	v->a[2421] = sym_pipeline;
	v->a[2422] = state(1460);
	v->a[2423] = 1;
	v->a[2424] = aux_sym_redirected_statement_repeat2;
	v->a[2425] = state(2269);
	v->a[2426] = 1;
	v->a[2427] = sym__statement_not_pipeline;
	v->a[2428] = state(2351);
	v->a[2429] = 1;
	v->a[2430] = sym__statements;
	v->a[2431] = actions(11);
	v->a[2432] = 2;
	v->a[2433] = anon_sym_while;
	v->a[2434] = anon_sym_until;
	v->a[2435] = actions(57);
	v->a[2436] = 2;
	v->a[2437] = anon_sym_LT_AMP_DASH;
	v->a[2438] = anon_sym_GT_AMP_DASH;
	v->a[2439] = actions(65);
	small_parse_table_122(v);
}

void	small_parse_table_122(t_small_parse_table_array *v)
{
	v->a[2440] = 2;
	v->a[2441] = sym_raw_string;
	v->a[2442] = sym_number;
	v->a[2443] = state(394);
	v->a[2444] = 5;
	v->a[2445] = sym_arithmetic_expansion;
	v->a[2446] = sym_string;
	v->a[2447] = sym_simple_expansion;
	v->a[2448] = sym_expansion;
	v->a[2449] = sym_command_substitution;
	v->a[2450] = actions(55);
	v->a[2451] = 8;
	v->a[2452] = anon_sym_LT;
	v->a[2453] = anon_sym_GT;
	v->a[2454] = anon_sym_GT_GT;
	v->a[2455] = anon_sym_AMP_GT;
	v->a[2456] = anon_sym_AMP_GT_GT;
	v->a[2457] = anon_sym_LT_AMP;
	v->a[2458] = anon_sym_GT_AMP;
	v->a[2459] = anon_sym_GT_PIPE;
	small_parse_table_123(v);
}

void	small_parse_table_123(t_small_parse_table_array *v)
{
	v->a[2460] = state(1434);
	v->a[2461] = 12;
	v->a[2462] = sym_redirected_statement;
	v->a[2463] = sym_for_statement;
	v->a[2464] = sym_while_statement;
	v->a[2465] = sym_if_statement;
	v->a[2466] = sym_case_statement;
	v->a[2467] = sym_function_definition;
	v->a[2468] = sym_compound_statement;
	v->a[2469] = sym_subshell;
	v->a[2470] = sym_list;
	v->a[2471] = sym_negated_command;
	v->a[2472] = sym_command;
	v->a[2473] = sym_variable_assignments;
	v->a[2474] = 34;
	v->a[2475] = actions(3);
	v->a[2476] = 1;
	v->a[2477] = sym_comment;
	v->a[2478] = actions(89);
	v->a[2479] = 1;
	small_parse_table_124(v);
}

void	small_parse_table_124(t_small_parse_table_array *v)
{
	v->a[2480] = sym_word;
	v->a[2481] = actions(91);
	v->a[2482] = 1;
	v->a[2483] = anon_sym_for;
	v->a[2484] = actions(95);
	v->a[2485] = 1;
	v->a[2486] = anon_sym_if;
	v->a[2487] = actions(97);
	v->a[2488] = 1;
	v->a[2489] = anon_sym_case;
	v->a[2490] = actions(99);
	v->a[2491] = 1;
	v->a[2492] = anon_sym_LPAREN;
	v->a[2493] = actions(101);
	v->a[2494] = 1;
	v->a[2495] = anon_sym_LBRACE;
	v->a[2496] = actions(103);
	v->a[2497] = 1;
	v->a[2498] = anon_sym_BANG;
	v->a[2499] = actions(109);
	small_parse_table_125(v);
}

/* EOF small_parse_table_24.c */
