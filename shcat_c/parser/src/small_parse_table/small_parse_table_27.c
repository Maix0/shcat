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
	v->a[2701] = sym_comment;
	v->a[2702] = actions(1418);
	v->a[2703] = 1;
	v->a[2704] = anon_sym_DQUOTE;
	v->a[2705] = actions(1807);
	v->a[2706] = 1;
	v->a[2707] = sym_variable_name;
	v->a[2708] = state(922);
	v->a[2709] = 1;
	v->a[2710] = sym_string;
	v->a[2711] = actions(1805);
	v->a[2712] = 2;
	v->a[2713] = aux_sym__simple_variable_name_token1;
	v->a[2714] = aux_sym__multiline_variable_name_token1;
	v->a[2715] = actions(1235);
	v->a[2716] = 4;
	v->a[2717] = sym_file_descriptor;
	v->a[2718] = sym_test_operator;
	v->a[2719] = sym__bare_dollar;
	small_parse_table_136(v);
}

void	small_parse_table_136(t_small_parse_table_array *v)
{
	v->a[2720] = sym__brace_start;
	v->a[2721] = actions(1803);
	v->a[2722] = 9;
	v->a[2723] = anon_sym_DASH;
	v->a[2724] = anon_sym_STAR;
	v->a[2725] = anon_sym_BANG;
	v->a[2726] = anon_sym_QMARK;
	v->a[2727] = anon_sym_DOLLAR;
	v->a[2728] = anon_sym_POUND;
	v->a[2729] = anon_sym_AT2;
	v->a[2730] = anon_sym_0;
	v->a[2731] = anon_sym__;
	v->a[2732] = actions(1227);
	v->a[2733] = 41;
	v->a[2734] = anon_sym_LPAREN_LPAREN;
	v->a[2735] = anon_sym_SEMI;
	v->a[2736] = anon_sym_PIPE_PIPE;
	v->a[2737] = anon_sym_AMP_AMP;
	v->a[2738] = anon_sym_PIPE;
	v->a[2739] = anon_sym_AMP;
	small_parse_table_137(v);
}

void	small_parse_table_137(t_small_parse_table_array *v)
{
	v->a[2740] = anon_sym_EQ_EQ;
	v->a[2741] = anon_sym_LT;
	v->a[2742] = anon_sym_GT;
	v->a[2743] = anon_sym_LT_LT;
	v->a[2744] = anon_sym_GT_GT;
	v->a[2745] = anon_sym_esac;
	v->a[2746] = anon_sym_SEMI_SEMI;
	v->a[2747] = anon_sym_SEMI_AMP;
	v->a[2748] = anon_sym_SEMI_SEMI_AMP;
	v->a[2749] = anon_sym_PIPE_AMP;
	v->a[2750] = anon_sym_EQ_TILDE;
	v->a[2751] = anon_sym_AMP_GT;
	v->a[2752] = anon_sym_AMP_GT_GT;
	v->a[2753] = anon_sym_LT_AMP;
	v->a[2754] = anon_sym_GT_AMP;
	v->a[2755] = anon_sym_GT_PIPE;
	v->a[2756] = anon_sym_LT_AMP_DASH;
	v->a[2757] = anon_sym_GT_AMP_DASH;
	v->a[2758] = anon_sym_LT_LT_DASH;
	v->a[2759] = aux_sym_heredoc_redirect_token1;
	small_parse_table_138(v);
}

void	small_parse_table_138(t_small_parse_table_array *v)
{
	v->a[2760] = anon_sym_LT_LT_LT;
	v->a[2761] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[2762] = anon_sym_DOLLAR_LBRACK;
	v->a[2763] = sym__special_character;
	v->a[2764] = sym_raw_string;
	v->a[2765] = sym_ansi_c_string;
	v->a[2766] = aux_sym_number_token1;
	v->a[2767] = aux_sym_number_token2;
	v->a[2768] = anon_sym_DOLLAR_LBRACE;
	v->a[2769] = anon_sym_DOLLAR_LPAREN;
	v->a[2770] = anon_sym_BQUOTE;
	v->a[2771] = anon_sym_DOLLAR_BQUOTE;
	v->a[2772] = anon_sym_LT_LPAREN;
	v->a[2773] = anon_sym_GT_LPAREN;
	v->a[2774] = sym_word;
	v->a[2775] = 27;
	v->a[2776] = actions(3);
	v->a[2777] = 1;
	v->a[2778] = sym_comment;
	v->a[2779] = actions(19);
	small_parse_table_139(v);
}

void	small_parse_table_139(t_small_parse_table_array *v)
{
	v->a[2780] = 1;
	v->a[2781] = anon_sym_LPAREN;
	v->a[2782] = actions(1549);
	v->a[2783] = 1;
	v->a[2784] = anon_sym_DOLLAR_LBRACK;
	v->a[2785] = actions(1551);
	v->a[2786] = 1;
	v->a[2787] = anon_sym_DOLLAR;
	v->a[2788] = actions(1555);
	v->a[2789] = 1;
	v->a[2790] = anon_sym_DQUOTE;
	v->a[2791] = actions(1557);
	v->a[2792] = 1;
	v->a[2793] = aux_sym_number_token1;
	v->a[2794] = actions(1559);
	v->a[2795] = 1;
	v->a[2796] = aux_sym_number_token2;
	v->a[2797] = actions(1561);
	v->a[2798] = 1;
	v->a[2799] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_140(v);
}

/* EOF small_parse_table_27.c */
