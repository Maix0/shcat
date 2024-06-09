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
	v->a[2900] = actions(81);
	v->a[2901] = 1;
	v->a[2902] = sym_file_descriptor;
	v->a[2903] = actions(83);
	v->a[2904] = 1;
	v->a[2905] = sym_variable_name;
	v->a[2906] = state(21);
	v->a[2907] = 1;
	v->a[2908] = aux_sym__terminated_statement;
	v->a[2909] = state(190);
	v->a[2910] = 1;
	v->a[2911] = sym_command_name;
	v->a[2912] = state(299);
	v->a[2913] = 1;
	v->a[2914] = sym_variable_assignment;
	v->a[2915] = state(582);
	v->a[2916] = 1;
	v->a[2917] = sym_concatenation;
	v->a[2918] = state(587);
	v->a[2919] = 1;
	small_parse_table_146(v);
}

void	small_parse_table_146(t_small_parse_table_array *v)
{
	v->a[2920] = aux_sym_command_repeat1;
	v->a[2921] = state(718);
	v->a[2922] = 1;
	v->a[2923] = sym_file_redirect;
	v->a[2924] = state(1212);
	v->a[2925] = 1;
	v->a[2926] = sym_pipeline;
	v->a[2927] = state(1213);
	v->a[2928] = 1;
	v->a[2929] = aux_sym_redirected_statement_repeat2;
	v->a[2930] = state(2035);
	v->a[2931] = 1;
	v->a[2932] = sym__statement_not_pipeline;
	v->a[2933] = actions(11);
	v->a[2934] = 2;
	v->a[2935] = anon_sym_while;
	v->a[2936] = anon_sym_until;
	v->a[2937] = actions(61);
	v->a[2938] = 2;
	v->a[2939] = anon_sym_LT_AMP_DASH;
	small_parse_table_147(v);
}

void	small_parse_table_147(t_small_parse_table_array *v)
{
	v->a[2940] = anon_sym_GT_AMP_DASH;
	v->a[2941] = actions(216);
	v->a[2942] = 3;
	v->a[2943] = anon_sym_fi;
	v->a[2944] = anon_sym_elif;
	v->a[2945] = anon_sym_else;
	v->a[2946] = state(397);
	v->a[2947] = 6;
	v->a[2948] = sym_arithmetic_expansion;
	v->a[2949] = sym_string;
	v->a[2950] = sym_number;
	v->a[2951] = sym_simple_expansion;
	v->a[2952] = sym_expansion;
	v->a[2953] = sym_command_substitution;
	v->a[2954] = actions(59);
	v->a[2955] = 8;
	v->a[2956] = anon_sym_LT;
	v->a[2957] = anon_sym_GT;
	v->a[2958] = anon_sym_GT_GT;
	v->a[2959] = anon_sym_AMP_GT;
	small_parse_table_148(v);
}

void	small_parse_table_148(t_small_parse_table_array *v)
{
	v->a[2960] = anon_sym_AMP_GT_GT;
	v->a[2961] = anon_sym_LT_AMP;
	v->a[2962] = anon_sym_GT_AMP;
	v->a[2963] = anon_sym_GT_PIPE;
	v->a[2964] = state(1183);
	v->a[2965] = 12;
	v->a[2966] = sym_redirected_statement;
	v->a[2967] = sym_for_statement;
	v->a[2968] = sym_while_statement;
	v->a[2969] = sym_if_statement;
	v->a[2970] = sym_case_statement;
	v->a[2971] = sym_function_definition;
	v->a[2972] = sym_compound_statement;
	v->a[2973] = sym_subshell;
	v->a[2974] = sym_list;
	v->a[2975] = sym_negated_command;
	v->a[2976] = sym_command;
	v->a[2977] = sym_variable_assignments;
	v->a[2978] = 36;
	v->a[2979] = actions(3);
	small_parse_table_149(v);
}

void	small_parse_table_149(t_small_parse_table_array *v)
{
	v->a[2980] = 1;
	v->a[2981] = sym_comment;
	v->a[2982] = actions(9);
	v->a[2983] = 1;
	v->a[2984] = anon_sym_for;
	v->a[2985] = actions(13);
	v->a[2986] = 1;
	v->a[2987] = anon_sym_if;
	v->a[2988] = actions(15);
	v->a[2989] = 1;
	v->a[2990] = anon_sym_case;
	v->a[2991] = actions(17);
	v->a[2992] = 1;
	v->a[2993] = anon_sym_LPAREN;
	v->a[2994] = actions(19);
	v->a[2995] = 1;
	v->a[2996] = anon_sym_LBRACE;
	v->a[2997] = actions(49);
	v->a[2998] = 1;
	v->a[2999] = sym_word;
	small_parse_table_150(v);
}

/* EOF small_parse_table_29.c */
