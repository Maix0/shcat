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
	v->a[2501] = sym_comment;
	v->a[2502] = actions(9);
	v->a[2503] = 1;
	v->a[2504] = anon_sym_for;
	v->a[2505] = actions(13);
	v->a[2506] = 1;
	v->a[2507] = anon_sym_if;
	v->a[2508] = actions(15);
	v->a[2509] = 1;
	v->a[2510] = anon_sym_case;
	v->a[2511] = actions(17);
	v->a[2512] = 1;
	v->a[2513] = anon_sym_LPAREN;
	v->a[2514] = actions(19);
	v->a[2515] = 1;
	v->a[2516] = anon_sym_LBRACE;
	v->a[2517] = actions(43);
	v->a[2518] = 1;
	v->a[2519] = sym_word;
	small_parse_table_126(v);
}

void	small_parse_table_126(t_small_parse_table_array *v)
{
	v->a[2520] = actions(51);
	v->a[2521] = 1;
	v->a[2522] = anon_sym_BANG;
	v->a[2523] = actions(55);
	v->a[2524] = 1;
	v->a[2525] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[2526] = actions(57);
	v->a[2527] = 1;
	v->a[2528] = anon_sym_DOLLAR;
	v->a[2529] = actions(59);
	v->a[2530] = 1;
	v->a[2531] = anon_sym_DQUOTE;
	v->a[2532] = actions(63);
	v->a[2533] = 1;
	v->a[2534] = anon_sym_DOLLAR_LBRACE;
	v->a[2535] = actions(65);
	v->a[2536] = 1;
	v->a[2537] = anon_sym_DOLLAR_LPAREN;
	v->a[2538] = actions(67);
	v->a[2539] = 1;
	small_parse_table_127(v);
}

void	small_parse_table_127(t_small_parse_table_array *v)
{
	v->a[2540] = anon_sym_BQUOTE;
	v->a[2541] = actions(69);
	v->a[2542] = 1;
	v->a[2543] = sym_file_descriptor;
	v->a[2544] = actions(71);
	v->a[2545] = 1;
	v->a[2546] = sym_variable_name;
	v->a[2547] = state(18);
	v->a[2548] = 1;
	v->a[2549] = aux_sym__terminated_statement;
	v->a[2550] = state(183);
	v->a[2551] = 1;
	v->a[2552] = sym_command_name;
	v->a[2553] = state(342);
	v->a[2554] = 1;
	v->a[2555] = sym_variable_assignment;
	v->a[2556] = state(655);
	v->a[2557] = 1;
	v->a[2558] = aux_sym_command_repeat1;
	v->a[2559] = state(661);
	small_parse_table_128(v);
}

void	small_parse_table_128(t_small_parse_table_array *v)
{
	v->a[2560] = 1;
	v->a[2561] = sym_concatenation;
	v->a[2562] = state(665);
	v->a[2563] = 1;
	v->a[2564] = sym_file_redirect;
	v->a[2565] = state(1192);
	v->a[2566] = 1;
	v->a[2567] = sym_pipeline;
	v->a[2568] = state(1198);
	v->a[2569] = 1;
	v->a[2570] = aux_sym_redirected_statement_repeat2;
	v->a[2571] = state(1901);
	v->a[2572] = 1;
	v->a[2573] = sym__statement_not_pipeline;
	v->a[2574] = actions(11);
	v->a[2575] = 2;
	v->a[2576] = anon_sym_while;
	v->a[2577] = anon_sym_until;
	v->a[2578] = actions(61);
	v->a[2579] = 2;
	small_parse_table_129(v);
}

void	small_parse_table_129(t_small_parse_table_array *v)
{
	v->a[2580] = sym_raw_string;
	v->a[2581] = sym_number;
	v->a[2582] = actions(189);
	v->a[2583] = 3;
	v->a[2584] = anon_sym_fi;
	v->a[2585] = anon_sym_elif;
	v->a[2586] = anon_sym_else;
	v->a[2587] = state(455);
	v->a[2588] = 5;
	v->a[2589] = sym_arithmetic_expansion;
	v->a[2590] = sym_string;
	v->a[2591] = sym_simple_expansion;
	v->a[2592] = sym_expansion;
	v->a[2593] = sym_command_substitution;
	v->a[2594] = actions(53);
	v->a[2595] = 7;
	v->a[2596] = anon_sym_LT;
	v->a[2597] = anon_sym_GT;
	v->a[2598] = anon_sym_GT_GT;
	v->a[2599] = anon_sym_LT_AMP;
	small_parse_table_130(v);
}

/* EOF small_parse_table_25.c */
