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
	v->a[2800] = state(17);
	v->a[2801] = 1;
	v->a[2802] = aux_sym__case_item_last_repeat2;
	v->a[2803] = state(127);
	v->a[2804] = 1;
	v->a[2805] = aux_sym__statements_repeat1;
	v->a[2806] = state(178);
	v->a[2807] = 1;
	v->a[2808] = sym_command_name;
	v->a[2809] = state(228);
	v->a[2810] = 1;
	v->a[2811] = sym_variable_assignment;
	v->a[2812] = state(592);
	v->a[2813] = 1;
	v->a[2814] = sym_concatenation;
	v->a[2815] = state(641);
	v->a[2816] = 1;
	v->a[2817] = sym_file_redirect;
	v->a[2818] = state(662);
	v->a[2819] = 1;
	small_parse_table_141(v);
}

void	small_parse_table_141(t_small_parse_table_array *v)
{
	v->a[2820] = aux_sym_command_repeat1;
	v->a[2821] = state(1017);
	v->a[2822] = 1;
	v->a[2823] = sym_pipeline;
	v->a[2824] = state(1168);
	v->a[2825] = 1;
	v->a[2826] = aux_sym_redirected_statement_repeat2;
	v->a[2827] = state(1901);
	v->a[2828] = 1;
	v->a[2829] = sym__statement_not_pipeline;
	v->a[2830] = state(1904);
	v->a[2831] = 1;
	v->a[2832] = sym__statements;
	v->a[2833] = actions(91);
	v->a[2834] = 2;
	v->a[2835] = anon_sym_while;
	v->a[2836] = anon_sym_until;
	v->a[2837] = actions(113);
	v->a[2838] = 2;
	v->a[2839] = sym_raw_string;
	small_parse_table_142(v);
}

void	small_parse_table_142(t_small_parse_table_array *v)
{
	v->a[2840] = sym_number;
	v->a[2841] = state(359);
	v->a[2842] = 5;
	v->a[2843] = sym_arithmetic_expansion;
	v->a[2844] = sym_string;
	v->a[2845] = sym_simple_expansion;
	v->a[2846] = sym_expansion;
	v->a[2847] = sym_command_substitution;
	v->a[2848] = actions(105);
	v->a[2849] = 7;
	v->a[2850] = anon_sym_LT;
	v->a[2851] = anon_sym_GT;
	v->a[2852] = anon_sym_GT_GT;
	v->a[2853] = anon_sym_LT_AMP;
	v->a[2854] = anon_sym_GT_AMP;
	v->a[2855] = anon_sym_GT_PIPE;
	v->a[2856] = anon_sym_LT_GT;
	v->a[2857] = state(1005);
	v->a[2858] = 12;
	v->a[2859] = sym_redirected_statement;
	small_parse_table_143(v);
}

void	small_parse_table_143(t_small_parse_table_array *v)
{
	v->a[2860] = sym_for_statement;
	v->a[2861] = sym_while_statement;
	v->a[2862] = sym_if_statement;
	v->a[2863] = sym_case_statement;
	v->a[2864] = sym_function_definition;
	v->a[2865] = sym_compound_statement;
	v->a[2866] = sym_subshell;
	v->a[2867] = sym_list;
	v->a[2868] = sym_negated_command;
	v->a[2869] = sym_command;
	v->a[2870] = sym__variable_assignments;
	v->a[2871] = 33;
	v->a[2872] = actions(3);
	v->a[2873] = 1;
	v->a[2874] = sym_comment;
	v->a[2875] = actions(87);
	v->a[2876] = 1;
	v->a[2877] = sym_word;
	v->a[2878] = actions(89);
	v->a[2879] = 1;
	small_parse_table_144(v);
}

void	small_parse_table_144(t_small_parse_table_array *v)
{
	v->a[2880] = anon_sym_for;
	v->a[2881] = actions(93);
	v->a[2882] = 1;
	v->a[2883] = anon_sym_if;
	v->a[2884] = actions(95);
	v->a[2885] = 1;
	v->a[2886] = anon_sym_case;
	v->a[2887] = actions(97);
	v->a[2888] = 1;
	v->a[2889] = anon_sym_LPAREN;
	v->a[2890] = actions(101);
	v->a[2891] = 1;
	v->a[2892] = anon_sym_LBRACE;
	v->a[2893] = actions(103);
	v->a[2894] = 1;
	v->a[2895] = anon_sym_BANG;
	v->a[2896] = actions(107);
	v->a[2897] = 1;
	v->a[2898] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[2899] = actions(109);
	small_parse_table_145(v);
}

/* EOF small_parse_table_28.c */
