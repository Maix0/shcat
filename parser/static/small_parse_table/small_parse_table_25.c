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
	v->a[2500] = anon_sym_DOLLAR;
	v->a[2501] = actions(103);
	v->a[2502] = 1;
	v->a[2503] = anon_sym_DQUOTE;
	v->a[2504] = actions(107);
	v->a[2505] = 1;
	v->a[2506] = anon_sym_DOLLAR_LBRACE;
	v->a[2507] = actions(109);
	v->a[2508] = 1;
	v->a[2509] = anon_sym_DOLLAR_LPAREN;
	v->a[2510] = actions(111);
	v->a[2511] = 1;
	v->a[2512] = anon_sym_BQUOTE;
	v->a[2513] = actions(113);
	v->a[2514] = 1;
	v->a[2515] = sym_variable_name;
	v->a[2516] = actions(180);
	v->a[2517] = 1;
	v->a[2518] = anon_sym_LF;
	v->a[2519] = state(14);
	small_parse_table_126(v);
}

void	small_parse_table_126(t_small_parse_table_array *v)
{
	v->a[2520] = 1;
	v->a[2521] = aux_sym__case_item_last_repeat2;
	v->a[2522] = state(104);
	v->a[2523] = 1;
	v->a[2524] = aux_sym__statements_repeat1;
	v->a[2525] = state(170);
	v->a[2526] = 1;
	v->a[2527] = sym_command_name;
	v->a[2528] = state(177);
	v->a[2529] = 1;
	v->a[2530] = sym_variable_assignment;
	v->a[2531] = state(408);
	v->a[2532] = 1;
	v->a[2533] = aux_sym_command_repeat1;
	v->a[2534] = state(541);
	v->a[2535] = 1;
	v->a[2536] = sym_file_redirect;
	v->a[2537] = state(546);
	v->a[2538] = 1;
	v->a[2539] = sym_concatenation;
	small_parse_table_127(v);
}

void	small_parse_table_127(t_small_parse_table_array *v)
{
	v->a[2540] = state(913);
	v->a[2541] = 1;
	v->a[2542] = sym_pipeline;
	v->a[2543] = state(990);
	v->a[2544] = 1;
	v->a[2545] = aux_sym_redirected_statement_repeat2;
	v->a[2546] = state(1564);
	v->a[2547] = 1;
	v->a[2548] = sym__statement_not_pipeline;
	v->a[2549] = state(1570);
	v->a[2550] = 1;
	v->a[2551] = sym__statements;
	v->a[2552] = actions(83);
	v->a[2553] = 2;
	v->a[2554] = anon_sym_while;
	v->a[2555] = anon_sym_until;
	v->a[2556] = actions(105);
	v->a[2557] = 2;
	v->a[2558] = sym_raw_string;
	v->a[2559] = sym_number;
	small_parse_table_128(v);
}

void	small_parse_table_128(t_small_parse_table_array *v)
{
	v->a[2560] = actions(97);
	v->a[2561] = 3;
	v->a[2562] = anon_sym_LT;
	v->a[2563] = anon_sym_GT;
	v->a[2564] = anon_sym_GT_GT;
	v->a[2565] = state(276);
	v->a[2566] = 5;
	v->a[2567] = sym_arithmetic_expansion;
	v->a[2568] = sym_string;
	v->a[2569] = sym_simple_expansion;
	v->a[2570] = sym_expansion;
	v->a[2571] = sym_command_substitution;
	v->a[2572] = state(867);
	v->a[2573] = 12;
	v->a[2574] = sym_redirected_statement;
	v->a[2575] = sym_for_statement;
	v->a[2576] = sym_while_statement;
	v->a[2577] = sym_if_statement;
	v->a[2578] = sym_case_statement;
	v->a[2579] = sym_function_definition;
	small_parse_table_129(v);
}

void	small_parse_table_129(t_small_parse_table_array *v)
{
	v->a[2580] = sym_compound_statement;
	v->a[2581] = sym_subshell;
	v->a[2582] = sym_list;
	v->a[2583] = sym_negated_command;
	v->a[2584] = sym_command;
	v->a[2585] = sym__variable_assignments;
	v->a[2586] = 32;
	v->a[2587] = actions(3);
	v->a[2588] = 1;
	v->a[2589] = sym_comment;
	v->a[2590] = actions(9);
	v->a[2591] = 1;
	v->a[2592] = anon_sym_for;
	v->a[2593] = actions(13);
	v->a[2594] = 1;
	v->a[2595] = anon_sym_if;
	v->a[2596] = actions(15);
	v->a[2597] = 1;
	v->a[2598] = anon_sym_case;
	v->a[2599] = actions(17);
	small_parse_table_130(v);
}

/* EOF small_parse_table_25.c */
