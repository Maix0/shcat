/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_29.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_145(t_small_parse_table_array *v)
{
	v->a[2900] = 2;
	v->a[2901] = anon_sym_LT_AMP_DASH;
	v->a[2902] = anon_sym_GT_AMP_DASH;
	v->a[2903] = actions(182);
	v->a[2904] = 2;
	v->a[2905] = sym_raw_string;
	v->a[2906] = sym_number;
	v->a[2907] = state(385);
	v->a[2908] = 5;
	v->a[2909] = sym_arithmetic_expansion;
	v->a[2910] = sym_string;
	v->a[2911] = sym_simple_expansion;
	v->a[2912] = sym_expansion;
	v->a[2913] = sym_command_substitution;
	v->a[2914] = actions(172);
	v->a[2915] = 6;
	v->a[2916] = anon_sym_LT;
	v->a[2917] = anon_sym_GT;
	v->a[2918] = anon_sym_GT_GT;
	v->a[2919] = anon_sym_LT_AMP;
	small_parse_table_146(v);
}

void	small_parse_table_146(t_small_parse_table_array *v)
{
	v->a[2920] = anon_sym_GT_AMP;
	v->a[2921] = anon_sym_GT_PIPE;
	v->a[2922] = state(1075);
	v->a[2923] = 12;
	v->a[2924] = sym_redirected_statement;
	v->a[2925] = sym_for_statement;
	v->a[2926] = sym_while_statement;
	v->a[2927] = sym_if_statement;
	v->a[2928] = sym_case_statement;
	v->a[2929] = sym_function_definition;
	v->a[2930] = sym_compound_statement;
	v->a[2931] = sym_subshell;
	v->a[2932] = sym_list;
	v->a[2933] = sym_negated_command;
	v->a[2934] = sym_command;
	v->a[2935] = sym__variable_assignments;
	v->a[2936] = 34;
	v->a[2937] = actions(3);
	v->a[2938] = 1;
	v->a[2939] = sym_comment;
	small_parse_table_147(v);
}

void	small_parse_table_147(t_small_parse_table_array *v)
{
	v->a[2940] = actions(156);
	v->a[2941] = 1;
	v->a[2942] = sym_word;
	v->a[2943] = actions(158);
	v->a[2944] = 1;
	v->a[2945] = anon_sym_for;
	v->a[2946] = actions(162);
	v->a[2947] = 1;
	v->a[2948] = anon_sym_if;
	v->a[2949] = actions(164);
	v->a[2950] = 1;
	v->a[2951] = anon_sym_case;
	v->a[2952] = actions(166);
	v->a[2953] = 1;
	v->a[2954] = anon_sym_LPAREN;
	v->a[2955] = actions(168);
	v->a[2956] = 1;
	v->a[2957] = anon_sym_LBRACE;
	v->a[2958] = actions(170);
	v->a[2959] = 1;
	small_parse_table_148(v);
}

void	small_parse_table_148(t_small_parse_table_array *v)
{
	v->a[2960] = anon_sym_BANG;
	v->a[2961] = actions(176);
	v->a[2962] = 1;
	v->a[2963] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[2964] = actions(178);
	v->a[2965] = 1;
	v->a[2966] = anon_sym_DOLLAR;
	v->a[2967] = actions(180);
	v->a[2968] = 1;
	v->a[2969] = anon_sym_DQUOTE;
	v->a[2970] = actions(184);
	v->a[2971] = 1;
	v->a[2972] = anon_sym_DOLLAR_LBRACE;
	v->a[2973] = actions(186);
	v->a[2974] = 1;
	v->a[2975] = anon_sym_DOLLAR_LPAREN;
	v->a[2976] = actions(188);
	v->a[2977] = 1;
	v->a[2978] = anon_sym_BQUOTE;
	v->a[2979] = actions(190);
	small_parse_table_149(v);
}

void	small_parse_table_149(t_small_parse_table_array *v)
{
	v->a[2980] = 1;
	v->a[2981] = sym_file_descriptor;
	v->a[2982] = actions(192);
	v->a[2983] = 1;
	v->a[2984] = sym_variable_name;
	v->a[2985] = actions(198);
	v->a[2986] = 1;
	v->a[2987] = anon_sym_LF;
	v->a[2988] = state(20);
	v->a[2989] = 1;
	v->a[2990] = aux_sym__case_item_last_repeat2;
	v->a[2991] = state(140);
	v->a[2992] = 1;
	v->a[2993] = aux_sym__statements_repeat1;
	v->a[2994] = state(186);
	v->a[2995] = 1;
	v->a[2996] = sym_command_name;
	v->a[2997] = state(213);
	v->a[2998] = 1;
	v->a[2999] = sym_variable_assignment;
	small_parse_table_150(v);
}

/* EOF small_parse_table_29.c */
