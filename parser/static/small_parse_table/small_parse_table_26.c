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
	v->a[2600] = anon_sym_BQUOTE;
	v->a[2601] = actions(190);
	v->a[2602] = 1;
	v->a[2603] = sym_file_descriptor;
	v->a[2604] = actions(192);
	v->a[2605] = 1;
	v->a[2606] = sym_variable_name;
	v->a[2607] = actions(194);
	v->a[2608] = 1;
	v->a[2609] = anon_sym_LF;
	v->a[2610] = state(21);
	v->a[2611] = 1;
	v->a[2612] = aux_sym__case_item_last_repeat2;
	v->a[2613] = state(140);
	v->a[2614] = 1;
	v->a[2615] = aux_sym__statements_repeat1;
	v->a[2616] = state(186);
	v->a[2617] = 1;
	v->a[2618] = sym_command_name;
	v->a[2619] = state(213);
	small_parse_table_131(v);
}

void	small_parse_table_131(t_small_parse_table_array *v)
{
	v->a[2620] = 1;
	v->a[2621] = sym_variable_assignment;
	v->a[2622] = state(636);
	v->a[2623] = 1;
	v->a[2624] = sym_concatenation;
	v->a[2625] = state(677);
	v->a[2626] = 1;
	v->a[2627] = sym_file_redirect;
	v->a[2628] = state(752);
	v->a[2629] = 1;
	v->a[2630] = aux_sym_command_repeat1;
	v->a[2631] = state(1133);
	v->a[2632] = 1;
	v->a[2633] = sym_pipeline;
	v->a[2634] = state(1226);
	v->a[2635] = 1;
	v->a[2636] = aux_sym_redirected_statement_repeat2;
	v->a[2637] = state(2111);
	v->a[2638] = 1;
	v->a[2639] = sym__statement_not_pipeline;
	small_parse_table_132(v);
}

void	small_parse_table_132(t_small_parse_table_array *v)
{
	v->a[2640] = state(2117);
	v->a[2641] = 1;
	v->a[2642] = sym__statements;
	v->a[2643] = actions(160);
	v->a[2644] = 2;
	v->a[2645] = anon_sym_while;
	v->a[2646] = anon_sym_until;
	v->a[2647] = actions(174);
	v->a[2648] = 2;
	v->a[2649] = anon_sym_LT_AMP_DASH;
	v->a[2650] = anon_sym_GT_AMP_DASH;
	v->a[2651] = actions(182);
	v->a[2652] = 2;
	v->a[2653] = sym_raw_string;
	v->a[2654] = sym_number;
	v->a[2655] = state(385);
	v->a[2656] = 5;
	v->a[2657] = sym_arithmetic_expansion;
	v->a[2658] = sym_string;
	v->a[2659] = sym_simple_expansion;
	small_parse_table_133(v);
}

void	small_parse_table_133(t_small_parse_table_array *v)
{
	v->a[2660] = sym_expansion;
	v->a[2661] = sym_command_substitution;
	v->a[2662] = actions(172);
	v->a[2663] = 6;
	v->a[2664] = anon_sym_LT;
	v->a[2665] = anon_sym_GT;
	v->a[2666] = anon_sym_GT_GT;
	v->a[2667] = anon_sym_LT_AMP;
	v->a[2668] = anon_sym_GT_AMP;
	v->a[2669] = anon_sym_GT_PIPE;
	v->a[2670] = state(1075);
	v->a[2671] = 12;
	v->a[2672] = sym_redirected_statement;
	v->a[2673] = sym_for_statement;
	v->a[2674] = sym_while_statement;
	v->a[2675] = sym_if_statement;
	v->a[2676] = sym_case_statement;
	v->a[2677] = sym_function_definition;
	v->a[2678] = sym_compound_statement;
	v->a[2679] = sym_subshell;
	small_parse_table_134(v);
}

void	small_parse_table_134(t_small_parse_table_array *v)
{
	v->a[2680] = sym_list;
	v->a[2681] = sym_negated_command;
	v->a[2682] = sym_command;
	v->a[2683] = sym__variable_assignments;
	v->a[2684] = 34;
	v->a[2685] = actions(3);
	v->a[2686] = 1;
	v->a[2687] = sym_comment;
	v->a[2688] = actions(9);
	v->a[2689] = 1;
	v->a[2690] = anon_sym_for;
	v->a[2691] = actions(13);
	v->a[2692] = 1;
	v->a[2693] = anon_sym_if;
	v->a[2694] = actions(15);
	v->a[2695] = 1;
	v->a[2696] = anon_sym_case;
	v->a[2697] = actions(17);
	v->a[2698] = 1;
	v->a[2699] = anon_sym_LPAREN;
	small_parse_table_135(v);
}

/* EOF small_parse_table_26.c */
