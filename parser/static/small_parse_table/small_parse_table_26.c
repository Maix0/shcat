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
	v->a[2600] = 1;
	v->a[2601] = anon_sym_LPAREN;
	v->a[2602] = actions(19);
	v->a[2603] = 1;
	v->a[2604] = anon_sym_LBRACE;
	v->a[2605] = actions(41);
	v->a[2606] = 1;
	v->a[2607] = sym_word;
	v->a[2608] = actions(49);
	v->a[2609] = 1;
	v->a[2610] = anon_sym_BANG;
	v->a[2611] = actions(53);
	v->a[2612] = 1;
	v->a[2613] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[2614] = actions(55);
	v->a[2615] = 1;
	v->a[2616] = anon_sym_DOLLAR;
	v->a[2617] = actions(57);
	v->a[2618] = 1;
	v->a[2619] = anon_sym_DQUOTE;
	small_parse_table_131(v);
}

void	small_parse_table_131(t_small_parse_table_array *v)
{
	v->a[2620] = actions(61);
	v->a[2621] = 1;
	v->a[2622] = anon_sym_DOLLAR_LBRACE;
	v->a[2623] = actions(63);
	v->a[2624] = 1;
	v->a[2625] = anon_sym_DOLLAR_LPAREN;
	v->a[2626] = actions(65);
	v->a[2627] = 1;
	v->a[2628] = anon_sym_BQUOTE;
	v->a[2629] = actions(67);
	v->a[2630] = 1;
	v->a[2631] = sym_variable_name;
	v->a[2632] = actions(115);
	v->a[2633] = 1;
	v->a[2634] = anon_sym_LF;
	v->a[2635] = state(118);
	v->a[2636] = 1;
	v->a[2637] = aux_sym__statements_repeat1;
	v->a[2638] = state(185);
	v->a[2639] = 1;
	small_parse_table_132(v);
}

void	small_parse_table_132(t_small_parse_table_array *v)
{
	v->a[2640] = sym_command_name;
	v->a[2641] = state(216);
	v->a[2642] = 1;
	v->a[2643] = sym_variable_assignment;
	v->a[2644] = state(326);
	v->a[2645] = 1;
	v->a[2646] = aux_sym__case_item_last_repeat2;
	v->a[2647] = state(411);
	v->a[2648] = 1;
	v->a[2649] = aux_sym_command_repeat1;
	v->a[2650] = state(551);
	v->a[2651] = 1;
	v->a[2652] = sym_file_redirect;
	v->a[2653] = state(555);
	v->a[2654] = 1;
	v->a[2655] = sym_concatenation;
	v->a[2656] = state(991);
	v->a[2657] = 1;
	v->a[2658] = sym_pipeline;
	v->a[2659] = state(1126);
	small_parse_table_133(v);
}

void	small_parse_table_133(t_small_parse_table_array *v)
{
	v->a[2660] = 1;
	v->a[2661] = aux_sym_redirected_statement_repeat2;
	v->a[2662] = state(1561);
	v->a[2663] = 1;
	v->a[2664] = sym__statement_not_pipeline;
	v->a[2665] = state(1635);
	v->a[2666] = 1;
	v->a[2667] = sym__statements;
	v->a[2668] = actions(11);
	v->a[2669] = 2;
	v->a[2670] = anon_sym_while;
	v->a[2671] = anon_sym_until;
	v->a[2672] = actions(59);
	v->a[2673] = 2;
	v->a[2674] = sym_raw_string;
	v->a[2675] = sym_number;
	v->a[2676] = actions(51);
	v->a[2677] = 3;
	v->a[2678] = anon_sym_LT;
	v->a[2679] = anon_sym_GT;
	small_parse_table_134(v);
}

void	small_parse_table_134(t_small_parse_table_array *v)
{
	v->a[2680] = anon_sym_GT_GT;
	v->a[2681] = state(401);
	v->a[2682] = 5;
	v->a[2683] = sym_arithmetic_expansion;
	v->a[2684] = sym_string;
	v->a[2685] = sym_simple_expansion;
	v->a[2686] = sym_expansion;
	v->a[2687] = sym_command_substitution;
	v->a[2688] = state(972);
	v->a[2689] = 12;
	v->a[2690] = sym_redirected_statement;
	v->a[2691] = sym_for_statement;
	v->a[2692] = sym_while_statement;
	v->a[2693] = sym_if_statement;
	v->a[2694] = sym_case_statement;
	v->a[2695] = sym_function_definition;
	v->a[2696] = sym_compound_statement;
	v->a[2697] = sym_subshell;
	v->a[2698] = sym_list;
	v->a[2699] = sym_negated_command;
	small_parse_table_135(v);
}

/* EOF small_parse_table_26.c */
