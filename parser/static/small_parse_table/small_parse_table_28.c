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
	v->a[2800] = 1;
	v->a[2801] = aux_sym_redirected_statement_repeat2;
	v->a[2802] = state(2035);
	v->a[2803] = 1;
	v->a[2804] = sym__statement_not_pipeline;
	v->a[2805] = state(2080);
	v->a[2806] = 1;
	v->a[2807] = sym__statements;
	v->a[2808] = actions(11);
	v->a[2809] = 2;
	v->a[2810] = anon_sym_while;
	v->a[2811] = anon_sym_until;
	v->a[2812] = actions(61);
	v->a[2813] = 2;
	v->a[2814] = anon_sym_LT_AMP_DASH;
	v->a[2815] = anon_sym_GT_AMP_DASH;
	v->a[2816] = state(397);
	v->a[2817] = 6;
	v->a[2818] = sym_arithmetic_expansion;
	v->a[2819] = sym_string;
	small_parse_table_141(v);
}

void	small_parse_table_141(t_small_parse_table_array *v)
{
	v->a[2820] = sym_number;
	v->a[2821] = sym_simple_expansion;
	v->a[2822] = sym_expansion;
	v->a[2823] = sym_command_substitution;
	v->a[2824] = actions(59);
	v->a[2825] = 8;
	v->a[2826] = anon_sym_LT;
	v->a[2827] = anon_sym_GT;
	v->a[2828] = anon_sym_GT_GT;
	v->a[2829] = anon_sym_AMP_GT;
	v->a[2830] = anon_sym_AMP_GT_GT;
	v->a[2831] = anon_sym_LT_AMP;
	v->a[2832] = anon_sym_GT_AMP;
	v->a[2833] = anon_sym_GT_PIPE;
	v->a[2834] = state(1140);
	v->a[2835] = 12;
	v->a[2836] = sym_redirected_statement;
	v->a[2837] = sym_for_statement;
	v->a[2838] = sym_while_statement;
	v->a[2839] = sym_if_statement;
	small_parse_table_142(v);
}

void	small_parse_table_142(t_small_parse_table_array *v)
{
	v->a[2840] = sym_case_statement;
	v->a[2841] = sym_function_definition;
	v->a[2842] = sym_compound_statement;
	v->a[2843] = sym_subshell;
	v->a[2844] = sym_list;
	v->a[2845] = sym_negated_command;
	v->a[2846] = sym_command;
	v->a[2847] = sym_variable_assignments;
	v->a[2848] = 34;
	v->a[2849] = actions(3);
	v->a[2850] = 1;
	v->a[2851] = sym_comment;
	v->a[2852] = actions(9);
	v->a[2853] = 1;
	v->a[2854] = anon_sym_for;
	v->a[2855] = actions(13);
	v->a[2856] = 1;
	v->a[2857] = anon_sym_if;
	v->a[2858] = actions(15);
	v->a[2859] = 1;
	small_parse_table_143(v);
}

void	small_parse_table_143(t_small_parse_table_array *v)
{
	v->a[2860] = anon_sym_case;
	v->a[2861] = actions(17);
	v->a[2862] = 1;
	v->a[2863] = anon_sym_LPAREN;
	v->a[2864] = actions(19);
	v->a[2865] = 1;
	v->a[2866] = anon_sym_LBRACE;
	v->a[2867] = actions(49);
	v->a[2868] = 1;
	v->a[2869] = sym_word;
	v->a[2870] = actions(57);
	v->a[2871] = 1;
	v->a[2872] = anon_sym_BANG;
	v->a[2873] = actions(63);
	v->a[2874] = 1;
	v->a[2875] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[2876] = actions(65);
	v->a[2877] = 1;
	v->a[2878] = anon_sym_DOLLAR;
	v->a[2879] = actions(67);
	small_parse_table_144(v);
}

void	small_parse_table_144(t_small_parse_table_array *v)
{
	v->a[2880] = 1;
	v->a[2881] = anon_sym_DQUOTE;
	v->a[2882] = actions(69);
	v->a[2883] = 1;
	v->a[2884] = sym_raw_string;
	v->a[2885] = actions(71);
	v->a[2886] = 1;
	v->a[2887] = aux_sym_number_token1;
	v->a[2888] = actions(73);
	v->a[2889] = 1;
	v->a[2890] = aux_sym_number_token2;
	v->a[2891] = actions(75);
	v->a[2892] = 1;
	v->a[2893] = anon_sym_DOLLAR_LBRACE;
	v->a[2894] = actions(77);
	v->a[2895] = 1;
	v->a[2896] = anon_sym_DOLLAR_LPAREN;
	v->a[2897] = actions(79);
	v->a[2898] = 1;
	v->a[2899] = anon_sym_BQUOTE;
	small_parse_table_145(v);
}

/* EOF small_parse_table_28.c */
