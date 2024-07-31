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
	v->a[2500] = sym_file_redirect;
	v->a[2501] = state(602);
	v->a[2502] = 1;
	v->a[2503] = sym_concatenation;
	v->a[2504] = state(1014);
	v->a[2505] = 1;
	v->a[2506] = sym_pipeline;
	v->a[2507] = state(1068);
	v->a[2508] = 1;
	v->a[2509] = aux_sym_redirected_statement_repeat2;
	v->a[2510] = state(1609);
	v->a[2511] = 1;
	v->a[2512] = sym__statement_not_pipeline;
	v->a[2513] = state(1634);
	v->a[2514] = 1;
	v->a[2515] = sym__statements;
	v->a[2516] = actions(11);
	v->a[2517] = 2;
	v->a[2518] = anon_sym_while;
	v->a[2519] = anon_sym_until;
	small_parse_table_126(v);
}

void	small_parse_table_126(t_small_parse_table_array *v)
{
	v->a[2520] = actions(59);
	v->a[2521] = 2;
	v->a[2522] = sym_raw_string;
	v->a[2523] = sym_number;
	v->a[2524] = state(425);
	v->a[2525] = 5;
	v->a[2526] = sym_arithmetic_expansion;
	v->a[2527] = sym_string;
	v->a[2528] = sym_simple_expansion;
	v->a[2529] = sym_expansion;
	v->a[2530] = sym_command_substitution;
	v->a[2531] = actions(51);
	v->a[2532] = 7;
	v->a[2533] = anon_sym_LT;
	v->a[2534] = anon_sym_GT;
	v->a[2535] = anon_sym_GT_GT;
	v->a[2536] = anon_sym_LT_AMP;
	v->a[2537] = anon_sym_GT_AMP;
	v->a[2538] = anon_sym_GT_PIPE;
	v->a[2539] = anon_sym_LT_GT;
	small_parse_table_127(v);
}

void	small_parse_table_127(t_small_parse_table_array *v)
{
	v->a[2540] = state(936);
	v->a[2541] = 12;
	v->a[2542] = sym_redirected_statement;
	v->a[2543] = sym_for_statement;
	v->a[2544] = sym_while_statement;
	v->a[2545] = sym_if_statement;
	v->a[2546] = sym_case_statement;
	v->a[2547] = sym_function_definition;
	v->a[2548] = sym_compound_statement;
	v->a[2549] = sym_subshell;
	v->a[2550] = sym_list;
	v->a[2551] = sym_negated_command;
	v->a[2552] = sym_command;
	v->a[2553] = sym__variable_assignments;
	v->a[2554] = 32;
	v->a[2555] = actions(3);
	v->a[2556] = 1;
	v->a[2557] = sym_comment;
	v->a[2558] = actions(79);
	v->a[2559] = 1;
	small_parse_table_128(v);
}

void	small_parse_table_128(t_small_parse_table_array *v)
{
	v->a[2560] = sym_word;
	v->a[2561] = actions(81);
	v->a[2562] = 1;
	v->a[2563] = anon_sym_for;
	v->a[2564] = actions(85);
	v->a[2565] = 1;
	v->a[2566] = anon_sym_if;
	v->a[2567] = actions(87);
	v->a[2568] = 1;
	v->a[2569] = anon_sym_case;
	v->a[2570] = actions(89);
	v->a[2571] = 1;
	v->a[2572] = anon_sym_LPAREN;
	v->a[2573] = actions(93);
	v->a[2574] = 1;
	v->a[2575] = anon_sym_LBRACE;
	v->a[2576] = actions(95);
	v->a[2577] = 1;
	v->a[2578] = anon_sym_BANG;
	v->a[2579] = actions(99);
	small_parse_table_129(v);
}

void	small_parse_table_129(t_small_parse_table_array *v)
{
	v->a[2580] = 1;
	v->a[2581] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[2582] = actions(101);
	v->a[2583] = 1;
	v->a[2584] = anon_sym_DOLLAR;
	v->a[2585] = actions(103);
	v->a[2586] = 1;
	v->a[2587] = anon_sym_DQUOTE;
	v->a[2588] = actions(107);
	v->a[2589] = 1;
	v->a[2590] = anon_sym_DOLLAR_LBRACE;
	v->a[2591] = actions(109);
	v->a[2592] = 1;
	v->a[2593] = anon_sym_DOLLAR_LPAREN;
	v->a[2594] = actions(111);
	v->a[2595] = 1;
	v->a[2596] = anon_sym_BQUOTE;
	v->a[2597] = actions(113);
	v->a[2598] = 1;
	v->a[2599] = sym_variable_name;
	small_parse_table_130(v);
}

/* EOF small_parse_table_25.c */
