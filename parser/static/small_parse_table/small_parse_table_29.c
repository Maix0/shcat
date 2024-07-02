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
	v->a[2900] = anon_sym_DOLLAR;
	v->a[2901] = actions(107);
	v->a[2902] = 1;
	v->a[2903] = anon_sym_DQUOTE;
	v->a[2904] = actions(111);
	v->a[2905] = 1;
	v->a[2906] = anon_sym_DOLLAR_LBRACE;
	v->a[2907] = actions(113);
	v->a[2908] = 1;
	v->a[2909] = anon_sym_DOLLAR_LPAREN;
	v->a[2910] = actions(115);
	v->a[2911] = 1;
	v->a[2912] = anon_sym_BQUOTE;
	v->a[2913] = actions(117);
	v->a[2914] = 1;
	v->a[2915] = sym_file_descriptor;
	v->a[2916] = actions(119);
	v->a[2917] = 1;
	v->a[2918] = sym_variable_name;
	v->a[2919] = state(122);
	small_parse_table_146(v);
}

void	small_parse_table_146(t_small_parse_table_array *v)
{
	v->a[2920] = 1;
	v->a[2921] = aux_sym__statements_repeat1;
	v->a[2922] = state(172);
	v->a[2923] = 1;
	v->a[2924] = sym_command_name;
	v->a[2925] = state(234);
	v->a[2926] = 1;
	v->a[2927] = sym_variable_assignment;
	v->a[2928] = state(567);
	v->a[2929] = 1;
	v->a[2930] = sym_concatenation;
	v->a[2931] = state(634);
	v->a[2932] = 1;
	v->a[2933] = sym_file_redirect;
	v->a[2934] = state(670);
	v->a[2935] = 1;
	v->a[2936] = aux_sym_command_repeat1;
	v->a[2937] = state(672);
	v->a[2938] = 1;
	v->a[2939] = aux_sym__case_item_last_repeat2;
	small_parse_table_147(v);
}

void	small_parse_table_147(t_small_parse_table_array *v)
{
	v->a[2940] = state(1014);
	v->a[2941] = 1;
	v->a[2942] = sym_pipeline;
	v->a[2943] = state(1157);
	v->a[2944] = 1;
	v->a[2945] = aux_sym_redirected_statement_repeat2;
	v->a[2946] = state(1901);
	v->a[2947] = 1;
	v->a[2948] = sym__statement_not_pipeline;
	v->a[2949] = state(1909);
	v->a[2950] = 1;
	v->a[2951] = sym__statements;
	v->a[2952] = actions(87);
	v->a[2953] = 2;
	v->a[2954] = anon_sym_while;
	v->a[2955] = anon_sym_until;
	v->a[2956] = actions(109);
	v->a[2957] = 2;
	v->a[2958] = sym_raw_string;
	v->a[2959] = sym_number;
	small_parse_table_148(v);
}

void	small_parse_table_148(t_small_parse_table_array *v)
{
	v->a[2960] = state(348);
	v->a[2961] = 5;
	v->a[2962] = sym_arithmetic_expansion;
	v->a[2963] = sym_string;
	v->a[2964] = sym_simple_expansion;
	v->a[2965] = sym_expansion;
	v->a[2966] = sym_command_substitution;
	v->a[2967] = actions(101);
	v->a[2968] = 7;
	v->a[2969] = anon_sym_LT;
	v->a[2970] = anon_sym_GT;
	v->a[2971] = anon_sym_GT_GT;
	v->a[2972] = anon_sym_LT_AMP;
	v->a[2973] = anon_sym_GT_AMP;
	v->a[2974] = anon_sym_GT_PIPE;
	v->a[2975] = anon_sym_LT_GT;
	v->a[2976] = state(1001);
	v->a[2977] = 12;
	v->a[2978] = sym_redirected_statement;
	v->a[2979] = sym_for_statement;
	small_parse_table_149(v);
}

void	small_parse_table_149(t_small_parse_table_array *v)
{
	v->a[2980] = sym_while_statement;
	v->a[2981] = sym_if_statement;
	v->a[2982] = sym_case_statement;
	v->a[2983] = sym_function_definition;
	v->a[2984] = sym_compound_statement;
	v->a[2985] = sym_subshell;
	v->a[2986] = sym_list;
	v->a[2987] = sym_negated_command;
	v->a[2988] = sym_command;
	v->a[2989] = sym__variable_assignments;
	v->a[2990] = 33;
	v->a[2991] = actions(3);
	v->a[2992] = 1;
	v->a[2993] = sym_comment;
	v->a[2994] = actions(83);
	v->a[2995] = 1;
	v->a[2996] = sym_word;
	v->a[2997] = actions(85);
	v->a[2998] = 1;
	v->a[2999] = anon_sym_for;
	small_parse_table_150(v);
}

/* EOF small_parse_table_29.c */
