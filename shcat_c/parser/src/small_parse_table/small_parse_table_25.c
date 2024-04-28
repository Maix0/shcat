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
	v->a[2500] = sym__special_character;
	v->a[2501] = sym_raw_string;
	v->a[2502] = sym_ansi_c_string;
	v->a[2503] = aux_sym_number_token1;
	v->a[2504] = aux_sym_number_token2;
	v->a[2505] = anon_sym_DOLLAR_LBRACE;
	v->a[2506] = anon_sym_DOLLAR_LPAREN;
	v->a[2507] = anon_sym_BQUOTE;
	v->a[2508] = anon_sym_DOLLAR_BQUOTE;
	v->a[2509] = anon_sym_LT_LPAREN;
	v->a[2510] = anon_sym_GT_LPAREN;
	v->a[2511] = sym_word;
	v->a[2512] = 24;
	v->a[2513] = actions(3);
	v->a[2514] = 1;
	v->a[2515] = sym_comment;
	v->a[2516] = actions(1759);
	v->a[2517] = 1;
	v->a[2518] = anon_sym_DOLLAR_LBRACK;
	v->a[2519] = actions(1761);
	small_parse_table_126(v);
}

void	small_parse_table_126(t_small_parse_table_array *v)
{
	v->a[2520] = 1;
	v->a[2521] = anon_sym_DOLLAR;
	v->a[2522] = actions(1763);
	v->a[2523] = 1;
	v->a[2524] = sym__special_character;
	v->a[2525] = actions(1765);
	v->a[2526] = 1;
	v->a[2527] = anon_sym_DQUOTE;
	v->a[2528] = actions(1767);
	v->a[2529] = 1;
	v->a[2530] = aux_sym_number_token1;
	v->a[2531] = actions(1769);
	v->a[2532] = 1;
	v->a[2533] = aux_sym_number_token2;
	v->a[2534] = actions(1771);
	v->a[2535] = 1;
	v->a[2536] = anon_sym_DOLLAR_LBRACE;
	v->a[2537] = actions(1773);
	v->a[2538] = 1;
	v->a[2539] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_127(v);
}

void	small_parse_table_127(t_small_parse_table_array *v)
{
	v->a[2540] = actions(1775);
	v->a[2541] = 1;
	v->a[2542] = anon_sym_BQUOTE;
	v->a[2543] = actions(1777);
	v->a[2544] = 1;
	v->a[2545] = anon_sym_DOLLAR_BQUOTE;
	v->a[2546] = actions(1783);
	v->a[2547] = 1;
	v->a[2548] = sym_variable_name;
	v->a[2549] = actions(1785);
	v->a[2550] = 1;
	v->a[2551] = sym_test_operator;
	v->a[2552] = actions(1787);
	v->a[2553] = 1;
	v->a[2554] = sym__brace_start;
	v->a[2555] = actions(1801);
	v->a[2556] = 1;
	v->a[2557] = aux_sym__simple_variable_name_token1;
	v->a[2558] = state(1368);
	v->a[2559] = 1;
	small_parse_table_128(v);
}

void	small_parse_table_128(t_small_parse_table_array *v)
{
	v->a[2560] = aux_sym__literal_repeat1;
	v->a[2561] = state(6750);
	v->a[2562] = 1;
	v->a[2563] = sym_subscript;
	v->a[2564] = actions(1753);
	v->a[2565] = 2;
	v->a[2566] = anon_sym_LPAREN_LPAREN;
	v->a[2567] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[2568] = actions(1779);
	v->a[2569] = 2;
	v->a[2570] = anon_sym_LT_LPAREN;
	v->a[2571] = anon_sym_GT_LPAREN;
	v->a[2572] = actions(1799);
	v->a[2573] = 2;
	v->a[2574] = sym_file_descriptor;
	v->a[2575] = aux_sym_heredoc_redirect_token1;
	v->a[2576] = actions(1751);
	v->a[2577] = 3;
	v->a[2578] = sym_raw_string;
	v->a[2579] = sym_ansi_c_string;
	small_parse_table_129(v);
}

void	small_parse_table_129(t_small_parse_table_array *v)
{
	v->a[2580] = sym_word;
	v->a[2581] = state(546);
	v->a[2582] = 3;
	v->a[2583] = sym_variable_assignment;
	v->a[2584] = sym_concatenation;
	v->a[2585] = aux_sym_declaration_command_repeat1;
	v->a[2586] = state(1067);
	v->a[2587] = 9;
	v->a[2588] = sym_arithmetic_expansion;
	v->a[2589] = sym_brace_expression;
	v->a[2590] = sym_string;
	v->a[2591] = sym_translated_string;
	v->a[2592] = sym_number;
	v->a[2593] = sym_simple_expansion;
	v->a[2594] = sym_expansion;
	v->a[2595] = sym_command_substitution;
	v->a[2596] = sym_process_substitution;
	v->a[2597] = actions(1797);
	v->a[2598] = 22;
	v->a[2599] = anon_sym_SEMI;
	small_parse_table_130(v);
}

/* EOF small_parse_table_25.c */
