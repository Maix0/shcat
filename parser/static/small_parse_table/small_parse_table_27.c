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
	v->a[2700] = sym_command;
	v->a[2701] = sym__variable_assignments;
	v->a[2702] = 32;
	v->a[2703] = actions(3);
	v->a[2704] = 1;
	v->a[2705] = sym_comment;
	v->a[2706] = actions(79);
	v->a[2707] = 1;
	v->a[2708] = sym_word;
	v->a[2709] = actions(81);
	v->a[2710] = 1;
	v->a[2711] = anon_sym_for;
	v->a[2712] = actions(85);
	v->a[2713] = 1;
	v->a[2714] = anon_sym_if;
	v->a[2715] = actions(87);
	v->a[2716] = 1;
	v->a[2717] = anon_sym_case;
	v->a[2718] = actions(89);
	v->a[2719] = 1;
	small_parse_table_136(v);
}

void	small_parse_table_136(t_small_parse_table_array *v)
{
	v->a[2720] = anon_sym_LPAREN;
	v->a[2721] = actions(93);
	v->a[2722] = 1;
	v->a[2723] = anon_sym_LBRACE;
	v->a[2724] = actions(95);
	v->a[2725] = 1;
	v->a[2726] = anon_sym_BANG;
	v->a[2727] = actions(99);
	v->a[2728] = 1;
	v->a[2729] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[2730] = actions(101);
	v->a[2731] = 1;
	v->a[2732] = anon_sym_DOLLAR;
	v->a[2733] = actions(103);
	v->a[2734] = 1;
	v->a[2735] = anon_sym_DQUOTE;
	v->a[2736] = actions(107);
	v->a[2737] = 1;
	v->a[2738] = anon_sym_DOLLAR_LBRACE;
	v->a[2739] = actions(109);
	small_parse_table_137(v);
}

void	small_parse_table_137(t_small_parse_table_array *v)
{
	v->a[2740] = 1;
	v->a[2741] = anon_sym_DOLLAR_LPAREN;
	v->a[2742] = actions(111);
	v->a[2743] = 1;
	v->a[2744] = anon_sym_BQUOTE;
	v->a[2745] = actions(113);
	v->a[2746] = 1;
	v->a[2747] = sym_variable_name;
	v->a[2748] = actions(182);
	v->a[2749] = 1;
	v->a[2750] = anon_sym_LF;
	v->a[2751] = state(26);
	v->a[2752] = 1;
	v->a[2753] = aux_sym__case_item_last_repeat2;
	v->a[2754] = state(104);
	v->a[2755] = 1;
	v->a[2756] = aux_sym__statements_repeat1;
	v->a[2757] = state(170);
	v->a[2758] = 1;
	v->a[2759] = sym_command_name;
	small_parse_table_138(v);
}

void	small_parse_table_138(t_small_parse_table_array *v)
{
	v->a[2760] = state(177);
	v->a[2761] = 1;
	v->a[2762] = sym_variable_assignment;
	v->a[2763] = state(408);
	v->a[2764] = 1;
	v->a[2765] = aux_sym_command_repeat1;
	v->a[2766] = state(541);
	v->a[2767] = 1;
	v->a[2768] = sym_file_redirect;
	v->a[2769] = state(546);
	v->a[2770] = 1;
	v->a[2771] = sym_concatenation;
	v->a[2772] = state(913);
	v->a[2773] = 1;
	v->a[2774] = sym_pipeline;
	v->a[2775] = state(990);
	v->a[2776] = 1;
	v->a[2777] = aux_sym_redirected_statement_repeat2;
	v->a[2778] = state(1564);
	v->a[2779] = 1;
	small_parse_table_139(v);
}

void	small_parse_table_139(t_small_parse_table_array *v)
{
	v->a[2780] = sym__statement_not_pipeline;
	v->a[2781] = state(1572);
	v->a[2782] = 1;
	v->a[2783] = sym__statements;
	v->a[2784] = actions(83);
	v->a[2785] = 2;
	v->a[2786] = anon_sym_while;
	v->a[2787] = anon_sym_until;
	v->a[2788] = actions(105);
	v->a[2789] = 2;
	v->a[2790] = sym_raw_string;
	v->a[2791] = sym_number;
	v->a[2792] = actions(97);
	v->a[2793] = 3;
	v->a[2794] = anon_sym_LT;
	v->a[2795] = anon_sym_GT;
	v->a[2796] = anon_sym_GT_GT;
	v->a[2797] = state(276);
	v->a[2798] = 5;
	v->a[2799] = sym_arithmetic_expansion;
	small_parse_table_140(v);
}

/* EOF small_parse_table_27.c */
