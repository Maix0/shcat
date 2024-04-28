/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_28.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_140(t_small_parse_table_array *v)
{
	v->a[2800] = actions(1563);
	v->a[2801] = 1;
	v->a[2802] = anon_sym_DOLLAR_LPAREN;
	v->a[2803] = actions(1567);
	v->a[2804] = 1;
	v->a[2805] = anon_sym_DOLLAR_BQUOTE;
	v->a[2806] = actions(1573);
	v->a[2807] = 1;
	v->a[2808] = sym__bare_dollar;
	v->a[2809] = actions(1575);
	v->a[2810] = 1;
	v->a[2811] = sym__brace_start;
	v->a[2812] = actions(1690);
	v->a[2813] = 1;
	v->a[2814] = anon_sym_LT_LT_LT;
	v->a[2815] = actions(1692);
	v->a[2816] = 1;
	v->a[2817] = sym__special_character;
	v->a[2818] = actions(1694);
	v->a[2819] = 1;
	small_parse_table_141(v);
}

void	small_parse_table_141(t_small_parse_table_array *v)
{
	v->a[2820] = sym_test_operator;
	v->a[2821] = state(584);
	v->a[2822] = 1;
	v->a[2823] = aux_sym_command_repeat2;
	v->a[2824] = state(1321);
	v->a[2825] = 1;
	v->a[2826] = aux_sym__literal_repeat1;
	v->a[2827] = state(1712);
	v->a[2828] = 1;
	v->a[2829] = sym_herestring_redirect;
	v->a[2830] = state(1716);
	v->a[2831] = 1;
	v->a[2832] = sym_concatenation;
	v->a[2833] = state(4911);
	v->a[2834] = 1;
	v->a[2835] = sym_subshell;
	v->a[2836] = actions(1408);
	v->a[2837] = 2;
	v->a[2838] = sym_file_descriptor;
	v->a[2839] = aux_sym_heredoc_redirect_token1;
	small_parse_table_142(v);
}

void	small_parse_table_142(t_small_parse_table_array *v)
{
	v->a[2840] = actions(1543);
	v->a[2841] = 2;
	v->a[2842] = anon_sym_LPAREN_LPAREN;
	v->a[2843] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[2844] = actions(1569);
	v->a[2845] = 2;
	v->a[2846] = anon_sym_LT_LPAREN;
	v->a[2847] = anon_sym_GT_LPAREN;
	v->a[2848] = actions(1688);
	v->a[2849] = 2;
	v->a[2850] = anon_sym_EQ_EQ;
	v->a[2851] = anon_sym_EQ_TILDE;
	v->a[2852] = actions(1686);
	v->a[2853] = 3;
	v->a[2854] = sym_raw_string;
	v->a[2855] = sym_ansi_c_string;
	v->a[2856] = sym_word;
	v->a[2857] = state(1219);
	v->a[2858] = 9;
	v->a[2859] = sym_arithmetic_expansion;
	small_parse_table_143(v);
}

void	small_parse_table_143(t_small_parse_table_array *v)
{
	v->a[2860] = sym_brace_expression;
	v->a[2861] = sym_string;
	v->a[2862] = sym_translated_string;
	v->a[2863] = sym_number;
	v->a[2864] = sym_simple_expansion;
	v->a[2865] = sym_expansion;
	v->a[2866] = sym_command_substitution;
	v->a[2867] = sym_process_substitution;
	v->a[2868] = actions(1404);
	v->a[2869] = 20;
	v->a[2870] = anon_sym_SEMI;
	v->a[2871] = anon_sym_PIPE_PIPE;
	v->a[2872] = anon_sym_AMP_AMP;
	v->a[2873] = anon_sym_PIPE;
	v->a[2874] = anon_sym_AMP;
	v->a[2875] = anon_sym_LT;
	v->a[2876] = anon_sym_GT;
	v->a[2877] = anon_sym_LT_LT;
	v->a[2878] = anon_sym_GT_GT;
	v->a[2879] = anon_sym_SEMI_SEMI;
	small_parse_table_144(v);
}

void	small_parse_table_144(t_small_parse_table_array *v)
{
	v->a[2880] = anon_sym_PIPE_AMP;
	v->a[2881] = anon_sym_AMP_GT;
	v->a[2882] = anon_sym_AMP_GT_GT;
	v->a[2883] = anon_sym_LT_AMP;
	v->a[2884] = anon_sym_GT_AMP;
	v->a[2885] = anon_sym_GT_PIPE;
	v->a[2886] = anon_sym_LT_AMP_DASH;
	v->a[2887] = anon_sym_GT_AMP_DASH;
	v->a[2888] = anon_sym_LT_LT_DASH;
	v->a[2889] = anon_sym_BQUOTE;
	v->a[2890] = 8;
	v->a[2891] = actions(3);
	v->a[2892] = 1;
	v->a[2893] = sym_comment;
	v->a[2894] = actions(1811);
	v->a[2895] = 1;
	v->a[2896] = anon_sym_DQUOTE;
	v->a[2897] = actions(1815);
	v->a[2898] = 1;
	v->a[2899] = sym_variable_name;
	small_parse_table_145(v);
}

/* EOF small_parse_table_28.c */
