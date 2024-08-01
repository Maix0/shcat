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
	v->a[2400] = actions(178);
	v->a[2401] = 1;
	v->a[2402] = anon_sym_LF;
	v->a[2403] = state(13);
	v->a[2404] = 1;
	v->a[2405] = aux_sym__case_item_last_repeat2;
	v->a[2406] = state(118);
	v->a[2407] = 1;
	v->a[2408] = aux_sym__statements_repeat1;
	v->a[2409] = state(185);
	v->a[2410] = 1;
	v->a[2411] = sym_command_name;
	v->a[2412] = state(216);
	v->a[2413] = 1;
	v->a[2414] = sym_variable_assignment;
	v->a[2415] = state(411);
	v->a[2416] = 1;
	v->a[2417] = aux_sym_command_repeat1;
	v->a[2418] = state(551);
	v->a[2419] = 1;
	small_parse_table_121(v);
}

void	small_parse_table_121(t_small_parse_table_array *v)
{
	v->a[2420] = sym_file_redirect;
	v->a[2421] = state(555);
	v->a[2422] = 1;
	v->a[2423] = sym_concatenation;
	v->a[2424] = state(991);
	v->a[2425] = 1;
	v->a[2426] = sym_pipeline;
	v->a[2427] = state(1126);
	v->a[2428] = 1;
	v->a[2429] = aux_sym_redirected_statement_repeat2;
	v->a[2430] = state(1561);
	v->a[2431] = 1;
	v->a[2432] = sym__statement_not_pipeline;
	v->a[2433] = state(1637);
	v->a[2434] = 1;
	v->a[2435] = sym__statements;
	v->a[2436] = actions(11);
	v->a[2437] = 2;
	v->a[2438] = anon_sym_while;
	v->a[2439] = anon_sym_until;
	small_parse_table_122(v);
}

void	small_parse_table_122(t_small_parse_table_array *v)
{
	v->a[2440] = actions(59);
	v->a[2441] = 2;
	v->a[2442] = sym_raw_string;
	v->a[2443] = sym_number;
	v->a[2444] = actions(51);
	v->a[2445] = 3;
	v->a[2446] = anon_sym_LT;
	v->a[2447] = anon_sym_GT;
	v->a[2448] = anon_sym_GT_GT;
	v->a[2449] = state(401);
	v->a[2450] = 5;
	v->a[2451] = sym_arithmetic_expansion;
	v->a[2452] = sym_string;
	v->a[2453] = sym_simple_expansion;
	v->a[2454] = sym_expansion;
	v->a[2455] = sym_command_substitution;
	v->a[2456] = state(972);
	v->a[2457] = 12;
	v->a[2458] = sym_redirected_statement;
	v->a[2459] = sym_for_statement;
	small_parse_table_123(v);
}

void	small_parse_table_123(t_small_parse_table_array *v)
{
	v->a[2460] = sym_while_statement;
	v->a[2461] = sym_if_statement;
	v->a[2462] = sym_case_statement;
	v->a[2463] = sym_function_definition;
	v->a[2464] = sym_compound_statement;
	v->a[2465] = sym_subshell;
	v->a[2466] = sym_list;
	v->a[2467] = sym_negated_command;
	v->a[2468] = sym_command;
	v->a[2469] = sym__variable_assignments;
	v->a[2470] = 32;
	v->a[2471] = actions(3);
	v->a[2472] = 1;
	v->a[2473] = sym_comment;
	v->a[2474] = actions(79);
	v->a[2475] = 1;
	v->a[2476] = sym_word;
	v->a[2477] = actions(81);
	v->a[2478] = 1;
	v->a[2479] = anon_sym_for;
	small_parse_table_124(v);
}

void	small_parse_table_124(t_small_parse_table_array *v)
{
	v->a[2480] = actions(85);
	v->a[2481] = 1;
	v->a[2482] = anon_sym_if;
	v->a[2483] = actions(87);
	v->a[2484] = 1;
	v->a[2485] = anon_sym_case;
	v->a[2486] = actions(89);
	v->a[2487] = 1;
	v->a[2488] = anon_sym_LPAREN;
	v->a[2489] = actions(93);
	v->a[2490] = 1;
	v->a[2491] = anon_sym_LBRACE;
	v->a[2492] = actions(95);
	v->a[2493] = 1;
	v->a[2494] = anon_sym_BANG;
	v->a[2495] = actions(99);
	v->a[2496] = 1;
	v->a[2497] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[2498] = actions(101);
	v->a[2499] = 1;
	small_parse_table_125(v);
}

/* EOF small_parse_table_24.c */
