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
	v->a[2400] = 2;
	v->a[2401] = sym_raw_string;
	v->a[2402] = sym_number;
	v->a[2403] = state(385);
	v->a[2404] = 5;
	v->a[2405] = sym_arithmetic_expansion;
	v->a[2406] = sym_string;
	v->a[2407] = sym_simple_expansion;
	v->a[2408] = sym_expansion;
	v->a[2409] = sym_command_substitution;
	v->a[2410] = actions(172);
	v->a[2411] = 6;
	v->a[2412] = anon_sym_LT;
	v->a[2413] = anon_sym_GT;
	v->a[2414] = anon_sym_GT_GT;
	v->a[2415] = anon_sym_LT_AMP;
	v->a[2416] = anon_sym_GT_AMP;
	v->a[2417] = anon_sym_GT_PIPE;
	v->a[2418] = state(1075);
	v->a[2419] = 12;
	small_parse_table_121(v);
}

void	small_parse_table_121(t_small_parse_table_array *v)
{
	v->a[2420] = sym_redirected_statement;
	v->a[2421] = sym_for_statement;
	v->a[2422] = sym_while_statement;
	v->a[2423] = sym_if_statement;
	v->a[2424] = sym_case_statement;
	v->a[2425] = sym_function_definition;
	v->a[2426] = sym_compound_statement;
	v->a[2427] = sym_subshell;
	v->a[2428] = sym_list;
	v->a[2429] = sym_negated_command;
	v->a[2430] = sym_command;
	v->a[2431] = sym__variable_assignments;
	v->a[2432] = 34;
	v->a[2433] = actions(3);
	v->a[2434] = 1;
	v->a[2435] = sym_comment;
	v->a[2436] = actions(87);
	v->a[2437] = 1;
	v->a[2438] = anon_sym_LF;
	v->a[2439] = actions(156);
	small_parse_table_122(v);
}

void	small_parse_table_122(t_small_parse_table_array *v)
{
	v->a[2440] = 1;
	v->a[2441] = sym_word;
	v->a[2442] = actions(158);
	v->a[2443] = 1;
	v->a[2444] = anon_sym_for;
	v->a[2445] = actions(162);
	v->a[2446] = 1;
	v->a[2447] = anon_sym_if;
	v->a[2448] = actions(164);
	v->a[2449] = 1;
	v->a[2450] = anon_sym_case;
	v->a[2451] = actions(166);
	v->a[2452] = 1;
	v->a[2453] = anon_sym_LPAREN;
	v->a[2454] = actions(168);
	v->a[2455] = 1;
	v->a[2456] = anon_sym_LBRACE;
	v->a[2457] = actions(170);
	v->a[2458] = 1;
	v->a[2459] = anon_sym_BANG;
	small_parse_table_123(v);
}

void	small_parse_table_123(t_small_parse_table_array *v)
{
	v->a[2460] = actions(176);
	v->a[2461] = 1;
	v->a[2462] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[2463] = actions(178);
	v->a[2464] = 1;
	v->a[2465] = anon_sym_DOLLAR;
	v->a[2466] = actions(180);
	v->a[2467] = 1;
	v->a[2468] = anon_sym_DQUOTE;
	v->a[2469] = actions(184);
	v->a[2470] = 1;
	v->a[2471] = anon_sym_DOLLAR_LBRACE;
	v->a[2472] = actions(186);
	v->a[2473] = 1;
	v->a[2474] = anon_sym_DOLLAR_LPAREN;
	v->a[2475] = actions(188);
	v->a[2476] = 1;
	v->a[2477] = anon_sym_BQUOTE;
	v->a[2478] = actions(190);
	v->a[2479] = 1;
	small_parse_table_124(v);
}

void	small_parse_table_124(t_small_parse_table_array *v)
{
	v->a[2480] = sym_file_descriptor;
	v->a[2481] = actions(192);
	v->a[2482] = 1;
	v->a[2483] = sym_variable_name;
	v->a[2484] = state(140);
	v->a[2485] = 1;
	v->a[2486] = aux_sym__statements_repeat1;
	v->a[2487] = state(186);
	v->a[2488] = 1;
	v->a[2489] = sym_command_name;
	v->a[2490] = state(213);
	v->a[2491] = 1;
	v->a[2492] = sym_variable_assignment;
	v->a[2493] = state(636);
	v->a[2494] = 1;
	v->a[2495] = sym_concatenation;
	v->a[2496] = state(677);
	v->a[2497] = 1;
	v->a[2498] = sym_file_redirect;
	v->a[2499] = state(678);
	small_parse_table_125(v);
}

/* EOF small_parse_table_24.c */
