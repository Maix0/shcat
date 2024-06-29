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
	v->a[2800] = state(733);
	v->a[2801] = 1;
	v->a[2802] = aux_sym_command_repeat1;
	v->a[2803] = state(1216);
	v->a[2804] = 1;
	v->a[2805] = sym_pipeline;
	v->a[2806] = state(1307);
	v->a[2807] = 1;
	v->a[2808] = aux_sym_redirected_statement_repeat2;
	v->a[2809] = state(2117);
	v->a[2810] = 1;
	v->a[2811] = sym__statement_not_pipeline;
	v->a[2812] = state(2157);
	v->a[2813] = 1;
	v->a[2814] = sym__statements;
	v->a[2815] = actions(11);
	v->a[2816] = 2;
	v->a[2817] = anon_sym_while;
	v->a[2818] = anon_sym_until;
	v->a[2819] = actions(57);
	small_parse_table_141(v);
}

void	small_parse_table_141(t_small_parse_table_array *v)
{
	v->a[2820] = 2;
	v->a[2821] = anon_sym_LT_AMP_DASH;
	v->a[2822] = anon_sym_GT_AMP_DASH;
	v->a[2823] = actions(65);
	v->a[2824] = 2;
	v->a[2825] = sym_raw_string;
	v->a[2826] = sym_number;
	v->a[2827] = state(420);
	v->a[2828] = 5;
	v->a[2829] = sym_arithmetic_expansion;
	v->a[2830] = sym_string;
	v->a[2831] = sym_simple_expansion;
	v->a[2832] = sym_expansion;
	v->a[2833] = sym_command_substitution;
	v->a[2834] = actions(55);
	v->a[2835] = 8;
	v->a[2836] = anon_sym_LT;
	v->a[2837] = anon_sym_GT;
	v->a[2838] = anon_sym_GT_GT;
	v->a[2839] = anon_sym_AMP_GT;
	small_parse_table_142(v);
}

void	small_parse_table_142(t_small_parse_table_array *v)
{
	v->a[2840] = anon_sym_AMP_GT_GT;
	v->a[2841] = anon_sym_LT_AMP;
	v->a[2842] = anon_sym_GT_AMP;
	v->a[2843] = anon_sym_GT_PIPE;
	v->a[2844] = state(1146);
	v->a[2845] = 12;
	v->a[2846] = sym_redirected_statement;
	v->a[2847] = sym_for_statement;
	v->a[2848] = sym_while_statement;
	v->a[2849] = sym_if_statement;
	v->a[2850] = sym_case_statement;
	v->a[2851] = sym_function_definition;
	v->a[2852] = sym_compound_statement;
	v->a[2853] = sym_subshell;
	v->a[2854] = sym_list;
	v->a[2855] = sym_negated_command;
	v->a[2856] = sym_command;
	v->a[2857] = sym__variable_assignments;
	v->a[2858] = 32;
	v->a[2859] = actions(3);
	small_parse_table_143(v);
}

void	small_parse_table_143(t_small_parse_table_array *v)
{
	v->a[2860] = 1;
	v->a[2861] = sym_comment;
	v->a[2862] = actions(141);
	v->a[2863] = 1;
	v->a[2864] = sym_word;
	v->a[2865] = actions(144);
	v->a[2866] = 1;
	v->a[2867] = anon_sym_for;
	v->a[2868] = actions(150);
	v->a[2869] = 1;
	v->a[2870] = anon_sym_if;
	v->a[2871] = actions(155);
	v->a[2872] = 1;
	v->a[2873] = anon_sym_case;
	v->a[2874] = actions(158);
	v->a[2875] = 1;
	v->a[2876] = anon_sym_LPAREN;
	v->a[2877] = actions(161);
	v->a[2878] = 1;
	v->a[2879] = anon_sym_LBRACE;
	small_parse_table_144(v);
}

void	small_parse_table_144(t_small_parse_table_array *v)
{
	v->a[2880] = actions(164);
	v->a[2881] = 1;
	v->a[2882] = anon_sym_BANG;
	v->a[2883] = actions(173);
	v->a[2884] = 1;
	v->a[2885] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[2886] = actions(176);
	v->a[2887] = 1;
	v->a[2888] = anon_sym_DOLLAR;
	v->a[2889] = actions(179);
	v->a[2890] = 1;
	v->a[2891] = anon_sym_DQUOTE;
	v->a[2892] = actions(185);
	v->a[2893] = 1;
	v->a[2894] = anon_sym_DOLLAR_LBRACE;
	v->a[2895] = actions(188);
	v->a[2896] = 1;
	v->a[2897] = anon_sym_DOLLAR_LPAREN;
	v->a[2898] = actions(191);
	v->a[2899] = 1;
	small_parse_table_145(v);
}

/* EOF small_parse_table_28.c */
