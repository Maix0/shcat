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
	v->a[2901] = anon_sym_DOLLAR;
	v->a[2902] = actions(111);
	v->a[2903] = 1;
	v->a[2904] = anon_sym_DQUOTE;
	v->a[2905] = actions(115);
	v->a[2906] = 1;
	v->a[2907] = anon_sym_DOLLAR_LBRACE;
	v->a[2908] = actions(117);
	v->a[2909] = 1;
	v->a[2910] = anon_sym_DOLLAR_LPAREN;
	v->a[2911] = actions(119);
	v->a[2912] = 1;
	v->a[2913] = anon_sym_BQUOTE;
	v->a[2914] = actions(121);
	v->a[2915] = 1;
	v->a[2916] = sym_file_descriptor;
	v->a[2917] = actions(123);
	v->a[2918] = 1;
	v->a[2919] = sym_variable_name;
	small_parse_table_146(v);
}

void	small_parse_table_146(t_small_parse_table_array *v)
{
	v->a[2920] = actions(137);
	v->a[2921] = 1;
	v->a[2922] = anon_sym_LF;
	v->a[2923] = state(31);
	v->a[2924] = 1;
	v->a[2925] = aux_sym__case_item_last_repeat2;
	v->a[2926] = state(127);
	v->a[2927] = 1;
	v->a[2928] = aux_sym__statements_repeat1;
	v->a[2929] = state(178);
	v->a[2930] = 1;
	v->a[2931] = sym_command_name;
	v->a[2932] = state(228);
	v->a[2933] = 1;
	v->a[2934] = sym_variable_assignment;
	v->a[2935] = state(592);
	v->a[2936] = 1;
	v->a[2937] = sym_concatenation;
	v->a[2938] = state(641);
	v->a[2939] = 1;
	small_parse_table_147(v);
}

void	small_parse_table_147(t_small_parse_table_array *v)
{
	v->a[2940] = sym_file_redirect;
	v->a[2941] = state(662);
	v->a[2942] = 1;
	v->a[2943] = aux_sym_command_repeat1;
	v->a[2944] = state(1017);
	v->a[2945] = 1;
	v->a[2946] = sym_pipeline;
	v->a[2947] = state(1168);
	v->a[2948] = 1;
	v->a[2949] = aux_sym_redirected_statement_repeat2;
	v->a[2950] = state(1901);
	v->a[2951] = 1;
	v->a[2952] = sym__statement_not_pipeline;
	v->a[2953] = state(1902);
	v->a[2954] = 1;
	v->a[2955] = sym__statements;
	v->a[2956] = actions(91);
	v->a[2957] = 2;
	v->a[2958] = anon_sym_while;
	v->a[2959] = anon_sym_until;
	small_parse_table_148(v);
}

void	small_parse_table_148(t_small_parse_table_array *v)
{
	v->a[2960] = actions(113);
	v->a[2961] = 2;
	v->a[2962] = sym_raw_string;
	v->a[2963] = sym_number;
	v->a[2964] = state(359);
	v->a[2965] = 5;
	v->a[2966] = sym_arithmetic_expansion;
	v->a[2967] = sym_string;
	v->a[2968] = sym_simple_expansion;
	v->a[2969] = sym_expansion;
	v->a[2970] = sym_command_substitution;
	v->a[2971] = actions(105);
	v->a[2972] = 7;
	v->a[2973] = anon_sym_LT;
	v->a[2974] = anon_sym_GT;
	v->a[2975] = anon_sym_GT_GT;
	v->a[2976] = anon_sym_LT_AMP;
	v->a[2977] = anon_sym_GT_AMP;
	v->a[2978] = anon_sym_GT_PIPE;
	v->a[2979] = anon_sym_LT_GT;
	small_parse_table_149(v);
}

void	small_parse_table_149(t_small_parse_table_array *v)
{
	v->a[2980] = state(1005);
	v->a[2981] = 12;
	v->a[2982] = sym_redirected_statement;
	v->a[2983] = sym_for_statement;
	v->a[2984] = sym_while_statement;
	v->a[2985] = sym_if_statement;
	v->a[2986] = sym_case_statement;
	v->a[2987] = sym_function_definition;
	v->a[2988] = sym_compound_statement;
	v->a[2989] = sym_subshell;
	v->a[2990] = sym_list;
	v->a[2991] = sym_negated_command;
	v->a[2992] = sym_command;
	v->a[2993] = sym__variable_assignments;
	v->a[2994] = 33;
	v->a[2995] = actions(3);
	v->a[2996] = 1;
	v->a[2997] = sym_comment;
	v->a[2998] = actions(87);
	v->a[2999] = 1;
	small_parse_table_150(v);
}

/* EOF small_parse_table_29.c */
