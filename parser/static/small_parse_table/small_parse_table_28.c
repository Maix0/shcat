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
	v->a[2801] = sym_command_name;
	v->a[2802] = state(261);
	v->a[2803] = 1;
	v->a[2804] = sym_variable_assignment;
	v->a[2805] = state(584);
	v->a[2806] = 1;
	v->a[2807] = sym_concatenation;
	v->a[2808] = state(620);
	v->a[2809] = 1;
	v->a[2810] = sym_file_redirect;
	v->a[2811] = state(623);
	v->a[2812] = 1;
	v->a[2813] = aux_sym_command_repeat1;
	v->a[2814] = state(672);
	v->a[2815] = 1;
	v->a[2816] = aux_sym__case_item_last_repeat2;
	v->a[2817] = state(1114);
	v->a[2818] = 1;
	v->a[2819] = sym_pipeline;
	small_parse_table_141(v);
}

void	small_parse_table_141(t_small_parse_table_array *v)
{
	v->a[2820] = state(1201);
	v->a[2821] = 1;
	v->a[2822] = aux_sym_redirected_statement_repeat2;
	v->a[2823] = state(1911);
	v->a[2824] = 1;
	v->a[2825] = sym__statement_not_pipeline;
	v->a[2826] = state(1936);
	v->a[2827] = 1;
	v->a[2828] = sym__statements;
	v->a[2829] = actions(11);
	v->a[2830] = 2;
	v->a[2831] = anon_sym_while;
	v->a[2832] = anon_sym_until;
	v->a[2833] = actions(61);
	v->a[2834] = 2;
	v->a[2835] = sym_raw_string;
	v->a[2836] = sym_number;
	v->a[2837] = state(433);
	v->a[2838] = 5;
	v->a[2839] = sym_arithmetic_expansion;
	small_parse_table_142(v);
}

void	small_parse_table_142(t_small_parse_table_array *v)
{
	v->a[2840] = sym_string;
	v->a[2841] = sym_simple_expansion;
	v->a[2842] = sym_expansion;
	v->a[2843] = sym_command_substitution;
	v->a[2844] = actions(53);
	v->a[2845] = 7;
	v->a[2846] = anon_sym_LT;
	v->a[2847] = anon_sym_GT;
	v->a[2848] = anon_sym_GT_GT;
	v->a[2849] = anon_sym_LT_AMP;
	v->a[2850] = anon_sym_GT_AMP;
	v->a[2851] = anon_sym_GT_PIPE;
	v->a[2852] = anon_sym_LT_GT;
	v->a[2853] = state(1088);
	v->a[2854] = 12;
	v->a[2855] = sym_redirected_statement;
	v->a[2856] = sym_for_statement;
	v->a[2857] = sym_while_statement;
	v->a[2858] = sym_if_statement;
	v->a[2859] = sym_case_statement;
	small_parse_table_143(v);
}

void	small_parse_table_143(t_small_parse_table_array *v)
{
	v->a[2860] = sym_function_definition;
	v->a[2861] = sym_compound_statement;
	v->a[2862] = sym_subshell;
	v->a[2863] = sym_list;
	v->a[2864] = sym_negated_command;
	v->a[2865] = sym_command;
	v->a[2866] = sym__variable_assignments;
	v->a[2867] = 33;
	v->a[2868] = actions(3);
	v->a[2869] = 1;
	v->a[2870] = sym_comment;
	v->a[2871] = actions(83);
	v->a[2872] = 1;
	v->a[2873] = sym_word;
	v->a[2874] = actions(85);
	v->a[2875] = 1;
	v->a[2876] = anon_sym_for;
	v->a[2877] = actions(89);
	v->a[2878] = 1;
	v->a[2879] = anon_sym_if;
	small_parse_table_144(v);
}

void	small_parse_table_144(t_small_parse_table_array *v)
{
	v->a[2880] = actions(91);
	v->a[2881] = 1;
	v->a[2882] = anon_sym_case;
	v->a[2883] = actions(93);
	v->a[2884] = 1;
	v->a[2885] = anon_sym_LPAREN;
	v->a[2886] = actions(95);
	v->a[2887] = 1;
	v->a[2888] = anon_sym_LF;
	v->a[2889] = actions(97);
	v->a[2890] = 1;
	v->a[2891] = anon_sym_LBRACE;
	v->a[2892] = actions(99);
	v->a[2893] = 1;
	v->a[2894] = anon_sym_BANG;
	v->a[2895] = actions(103);
	v->a[2896] = 1;
	v->a[2897] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[2898] = actions(105);
	v->a[2899] = 1;
	small_parse_table_145(v);
}

/* EOF small_parse_table_28.c */
