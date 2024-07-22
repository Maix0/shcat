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
	v->a[2700] = sym_number;
	v->a[2701] = actions(191);
	v->a[2702] = 3;
	v->a[2703] = anon_sym_fi;
	v->a[2704] = anon_sym_elif;
	v->a[2705] = anon_sym_else;
	v->a[2706] = state(455);
	v->a[2707] = 5;
	v->a[2708] = sym_arithmetic_expansion;
	v->a[2709] = sym_string;
	v->a[2710] = sym_simple_expansion;
	v->a[2711] = sym_expansion;
	v->a[2712] = sym_command_substitution;
	v->a[2713] = actions(53);
	v->a[2714] = 7;
	v->a[2715] = anon_sym_LT;
	v->a[2716] = anon_sym_GT;
	v->a[2717] = anon_sym_GT_GT;
	v->a[2718] = anon_sym_LT_AMP;
	v->a[2719] = anon_sym_GT_AMP;
	small_parse_table_136(v);
}

void	small_parse_table_136(t_small_parse_table_array *v)
{
	v->a[2720] = anon_sym_GT_PIPE;
	v->a[2721] = anon_sym_LT_GT;
	v->a[2722] = state(1075);
	v->a[2723] = 12;
	v->a[2724] = sym_redirected_statement;
	v->a[2725] = sym_for_statement;
	v->a[2726] = sym_while_statement;
	v->a[2727] = sym_if_statement;
	v->a[2728] = sym_case_statement;
	v->a[2729] = sym_function_definition;
	v->a[2730] = sym_compound_statement;
	v->a[2731] = sym_subshell;
	v->a[2732] = sym_list;
	v->a[2733] = sym_negated_command;
	v->a[2734] = sym_command;
	v->a[2735] = sym__variable_assignments;
	v->a[2736] = 33;
	v->a[2737] = actions(3);
	v->a[2738] = 1;
	v->a[2739] = sym_comment;
	small_parse_table_137(v);
}

void	small_parse_table_137(t_small_parse_table_array *v)
{
	v->a[2740] = actions(9);
	v->a[2741] = 1;
	v->a[2742] = anon_sym_for;
	v->a[2743] = actions(13);
	v->a[2744] = 1;
	v->a[2745] = anon_sym_if;
	v->a[2746] = actions(15);
	v->a[2747] = 1;
	v->a[2748] = anon_sym_case;
	v->a[2749] = actions(17);
	v->a[2750] = 1;
	v->a[2751] = anon_sym_LPAREN;
	v->a[2752] = actions(19);
	v->a[2753] = 1;
	v->a[2754] = anon_sym_LBRACE;
	v->a[2755] = actions(43);
	v->a[2756] = 1;
	v->a[2757] = sym_word;
	v->a[2758] = actions(51);
	v->a[2759] = 1;
	small_parse_table_138(v);
}

void	small_parse_table_138(t_small_parse_table_array *v)
{
	v->a[2760] = anon_sym_BANG;
	v->a[2761] = actions(55);
	v->a[2762] = 1;
	v->a[2763] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[2764] = actions(57);
	v->a[2765] = 1;
	v->a[2766] = anon_sym_DOLLAR;
	v->a[2767] = actions(59);
	v->a[2768] = 1;
	v->a[2769] = anon_sym_DQUOTE;
	v->a[2770] = actions(63);
	v->a[2771] = 1;
	v->a[2772] = anon_sym_DOLLAR_LBRACE;
	v->a[2773] = actions(65);
	v->a[2774] = 1;
	v->a[2775] = anon_sym_DOLLAR_LPAREN;
	v->a[2776] = actions(67);
	v->a[2777] = 1;
	v->a[2778] = anon_sym_BQUOTE;
	v->a[2779] = actions(69);
	small_parse_table_139(v);
}

void	small_parse_table_139(t_small_parse_table_array *v)
{
	v->a[2780] = 1;
	v->a[2781] = sym_file_descriptor;
	v->a[2782] = actions(71);
	v->a[2783] = 1;
	v->a[2784] = sym_variable_name;
	v->a[2785] = actions(125);
	v->a[2786] = 1;
	v->a[2787] = anon_sym_LF;
	v->a[2788] = state(119);
	v->a[2789] = 1;
	v->a[2790] = aux_sym__statements_repeat1;
	v->a[2791] = state(183);
	v->a[2792] = 1;
	v->a[2793] = sym_command_name;
	v->a[2794] = state(323);
	v->a[2795] = 1;
	v->a[2796] = sym_variable_assignment;
	v->a[2797] = state(584);
	v->a[2798] = 1;
	v->a[2799] = aux_sym__case_item_last_repeat2;
	small_parse_table_140(v);
}

/* EOF small_parse_table_27.c */
