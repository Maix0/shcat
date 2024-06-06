/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_26.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_130(t_small_parse_table_array *v)
{
	v->a[2600] = 22;
	v->a[2601] = anon_sym_esac;
	v->a[2602] = anon_sym_PIPE;
	v->a[2603] = anon_sym_SEMI_SEMI;
	v->a[2604] = anon_sym_SEMI_AMP;
	v->a[2605] = anon_sym_SEMI_SEMI_AMP;
	v->a[2606] = anon_sym_PIPE_AMP;
	v->a[2607] = anon_sym_AMP_AMP;
	v->a[2608] = anon_sym_PIPE_PIPE;
	v->a[2609] = anon_sym_LT;
	v->a[2610] = anon_sym_GT;
	v->a[2611] = anon_sym_GT_GT;
	v->a[2612] = anon_sym_AMP_GT;
	v->a[2613] = anon_sym_AMP_GT_GT;
	v->a[2614] = anon_sym_LT_AMP;
	v->a[2615] = anon_sym_GT_AMP;
	v->a[2616] = anon_sym_GT_PIPE;
	v->a[2617] = anon_sym_LT_AMP_DASH;
	v->a[2618] = anon_sym_GT_AMP_DASH;
	v->a[2619] = anon_sym_LT_LT;
	small_parse_table_131(v);
}

void	small_parse_table_131(t_small_parse_table_array *v)
{
	v->a[2620] = anon_sym_LT_LT_DASH;
	v->a[2621] = anon_sym_AMP;
	v->a[2622] = anon_sym_SEMI;
	v->a[2623] = 23;
	v->a[2624] = actions(3);
	v->a[2625] = 1;
	v->a[2626] = sym_comment;
	v->a[2627] = actions(1146);
	v->a[2628] = 1;
	v->a[2629] = anon_sym_LPAREN;
	v->a[2630] = actions(1252);
	v->a[2631] = 1;
	v->a[2632] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[2633] = actions(1254);
	v->a[2634] = 1;
	v->a[2635] = anon_sym_DOLLAR;
	v->a[2636] = actions(1256);
	v->a[2637] = 1;
	v->a[2638] = sym__special_character;
	v->a[2639] = actions(1258);
	small_parse_table_132(v);
}

void	small_parse_table_132(t_small_parse_table_array *v)
{
	v->a[2640] = 1;
	v->a[2641] = anon_sym_DQUOTE;
	v->a[2642] = actions(1260);
	v->a[2643] = 1;
	v->a[2644] = aux_sym_number_token1;
	v->a[2645] = actions(1262);
	v->a[2646] = 1;
	v->a[2647] = aux_sym_number_token2;
	v->a[2648] = actions(1264);
	v->a[2649] = 1;
	v->a[2650] = anon_sym_DOLLAR_LBRACE;
	v->a[2651] = actions(1266);
	v->a[2652] = 1;
	v->a[2653] = anon_sym_DOLLAR_LPAREN;
	v->a[2654] = actions(1268);
	v->a[2655] = 1;
	v->a[2656] = anon_sym_BQUOTE;
	v->a[2657] = actions(1270);
	v->a[2658] = 1;
	v->a[2659] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_133(v);
}

void	small_parse_table_133(t_small_parse_table_array *v)
{
	v->a[2660] = actions(1272);
	v->a[2661] = 1;
	v->a[2662] = sym_test_operator;
	v->a[2663] = actions(1274);
	v->a[2664] = 1;
	v->a[2665] = sym__bare_dollar;
	v->a[2666] = actions(1276);
	v->a[2667] = 1;
	v->a[2668] = sym__brace_start;
	v->a[2669] = state(389);
	v->a[2670] = 1;
	v->a[2671] = aux_sym_command_repeat2;
	v->a[2672] = state(1232);
	v->a[2673] = 1;
	v->a[2674] = aux_sym__literal_repeat1;
	v->a[2675] = state(1293);
	v->a[2676] = 1;
	v->a[2677] = sym_concatenation;
	v->a[2678] = state(2297);
	v->a[2679] = 1;
	small_parse_table_134(v);
}

void	small_parse_table_134(t_small_parse_table_array *v)
{
	v->a[2680] = sym_subshell;
	v->a[2681] = actions(759);
	v->a[2682] = 2;
	v->a[2683] = sym_file_descriptor;
	v->a[2684] = aux_sym_heredoc_redirect_token1;
	v->a[2685] = actions(1250);
	v->a[2686] = 2;
	v->a[2687] = sym_raw_string;
	v->a[2688] = sym_word;
	v->a[2689] = state(770);
	v->a[2690] = 7;
	v->a[2691] = sym_arithmetic_expansion;
	v->a[2692] = sym_brace_expression;
	v->a[2693] = sym_string;
	v->a[2694] = sym_number;
	v->a[2695] = sym_simple_expansion;
	v->a[2696] = sym_expansion;
	v->a[2697] = sym_command_substitution;
	v->a[2698] = actions(757);
	v->a[2699] = 20;
	small_parse_table_135(v);
}

/* EOF small_parse_table_26.c */
