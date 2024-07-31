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
	v->a[2600] = actions(131);
	v->a[2601] = 1;
	v->a[2602] = anon_sym_LF;
	v->a[2603] = state(33);
	v->a[2604] = 1;
	v->a[2605] = aux_sym__case_item_last_repeat2;
	v->a[2606] = state(112);
	v->a[2607] = 1;
	v->a[2608] = aux_sym__statements_repeat1;
	v->a[2609] = state(185);
	v->a[2610] = 1;
	v->a[2611] = sym_command_name;
	v->a[2612] = state(255);
	v->a[2613] = 1;
	v->a[2614] = sym_variable_assignment;
	v->a[2615] = state(491);
	v->a[2616] = 1;
	v->a[2617] = aux_sym_command_repeat1;
	v->a[2618] = state(599);
	v->a[2619] = 1;
	small_parse_table_131(v);
}

void	small_parse_table_131(t_small_parse_table_array *v)
{
	v->a[2620] = sym_concatenation;
	v->a[2621] = state(615);
	v->a[2622] = 1;
	v->a[2623] = sym_file_redirect;
	v->a[2624] = state(941);
	v->a[2625] = 1;
	v->a[2626] = sym_pipeline;
	v->a[2627] = state(1015);
	v->a[2628] = 1;
	v->a[2629] = aux_sym_redirected_statement_repeat2;
	v->a[2630] = state(1610);
	v->a[2631] = 1;
	v->a[2632] = sym__statement_not_pipeline;
	v->a[2633] = state(1617);
	v->a[2634] = 1;
	v->a[2635] = sym__statements;
	v->a[2636] = actions(83);
	v->a[2637] = 2;
	v->a[2638] = anon_sym_while;
	v->a[2639] = anon_sym_until;
	small_parse_table_132(v);
}

void	small_parse_table_132(t_small_parse_table_array *v)
{
	v->a[2640] = actions(105);
	v->a[2641] = 2;
	v->a[2642] = sym_raw_string;
	v->a[2643] = sym_number;
	v->a[2644] = state(341);
	v->a[2645] = 5;
	v->a[2646] = sym_arithmetic_expansion;
	v->a[2647] = sym_string;
	v->a[2648] = sym_simple_expansion;
	v->a[2649] = sym_expansion;
	v->a[2650] = sym_command_substitution;
	v->a[2651] = actions(97);
	v->a[2652] = 7;
	v->a[2653] = anon_sym_LT;
	v->a[2654] = anon_sym_GT;
	v->a[2655] = anon_sym_GT_GT;
	v->a[2656] = anon_sym_LT_AMP;
	v->a[2657] = anon_sym_GT_AMP;
	v->a[2658] = anon_sym_GT_PIPE;
	v->a[2659] = anon_sym_LT_GT;
	small_parse_table_133(v);
}

void	small_parse_table_133(t_small_parse_table_array *v)
{
	v->a[2660] = state(819);
	v->a[2661] = 12;
	v->a[2662] = sym_redirected_statement;
	v->a[2663] = sym_for_statement;
	v->a[2664] = sym_while_statement;
	v->a[2665] = sym_if_statement;
	v->a[2666] = sym_case_statement;
	v->a[2667] = sym_function_definition;
	v->a[2668] = sym_compound_statement;
	v->a[2669] = sym_subshell;
	v->a[2670] = sym_list;
	v->a[2671] = sym_negated_command;
	v->a[2672] = sym_command;
	v->a[2673] = sym__variable_assignments;
	v->a[2674] = 30;
	v->a[2675] = actions(3);
	v->a[2676] = 1;
	v->a[2677] = sym_comment;
	v->a[2678] = actions(133);
	v->a[2679] = 1;
	small_parse_table_134(v);
}

void	small_parse_table_134(t_small_parse_table_array *v)
{
	v->a[2680] = sym_word;
	v->a[2681] = actions(136);
	v->a[2682] = 1;
	v->a[2683] = anon_sym_for;
	v->a[2684] = actions(142);
	v->a[2685] = 1;
	v->a[2686] = anon_sym_if;
	v->a[2687] = actions(147);
	v->a[2688] = 1;
	v->a[2689] = anon_sym_case;
	v->a[2690] = actions(150);
	v->a[2691] = 1;
	v->a[2692] = anon_sym_LPAREN;
	v->a[2693] = actions(153);
	v->a[2694] = 1;
	v->a[2695] = anon_sym_LBRACE;
	v->a[2696] = actions(156);
	v->a[2697] = 1;
	v->a[2698] = anon_sym_BANG;
	v->a[2699] = actions(162);
	small_parse_table_135(v);
}

/* EOF small_parse_table_26.c */
