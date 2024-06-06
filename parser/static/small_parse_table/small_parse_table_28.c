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
	v->a[2800] = 9;
	v->a[2801] = anon_sym_BANG;
	v->a[2802] = anon_sym_DASH;
	v->a[2803] = anon_sym_STAR;
	v->a[2804] = anon_sym_QMARK;
	v->a[2805] = anon_sym_DOLLAR;
	v->a[2806] = anon_sym_POUND;
	v->a[2807] = anon_sym_AT;
	v->a[2808] = anon_sym_0;
	v->a[2809] = anon_sym__;
	v->a[2810] = actions(810);
	v->a[2811] = 34;
	v->a[2812] = anon_sym_esac;
	v->a[2813] = anon_sym_PIPE;
	v->a[2814] = anon_sym_SEMI_SEMI;
	v->a[2815] = anon_sym_SEMI_AMP;
	v->a[2816] = anon_sym_SEMI_SEMI_AMP;
	v->a[2817] = anon_sym_PIPE_AMP;
	v->a[2818] = anon_sym_AMP_AMP;
	v->a[2819] = anon_sym_PIPE_PIPE;
	small_parse_table_141(v);
}

void	small_parse_table_141(t_small_parse_table_array *v)
{
	v->a[2820] = anon_sym_LT;
	v->a[2821] = anon_sym_GT;
	v->a[2822] = anon_sym_GT_GT;
	v->a[2823] = anon_sym_AMP_GT;
	v->a[2824] = anon_sym_AMP_GT_GT;
	v->a[2825] = anon_sym_LT_AMP;
	v->a[2826] = anon_sym_GT_AMP;
	v->a[2827] = anon_sym_GT_PIPE;
	v->a[2828] = anon_sym_LT_AMP_DASH;
	v->a[2829] = anon_sym_GT_AMP_DASH;
	v->a[2830] = anon_sym_LT_LT;
	v->a[2831] = anon_sym_LT_LT_DASH;
	v->a[2832] = aux_sym_heredoc_redirect_token1;
	v->a[2833] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[2834] = anon_sym_AMP;
	v->a[2835] = sym__special_character;
	v->a[2836] = anon_sym_DQUOTE;
	v->a[2837] = sym_raw_string;
	v->a[2838] = aux_sym_number_token1;
	v->a[2839] = aux_sym_number_token2;
	small_parse_table_142(v);
}

void	small_parse_table_142(t_small_parse_table_array *v)
{
	v->a[2840] = anon_sym_DOLLAR_LBRACE;
	v->a[2841] = anon_sym_DOLLAR_LPAREN;
	v->a[2842] = anon_sym_BQUOTE;
	v->a[2843] = anon_sym_DOLLAR_BQUOTE;
	v->a[2844] = sym_word;
	v->a[2845] = anon_sym_SEMI;
	v->a[2846] = 23;
	v->a[2847] = actions(3);
	v->a[2848] = 1;
	v->a[2849] = sym_comment;
	v->a[2850] = actions(1146);
	v->a[2851] = 1;
	v->a[2852] = anon_sym_LPAREN;
	v->a[2853] = actions(1252);
	v->a[2854] = 1;
	v->a[2855] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[2856] = actions(1254);
	v->a[2857] = 1;
	v->a[2858] = anon_sym_DOLLAR;
	v->a[2859] = actions(1256);
	small_parse_table_143(v);
}

void	small_parse_table_143(t_small_parse_table_array *v)
{
	v->a[2860] = 1;
	v->a[2861] = sym__special_character;
	v->a[2862] = actions(1258);
	v->a[2863] = 1;
	v->a[2864] = anon_sym_DQUOTE;
	v->a[2865] = actions(1260);
	v->a[2866] = 1;
	v->a[2867] = aux_sym_number_token1;
	v->a[2868] = actions(1262);
	v->a[2869] = 1;
	v->a[2870] = aux_sym_number_token2;
	v->a[2871] = actions(1264);
	v->a[2872] = 1;
	v->a[2873] = anon_sym_DOLLAR_LBRACE;
	v->a[2874] = actions(1266);
	v->a[2875] = 1;
	v->a[2876] = anon_sym_DOLLAR_LPAREN;
	v->a[2877] = actions(1268);
	v->a[2878] = 1;
	v->a[2879] = anon_sym_BQUOTE;
	small_parse_table_144(v);
}

void	small_parse_table_144(t_small_parse_table_array *v)
{
	v->a[2880] = actions(1270);
	v->a[2881] = 1;
	v->a[2882] = anon_sym_DOLLAR_BQUOTE;
	v->a[2883] = actions(1272);
	v->a[2884] = 1;
	v->a[2885] = sym_test_operator;
	v->a[2886] = actions(1274);
	v->a[2887] = 1;
	v->a[2888] = sym__bare_dollar;
	v->a[2889] = actions(1276);
	v->a[2890] = 1;
	v->a[2891] = sym__brace_start;
	v->a[2892] = state(345);
	v->a[2893] = 1;
	v->a[2894] = aux_sym_command_repeat2;
	v->a[2895] = state(1232);
	v->a[2896] = 1;
	v->a[2897] = aux_sym__literal_repeat1;
	v->a[2898] = state(1293);
	v->a[2899] = 1;
	small_parse_table_145(v);
}

/* EOF small_parse_table_28.c */
