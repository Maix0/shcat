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
	v->a[2600] = anon_sym_GT_AMP;
	v->a[2601] = anon_sym_GT_PIPE;
	v->a[2602] = anon_sym_LT_GT;
	v->a[2603] = state(1075);
	v->a[2604] = 12;
	v->a[2605] = sym_redirected_statement;
	v->a[2606] = sym_for_statement;
	v->a[2607] = sym_while_statement;
	v->a[2608] = sym_if_statement;
	v->a[2609] = sym_case_statement;
	v->a[2610] = sym_function_definition;
	v->a[2611] = sym_compound_statement;
	v->a[2612] = sym_subshell;
	v->a[2613] = sym_list;
	v->a[2614] = sym_negated_command;
	v->a[2615] = sym_command;
	v->a[2616] = sym__variable_assignments;
	v->a[2617] = 31;
	v->a[2618] = actions(3);
	v->a[2619] = 1;
	small_parse_table_131(v);
}

void	small_parse_table_131(t_small_parse_table_array *v)
{
	v->a[2620] = sym_comment;
	v->a[2621] = actions(9);
	v->a[2622] = 1;
	v->a[2623] = anon_sym_for;
	v->a[2624] = actions(13);
	v->a[2625] = 1;
	v->a[2626] = anon_sym_if;
	v->a[2627] = actions(15);
	v->a[2628] = 1;
	v->a[2629] = anon_sym_case;
	v->a[2630] = actions(17);
	v->a[2631] = 1;
	v->a[2632] = anon_sym_LPAREN;
	v->a[2633] = actions(19);
	v->a[2634] = 1;
	v->a[2635] = anon_sym_LBRACE;
	v->a[2636] = actions(43);
	v->a[2637] = 1;
	v->a[2638] = sym_word;
	v->a[2639] = actions(51);
	small_parse_table_132(v);
}

void	small_parse_table_132(t_small_parse_table_array *v)
{
	v->a[2640] = 1;
	v->a[2641] = anon_sym_BANG;
	v->a[2642] = actions(55);
	v->a[2643] = 1;
	v->a[2644] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[2645] = actions(57);
	v->a[2646] = 1;
	v->a[2647] = anon_sym_DOLLAR;
	v->a[2648] = actions(59);
	v->a[2649] = 1;
	v->a[2650] = anon_sym_DQUOTE;
	v->a[2651] = actions(63);
	v->a[2652] = 1;
	v->a[2653] = anon_sym_DOLLAR_LBRACE;
	v->a[2654] = actions(65);
	v->a[2655] = 1;
	v->a[2656] = anon_sym_DOLLAR_LPAREN;
	v->a[2657] = actions(67);
	v->a[2658] = 1;
	v->a[2659] = anon_sym_BQUOTE;
	small_parse_table_133(v);
}

void	small_parse_table_133(t_small_parse_table_array *v)
{
	v->a[2660] = actions(69);
	v->a[2661] = 1;
	v->a[2662] = sym_file_descriptor;
	v->a[2663] = actions(71);
	v->a[2664] = 1;
	v->a[2665] = sym_variable_name;
	v->a[2666] = state(22);
	v->a[2667] = 1;
	v->a[2668] = aux_sym__terminated_statement;
	v->a[2669] = state(183);
	v->a[2670] = 1;
	v->a[2671] = sym_command_name;
	v->a[2672] = state(342);
	v->a[2673] = 1;
	v->a[2674] = sym_variable_assignment;
	v->a[2675] = state(655);
	v->a[2676] = 1;
	v->a[2677] = aux_sym_command_repeat1;
	v->a[2678] = state(661);
	v->a[2679] = 1;
	small_parse_table_134(v);
}

void	small_parse_table_134(t_small_parse_table_array *v)
{
	v->a[2680] = sym_concatenation;
	v->a[2681] = state(665);
	v->a[2682] = 1;
	v->a[2683] = sym_file_redirect;
	v->a[2684] = state(1192);
	v->a[2685] = 1;
	v->a[2686] = sym_pipeline;
	v->a[2687] = state(1198);
	v->a[2688] = 1;
	v->a[2689] = aux_sym_redirected_statement_repeat2;
	v->a[2690] = state(1901);
	v->a[2691] = 1;
	v->a[2692] = sym__statement_not_pipeline;
	v->a[2693] = actions(11);
	v->a[2694] = 2;
	v->a[2695] = anon_sym_while;
	v->a[2696] = anon_sym_until;
	v->a[2697] = actions(61);
	v->a[2698] = 2;
	v->a[2699] = sym_raw_string;
	small_parse_table_135(v);
}

/* EOF small_parse_table_26.c */
