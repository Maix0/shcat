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
	v->a[2700] = 5;
	v->a[2701] = sym_arithmetic_expansion;
	v->a[2702] = sym_string;
	v->a[2703] = sym_simple_expansion;
	v->a[2704] = sym_expansion;
	v->a[2705] = sym_command_substitution;
	v->a[2706] = actions(105);
	v->a[2707] = 8;
	v->a[2708] = anon_sym_LT;
	v->a[2709] = anon_sym_GT;
	v->a[2710] = anon_sym_GT_GT;
	v->a[2711] = anon_sym_AMP_GT;
	v->a[2712] = anon_sym_AMP_GT_GT;
	v->a[2713] = anon_sym_LT_AMP;
	v->a[2714] = anon_sym_GT_AMP;
	v->a[2715] = anon_sym_GT_PIPE;
	v->a[2716] = state(1296);
	v->a[2717] = 12;
	v->a[2718] = sym_redirected_statement;
	v->a[2719] = sym_for_statement;
	small_parse_table_136(v);
}

void	small_parse_table_136(t_small_parse_table_array *v)
{
	v->a[2720] = sym_while_statement;
	v->a[2721] = sym_if_statement;
	v->a[2722] = sym_case_statement;
	v->a[2723] = sym_function_definition;
	v->a[2724] = sym_compound_statement;
	v->a[2725] = sym_subshell;
	v->a[2726] = sym_list;
	v->a[2727] = sym_negated_command;
	v->a[2728] = sym_command;
	v->a[2729] = sym__variable_assignments;
	v->a[2730] = 32;
	v->a[2731] = actions(3);
	v->a[2732] = 1;
	v->a[2733] = sym_comment;
	v->a[2734] = actions(143);
	v->a[2735] = 1;
	v->a[2736] = sym_word;
	v->a[2737] = actions(146);
	v->a[2738] = 1;
	v->a[2739] = anon_sym_for;
	small_parse_table_137(v);
}

void	small_parse_table_137(t_small_parse_table_array *v)
{
	v->a[2740] = actions(152);
	v->a[2741] = 1;
	v->a[2742] = anon_sym_if;
	v->a[2743] = actions(157);
	v->a[2744] = 1;
	v->a[2745] = anon_sym_case;
	v->a[2746] = actions(160);
	v->a[2747] = 1;
	v->a[2748] = anon_sym_LPAREN;
	v->a[2749] = actions(163);
	v->a[2750] = 1;
	v->a[2751] = anon_sym_LBRACE;
	v->a[2752] = actions(166);
	v->a[2753] = 1;
	v->a[2754] = anon_sym_BANG;
	v->a[2755] = actions(175);
	v->a[2756] = 1;
	v->a[2757] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[2758] = actions(178);
	v->a[2759] = 1;
	small_parse_table_138(v);
}

void	small_parse_table_138(t_small_parse_table_array *v)
{
	v->a[2760] = anon_sym_DOLLAR;
	v->a[2761] = actions(181);
	v->a[2762] = 1;
	v->a[2763] = anon_sym_DQUOTE;
	v->a[2764] = actions(187);
	v->a[2765] = 1;
	v->a[2766] = anon_sym_DOLLAR_LBRACE;
	v->a[2767] = actions(190);
	v->a[2768] = 1;
	v->a[2769] = anon_sym_DOLLAR_LPAREN;
	v->a[2770] = actions(193);
	v->a[2771] = 1;
	v->a[2772] = anon_sym_BQUOTE;
	v->a[2773] = actions(196);
	v->a[2774] = 1;
	v->a[2775] = sym_file_descriptor;
	v->a[2776] = actions(199);
	v->a[2777] = 1;
	v->a[2778] = sym_variable_name;
	v->a[2779] = state(23);
	small_parse_table_139(v);
}

void	small_parse_table_139(t_small_parse_table_array *v)
{
	v->a[2780] = 1;
	v->a[2781] = aux_sym__terminated_statement;
	v->a[2782] = state(187);
	v->a[2783] = 1;
	v->a[2784] = sym_command_name;
	v->a[2785] = state(288);
	v->a[2786] = 1;
	v->a[2787] = sym_variable_assignment;
	v->a[2788] = state(647);
	v->a[2789] = 1;
	v->a[2790] = sym_concatenation;
	v->a[2791] = state(736);
	v->a[2792] = 1;
	v->a[2793] = aux_sym_command_repeat1;
	v->a[2794] = state(738);
	v->a[2795] = 1;
	v->a[2796] = sym_file_redirect;
	v->a[2797] = state(1443);
	v->a[2798] = 1;
	v->a[2799] = sym_pipeline;
	small_parse_table_140(v);
}

/* EOF small_parse_table_27.c */
