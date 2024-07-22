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
	v->a[2900] = 1;
	v->a[2901] = anon_sym_BQUOTE;
	v->a[2902] = actions(121);
	v->a[2903] = 1;
	v->a[2904] = sym_file_descriptor;
	v->a[2905] = actions(123);
	v->a[2906] = 1;
	v->a[2907] = sym_variable_name;
	v->a[2908] = actions(193);
	v->a[2909] = 1;
	v->a[2910] = anon_sym_LF;
	v->a[2911] = state(33);
	v->a[2912] = 1;
	v->a[2913] = aux_sym__case_item_last_repeat2;
	v->a[2914] = state(131);
	v->a[2915] = 1;
	v->a[2916] = aux_sym__statements_repeat1;
	v->a[2917] = state(173);
	v->a[2918] = 1;
	v->a[2919] = sym_command_name;
	small_parse_table_146(v);
}

void	small_parse_table_146(t_small_parse_table_array *v)
{
	v->a[2920] = state(263);
	v->a[2921] = 1;
	v->a[2922] = sym_variable_assignment;
	v->a[2923] = state(597);
	v->a[2924] = 1;
	v->a[2925] = aux_sym_command_repeat1;
	v->a[2926] = state(598);
	v->a[2927] = 1;
	v->a[2928] = sym_concatenation;
	v->a[2929] = state(714);
	v->a[2930] = 1;
	v->a[2931] = sym_file_redirect;
	v->a[2932] = state(1063);
	v->a[2933] = 1;
	v->a[2934] = sym_pipeline;
	v->a[2935] = state(1123);
	v->a[2936] = 1;
	v->a[2937] = aux_sym_redirected_statement_repeat2;
	v->a[2938] = state(1903);
	v->a[2939] = 1;
	small_parse_table_147(v);
}

void	small_parse_table_147(t_small_parse_table_array *v)
{
	v->a[2940] = sym__statement_not_pipeline;
	v->a[2941] = state(1915);
	v->a[2942] = 1;
	v->a[2943] = sym__statements;
	v->a[2944] = actions(91);
	v->a[2945] = 2;
	v->a[2946] = anon_sym_while;
	v->a[2947] = anon_sym_until;
	v->a[2948] = actions(113);
	v->a[2949] = 2;
	v->a[2950] = sym_raw_string;
	v->a[2951] = sym_number;
	v->a[2952] = state(378);
	v->a[2953] = 5;
	v->a[2954] = sym_arithmetic_expansion;
	v->a[2955] = sym_string;
	v->a[2956] = sym_simple_expansion;
	v->a[2957] = sym_expansion;
	v->a[2958] = sym_command_substitution;
	v->a[2959] = actions(105);
	small_parse_table_148(v);
}

void	small_parse_table_148(t_small_parse_table_array *v)
{
	v->a[2960] = 7;
	v->a[2961] = anon_sym_LT;
	v->a[2962] = anon_sym_GT;
	v->a[2963] = anon_sym_GT_GT;
	v->a[2964] = anon_sym_LT_AMP;
	v->a[2965] = anon_sym_GT_AMP;
	v->a[2966] = anon_sym_GT_PIPE;
	v->a[2967] = anon_sym_LT_GT;
	v->a[2968] = state(987);
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
	v->a[2982] = 33;
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
