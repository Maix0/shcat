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
	v->a[2501] = anon_sym_BQUOTE;
	v->a[2502] = actions(81);
	v->a[2503] = 1;
	v->a[2504] = sym_file_descriptor;
	v->a[2505] = actions(83);
	v->a[2506] = 1;
	v->a[2507] = sym_variable_name;
	v->a[2508] = actions(141);
	v->a[2509] = 1;
	v->a[2510] = anon_sym_LF;
	v->a[2511] = state(131);
	v->a[2512] = 1;
	v->a[2513] = aux_sym__statements_repeat1;
	v->a[2514] = state(190);
	v->a[2515] = 1;
	v->a[2516] = sym_command_name;
	v->a[2517] = state(314);
	v->a[2518] = 1;
	v->a[2519] = sym_variable_assignment;
	small_parse_table_126(v);
}

void	small_parse_table_126(t_small_parse_table_array *v)
{
	v->a[2520] = state(582);
	v->a[2521] = 1;
	v->a[2522] = sym_concatenation;
	v->a[2523] = state(587);
	v->a[2524] = 1;
	v->a[2525] = aux_sym_command_repeat1;
	v->a[2526] = state(689);
	v->a[2527] = 1;
	v->a[2528] = aux_sym__case_item_last_repeat2;
	v->a[2529] = state(718);
	v->a[2530] = 1;
	v->a[2531] = sym_file_redirect;
	v->a[2532] = state(1211);
	v->a[2533] = 1;
	v->a[2534] = sym_pipeline;
	v->a[2535] = state(1213);
	v->a[2536] = 1;
	v->a[2537] = aux_sym_redirected_statement_repeat2;
	v->a[2538] = state(2035);
	v->a[2539] = 1;
	small_parse_table_127(v);
}

void	small_parse_table_127(t_small_parse_table_array *v)
{
	v->a[2540] = sym__statement_not_pipeline;
	v->a[2541] = state(2073);
	v->a[2542] = 1;
	v->a[2543] = sym__statements;
	v->a[2544] = actions(11);
	v->a[2545] = 2;
	v->a[2546] = anon_sym_while;
	v->a[2547] = anon_sym_until;
	v->a[2548] = actions(61);
	v->a[2549] = 2;
	v->a[2550] = anon_sym_LT_AMP_DASH;
	v->a[2551] = anon_sym_GT_AMP_DASH;
	v->a[2552] = state(397);
	v->a[2553] = 6;
	v->a[2554] = sym_arithmetic_expansion;
	v->a[2555] = sym_string;
	v->a[2556] = sym_number;
	v->a[2557] = sym_simple_expansion;
	v->a[2558] = sym_expansion;
	v->a[2559] = sym_command_substitution;
	small_parse_table_128(v);
}

void	small_parse_table_128(t_small_parse_table_array *v)
{
	v->a[2560] = actions(59);
	v->a[2561] = 8;
	v->a[2562] = anon_sym_LT;
	v->a[2563] = anon_sym_GT;
	v->a[2564] = anon_sym_GT_GT;
	v->a[2565] = anon_sym_AMP_GT;
	v->a[2566] = anon_sym_AMP_GT_GT;
	v->a[2567] = anon_sym_LT_AMP;
	v->a[2568] = anon_sym_GT_AMP;
	v->a[2569] = anon_sym_GT_PIPE;
	v->a[2570] = state(1140);
	v->a[2571] = 12;
	v->a[2572] = sym_redirected_statement;
	v->a[2573] = sym_for_statement;
	v->a[2574] = sym_while_statement;
	v->a[2575] = sym_if_statement;
	v->a[2576] = sym_case_statement;
	v->a[2577] = sym_function_definition;
	v->a[2578] = sym_compound_statement;
	v->a[2579] = sym_subshell;
	small_parse_table_129(v);
}

void	small_parse_table_129(t_small_parse_table_array *v)
{
	v->a[2580] = sym_list;
	v->a[2581] = sym_negated_command;
	v->a[2582] = sym_command;
	v->a[2583] = sym_variable_assignments;
	v->a[2584] = 34;
	v->a[2585] = actions(3);
	v->a[2586] = 1;
	v->a[2587] = sym_comment;
	v->a[2588] = actions(151);
	v->a[2589] = 1;
	v->a[2590] = sym_word;
	v->a[2591] = actions(154);
	v->a[2592] = 1;
	v->a[2593] = anon_sym_for;
	v->a[2594] = actions(160);
	v->a[2595] = 1;
	v->a[2596] = anon_sym_if;
	v->a[2597] = actions(165);
	v->a[2598] = 1;
	v->a[2599] = anon_sym_case;
	small_parse_table_130(v);
}

/* EOF small_parse_table_25.c */
