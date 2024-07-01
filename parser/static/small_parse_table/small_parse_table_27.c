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
	v->a[2700] = sym_pipeline;
	v->a[2701] = state(1196);
	v->a[2702] = 1;
	v->a[2703] = aux_sym_redirected_statement_repeat2;
	v->a[2704] = state(1910);
	v->a[2705] = 1;
	v->a[2706] = sym__statement_not_pipeline;
	v->a[2707] = state(2009);
	v->a[2708] = 1;
	v->a[2709] = sym__statements;
	v->a[2710] = actions(11);
	v->a[2711] = 2;
	v->a[2712] = anon_sym_while;
	v->a[2713] = anon_sym_until;
	v->a[2714] = actions(61);
	v->a[2715] = 2;
	v->a[2716] = sym_raw_string;
	v->a[2717] = sym_number;
	v->a[2718] = state(436);
	v->a[2719] = 5;
	small_parse_table_136(v);
}

void	small_parse_table_136(t_small_parse_table_array *v)
{
	v->a[2720] = sym_arithmetic_expansion;
	v->a[2721] = sym_string;
	v->a[2722] = sym_simple_expansion;
	v->a[2723] = sym_expansion;
	v->a[2724] = sym_command_substitution;
	v->a[2725] = actions(53);
	v->a[2726] = 7;
	v->a[2727] = anon_sym_LT;
	v->a[2728] = anon_sym_GT;
	v->a[2729] = anon_sym_GT_GT;
	v->a[2730] = anon_sym_LT_AMP;
	v->a[2731] = anon_sym_GT_AMP;
	v->a[2732] = anon_sym_GT_PIPE;
	v->a[2733] = anon_sym_LT_GT;
	v->a[2734] = state(1046);
	v->a[2735] = 12;
	v->a[2736] = sym_redirected_statement;
	v->a[2737] = sym_for_statement;
	v->a[2738] = sym_while_statement;
	v->a[2739] = sym_if_statement;
	small_parse_table_137(v);
}

void	small_parse_table_137(t_small_parse_table_array *v)
{
	v->a[2740] = sym_case_statement;
	v->a[2741] = sym_function_definition;
	v->a[2742] = sym_compound_statement;
	v->a[2743] = sym_subshell;
	v->a[2744] = sym_list;
	v->a[2745] = sym_negated_command;
	v->a[2746] = sym_command;
	v->a[2747] = sym__variable_assignments;
	v->a[2748] = 33;
	v->a[2749] = actions(3);
	v->a[2750] = 1;
	v->a[2751] = sym_comment;
	v->a[2752] = actions(87);
	v->a[2753] = 1;
	v->a[2754] = sym_word;
	v->a[2755] = actions(89);
	v->a[2756] = 1;
	v->a[2757] = anon_sym_for;
	v->a[2758] = actions(93);
	v->a[2759] = 1;
	small_parse_table_138(v);
}

void	small_parse_table_138(t_small_parse_table_array *v)
{
	v->a[2760] = anon_sym_if;
	v->a[2761] = actions(95);
	v->a[2762] = 1;
	v->a[2763] = anon_sym_case;
	v->a[2764] = actions(97);
	v->a[2765] = 1;
	v->a[2766] = anon_sym_LPAREN;
	v->a[2767] = actions(101);
	v->a[2768] = 1;
	v->a[2769] = anon_sym_LBRACE;
	v->a[2770] = actions(103);
	v->a[2771] = 1;
	v->a[2772] = anon_sym_BANG;
	v->a[2773] = actions(107);
	v->a[2774] = 1;
	v->a[2775] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[2776] = actions(109);
	v->a[2777] = 1;
	v->a[2778] = anon_sym_DOLLAR;
	v->a[2779] = actions(111);
	small_parse_table_139(v);
}

void	small_parse_table_139(t_small_parse_table_array *v)
{
	v->a[2780] = 1;
	v->a[2781] = anon_sym_DQUOTE;
	v->a[2782] = actions(115);
	v->a[2783] = 1;
	v->a[2784] = anon_sym_DOLLAR_LBRACE;
	v->a[2785] = actions(117);
	v->a[2786] = 1;
	v->a[2787] = anon_sym_DOLLAR_LPAREN;
	v->a[2788] = actions(119);
	v->a[2789] = 1;
	v->a[2790] = anon_sym_BQUOTE;
	v->a[2791] = actions(121);
	v->a[2792] = 1;
	v->a[2793] = sym_file_descriptor;
	v->a[2794] = actions(123);
	v->a[2795] = 1;
	v->a[2796] = sym_variable_name;
	v->a[2797] = actions(135);
	v->a[2798] = 1;
	v->a[2799] = anon_sym_LF;
	small_parse_table_140(v);
}

/* EOF small_parse_table_27.c */
