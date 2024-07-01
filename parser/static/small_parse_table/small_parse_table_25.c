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
	v->a[2500] = sym_command;
	v->a[2501] = sym__variable_assignments;
	v->a[2502] = 33;
	v->a[2503] = actions(3);
	v->a[2504] = 1;
	v->a[2505] = sym_comment;
	v->a[2506] = actions(9);
	v->a[2507] = 1;
	v->a[2508] = anon_sym_for;
	v->a[2509] = actions(13);
	v->a[2510] = 1;
	v->a[2511] = anon_sym_if;
	v->a[2512] = actions(15);
	v->a[2513] = 1;
	v->a[2514] = anon_sym_case;
	v->a[2515] = actions(17);
	v->a[2516] = 1;
	v->a[2517] = anon_sym_LPAREN;
	v->a[2518] = actions(19);
	v->a[2519] = 1;
	small_parse_table_126(v);
}

void	small_parse_table_126(t_small_parse_table_array *v)
{
	v->a[2520] = anon_sym_LBRACE;
	v->a[2521] = actions(43);
	v->a[2522] = 1;
	v->a[2523] = sym_word;
	v->a[2524] = actions(51);
	v->a[2525] = 1;
	v->a[2526] = anon_sym_BANG;
	v->a[2527] = actions(55);
	v->a[2528] = 1;
	v->a[2529] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[2530] = actions(57);
	v->a[2531] = 1;
	v->a[2532] = anon_sym_DOLLAR;
	v->a[2533] = actions(59);
	v->a[2534] = 1;
	v->a[2535] = anon_sym_DQUOTE;
	v->a[2536] = actions(63);
	v->a[2537] = 1;
	v->a[2538] = anon_sym_DOLLAR_LBRACE;
	v->a[2539] = actions(65);
	small_parse_table_127(v);
}

void	small_parse_table_127(t_small_parse_table_array *v)
{
	v->a[2540] = 1;
	v->a[2541] = anon_sym_DOLLAR_LPAREN;
	v->a[2542] = actions(67);
	v->a[2543] = 1;
	v->a[2544] = anon_sym_BQUOTE;
	v->a[2545] = actions(69);
	v->a[2546] = 1;
	v->a[2547] = sym_file_descriptor;
	v->a[2548] = actions(71);
	v->a[2549] = 1;
	v->a[2550] = sym_variable_name;
	v->a[2551] = actions(85);
	v->a[2552] = 1;
	v->a[2553] = anon_sym_LF;
	v->a[2554] = state(128);
	v->a[2555] = 1;
	v->a[2556] = aux_sym__statements_repeat1;
	v->a[2557] = state(183);
	v->a[2558] = 1;
	v->a[2559] = sym_command_name;
	small_parse_table_128(v);
}

void	small_parse_table_128(t_small_parse_table_array *v)
{
	v->a[2560] = state(271);
	v->a[2561] = 1;
	v->a[2562] = sym_variable_assignment;
	v->a[2563] = state(603);
	v->a[2564] = 1;
	v->a[2565] = sym_concatenation;
	v->a[2566] = state(639);
	v->a[2567] = 1;
	v->a[2568] = aux_sym_command_repeat1;
	v->a[2569] = state(644);
	v->a[2570] = 1;
	v->a[2571] = sym_file_redirect;
	v->a[2572] = state(657);
	v->a[2573] = 1;
	v->a[2574] = aux_sym__case_item_last_repeat2;
	v->a[2575] = state(1171);
	v->a[2576] = 1;
	v->a[2577] = sym_pipeline;
	v->a[2578] = state(1196);
	v->a[2579] = 1;
	small_parse_table_129(v);
}

void	small_parse_table_129(t_small_parse_table_array *v)
{
	v->a[2580] = aux_sym_redirected_statement_repeat2;
	v->a[2581] = state(1910);
	v->a[2582] = 1;
	v->a[2583] = sym__statement_not_pipeline;
	v->a[2584] = state(2007);
	v->a[2585] = 1;
	v->a[2586] = sym__statements;
	v->a[2587] = actions(11);
	v->a[2588] = 2;
	v->a[2589] = anon_sym_while;
	v->a[2590] = anon_sym_until;
	v->a[2591] = actions(61);
	v->a[2592] = 2;
	v->a[2593] = sym_raw_string;
	v->a[2594] = sym_number;
	v->a[2595] = state(436);
	v->a[2596] = 5;
	v->a[2597] = sym_arithmetic_expansion;
	v->a[2598] = sym_string;
	v->a[2599] = sym_simple_expansion;
	small_parse_table_130(v);
}

/* EOF small_parse_table_25.c */
