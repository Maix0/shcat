/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_27.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_135(t_small_parse_table_array *v)
{
	v->a[2700] = actions(19);
	v->a[2701] = 1;
	v->a[2702] = anon_sym_LBRACE;
	v->a[2703] = actions(45);
	v->a[2704] = 1;
	v->a[2705] = sym_word;
	v->a[2706] = actions(53);
	v->a[2707] = 1;
	v->a[2708] = anon_sym_BANG;
	v->a[2709] = actions(59);
	v->a[2710] = 1;
	v->a[2711] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[2712] = actions(61);
	v->a[2713] = 1;
	v->a[2714] = anon_sym_DOLLAR;
	v->a[2715] = actions(63);
	v->a[2716] = 1;
	v->a[2717] = anon_sym_DQUOTE;
	v->a[2718] = actions(67);
	v->a[2719] = 1;
	small_parse_table_136(v);
}

void	small_parse_table_136(t_small_parse_table_array *v)
{
	v->a[2720] = anon_sym_DOLLAR_LBRACE;
	v->a[2721] = actions(69);
	v->a[2722] = 1;
	v->a[2723] = anon_sym_DOLLAR_LPAREN;
	v->a[2724] = actions(71);
	v->a[2725] = 1;
	v->a[2726] = anon_sym_BQUOTE;
	v->a[2727] = actions(73);
	v->a[2728] = 1;
	v->a[2729] = sym_file_descriptor;
	v->a[2730] = actions(75);
	v->a[2731] = 1;
	v->a[2732] = sym_variable_name;
	v->a[2733] = actions(196);
	v->a[2734] = 1;
	v->a[2735] = anon_sym_LF;
	v->a[2736] = state(13);
	v->a[2737] = 1;
	v->a[2738] = aux_sym__case_item_last_repeat2;
	v->a[2739] = state(135);
	small_parse_table_137(v);
}

void	small_parse_table_137(t_small_parse_table_array *v)
{
	v->a[2740] = 1;
	v->a[2741] = aux_sym__statements_repeat1;
	v->a[2742] = state(189);
	v->a[2743] = 1;
	v->a[2744] = sym_command_name;
	v->a[2745] = state(303);
	v->a[2746] = 1;
	v->a[2747] = sym_variable_assignment;
	v->a[2748] = state(650);
	v->a[2749] = 1;
	v->a[2750] = sym_concatenation;
	v->a[2751] = state(712);
	v->a[2752] = 1;
	v->a[2753] = sym_file_redirect;
	v->a[2754] = state(713);
	v->a[2755] = 1;
	v->a[2756] = aux_sym_command_repeat1;
	v->a[2757] = state(1227);
	v->a[2758] = 1;
	v->a[2759] = sym_pipeline;
	small_parse_table_138(v);
}

void	small_parse_table_138(t_small_parse_table_array *v)
{
	v->a[2760] = state(1333);
	v->a[2761] = 1;
	v->a[2762] = aux_sym_redirected_statement_repeat2;
	v->a[2763] = state(2103);
	v->a[2764] = 1;
	v->a[2765] = sym__statement_not_pipeline;
	v->a[2766] = state(2187);
	v->a[2767] = 1;
	v->a[2768] = sym__statements;
	v->a[2769] = actions(11);
	v->a[2770] = 2;
	v->a[2771] = anon_sym_while;
	v->a[2772] = anon_sym_until;
	v->a[2773] = actions(57);
	v->a[2774] = 2;
	v->a[2775] = anon_sym_LT_AMP_DASH;
	v->a[2776] = anon_sym_GT_AMP_DASH;
	v->a[2777] = actions(65);
	v->a[2778] = 2;
	v->a[2779] = sym_raw_string;
	small_parse_table_139(v);
}

void	small_parse_table_139(t_small_parse_table_array *v)
{
	v->a[2780] = sym_number;
	v->a[2781] = state(443);
	v->a[2782] = 5;
	v->a[2783] = sym_arithmetic_expansion;
	v->a[2784] = sym_string;
	v->a[2785] = sym_simple_expansion;
	v->a[2786] = sym_expansion;
	v->a[2787] = sym_command_substitution;
	v->a[2788] = actions(55);
	v->a[2789] = 6;
	v->a[2790] = anon_sym_LT;
	v->a[2791] = anon_sym_GT;
	v->a[2792] = anon_sym_GT_GT;
	v->a[2793] = anon_sym_LT_AMP;
	v->a[2794] = anon_sym_GT_AMP;
	v->a[2795] = anon_sym_GT_PIPE;
	v->a[2796] = state(1179);
	v->a[2797] = 12;
	v->a[2798] = sym_redirected_statement;
	v->a[2799] = sym_for_statement;
	small_parse_table_140(v);
}

/* EOF small_parse_table_27.c */
