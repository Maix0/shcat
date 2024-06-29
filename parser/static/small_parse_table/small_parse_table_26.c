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
	v->a[2600] = sym_command;
	v->a[2601] = sym__variable_assignments;
	v->a[2602] = 34;
	v->a[2603] = actions(3);
	v->a[2604] = 1;
	v->a[2605] = sym_comment;
	v->a[2606] = actions(87);
	v->a[2607] = 1;
	v->a[2608] = sym_word;
	v->a[2609] = actions(89);
	v->a[2610] = 1;
	v->a[2611] = anon_sym_for;
	v->a[2612] = actions(93);
	v->a[2613] = 1;
	v->a[2614] = anon_sym_if;
	v->a[2615] = actions(95);
	v->a[2616] = 1;
	v->a[2617] = anon_sym_case;
	v->a[2618] = actions(97);
	v->a[2619] = 1;
	small_parse_table_131(v);
}

void	small_parse_table_131(t_small_parse_table_array *v)
{
	v->a[2620] = anon_sym_LPAREN;
	v->a[2621] = actions(99);
	v->a[2622] = 1;
	v->a[2623] = anon_sym_LF;
	v->a[2624] = actions(101);
	v->a[2625] = 1;
	v->a[2626] = anon_sym_LBRACE;
	v->a[2627] = actions(103);
	v->a[2628] = 1;
	v->a[2629] = anon_sym_BANG;
	v->a[2630] = actions(109);
	v->a[2631] = 1;
	v->a[2632] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[2633] = actions(111);
	v->a[2634] = 1;
	v->a[2635] = anon_sym_DOLLAR;
	v->a[2636] = actions(113);
	v->a[2637] = 1;
	v->a[2638] = anon_sym_DQUOTE;
	v->a[2639] = actions(117);
	small_parse_table_132(v);
}

void	small_parse_table_132(t_small_parse_table_array *v)
{
	v->a[2640] = 1;
	v->a[2641] = anon_sym_DOLLAR_LBRACE;
	v->a[2642] = actions(119);
	v->a[2643] = 1;
	v->a[2644] = anon_sym_DOLLAR_LPAREN;
	v->a[2645] = actions(121);
	v->a[2646] = 1;
	v->a[2647] = anon_sym_BQUOTE;
	v->a[2648] = actions(123);
	v->a[2649] = 1;
	v->a[2650] = sym_file_descriptor;
	v->a[2651] = actions(125);
	v->a[2652] = 1;
	v->a[2653] = sym_variable_name;
	v->a[2654] = state(134);
	v->a[2655] = 1;
	v->a[2656] = aux_sym__statements_repeat1;
	v->a[2657] = state(184);
	v->a[2658] = 1;
	v->a[2659] = sym_command_name;
	small_parse_table_133(v);
}

void	small_parse_table_133(t_small_parse_table_array *v)
{
	v->a[2660] = state(229);
	v->a[2661] = 1;
	v->a[2662] = sym_variable_assignment;
	v->a[2663] = state(622);
	v->a[2664] = 1;
	v->a[2665] = sym_concatenation;
	v->a[2666] = state(709);
	v->a[2667] = 1;
	v->a[2668] = aux_sym__case_item_last_repeat2;
	v->a[2669] = state(727);
	v->a[2670] = 1;
	v->a[2671] = aux_sym_command_repeat1;
	v->a[2672] = state(744);
	v->a[2673] = 1;
	v->a[2674] = sym_file_redirect;
	v->a[2675] = state(1096);
	v->a[2676] = 1;
	v->a[2677] = sym_pipeline;
	v->a[2678] = state(1215);
	v->a[2679] = 1;
	small_parse_table_134(v);
}

void	small_parse_table_134(t_small_parse_table_array *v)
{
	v->a[2680] = aux_sym_redirected_statement_repeat2;
	v->a[2681] = state(2120);
	v->a[2682] = 1;
	v->a[2683] = sym__statements;
	v->a[2684] = state(2122);
	v->a[2685] = 1;
	v->a[2686] = sym__statement_not_pipeline;
	v->a[2687] = actions(91);
	v->a[2688] = 2;
	v->a[2689] = anon_sym_while;
	v->a[2690] = anon_sym_until;
	v->a[2691] = actions(107);
	v->a[2692] = 2;
	v->a[2693] = anon_sym_LT_AMP_DASH;
	v->a[2694] = anon_sym_GT_AMP_DASH;
	v->a[2695] = actions(115);
	v->a[2696] = 2;
	v->a[2697] = sym_raw_string;
	v->a[2698] = sym_number;
	v->a[2699] = state(289);
	small_parse_table_135(v);
}

/* EOF small_parse_table_26.c */
