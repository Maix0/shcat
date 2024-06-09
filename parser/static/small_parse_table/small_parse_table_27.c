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
	v->a[2700] = state(1183);
	v->a[2701] = 12;
	v->a[2702] = sym_redirected_statement;
	v->a[2703] = sym_for_statement;
	v->a[2704] = sym_while_statement;
	v->a[2705] = sym_if_statement;
	v->a[2706] = sym_case_statement;
	v->a[2707] = sym_function_definition;
	v->a[2708] = sym_compound_statement;
	v->a[2709] = sym_subshell;
	v->a[2710] = sym_list;
	v->a[2711] = sym_negated_command;
	v->a[2712] = sym_command;
	v->a[2713] = sym_variable_assignments;
	v->a[2714] = 36;
	v->a[2715] = actions(3);
	v->a[2716] = 1;
	v->a[2717] = sym_comment;
	v->a[2718] = actions(9);
	v->a[2719] = 1;
	small_parse_table_136(v);
}

void	small_parse_table_136(t_small_parse_table_array *v)
{
	v->a[2720] = anon_sym_for;
	v->a[2721] = actions(13);
	v->a[2722] = 1;
	v->a[2723] = anon_sym_if;
	v->a[2724] = actions(15);
	v->a[2725] = 1;
	v->a[2726] = anon_sym_case;
	v->a[2727] = actions(17);
	v->a[2728] = 1;
	v->a[2729] = anon_sym_LPAREN;
	v->a[2730] = actions(19);
	v->a[2731] = 1;
	v->a[2732] = anon_sym_LBRACE;
	v->a[2733] = actions(49);
	v->a[2734] = 1;
	v->a[2735] = sym_word;
	v->a[2736] = actions(57);
	v->a[2737] = 1;
	v->a[2738] = anon_sym_BANG;
	v->a[2739] = actions(63);
	small_parse_table_137(v);
}

void	small_parse_table_137(t_small_parse_table_array *v)
{
	v->a[2740] = 1;
	v->a[2741] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[2742] = actions(65);
	v->a[2743] = 1;
	v->a[2744] = anon_sym_DOLLAR;
	v->a[2745] = actions(67);
	v->a[2746] = 1;
	v->a[2747] = anon_sym_DQUOTE;
	v->a[2748] = actions(69);
	v->a[2749] = 1;
	v->a[2750] = sym_raw_string;
	v->a[2751] = actions(71);
	v->a[2752] = 1;
	v->a[2753] = aux_sym_number_token1;
	v->a[2754] = actions(73);
	v->a[2755] = 1;
	v->a[2756] = aux_sym_number_token2;
	v->a[2757] = actions(75);
	v->a[2758] = 1;
	v->a[2759] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_138(v);
}

void	small_parse_table_138(t_small_parse_table_array *v)
{
	v->a[2760] = actions(77);
	v->a[2761] = 1;
	v->a[2762] = anon_sym_DOLLAR_LPAREN;
	v->a[2763] = actions(79);
	v->a[2764] = 1;
	v->a[2765] = anon_sym_BQUOTE;
	v->a[2766] = actions(81);
	v->a[2767] = 1;
	v->a[2768] = sym_file_descriptor;
	v->a[2769] = actions(83);
	v->a[2770] = 1;
	v->a[2771] = sym_variable_name;
	v->a[2772] = actions(141);
	v->a[2773] = 1;
	v->a[2774] = anon_sym_LF;
	v->a[2775] = state(131);
	v->a[2776] = 1;
	v->a[2777] = aux_sym__statements_repeat1;
	v->a[2778] = state(190);
	v->a[2779] = 1;
	small_parse_table_139(v);
}

void	small_parse_table_139(t_small_parse_table_array *v)
{
	v->a[2780] = sym_command_name;
	v->a[2781] = state(314);
	v->a[2782] = 1;
	v->a[2783] = sym_variable_assignment;
	v->a[2784] = state(582);
	v->a[2785] = 1;
	v->a[2786] = sym_concatenation;
	v->a[2787] = state(587);
	v->a[2788] = 1;
	v->a[2789] = aux_sym_command_repeat1;
	v->a[2790] = state(689);
	v->a[2791] = 1;
	v->a[2792] = aux_sym__case_item_last_repeat2;
	v->a[2793] = state(718);
	v->a[2794] = 1;
	v->a[2795] = sym_file_redirect;
	v->a[2796] = state(1211);
	v->a[2797] = 1;
	v->a[2798] = sym_pipeline;
	v->a[2799] = state(1213);
	small_parse_table_140(v);
}

/* EOF small_parse_table_27.c */
