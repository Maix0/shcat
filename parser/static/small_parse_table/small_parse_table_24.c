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
	v->a[2400] = 3;
	v->a[2401] = anon_sym_fi;
	v->a[2402] = anon_sym_elif;
	v->a[2403] = anon_sym_else;
	v->a[2404] = state(425);
	v->a[2405] = 5;
	v->a[2406] = sym_arithmetic_expansion;
	v->a[2407] = sym_string;
	v->a[2408] = sym_simple_expansion;
	v->a[2409] = sym_expansion;
	v->a[2410] = sym_command_substitution;
	v->a[2411] = actions(51);
	v->a[2412] = 7;
	v->a[2413] = anon_sym_LT;
	v->a[2414] = anon_sym_GT;
	v->a[2415] = anon_sym_GT_GT;
	v->a[2416] = anon_sym_LT_AMP;
	v->a[2417] = anon_sym_GT_AMP;
	v->a[2418] = anon_sym_GT_PIPE;
	v->a[2419] = anon_sym_LT_GT;
	small_parse_table_121(v);
}

void	small_parse_table_121(t_small_parse_table_array *v)
{
	v->a[2420] = state(949);
	v->a[2421] = 12;
	v->a[2422] = sym_redirected_statement;
	v->a[2423] = sym_for_statement;
	v->a[2424] = sym_while_statement;
	v->a[2425] = sym_if_statement;
	v->a[2426] = sym_case_statement;
	v->a[2427] = sym_function_definition;
	v->a[2428] = sym_compound_statement;
	v->a[2429] = sym_subshell;
	v->a[2430] = sym_list;
	v->a[2431] = sym_negated_command;
	v->a[2432] = sym_command;
	v->a[2433] = sym__variable_assignments;
	v->a[2434] = 32;
	v->a[2435] = actions(3);
	v->a[2436] = 1;
	v->a[2437] = sym_comment;
	v->a[2438] = actions(9);
	v->a[2439] = 1;
	small_parse_table_122(v);
}

void	small_parse_table_122(t_small_parse_table_array *v)
{
	v->a[2440] = anon_sym_for;
	v->a[2441] = actions(13);
	v->a[2442] = 1;
	v->a[2443] = anon_sym_if;
	v->a[2444] = actions(15);
	v->a[2445] = 1;
	v->a[2446] = anon_sym_case;
	v->a[2447] = actions(17);
	v->a[2448] = 1;
	v->a[2449] = anon_sym_LPAREN;
	v->a[2450] = actions(19);
	v->a[2451] = 1;
	v->a[2452] = anon_sym_LBRACE;
	v->a[2453] = actions(41);
	v->a[2454] = 1;
	v->a[2455] = sym_word;
	v->a[2456] = actions(49);
	v->a[2457] = 1;
	v->a[2458] = anon_sym_BANG;
	v->a[2459] = actions(53);
	small_parse_table_123(v);
}

void	small_parse_table_123(t_small_parse_table_array *v)
{
	v->a[2460] = 1;
	v->a[2461] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[2462] = actions(55);
	v->a[2463] = 1;
	v->a[2464] = anon_sym_DOLLAR;
	v->a[2465] = actions(57);
	v->a[2466] = 1;
	v->a[2467] = anon_sym_DQUOTE;
	v->a[2468] = actions(61);
	v->a[2469] = 1;
	v->a[2470] = anon_sym_DOLLAR_LBRACE;
	v->a[2471] = actions(63);
	v->a[2472] = 1;
	v->a[2473] = anon_sym_DOLLAR_LPAREN;
	v->a[2474] = actions(65);
	v->a[2475] = 1;
	v->a[2476] = anon_sym_BQUOTE;
	v->a[2477] = actions(67);
	v->a[2478] = 1;
	v->a[2479] = sym_variable_name;
	small_parse_table_124(v);
}

void	small_parse_table_124(t_small_parse_table_array *v)
{
	v->a[2480] = actions(129);
	v->a[2481] = 1;
	v->a[2482] = anon_sym_LF;
	v->a[2483] = state(15);
	v->a[2484] = 1;
	v->a[2485] = aux_sym__case_item_last_repeat2;
	v->a[2486] = state(117);
	v->a[2487] = 1;
	v->a[2488] = aux_sym__statements_repeat1;
	v->a[2489] = state(271);
	v->a[2490] = 1;
	v->a[2491] = sym_command_name;
	v->a[2492] = state(288);
	v->a[2493] = 1;
	v->a[2494] = sym_variable_assignment;
	v->a[2495] = state(482);
	v->a[2496] = 1;
	v->a[2497] = aux_sym_command_repeat1;
	v->a[2498] = state(600);
	v->a[2499] = 1;
	small_parse_table_125(v);
}

/* EOF small_parse_table_24.c */
