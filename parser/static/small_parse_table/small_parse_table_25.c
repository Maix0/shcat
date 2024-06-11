/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_25.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_125(t_small_parse_table_array *v)
{
	v->a[2500] = 1;
	v->a[2501] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[2502] = actions(111);
	v->a[2503] = 1;
	v->a[2504] = anon_sym_DOLLAR;
	v->a[2505] = actions(113);
	v->a[2506] = 1;
	v->a[2507] = anon_sym_DQUOTE;
	v->a[2508] = actions(117);
	v->a[2509] = 1;
	v->a[2510] = anon_sym_DOLLAR_LBRACE;
	v->a[2511] = actions(119);
	v->a[2512] = 1;
	v->a[2513] = anon_sym_DOLLAR_LPAREN;
	v->a[2514] = actions(121);
	v->a[2515] = 1;
	v->a[2516] = anon_sym_BQUOTE;
	v->a[2517] = actions(123);
	v->a[2518] = 1;
	v->a[2519] = sym_file_descriptor;
	small_parse_table_126(v);
}

void	small_parse_table_126(t_small_parse_table_array *v)
{
	v->a[2520] = actions(125);
	v->a[2521] = 1;
	v->a[2522] = sym_variable_name;
	v->a[2523] = actions(139);
	v->a[2524] = 1;
	v->a[2525] = anon_sym_LF;
	v->a[2526] = state(32);
	v->a[2527] = 1;
	v->a[2528] = aux_sym__case_item_last_repeat2;
	v->a[2529] = state(129);
	v->a[2530] = 1;
	v->a[2531] = aux_sym__statements_repeat1;
	v->a[2532] = state(182);
	v->a[2533] = 1;
	v->a[2534] = sym_command_name;
	v->a[2535] = state(271);
	v->a[2536] = 1;
	v->a[2537] = sym_variable_assignment;
	v->a[2538] = state(621);
	v->a[2539] = 1;
	small_parse_table_127(v);
}

void	small_parse_table_127(t_small_parse_table_array *v)
{
	v->a[2540] = sym_concatenation;
	v->a[2541] = state(692);
	v->a[2542] = 1;
	v->a[2543] = sym_file_redirect;
	v->a[2544] = state(810);
	v->a[2545] = 1;
	v->a[2546] = aux_sym_command_repeat1;
	v->a[2547] = state(1321);
	v->a[2548] = 1;
	v->a[2549] = sym_pipeline;
	v->a[2550] = state(1432);
	v->a[2551] = 1;
	v->a[2552] = aux_sym_redirected_statement_repeat2;
	v->a[2553] = state(2254);
	v->a[2554] = 1;
	v->a[2555] = sym__statement_not_pipeline;
	v->a[2556] = state(2268);
	v->a[2557] = 1;
	v->a[2558] = sym__statements;
	v->a[2559] = actions(93);
	small_parse_table_128(v);
}

void	small_parse_table_128(t_small_parse_table_array *v)
{
	v->a[2560] = 2;
	v->a[2561] = anon_sym_while;
	v->a[2562] = anon_sym_until;
	v->a[2563] = actions(107);
	v->a[2564] = 2;
	v->a[2565] = anon_sym_LT_AMP_DASH;
	v->a[2566] = anon_sym_GT_AMP_DASH;
	v->a[2567] = actions(115);
	v->a[2568] = 2;
	v->a[2569] = sym_raw_string;
	v->a[2570] = sym_number;
	v->a[2571] = state(282);
	v->a[2572] = 5;
	v->a[2573] = sym_arithmetic_expansion;
	v->a[2574] = sym_string;
	v->a[2575] = sym_simple_expansion;
	v->a[2576] = sym_expansion;
	v->a[2577] = sym_command_substitution;
	v->a[2578] = actions(105);
	v->a[2579] = 8;
	small_parse_table_129(v);
}

void	small_parse_table_129(t_small_parse_table_array *v)
{
	v->a[2580] = anon_sym_LT;
	v->a[2581] = anon_sym_GT;
	v->a[2582] = anon_sym_GT_GT;
	v->a[2583] = anon_sym_AMP_GT;
	v->a[2584] = anon_sym_AMP_GT_GT;
	v->a[2585] = anon_sym_LT_AMP;
	v->a[2586] = anon_sym_GT_AMP;
	v->a[2587] = anon_sym_GT_PIPE;
	v->a[2588] = state(1296);
	v->a[2589] = 12;
	v->a[2590] = sym_redirected_statement;
	v->a[2591] = sym_for_statement;
	v->a[2592] = sym_while_statement;
	v->a[2593] = sym_if_statement;
	v->a[2594] = sym_case_statement;
	v->a[2595] = sym_function_definition;
	v->a[2596] = sym_compound_statement;
	v->a[2597] = sym_subshell;
	v->a[2598] = sym_list;
	v->a[2599] = sym_negated_command;
	small_parse_table_130(v);
}

/* EOF small_parse_table_25.c */
