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
	v->a[2800] = actions(15);
	v->a[2801] = 1;
	v->a[2802] = anon_sym_case;
	v->a[2803] = actions(17);
	v->a[2804] = 1;
	v->a[2805] = anon_sym_LPAREN;
	v->a[2806] = actions(19);
	v->a[2807] = 1;
	v->a[2808] = anon_sym_LBRACE;
	v->a[2809] = actions(41);
	v->a[2810] = 1;
	v->a[2811] = sym_word;
	v->a[2812] = actions(49);
	v->a[2813] = 1;
	v->a[2814] = anon_sym_BANG;
	v->a[2815] = actions(53);
	v->a[2816] = 1;
	v->a[2817] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[2818] = actions(55);
	v->a[2819] = 1;
	small_parse_table_141(v);
}

void	small_parse_table_141(t_small_parse_table_array *v)
{
	v->a[2820] = anon_sym_DOLLAR;
	v->a[2821] = actions(57);
	v->a[2822] = 1;
	v->a[2823] = anon_sym_DQUOTE;
	v->a[2824] = actions(61);
	v->a[2825] = 1;
	v->a[2826] = anon_sym_DOLLAR_LBRACE;
	v->a[2827] = actions(63);
	v->a[2828] = 1;
	v->a[2829] = anon_sym_DOLLAR_LPAREN;
	v->a[2830] = actions(65);
	v->a[2831] = 1;
	v->a[2832] = anon_sym_BQUOTE;
	v->a[2833] = actions(67);
	v->a[2834] = 1;
	v->a[2835] = sym_variable_name;
	v->a[2836] = actions(115);
	v->a[2837] = 1;
	v->a[2838] = anon_sym_LF;
	v->a[2839] = state(117);
	small_parse_table_142(v);
}

void	small_parse_table_142(t_small_parse_table_array *v)
{
	v->a[2840] = 1;
	v->a[2841] = aux_sym__statements_repeat1;
	v->a[2842] = state(271);
	v->a[2843] = 1;
	v->a[2844] = sym_command_name;
	v->a[2845] = state(288);
	v->a[2846] = 1;
	v->a[2847] = sym_variable_assignment;
	v->a[2848] = state(482);
	v->a[2849] = 1;
	v->a[2850] = aux_sym_command_repeat1;
	v->a[2851] = state(511);
	v->a[2852] = 1;
	v->a[2853] = aux_sym__case_item_last_repeat2;
	v->a[2854] = state(600);
	v->a[2855] = 1;
	v->a[2856] = sym_file_redirect;
	v->a[2857] = state(602);
	v->a[2858] = 1;
	v->a[2859] = sym_concatenation;
	small_parse_table_143(v);
}

void	small_parse_table_143(t_small_parse_table_array *v)
{
	v->a[2860] = state(1014);
	v->a[2861] = 1;
	v->a[2862] = sym_pipeline;
	v->a[2863] = state(1068);
	v->a[2864] = 1;
	v->a[2865] = aux_sym_redirected_statement_repeat2;
	v->a[2866] = state(1609);
	v->a[2867] = 1;
	v->a[2868] = sym__statement_not_pipeline;
	v->a[2869] = state(1701);
	v->a[2870] = 1;
	v->a[2871] = sym__statements;
	v->a[2872] = actions(11);
	v->a[2873] = 2;
	v->a[2874] = anon_sym_while;
	v->a[2875] = anon_sym_until;
	v->a[2876] = actions(59);
	v->a[2877] = 2;
	v->a[2878] = sym_raw_string;
	v->a[2879] = sym_number;
	small_parse_table_144(v);
}

void	small_parse_table_144(t_small_parse_table_array *v)
{
	v->a[2880] = state(425);
	v->a[2881] = 5;
	v->a[2882] = sym_arithmetic_expansion;
	v->a[2883] = sym_string;
	v->a[2884] = sym_simple_expansion;
	v->a[2885] = sym_expansion;
	v->a[2886] = sym_command_substitution;
	v->a[2887] = actions(51);
	v->a[2888] = 7;
	v->a[2889] = anon_sym_LT;
	v->a[2890] = anon_sym_GT;
	v->a[2891] = anon_sym_GT_GT;
	v->a[2892] = anon_sym_LT_AMP;
	v->a[2893] = anon_sym_GT_AMP;
	v->a[2894] = anon_sym_GT_PIPE;
	v->a[2895] = anon_sym_LT_GT;
	v->a[2896] = state(936);
	v->a[2897] = 12;
	v->a[2898] = sym_redirected_statement;
	v->a[2899] = sym_for_statement;
	small_parse_table_145(v);
}

/* EOF small_parse_table_28.c */
