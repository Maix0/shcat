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
	v->a[2501] = aux_sym__case_item_last_repeat2;
	v->a[2502] = state(752);
	v->a[2503] = 1;
	v->a[2504] = aux_sym_command_repeat1;
	v->a[2505] = state(1133);
	v->a[2506] = 1;
	v->a[2507] = sym_pipeline;
	v->a[2508] = state(1226);
	v->a[2509] = 1;
	v->a[2510] = aux_sym_redirected_statement_repeat2;
	v->a[2511] = state(2111);
	v->a[2512] = 1;
	v->a[2513] = sym__statement_not_pipeline;
	v->a[2514] = state(2113);
	v->a[2515] = 1;
	v->a[2516] = sym__statements;
	v->a[2517] = actions(160);
	v->a[2518] = 2;
	v->a[2519] = anon_sym_while;
	small_parse_table_126(v);
}

void	small_parse_table_126(t_small_parse_table_array *v)
{
	v->a[2520] = anon_sym_until;
	v->a[2521] = actions(174);
	v->a[2522] = 2;
	v->a[2523] = anon_sym_LT_AMP_DASH;
	v->a[2524] = anon_sym_GT_AMP_DASH;
	v->a[2525] = actions(182);
	v->a[2526] = 2;
	v->a[2527] = sym_raw_string;
	v->a[2528] = sym_number;
	v->a[2529] = state(385);
	v->a[2530] = 5;
	v->a[2531] = sym_arithmetic_expansion;
	v->a[2532] = sym_string;
	v->a[2533] = sym_simple_expansion;
	v->a[2534] = sym_expansion;
	v->a[2535] = sym_command_substitution;
	v->a[2536] = actions(172);
	v->a[2537] = 6;
	v->a[2538] = anon_sym_LT;
	v->a[2539] = anon_sym_GT;
	small_parse_table_127(v);
}

void	small_parse_table_127(t_small_parse_table_array *v)
{
	v->a[2540] = anon_sym_GT_GT;
	v->a[2541] = anon_sym_LT_AMP;
	v->a[2542] = anon_sym_GT_AMP;
	v->a[2543] = anon_sym_GT_PIPE;
	v->a[2544] = state(1075);
	v->a[2545] = 12;
	v->a[2546] = sym_redirected_statement;
	v->a[2547] = sym_for_statement;
	v->a[2548] = sym_while_statement;
	v->a[2549] = sym_if_statement;
	v->a[2550] = sym_case_statement;
	v->a[2551] = sym_function_definition;
	v->a[2552] = sym_compound_statement;
	v->a[2553] = sym_subshell;
	v->a[2554] = sym_list;
	v->a[2555] = sym_negated_command;
	v->a[2556] = sym_command;
	v->a[2557] = sym__variable_assignments;
	v->a[2558] = 34;
	v->a[2559] = actions(3);
	small_parse_table_128(v);
}

void	small_parse_table_128(t_small_parse_table_array *v)
{
	v->a[2560] = 1;
	v->a[2561] = sym_comment;
	v->a[2562] = actions(156);
	v->a[2563] = 1;
	v->a[2564] = sym_word;
	v->a[2565] = actions(158);
	v->a[2566] = 1;
	v->a[2567] = anon_sym_for;
	v->a[2568] = actions(162);
	v->a[2569] = 1;
	v->a[2570] = anon_sym_if;
	v->a[2571] = actions(164);
	v->a[2572] = 1;
	v->a[2573] = anon_sym_case;
	v->a[2574] = actions(166);
	v->a[2575] = 1;
	v->a[2576] = anon_sym_LPAREN;
	v->a[2577] = actions(168);
	v->a[2578] = 1;
	v->a[2579] = anon_sym_LBRACE;
	small_parse_table_129(v);
}

void	small_parse_table_129(t_small_parse_table_array *v)
{
	v->a[2580] = actions(170);
	v->a[2581] = 1;
	v->a[2582] = anon_sym_BANG;
	v->a[2583] = actions(176);
	v->a[2584] = 1;
	v->a[2585] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[2586] = actions(178);
	v->a[2587] = 1;
	v->a[2588] = anon_sym_DOLLAR;
	v->a[2589] = actions(180);
	v->a[2590] = 1;
	v->a[2591] = anon_sym_DQUOTE;
	v->a[2592] = actions(184);
	v->a[2593] = 1;
	v->a[2594] = anon_sym_DOLLAR_LBRACE;
	v->a[2595] = actions(186);
	v->a[2596] = 1;
	v->a[2597] = anon_sym_DOLLAR_LPAREN;
	v->a[2598] = actions(188);
	v->a[2599] = 1;
	small_parse_table_130(v);
}

/* EOF small_parse_table_25.c */
