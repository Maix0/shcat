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
	v->a[2700] = state(1901);
	v->a[2701] = 1;
	v->a[2702] = sym__statement_not_pipeline;
	v->a[2703] = state(1910);
	v->a[2704] = 1;
	v->a[2705] = sym__statements;
	v->a[2706] = actions(87);
	v->a[2707] = 2;
	v->a[2708] = anon_sym_while;
	v->a[2709] = anon_sym_until;
	v->a[2710] = actions(109);
	v->a[2711] = 2;
	v->a[2712] = sym_raw_string;
	v->a[2713] = sym_number;
	v->a[2714] = state(348);
	v->a[2715] = 5;
	v->a[2716] = sym_arithmetic_expansion;
	v->a[2717] = sym_string;
	v->a[2718] = sym_simple_expansion;
	v->a[2719] = sym_expansion;
	small_parse_table_136(v);
}

void	small_parse_table_136(t_small_parse_table_array *v)
{
	v->a[2720] = sym_command_substitution;
	v->a[2721] = actions(101);
	v->a[2722] = 7;
	v->a[2723] = anon_sym_LT;
	v->a[2724] = anon_sym_GT;
	v->a[2725] = anon_sym_GT_GT;
	v->a[2726] = anon_sym_LT_AMP;
	v->a[2727] = anon_sym_GT_AMP;
	v->a[2728] = anon_sym_GT_PIPE;
	v->a[2729] = anon_sym_LT_GT;
	v->a[2730] = state(1001);
	v->a[2731] = 12;
	v->a[2732] = sym_redirected_statement;
	v->a[2733] = sym_for_statement;
	v->a[2734] = sym_while_statement;
	v->a[2735] = sym_if_statement;
	v->a[2736] = sym_case_statement;
	v->a[2737] = sym_function_definition;
	v->a[2738] = sym_compound_statement;
	v->a[2739] = sym_subshell;
	small_parse_table_137(v);
}

void	small_parse_table_137(t_small_parse_table_array *v)
{
	v->a[2740] = sym_list;
	v->a[2741] = sym_negated_command;
	v->a[2742] = sym_command;
	v->a[2743] = sym__variable_assignments;
	v->a[2744] = 33;
	v->a[2745] = actions(3);
	v->a[2746] = 1;
	v->a[2747] = sym_comment;
	v->a[2748] = actions(9);
	v->a[2749] = 1;
	v->a[2750] = anon_sym_for;
	v->a[2751] = actions(13);
	v->a[2752] = 1;
	v->a[2753] = anon_sym_if;
	v->a[2754] = actions(15);
	v->a[2755] = 1;
	v->a[2756] = anon_sym_case;
	v->a[2757] = actions(17);
	v->a[2758] = 1;
	v->a[2759] = anon_sym_LPAREN;
	small_parse_table_138(v);
}

void	small_parse_table_138(t_small_parse_table_array *v)
{
	v->a[2760] = actions(19);
	v->a[2761] = 1;
	v->a[2762] = anon_sym_LBRACE;
	v->a[2763] = actions(43);
	v->a[2764] = 1;
	v->a[2765] = sym_word;
	v->a[2766] = actions(51);
	v->a[2767] = 1;
	v->a[2768] = anon_sym_BANG;
	v->a[2769] = actions(55);
	v->a[2770] = 1;
	v->a[2771] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[2772] = actions(57);
	v->a[2773] = 1;
	v->a[2774] = anon_sym_DOLLAR;
	v->a[2775] = actions(59);
	v->a[2776] = 1;
	v->a[2777] = anon_sym_DQUOTE;
	v->a[2778] = actions(63);
	v->a[2779] = 1;
	small_parse_table_139(v);
}

void	small_parse_table_139(t_small_parse_table_array *v)
{
	v->a[2780] = anon_sym_DOLLAR_LBRACE;
	v->a[2781] = actions(65);
	v->a[2782] = 1;
	v->a[2783] = anon_sym_DOLLAR_LPAREN;
	v->a[2784] = actions(67);
	v->a[2785] = 1;
	v->a[2786] = anon_sym_BQUOTE;
	v->a[2787] = actions(69);
	v->a[2788] = 1;
	v->a[2789] = sym_file_descriptor;
	v->a[2790] = actions(71);
	v->a[2791] = 1;
	v->a[2792] = sym_variable_name;
	v->a[2793] = actions(95);
	v->a[2794] = 1;
	v->a[2795] = anon_sym_LF;
	v->a[2796] = state(129);
	v->a[2797] = 1;
	v->a[2798] = aux_sym__statements_repeat1;
	v->a[2799] = state(182);
	small_parse_table_140(v);
}

/* EOF small_parse_table_27.c */
