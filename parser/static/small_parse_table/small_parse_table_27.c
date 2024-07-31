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
	v->a[2700] = 1;
	v->a[2701] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[2702] = actions(165);
	v->a[2703] = 1;
	v->a[2704] = anon_sym_DOLLAR;
	v->a[2705] = actions(168);
	v->a[2706] = 1;
	v->a[2707] = anon_sym_DQUOTE;
	v->a[2708] = actions(174);
	v->a[2709] = 1;
	v->a[2710] = anon_sym_DOLLAR_LBRACE;
	v->a[2711] = actions(177);
	v->a[2712] = 1;
	v->a[2713] = anon_sym_DOLLAR_LPAREN;
	v->a[2714] = actions(180);
	v->a[2715] = 1;
	v->a[2716] = anon_sym_BQUOTE;
	v->a[2717] = actions(183);
	v->a[2718] = 1;
	v->a[2719] = sym_variable_name;
	small_parse_table_136(v);
}

void	small_parse_table_136(t_small_parse_table_array *v)
{
	v->a[2720] = state(24);
	v->a[2721] = 1;
	v->a[2722] = aux_sym__terminated_statement;
	v->a[2723] = state(271);
	v->a[2724] = 1;
	v->a[2725] = sym_command_name;
	v->a[2726] = state(291);
	v->a[2727] = 1;
	v->a[2728] = sym_variable_assignment;
	v->a[2729] = state(482);
	v->a[2730] = 1;
	v->a[2731] = aux_sym_command_repeat1;
	v->a[2732] = state(600);
	v->a[2733] = 1;
	v->a[2734] = sym_file_redirect;
	v->a[2735] = state(602);
	v->a[2736] = 1;
	v->a[2737] = sym_concatenation;
	v->a[2738] = state(992);
	v->a[2739] = 1;
	small_parse_table_137(v);
}

void	small_parse_table_137(t_small_parse_table_array *v)
{
	v->a[2740] = sym_pipeline;
	v->a[2741] = state(1068);
	v->a[2742] = 1;
	v->a[2743] = aux_sym_redirected_statement_repeat2;
	v->a[2744] = state(1609);
	v->a[2745] = 1;
	v->a[2746] = sym__statement_not_pipeline;
	v->a[2747] = actions(139);
	v->a[2748] = 2;
	v->a[2749] = anon_sym_while;
	v->a[2750] = anon_sym_until;
	v->a[2751] = actions(171);
	v->a[2752] = 2;
	v->a[2753] = sym_raw_string;
	v->a[2754] = sym_number;
	v->a[2755] = actions(145);
	v->a[2756] = 3;
	v->a[2757] = anon_sym_fi;
	v->a[2758] = anon_sym_elif;
	v->a[2759] = anon_sym_else;
	small_parse_table_138(v);
}

void	small_parse_table_138(t_small_parse_table_array *v)
{
	v->a[2760] = state(425);
	v->a[2761] = 5;
	v->a[2762] = sym_arithmetic_expansion;
	v->a[2763] = sym_string;
	v->a[2764] = sym_simple_expansion;
	v->a[2765] = sym_expansion;
	v->a[2766] = sym_command_substitution;
	v->a[2767] = actions(159);
	v->a[2768] = 7;
	v->a[2769] = anon_sym_LT;
	v->a[2770] = anon_sym_GT;
	v->a[2771] = anon_sym_GT_GT;
	v->a[2772] = anon_sym_LT_AMP;
	v->a[2773] = anon_sym_GT_AMP;
	v->a[2774] = anon_sym_GT_PIPE;
	v->a[2775] = anon_sym_LT_GT;
	v->a[2776] = state(949);
	v->a[2777] = 12;
	v->a[2778] = sym_redirected_statement;
	v->a[2779] = sym_for_statement;
	small_parse_table_139(v);
}

void	small_parse_table_139(t_small_parse_table_array *v)
{
	v->a[2780] = sym_while_statement;
	v->a[2781] = sym_if_statement;
	v->a[2782] = sym_case_statement;
	v->a[2783] = sym_function_definition;
	v->a[2784] = sym_compound_statement;
	v->a[2785] = sym_subshell;
	v->a[2786] = sym_list;
	v->a[2787] = sym_negated_command;
	v->a[2788] = sym_command;
	v->a[2789] = sym__variable_assignments;
	v->a[2790] = 32;
	v->a[2791] = actions(3);
	v->a[2792] = 1;
	v->a[2793] = sym_comment;
	v->a[2794] = actions(9);
	v->a[2795] = 1;
	v->a[2796] = anon_sym_for;
	v->a[2797] = actions(13);
	v->a[2798] = 1;
	v->a[2799] = anon_sym_if;
	small_parse_table_140(v);
}

/* EOF small_parse_table_27.c */
