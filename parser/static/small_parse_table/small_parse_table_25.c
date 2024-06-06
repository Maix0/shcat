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
	v->a[2500] = anon_sym_SEMI_SEMI;
	v->a[2501] = anon_sym_SEMI_AMP;
	v->a[2502] = anon_sym_SEMI_SEMI_AMP;
	v->a[2503] = anon_sym_PIPE_AMP;
	v->a[2504] = anon_sym_AMP_AMP;
	v->a[2505] = anon_sym_PIPE_PIPE;
	v->a[2506] = anon_sym_LT;
	v->a[2507] = anon_sym_GT;
	v->a[2508] = anon_sym_GT_GT;
	v->a[2509] = anon_sym_AMP_GT;
	v->a[2510] = anon_sym_AMP_GT_GT;
	v->a[2511] = anon_sym_LT_AMP;
	v->a[2512] = anon_sym_GT_AMP;
	v->a[2513] = anon_sym_GT_PIPE;
	v->a[2514] = anon_sym_LT_AMP_DASH;
	v->a[2515] = anon_sym_GT_AMP_DASH;
	v->a[2516] = anon_sym_LT_LT;
	v->a[2517] = anon_sym_LT_LT_DASH;
	v->a[2518] = aux_sym_heredoc_redirect_token1;
	v->a[2519] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_126(v);
}

void	small_parse_table_126(t_small_parse_table_array *v)
{
	v->a[2520] = anon_sym_AMP;
	v->a[2521] = sym__special_character;
	v->a[2522] = anon_sym_DQUOTE;
	v->a[2523] = sym_raw_string;
	v->a[2524] = aux_sym_number_token1;
	v->a[2525] = aux_sym_number_token2;
	v->a[2526] = anon_sym_DOLLAR_LBRACE;
	v->a[2527] = anon_sym_DOLLAR_LPAREN;
	v->a[2528] = anon_sym_BQUOTE;
	v->a[2529] = anon_sym_DOLLAR_BQUOTE;
	v->a[2530] = sym_word;
	v->a[2531] = anon_sym_SEMI;
	v->a[2532] = 20;
	v->a[2533] = actions(3);
	v->a[2534] = 1;
	v->a[2535] = sym_comment;
	v->a[2536] = actions(1043);
	v->a[2537] = 1;
	v->a[2538] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[2539] = actions(1045);
	small_parse_table_127(v);
}

void	small_parse_table_127(t_small_parse_table_array *v)
{
	v->a[2540] = 1;
	v->a[2541] = anon_sym_DOLLAR;
	v->a[2542] = actions(1047);
	v->a[2543] = 1;
	v->a[2544] = sym__special_character;
	v->a[2545] = actions(1049);
	v->a[2546] = 1;
	v->a[2547] = anon_sym_DQUOTE;
	v->a[2548] = actions(1051);
	v->a[2549] = 1;
	v->a[2550] = aux_sym_number_token1;
	v->a[2551] = actions(1053);
	v->a[2552] = 1;
	v->a[2553] = aux_sym_number_token2;
	v->a[2554] = actions(1055);
	v->a[2555] = 1;
	v->a[2556] = anon_sym_DOLLAR_LBRACE;
	v->a[2557] = actions(1057);
	v->a[2558] = 1;
	v->a[2559] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_128(v);
}

void	small_parse_table_128(t_small_parse_table_array *v)
{
	v->a[2560] = actions(1059);
	v->a[2561] = 1;
	v->a[2562] = anon_sym_BQUOTE;
	v->a[2563] = actions(1061);
	v->a[2564] = 1;
	v->a[2565] = anon_sym_DOLLAR_BQUOTE;
	v->a[2566] = actions(1065);
	v->a[2567] = 1;
	v->a[2568] = sym_test_operator;
	v->a[2569] = actions(1067);
	v->a[2570] = 1;
	v->a[2571] = sym__brace_start;
	v->a[2572] = actions(1248);
	v->a[2573] = 1;
	v->a[2574] = aux_sym__simple_variable_name_token1;
	v->a[2575] = state(879);
	v->a[2576] = 1;
	v->a[2577] = aux_sym__literal_repeat1;
	v->a[2578] = actions(1037);
	v->a[2579] = 2;
	small_parse_table_129(v);
}

void	small_parse_table_129(t_small_parse_table_array *v)
{
	v->a[2580] = sym_raw_string;
	v->a[2581] = sym_word;
	v->a[2582] = actions(1246);
	v->a[2583] = 2;
	v->a[2584] = sym_file_descriptor;
	v->a[2585] = aux_sym_heredoc_redirect_token1;
	v->a[2586] = state(277);
	v->a[2587] = 2;
	v->a[2588] = sym_concatenation;
	v->a[2589] = aux_sym_unset_command_repeat1;
	v->a[2590] = state(566);
	v->a[2591] = 7;
	v->a[2592] = sym_arithmetic_expansion;
	v->a[2593] = sym_brace_expression;
	v->a[2594] = sym_string;
	v->a[2595] = sym_number;
	v->a[2596] = sym_simple_expansion;
	v->a[2597] = sym_expansion;
	v->a[2598] = sym_command_substitution;
	v->a[2599] = actions(1244);
	small_parse_table_130(v);
}

/* EOF small_parse_table_25.c */
