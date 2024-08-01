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
	v->a[2800] = sym_string;
	v->a[2801] = sym_simple_expansion;
	v->a[2802] = sym_expansion;
	v->a[2803] = sym_command_substitution;
	v->a[2804] = state(867);
	v->a[2805] = 12;
	v->a[2806] = sym_redirected_statement;
	v->a[2807] = sym_for_statement;
	v->a[2808] = sym_while_statement;
	v->a[2809] = sym_if_statement;
	v->a[2810] = sym_case_statement;
	v->a[2811] = sym_function_definition;
	v->a[2812] = sym_compound_statement;
	v->a[2813] = sym_subshell;
	v->a[2814] = sym_list;
	v->a[2815] = sym_negated_command;
	v->a[2816] = sym_command;
	v->a[2817] = sym__variable_assignments;
	v->a[2818] = 32;
	v->a[2819] = actions(3);
	small_parse_table_141(v);
}

void	small_parse_table_141(t_small_parse_table_array *v)
{
	v->a[2820] = 1;
	v->a[2821] = sym_comment;
	v->a[2822] = actions(79);
	v->a[2823] = 1;
	v->a[2824] = sym_word;
	v->a[2825] = actions(81);
	v->a[2826] = 1;
	v->a[2827] = anon_sym_for;
	v->a[2828] = actions(85);
	v->a[2829] = 1;
	v->a[2830] = anon_sym_if;
	v->a[2831] = actions(87);
	v->a[2832] = 1;
	v->a[2833] = anon_sym_case;
	v->a[2834] = actions(89);
	v->a[2835] = 1;
	v->a[2836] = anon_sym_LPAREN;
	v->a[2837] = actions(93);
	v->a[2838] = 1;
	v->a[2839] = anon_sym_LBRACE;
	small_parse_table_142(v);
}

void	small_parse_table_142(t_small_parse_table_array *v)
{
	v->a[2840] = actions(95);
	v->a[2841] = 1;
	v->a[2842] = anon_sym_BANG;
	v->a[2843] = actions(99);
	v->a[2844] = 1;
	v->a[2845] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[2846] = actions(101);
	v->a[2847] = 1;
	v->a[2848] = anon_sym_DOLLAR;
	v->a[2849] = actions(103);
	v->a[2850] = 1;
	v->a[2851] = anon_sym_DQUOTE;
	v->a[2852] = actions(107);
	v->a[2853] = 1;
	v->a[2854] = anon_sym_DOLLAR_LBRACE;
	v->a[2855] = actions(109);
	v->a[2856] = 1;
	v->a[2857] = anon_sym_DOLLAR_LPAREN;
	v->a[2858] = actions(111);
	v->a[2859] = 1;
	small_parse_table_143(v);
}

void	small_parse_table_143(t_small_parse_table_array *v)
{
	v->a[2860] = anon_sym_BQUOTE;
	v->a[2861] = actions(113);
	v->a[2862] = 1;
	v->a[2863] = sym_variable_name;
	v->a[2864] = actions(115);
	v->a[2865] = 1;
	v->a[2866] = anon_sym_LF;
	v->a[2867] = state(104);
	v->a[2868] = 1;
	v->a[2869] = aux_sym__statements_repeat1;
	v->a[2870] = state(170);
	v->a[2871] = 1;
	v->a[2872] = sym_command_name;
	v->a[2873] = state(177);
	v->a[2874] = 1;
	v->a[2875] = sym_variable_assignment;
	v->a[2876] = state(326);
	v->a[2877] = 1;
	v->a[2878] = aux_sym__case_item_last_repeat2;
	v->a[2879] = state(408);
	small_parse_table_144(v);
}

void	small_parse_table_144(t_small_parse_table_array *v)
{
	v->a[2880] = 1;
	v->a[2881] = aux_sym_command_repeat1;
	v->a[2882] = state(541);
	v->a[2883] = 1;
	v->a[2884] = sym_file_redirect;
	v->a[2885] = state(546);
	v->a[2886] = 1;
	v->a[2887] = sym_concatenation;
	v->a[2888] = state(913);
	v->a[2889] = 1;
	v->a[2890] = sym_pipeline;
	v->a[2891] = state(990);
	v->a[2892] = 1;
	v->a[2893] = aux_sym_redirected_statement_repeat2;
	v->a[2894] = state(1564);
	v->a[2895] = 1;
	v->a[2896] = sym__statement_not_pipeline;
	v->a[2897] = state(1575);
	v->a[2898] = 1;
	v->a[2899] = sym__statements;
	small_parse_table_145(v);
}

/* EOF small_parse_table_28.c */
