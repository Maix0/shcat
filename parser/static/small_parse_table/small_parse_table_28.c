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
	v->a[2800] = sym_while_statement;
	v->a[2801] = sym_if_statement;
	v->a[2802] = sym_case_statement;
	v->a[2803] = sym_function_definition;
	v->a[2804] = sym_compound_statement;
	v->a[2805] = sym_subshell;
	v->a[2806] = sym_list;
	v->a[2807] = sym_negated_command;
	v->a[2808] = sym_command;
	v->a[2809] = sym__variable_assignments;
	v->a[2810] = 34;
	v->a[2811] = actions(3);
	v->a[2812] = 1;
	v->a[2813] = sym_comment;
	v->a[2814] = actions(87);
	v->a[2815] = 1;
	v->a[2816] = anon_sym_LF;
	v->a[2817] = actions(156);
	v->a[2818] = 1;
	v->a[2819] = sym_word;
	small_parse_table_141(v);
}

void	small_parse_table_141(t_small_parse_table_array *v)
{
	v->a[2820] = actions(158);
	v->a[2821] = 1;
	v->a[2822] = anon_sym_for;
	v->a[2823] = actions(162);
	v->a[2824] = 1;
	v->a[2825] = anon_sym_if;
	v->a[2826] = actions(164);
	v->a[2827] = 1;
	v->a[2828] = anon_sym_case;
	v->a[2829] = actions(166);
	v->a[2830] = 1;
	v->a[2831] = anon_sym_LPAREN;
	v->a[2832] = actions(168);
	v->a[2833] = 1;
	v->a[2834] = anon_sym_LBRACE;
	v->a[2835] = actions(170);
	v->a[2836] = 1;
	v->a[2837] = anon_sym_BANG;
	v->a[2838] = actions(176);
	v->a[2839] = 1;
	small_parse_table_142(v);
}

void	small_parse_table_142(t_small_parse_table_array *v)
{
	v->a[2840] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[2841] = actions(178);
	v->a[2842] = 1;
	v->a[2843] = anon_sym_DOLLAR;
	v->a[2844] = actions(180);
	v->a[2845] = 1;
	v->a[2846] = anon_sym_DQUOTE;
	v->a[2847] = actions(184);
	v->a[2848] = 1;
	v->a[2849] = anon_sym_DOLLAR_LBRACE;
	v->a[2850] = actions(186);
	v->a[2851] = 1;
	v->a[2852] = anon_sym_DOLLAR_LPAREN;
	v->a[2853] = actions(188);
	v->a[2854] = 1;
	v->a[2855] = anon_sym_BQUOTE;
	v->a[2856] = actions(190);
	v->a[2857] = 1;
	v->a[2858] = sym_file_descriptor;
	v->a[2859] = actions(192);
	small_parse_table_143(v);
}

void	small_parse_table_143(t_small_parse_table_array *v)
{
	v->a[2860] = 1;
	v->a[2861] = sym_variable_name;
	v->a[2862] = state(140);
	v->a[2863] = 1;
	v->a[2864] = aux_sym__statements_repeat1;
	v->a[2865] = state(186);
	v->a[2866] = 1;
	v->a[2867] = sym_command_name;
	v->a[2868] = state(213);
	v->a[2869] = 1;
	v->a[2870] = sym_variable_assignment;
	v->a[2871] = state(636);
	v->a[2872] = 1;
	v->a[2873] = sym_concatenation;
	v->a[2874] = state(677);
	v->a[2875] = 1;
	v->a[2876] = sym_file_redirect;
	v->a[2877] = state(678);
	v->a[2878] = 1;
	v->a[2879] = aux_sym__case_item_last_repeat2;
	small_parse_table_144(v);
}

void	small_parse_table_144(t_small_parse_table_array *v)
{
	v->a[2880] = state(752);
	v->a[2881] = 1;
	v->a[2882] = aux_sym_command_repeat1;
	v->a[2883] = state(1133);
	v->a[2884] = 1;
	v->a[2885] = sym_pipeline;
	v->a[2886] = state(1226);
	v->a[2887] = 1;
	v->a[2888] = aux_sym_redirected_statement_repeat2;
	v->a[2889] = state(2101);
	v->a[2890] = 1;
	v->a[2891] = sym__statements;
	v->a[2892] = state(2111);
	v->a[2893] = 1;
	v->a[2894] = sym__statement_not_pipeline;
	v->a[2895] = actions(160);
	v->a[2896] = 2;
	v->a[2897] = anon_sym_while;
	v->a[2898] = anon_sym_until;
	v->a[2899] = actions(174);
	small_parse_table_145(v);
}

/* EOF small_parse_table_28.c */
