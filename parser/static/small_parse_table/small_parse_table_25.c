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
	v->a[2502] = actions(83);
	v->a[2503] = 1;
	v->a[2504] = sym_word;
	v->a[2505] = actions(85);
	v->a[2506] = 1;
	v->a[2507] = anon_sym_for;
	v->a[2508] = actions(89);
	v->a[2509] = 1;
	v->a[2510] = anon_sym_if;
	v->a[2511] = actions(91);
	v->a[2512] = 1;
	v->a[2513] = anon_sym_case;
	v->a[2514] = actions(93);
	v->a[2515] = 1;
	v->a[2516] = anon_sym_LPAREN;
	v->a[2517] = actions(97);
	v->a[2518] = 1;
	v->a[2519] = anon_sym_LBRACE;
	small_parse_table_126(v);
}

void	small_parse_table_126(t_small_parse_table_array *v)
{
	v->a[2520] = actions(99);
	v->a[2521] = 1;
	v->a[2522] = anon_sym_BANG;
	v->a[2523] = actions(103);
	v->a[2524] = 1;
	v->a[2525] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[2526] = actions(105);
	v->a[2527] = 1;
	v->a[2528] = anon_sym_DOLLAR;
	v->a[2529] = actions(107);
	v->a[2530] = 1;
	v->a[2531] = anon_sym_DQUOTE;
	v->a[2532] = actions(111);
	v->a[2533] = 1;
	v->a[2534] = anon_sym_DOLLAR_LBRACE;
	v->a[2535] = actions(113);
	v->a[2536] = 1;
	v->a[2537] = anon_sym_DOLLAR_LPAREN;
	v->a[2538] = actions(115);
	v->a[2539] = 1;
	small_parse_table_127(v);
}

void	small_parse_table_127(t_small_parse_table_array *v)
{
	v->a[2540] = anon_sym_BQUOTE;
	v->a[2541] = actions(117);
	v->a[2542] = 1;
	v->a[2543] = sym_file_descriptor;
	v->a[2544] = actions(119);
	v->a[2545] = 1;
	v->a[2546] = sym_variable_name;
	v->a[2547] = actions(133);
	v->a[2548] = 1;
	v->a[2549] = anon_sym_LF;
	v->a[2550] = state(25);
	v->a[2551] = 1;
	v->a[2552] = aux_sym__case_item_last_repeat2;
	v->a[2553] = state(122);
	v->a[2554] = 1;
	v->a[2555] = aux_sym__statements_repeat1;
	v->a[2556] = state(172);
	v->a[2557] = 1;
	v->a[2558] = sym_command_name;
	v->a[2559] = state(234);
	small_parse_table_128(v);
}

void	small_parse_table_128(t_small_parse_table_array *v)
{
	v->a[2560] = 1;
	v->a[2561] = sym_variable_assignment;
	v->a[2562] = state(567);
	v->a[2563] = 1;
	v->a[2564] = sym_concatenation;
	v->a[2565] = state(634);
	v->a[2566] = 1;
	v->a[2567] = sym_file_redirect;
	v->a[2568] = state(670);
	v->a[2569] = 1;
	v->a[2570] = aux_sym_command_repeat1;
	v->a[2571] = state(1014);
	v->a[2572] = 1;
	v->a[2573] = sym_pipeline;
	v->a[2574] = state(1157);
	v->a[2575] = 1;
	v->a[2576] = aux_sym_redirected_statement_repeat2;
	v->a[2577] = state(1901);
	v->a[2578] = 1;
	v->a[2579] = sym__statement_not_pipeline;
	small_parse_table_129(v);
}

void	small_parse_table_129(t_small_parse_table_array *v)
{
	v->a[2580] = state(1919);
	v->a[2581] = 1;
	v->a[2582] = sym__statements;
	v->a[2583] = actions(87);
	v->a[2584] = 2;
	v->a[2585] = anon_sym_while;
	v->a[2586] = anon_sym_until;
	v->a[2587] = actions(109);
	v->a[2588] = 2;
	v->a[2589] = sym_raw_string;
	v->a[2590] = sym_number;
	v->a[2591] = state(348);
	v->a[2592] = 5;
	v->a[2593] = sym_arithmetic_expansion;
	v->a[2594] = sym_string;
	v->a[2595] = sym_simple_expansion;
	v->a[2596] = sym_expansion;
	v->a[2597] = sym_command_substitution;
	v->a[2598] = actions(101);
	v->a[2599] = 7;
	small_parse_table_130(v);
}

/* EOF small_parse_table_25.c */
