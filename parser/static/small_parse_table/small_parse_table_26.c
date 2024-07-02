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
	v->a[2600] = anon_sym_LT;
	v->a[2601] = anon_sym_GT;
	v->a[2602] = anon_sym_GT_GT;
	v->a[2603] = anon_sym_LT_AMP;
	v->a[2604] = anon_sym_GT_AMP;
	v->a[2605] = anon_sym_GT_PIPE;
	v->a[2606] = anon_sym_LT_GT;
	v->a[2607] = state(1001);
	v->a[2608] = 12;
	v->a[2609] = sym_redirected_statement;
	v->a[2610] = sym_for_statement;
	v->a[2611] = sym_while_statement;
	v->a[2612] = sym_if_statement;
	v->a[2613] = sym_case_statement;
	v->a[2614] = sym_function_definition;
	v->a[2615] = sym_compound_statement;
	v->a[2616] = sym_subshell;
	v->a[2617] = sym_list;
	v->a[2618] = sym_negated_command;
	v->a[2619] = sym_command;
	small_parse_table_131(v);
}

void	small_parse_table_131(t_small_parse_table_array *v)
{
	v->a[2620] = sym__variable_assignments;
	v->a[2621] = 33;
	v->a[2622] = actions(3);
	v->a[2623] = 1;
	v->a[2624] = sym_comment;
	v->a[2625] = actions(83);
	v->a[2626] = 1;
	v->a[2627] = sym_word;
	v->a[2628] = actions(85);
	v->a[2629] = 1;
	v->a[2630] = anon_sym_for;
	v->a[2631] = actions(89);
	v->a[2632] = 1;
	v->a[2633] = anon_sym_if;
	v->a[2634] = actions(91);
	v->a[2635] = 1;
	v->a[2636] = anon_sym_case;
	v->a[2637] = actions(93);
	v->a[2638] = 1;
	v->a[2639] = anon_sym_LPAREN;
	small_parse_table_132(v);
}

void	small_parse_table_132(t_small_parse_table_array *v)
{
	v->a[2640] = actions(97);
	v->a[2641] = 1;
	v->a[2642] = anon_sym_LBRACE;
	v->a[2643] = actions(99);
	v->a[2644] = 1;
	v->a[2645] = anon_sym_BANG;
	v->a[2646] = actions(103);
	v->a[2647] = 1;
	v->a[2648] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[2649] = actions(105);
	v->a[2650] = 1;
	v->a[2651] = anon_sym_DOLLAR;
	v->a[2652] = actions(107);
	v->a[2653] = 1;
	v->a[2654] = anon_sym_DQUOTE;
	v->a[2655] = actions(111);
	v->a[2656] = 1;
	v->a[2657] = anon_sym_DOLLAR_LBRACE;
	v->a[2658] = actions(113);
	v->a[2659] = 1;
	small_parse_table_133(v);
}

void	small_parse_table_133(t_small_parse_table_array *v)
{
	v->a[2660] = anon_sym_DOLLAR_LPAREN;
	v->a[2661] = actions(115);
	v->a[2662] = 1;
	v->a[2663] = anon_sym_BQUOTE;
	v->a[2664] = actions(117);
	v->a[2665] = 1;
	v->a[2666] = sym_file_descriptor;
	v->a[2667] = actions(119);
	v->a[2668] = 1;
	v->a[2669] = sym_variable_name;
	v->a[2670] = actions(135);
	v->a[2671] = 1;
	v->a[2672] = anon_sym_LF;
	v->a[2673] = state(34);
	v->a[2674] = 1;
	v->a[2675] = aux_sym__case_item_last_repeat2;
	v->a[2676] = state(122);
	v->a[2677] = 1;
	v->a[2678] = aux_sym__statements_repeat1;
	v->a[2679] = state(172);
	small_parse_table_134(v);
}

void	small_parse_table_134(t_small_parse_table_array *v)
{
	v->a[2680] = 1;
	v->a[2681] = sym_command_name;
	v->a[2682] = state(234);
	v->a[2683] = 1;
	v->a[2684] = sym_variable_assignment;
	v->a[2685] = state(567);
	v->a[2686] = 1;
	v->a[2687] = sym_concatenation;
	v->a[2688] = state(634);
	v->a[2689] = 1;
	v->a[2690] = sym_file_redirect;
	v->a[2691] = state(670);
	v->a[2692] = 1;
	v->a[2693] = aux_sym_command_repeat1;
	v->a[2694] = state(1014);
	v->a[2695] = 1;
	v->a[2696] = sym_pipeline;
	v->a[2697] = state(1157);
	v->a[2698] = 1;
	v->a[2699] = aux_sym_redirected_statement_repeat2;
	small_parse_table_135(v);
}

/* EOF small_parse_table_26.c */
