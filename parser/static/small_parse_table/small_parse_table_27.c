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
	v->a[2700] = anon_sym_PIPE;
	v->a[2701] = anon_sym_RPAREN;
	v->a[2702] = anon_sym_SEMI_SEMI;
	v->a[2703] = anon_sym_PIPE_AMP;
	v->a[2704] = anon_sym_AMP_AMP;
	v->a[2705] = anon_sym_PIPE_PIPE;
	v->a[2706] = anon_sym_LT;
	v->a[2707] = anon_sym_GT;
	v->a[2708] = anon_sym_GT_GT;
	v->a[2709] = anon_sym_AMP_GT;
	v->a[2710] = anon_sym_AMP_GT_GT;
	v->a[2711] = anon_sym_LT_AMP;
	v->a[2712] = anon_sym_GT_AMP;
	v->a[2713] = anon_sym_GT_PIPE;
	v->a[2714] = anon_sym_LT_AMP_DASH;
	v->a[2715] = anon_sym_GT_AMP_DASH;
	v->a[2716] = anon_sym_LT_LT;
	v->a[2717] = anon_sym_LT_LT_DASH;
	v->a[2718] = anon_sym_AMP;
	v->a[2719] = anon_sym_SEMI;
	small_parse_table_136(v);
}

void	small_parse_table_136(t_small_parse_table_array *v)
{
	v->a[2720] = 6;
	v->a[2721] = actions(3);
	v->a[2722] = 1;
	v->a[2723] = sym_comment;
	v->a[2724] = actions(1242);
	v->a[2725] = 1;
	v->a[2726] = sym_variable_name;
	v->a[2727] = actions(1240);
	v->a[2728] = 2;
	v->a[2729] = aux_sym__simple_variable_name_token1;
	v->a[2730] = aux_sym__multiline_variable_name_token1;
	v->a[2731] = actions(816);
	v->a[2732] = 4;
	v->a[2733] = sym_file_descriptor;
	v->a[2734] = sym_test_operator;
	v->a[2735] = sym__bare_dollar;
	v->a[2736] = sym__brace_start;
	v->a[2737] = actions(1238);
	v->a[2738] = 9;
	v->a[2739] = anon_sym_BANG;
	small_parse_table_137(v);
}

void	small_parse_table_137(t_small_parse_table_array *v)
{
	v->a[2740] = anon_sym_DASH;
	v->a[2741] = anon_sym_STAR;
	v->a[2742] = anon_sym_QMARK;
	v->a[2743] = anon_sym_DOLLAR;
	v->a[2744] = anon_sym_POUND;
	v->a[2745] = anon_sym_AT;
	v->a[2746] = anon_sym_0;
	v->a[2747] = anon_sym__;
	v->a[2748] = actions(810);
	v->a[2749] = 33;
	v->a[2750] = anon_sym_PIPE;
	v->a[2751] = anon_sym_SEMI_SEMI;
	v->a[2752] = anon_sym_SEMI_AMP;
	v->a[2753] = anon_sym_SEMI_SEMI_AMP;
	v->a[2754] = anon_sym_PIPE_AMP;
	v->a[2755] = anon_sym_AMP_AMP;
	v->a[2756] = anon_sym_PIPE_PIPE;
	v->a[2757] = anon_sym_LT;
	v->a[2758] = anon_sym_GT;
	v->a[2759] = anon_sym_GT_GT;
	small_parse_table_138(v);
}

void	small_parse_table_138(t_small_parse_table_array *v)
{
	v->a[2760] = anon_sym_AMP_GT;
	v->a[2761] = anon_sym_AMP_GT_GT;
	v->a[2762] = anon_sym_LT_AMP;
	v->a[2763] = anon_sym_GT_AMP;
	v->a[2764] = anon_sym_GT_PIPE;
	v->a[2765] = anon_sym_LT_AMP_DASH;
	v->a[2766] = anon_sym_GT_AMP_DASH;
	v->a[2767] = anon_sym_LT_LT;
	v->a[2768] = anon_sym_LT_LT_DASH;
	v->a[2769] = aux_sym_heredoc_redirect_token1;
	v->a[2770] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[2771] = anon_sym_AMP;
	v->a[2772] = sym__special_character;
	v->a[2773] = anon_sym_DQUOTE;
	v->a[2774] = sym_raw_string;
	v->a[2775] = aux_sym_number_token1;
	v->a[2776] = aux_sym_number_token2;
	v->a[2777] = anon_sym_DOLLAR_LBRACE;
	v->a[2778] = anon_sym_DOLLAR_LPAREN;
	v->a[2779] = anon_sym_BQUOTE;
	small_parse_table_139(v);
}

void	small_parse_table_139(t_small_parse_table_array *v)
{
	v->a[2780] = anon_sym_DOLLAR_BQUOTE;
	v->a[2781] = sym_word;
	v->a[2782] = anon_sym_SEMI;
	v->a[2783] = 6;
	v->a[2784] = actions(3);
	v->a[2785] = 1;
	v->a[2786] = sym_comment;
	v->a[2787] = actions(953);
	v->a[2788] = 1;
	v->a[2789] = sym_variable_name;
	v->a[2790] = actions(951);
	v->a[2791] = 2;
	v->a[2792] = aux_sym__simple_variable_name_token1;
	v->a[2793] = aux_sym__multiline_variable_name_token1;
	v->a[2794] = actions(816);
	v->a[2795] = 3;
	v->a[2796] = sym_file_descriptor;
	v->a[2797] = sym_test_operator;
	v->a[2798] = sym__brace_start;
	v->a[2799] = actions(949);
	small_parse_table_140(v);
}

/* EOF small_parse_table_27.c */
