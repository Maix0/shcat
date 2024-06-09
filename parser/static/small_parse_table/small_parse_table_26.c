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
	v->a[2600] = actions(168);
	v->a[2601] = 1;
	v->a[2602] = anon_sym_LPAREN;
	v->a[2603] = actions(171);
	v->a[2604] = 1;
	v->a[2605] = anon_sym_LBRACE;
	v->a[2606] = actions(174);
	v->a[2607] = 1;
	v->a[2608] = anon_sym_BANG;
	v->a[2609] = actions(183);
	v->a[2610] = 1;
	v->a[2611] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[2612] = actions(186);
	v->a[2613] = 1;
	v->a[2614] = anon_sym_DOLLAR;
	v->a[2615] = actions(189);
	v->a[2616] = 1;
	v->a[2617] = anon_sym_DQUOTE;
	v->a[2618] = actions(192);
	v->a[2619] = 1;
	small_parse_table_131(v);
}

void	small_parse_table_131(t_small_parse_table_array *v)
{
	v->a[2620] = sym_raw_string;
	v->a[2621] = actions(195);
	v->a[2622] = 1;
	v->a[2623] = aux_sym_number_token1;
	v->a[2624] = actions(198);
	v->a[2625] = 1;
	v->a[2626] = aux_sym_number_token2;
	v->a[2627] = actions(201);
	v->a[2628] = 1;
	v->a[2629] = anon_sym_DOLLAR_LBRACE;
	v->a[2630] = actions(204);
	v->a[2631] = 1;
	v->a[2632] = anon_sym_DOLLAR_LPAREN;
	v->a[2633] = actions(207);
	v->a[2634] = 1;
	v->a[2635] = anon_sym_BQUOTE;
	v->a[2636] = actions(210);
	v->a[2637] = 1;
	v->a[2638] = sym_file_descriptor;
	v->a[2639] = actions(213);
	small_parse_table_132(v);
}

void	small_parse_table_132(t_small_parse_table_array *v)
{
	v->a[2640] = 1;
	v->a[2641] = sym_variable_name;
	v->a[2642] = state(21);
	v->a[2643] = 1;
	v->a[2644] = aux_sym__terminated_statement;
	v->a[2645] = state(190);
	v->a[2646] = 1;
	v->a[2647] = sym_command_name;
	v->a[2648] = state(299);
	v->a[2649] = 1;
	v->a[2650] = sym_variable_assignment;
	v->a[2651] = state(582);
	v->a[2652] = 1;
	v->a[2653] = sym_concatenation;
	v->a[2654] = state(587);
	v->a[2655] = 1;
	v->a[2656] = aux_sym_command_repeat1;
	v->a[2657] = state(718);
	v->a[2658] = 1;
	v->a[2659] = sym_file_redirect;
	small_parse_table_133(v);
}

void	small_parse_table_133(t_small_parse_table_array *v)
{
	v->a[2660] = state(1212);
	v->a[2661] = 1;
	v->a[2662] = sym_pipeline;
	v->a[2663] = state(1213);
	v->a[2664] = 1;
	v->a[2665] = aux_sym_redirected_statement_repeat2;
	v->a[2666] = state(2035);
	v->a[2667] = 1;
	v->a[2668] = sym__statement_not_pipeline;
	v->a[2669] = actions(157);
	v->a[2670] = 2;
	v->a[2671] = anon_sym_while;
	v->a[2672] = anon_sym_until;
	v->a[2673] = actions(180);
	v->a[2674] = 2;
	v->a[2675] = anon_sym_LT_AMP_DASH;
	v->a[2676] = anon_sym_GT_AMP_DASH;
	v->a[2677] = actions(163);
	v->a[2678] = 3;
	v->a[2679] = anon_sym_fi;
	small_parse_table_134(v);
}

void	small_parse_table_134(t_small_parse_table_array *v)
{
	v->a[2680] = anon_sym_elif;
	v->a[2681] = anon_sym_else;
	v->a[2682] = state(397);
	v->a[2683] = 6;
	v->a[2684] = sym_arithmetic_expansion;
	v->a[2685] = sym_string;
	v->a[2686] = sym_number;
	v->a[2687] = sym_simple_expansion;
	v->a[2688] = sym_expansion;
	v->a[2689] = sym_command_substitution;
	v->a[2690] = actions(177);
	v->a[2691] = 8;
	v->a[2692] = anon_sym_LT;
	v->a[2693] = anon_sym_GT;
	v->a[2694] = anon_sym_GT_GT;
	v->a[2695] = anon_sym_AMP_GT;
	v->a[2696] = anon_sym_AMP_GT_GT;
	v->a[2697] = anon_sym_LT_AMP;
	v->a[2698] = anon_sym_GT_AMP;
	v->a[2699] = anon_sym_GT_PIPE;
	small_parse_table_135(v);
}

/* EOF small_parse_table_26.c */
