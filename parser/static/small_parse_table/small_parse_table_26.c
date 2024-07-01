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
	v->a[2600] = sym_expansion;
	v->a[2601] = sym_command_substitution;
	v->a[2602] = actions(53);
	v->a[2603] = 7;
	v->a[2604] = anon_sym_LT;
	v->a[2605] = anon_sym_GT;
	v->a[2606] = anon_sym_GT_GT;
	v->a[2607] = anon_sym_LT_AMP;
	v->a[2608] = anon_sym_GT_AMP;
	v->a[2609] = anon_sym_GT_PIPE;
	v->a[2610] = anon_sym_LT_GT;
	v->a[2611] = state(1046);
	v->a[2612] = 12;
	v->a[2613] = sym_redirected_statement;
	v->a[2614] = sym_for_statement;
	v->a[2615] = sym_while_statement;
	v->a[2616] = sym_if_statement;
	v->a[2617] = sym_case_statement;
	v->a[2618] = sym_function_definition;
	v->a[2619] = sym_compound_statement;
	small_parse_table_131(v);
}

void	small_parse_table_131(t_small_parse_table_array *v)
{
	v->a[2620] = sym_subshell;
	v->a[2621] = sym_list;
	v->a[2622] = sym_negated_command;
	v->a[2623] = sym_command;
	v->a[2624] = sym__variable_assignments;
	v->a[2625] = 33;
	v->a[2626] = actions(3);
	v->a[2627] = 1;
	v->a[2628] = sym_comment;
	v->a[2629] = actions(9);
	v->a[2630] = 1;
	v->a[2631] = anon_sym_for;
	v->a[2632] = actions(13);
	v->a[2633] = 1;
	v->a[2634] = anon_sym_if;
	v->a[2635] = actions(15);
	v->a[2636] = 1;
	v->a[2637] = anon_sym_case;
	v->a[2638] = actions(17);
	v->a[2639] = 1;
	small_parse_table_132(v);
}

void	small_parse_table_132(t_small_parse_table_array *v)
{
	v->a[2640] = anon_sym_LPAREN;
	v->a[2641] = actions(19);
	v->a[2642] = 1;
	v->a[2643] = anon_sym_LBRACE;
	v->a[2644] = actions(43);
	v->a[2645] = 1;
	v->a[2646] = sym_word;
	v->a[2647] = actions(51);
	v->a[2648] = 1;
	v->a[2649] = anon_sym_BANG;
	v->a[2650] = actions(55);
	v->a[2651] = 1;
	v->a[2652] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[2653] = actions(57);
	v->a[2654] = 1;
	v->a[2655] = anon_sym_DOLLAR;
	v->a[2656] = actions(59);
	v->a[2657] = 1;
	v->a[2658] = anon_sym_DQUOTE;
	v->a[2659] = actions(63);
	small_parse_table_133(v);
}

void	small_parse_table_133(t_small_parse_table_array *v)
{
	v->a[2660] = 1;
	v->a[2661] = anon_sym_DOLLAR_LBRACE;
	v->a[2662] = actions(65);
	v->a[2663] = 1;
	v->a[2664] = anon_sym_DOLLAR_LPAREN;
	v->a[2665] = actions(67);
	v->a[2666] = 1;
	v->a[2667] = anon_sym_BQUOTE;
	v->a[2668] = actions(69);
	v->a[2669] = 1;
	v->a[2670] = sym_file_descriptor;
	v->a[2671] = actions(71);
	v->a[2672] = 1;
	v->a[2673] = sym_variable_name;
	v->a[2674] = actions(85);
	v->a[2675] = 1;
	v->a[2676] = anon_sym_LF;
	v->a[2677] = state(128);
	v->a[2678] = 1;
	v->a[2679] = aux_sym__statements_repeat1;
	small_parse_table_134(v);
}

void	small_parse_table_134(t_small_parse_table_array *v)
{
	v->a[2680] = state(183);
	v->a[2681] = 1;
	v->a[2682] = sym_command_name;
	v->a[2683] = state(271);
	v->a[2684] = 1;
	v->a[2685] = sym_variable_assignment;
	v->a[2686] = state(603);
	v->a[2687] = 1;
	v->a[2688] = sym_concatenation;
	v->a[2689] = state(639);
	v->a[2690] = 1;
	v->a[2691] = aux_sym_command_repeat1;
	v->a[2692] = state(644);
	v->a[2693] = 1;
	v->a[2694] = sym_file_redirect;
	v->a[2695] = state(657);
	v->a[2696] = 1;
	v->a[2697] = aux_sym__case_item_last_repeat2;
	v->a[2698] = state(1171);
	v->a[2699] = 1;
	small_parse_table_135(v);
}

/* EOF small_parse_table_26.c */
