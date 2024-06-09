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
	v->a[2400] = aux_sym_redirected_statement_repeat2;
	v->a[2401] = state(1190);
	v->a[2402] = 1;
	v->a[2403] = sym_pipeline;
	v->a[2404] = state(2030);
	v->a[2405] = 1;
	v->a[2406] = sym__statements;
	v->a[2407] = state(2040);
	v->a[2408] = 1;
	v->a[2409] = sym__statement_not_pipeline;
	v->a[2410] = actions(99);
	v->a[2411] = 2;
	v->a[2412] = anon_sym_while;
	v->a[2413] = anon_sym_until;
	v->a[2414] = actions(115);
	v->a[2415] = 2;
	v->a[2416] = anon_sym_LT_AMP_DASH;
	v->a[2417] = anon_sym_GT_AMP_DASH;
	v->a[2418] = state(282);
	v->a[2419] = 6;
	small_parse_table_121(v);
}

void	small_parse_table_121(t_small_parse_table_array *v)
{
	v->a[2420] = sym_arithmetic_expansion;
	v->a[2421] = sym_string;
	v->a[2422] = sym_number;
	v->a[2423] = sym_simple_expansion;
	v->a[2424] = sym_expansion;
	v->a[2425] = sym_command_substitution;
	v->a[2426] = actions(113);
	v->a[2427] = 8;
	v->a[2428] = anon_sym_LT;
	v->a[2429] = anon_sym_GT;
	v->a[2430] = anon_sym_GT_GT;
	v->a[2431] = anon_sym_AMP_GT;
	v->a[2432] = anon_sym_AMP_GT_GT;
	v->a[2433] = anon_sym_LT_AMP;
	v->a[2434] = anon_sym_GT_AMP;
	v->a[2435] = anon_sym_GT_PIPE;
	v->a[2436] = state(1048);
	v->a[2437] = 12;
	v->a[2438] = sym_redirected_statement;
	v->a[2439] = sym_for_statement;
	small_parse_table_122(v);
}

void	small_parse_table_122(t_small_parse_table_array *v)
{
	v->a[2440] = sym_while_statement;
	v->a[2441] = sym_if_statement;
	v->a[2442] = sym_case_statement;
	v->a[2443] = sym_function_definition;
	v->a[2444] = sym_compound_statement;
	v->a[2445] = sym_subshell;
	v->a[2446] = sym_list;
	v->a[2447] = sym_negated_command;
	v->a[2448] = sym_command;
	v->a[2449] = sym_variable_assignments;
	v->a[2450] = 36;
	v->a[2451] = actions(3);
	v->a[2452] = 1;
	v->a[2453] = sym_comment;
	v->a[2454] = actions(9);
	v->a[2455] = 1;
	v->a[2456] = anon_sym_for;
	v->a[2457] = actions(13);
	v->a[2458] = 1;
	v->a[2459] = anon_sym_if;
	small_parse_table_123(v);
}

void	small_parse_table_123(t_small_parse_table_array *v)
{
	v->a[2460] = actions(15);
	v->a[2461] = 1;
	v->a[2462] = anon_sym_case;
	v->a[2463] = actions(17);
	v->a[2464] = 1;
	v->a[2465] = anon_sym_LPAREN;
	v->a[2466] = actions(19);
	v->a[2467] = 1;
	v->a[2468] = anon_sym_LBRACE;
	v->a[2469] = actions(49);
	v->a[2470] = 1;
	v->a[2471] = sym_word;
	v->a[2472] = actions(57);
	v->a[2473] = 1;
	v->a[2474] = anon_sym_BANG;
	v->a[2475] = actions(63);
	v->a[2476] = 1;
	v->a[2477] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[2478] = actions(65);
	v->a[2479] = 1;
	small_parse_table_124(v);
}

void	small_parse_table_124(t_small_parse_table_array *v)
{
	v->a[2480] = anon_sym_DOLLAR;
	v->a[2481] = actions(67);
	v->a[2482] = 1;
	v->a[2483] = anon_sym_DQUOTE;
	v->a[2484] = actions(69);
	v->a[2485] = 1;
	v->a[2486] = sym_raw_string;
	v->a[2487] = actions(71);
	v->a[2488] = 1;
	v->a[2489] = aux_sym_number_token1;
	v->a[2490] = actions(73);
	v->a[2491] = 1;
	v->a[2492] = aux_sym_number_token2;
	v->a[2493] = actions(75);
	v->a[2494] = 1;
	v->a[2495] = anon_sym_DOLLAR_LBRACE;
	v->a[2496] = actions(77);
	v->a[2497] = 1;
	v->a[2498] = anon_sym_DOLLAR_LPAREN;
	v->a[2499] = actions(79);
	small_parse_table_125(v);
}

/* EOF small_parse_table_24.c */
