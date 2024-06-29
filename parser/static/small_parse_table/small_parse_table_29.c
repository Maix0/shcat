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
	v->a[2900] = anon_sym_BQUOTE;
	v->a[2901] = actions(194);
	v->a[2902] = 1;
	v->a[2903] = sym_file_descriptor;
	v->a[2904] = actions(197);
	v->a[2905] = 1;
	v->a[2906] = sym_variable_name;
	v->a[2907] = state(24);
	v->a[2908] = 1;
	v->a[2909] = aux_sym__terminated_statement;
	v->a[2910] = state(191);
	v->a[2911] = 1;
	v->a[2912] = sym_command_name;
	v->a[2913] = state(279);
	v->a[2914] = 1;
	v->a[2915] = sym_variable_assignment;
	v->a[2916] = state(624);
	v->a[2917] = 1;
	v->a[2918] = sym_concatenation;
	v->a[2919] = state(726);
	small_parse_table_146(v);
}

void	small_parse_table_146(t_small_parse_table_array *v)
{
	v->a[2920] = 1;
	v->a[2921] = sym_file_redirect;
	v->a[2922] = state(733);
	v->a[2923] = 1;
	v->a[2924] = aux_sym_command_repeat1;
	v->a[2925] = state(1223);
	v->a[2926] = 1;
	v->a[2927] = sym_pipeline;
	v->a[2928] = state(1307);
	v->a[2929] = 1;
	v->a[2930] = aux_sym_redirected_statement_repeat2;
	v->a[2931] = state(2117);
	v->a[2932] = 1;
	v->a[2933] = sym__statement_not_pipeline;
	v->a[2934] = actions(147);
	v->a[2935] = 2;
	v->a[2936] = anon_sym_while;
	v->a[2937] = anon_sym_until;
	v->a[2938] = actions(170);
	v->a[2939] = 2;
	small_parse_table_147(v);
}

void	small_parse_table_147(t_small_parse_table_array *v)
{
	v->a[2940] = anon_sym_LT_AMP_DASH;
	v->a[2941] = anon_sym_GT_AMP_DASH;
	v->a[2942] = actions(182);
	v->a[2943] = 2;
	v->a[2944] = sym_raw_string;
	v->a[2945] = sym_number;
	v->a[2946] = actions(153);
	v->a[2947] = 3;
	v->a[2948] = anon_sym_fi;
	v->a[2949] = anon_sym_elif;
	v->a[2950] = anon_sym_else;
	v->a[2951] = state(420);
	v->a[2952] = 5;
	v->a[2953] = sym_arithmetic_expansion;
	v->a[2954] = sym_string;
	v->a[2955] = sym_simple_expansion;
	v->a[2956] = sym_expansion;
	v->a[2957] = sym_command_substitution;
	v->a[2958] = actions(167);
	v->a[2959] = 8;
	small_parse_table_148(v);
}

void	small_parse_table_148(t_small_parse_table_array *v)
{
	v->a[2960] = anon_sym_LT;
	v->a[2961] = anon_sym_GT;
	v->a[2962] = anon_sym_GT_GT;
	v->a[2963] = anon_sym_AMP_GT;
	v->a[2964] = anon_sym_AMP_GT_GT;
	v->a[2965] = anon_sym_LT_AMP;
	v->a[2966] = anon_sym_GT_AMP;
	v->a[2967] = anon_sym_GT_PIPE;
	v->a[2968] = state(1140);
	v->a[2969] = 12;
	v->a[2970] = sym_redirected_statement;
	v->a[2971] = sym_for_statement;
	v->a[2972] = sym_while_statement;
	v->a[2973] = sym_if_statement;
	v->a[2974] = sym_case_statement;
	v->a[2975] = sym_function_definition;
	v->a[2976] = sym_compound_statement;
	v->a[2977] = sym_subshell;
	v->a[2978] = sym_list;
	v->a[2979] = sym_negated_command;
	small_parse_table_149(v);
}

void	small_parse_table_149(t_small_parse_table_array *v)
{
	v->a[2980] = sym_command;
	v->a[2981] = sym__variable_assignments;
	v->a[2982] = 34;
	v->a[2983] = actions(3);
	v->a[2984] = 1;
	v->a[2985] = sym_comment;
	v->a[2986] = actions(87);
	v->a[2987] = 1;
	v->a[2988] = sym_word;
	v->a[2989] = actions(89);
	v->a[2990] = 1;
	v->a[2991] = anon_sym_for;
	v->a[2992] = actions(93);
	v->a[2993] = 1;
	v->a[2994] = anon_sym_if;
	v->a[2995] = actions(95);
	v->a[2996] = 1;
	v->a[2997] = anon_sym_case;
	v->a[2998] = actions(97);
	v->a[2999] = 1;
	small_parse_table_150(v);
}

/* EOF small_parse_table_29.c */
