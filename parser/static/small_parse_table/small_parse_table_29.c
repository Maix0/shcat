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
	v->a[2900] = actions(83);
	v->a[2901] = 2;
	v->a[2902] = anon_sym_while;
	v->a[2903] = anon_sym_until;
	v->a[2904] = actions(105);
	v->a[2905] = 2;
	v->a[2906] = sym_raw_string;
	v->a[2907] = sym_number;
	v->a[2908] = actions(97);
	v->a[2909] = 3;
	v->a[2910] = anon_sym_LT;
	v->a[2911] = anon_sym_GT;
	v->a[2912] = anon_sym_GT_GT;
	v->a[2913] = state(276);
	v->a[2914] = 5;
	v->a[2915] = sym_arithmetic_expansion;
	v->a[2916] = sym_string;
	v->a[2917] = sym_simple_expansion;
	v->a[2918] = sym_expansion;
	v->a[2919] = sym_command_substitution;
	small_parse_table_146(v);
}

void	small_parse_table_146(t_small_parse_table_array *v)
{
	v->a[2920] = state(867);
	v->a[2921] = 12;
	v->a[2922] = sym_redirected_statement;
	v->a[2923] = sym_for_statement;
	v->a[2924] = sym_while_statement;
	v->a[2925] = sym_if_statement;
	v->a[2926] = sym_case_statement;
	v->a[2927] = sym_function_definition;
	v->a[2928] = sym_compound_statement;
	v->a[2929] = sym_subshell;
	v->a[2930] = sym_list;
	v->a[2931] = sym_negated_command;
	v->a[2932] = sym_command;
	v->a[2933] = sym__variable_assignments;
	v->a[2934] = 30;
	v->a[2935] = actions(3);
	v->a[2936] = 1;
	v->a[2937] = sym_comment;
	v->a[2938] = actions(9);
	v->a[2939] = 1;
	small_parse_table_147(v);
}

void	small_parse_table_147(t_small_parse_table_array *v)
{
	v->a[2940] = anon_sym_for;
	v->a[2941] = actions(13);
	v->a[2942] = 1;
	v->a[2943] = anon_sym_if;
	v->a[2944] = actions(15);
	v->a[2945] = 1;
	v->a[2946] = anon_sym_case;
	v->a[2947] = actions(17);
	v->a[2948] = 1;
	v->a[2949] = anon_sym_LPAREN;
	v->a[2950] = actions(19);
	v->a[2951] = 1;
	v->a[2952] = anon_sym_LBRACE;
	v->a[2953] = actions(41);
	v->a[2954] = 1;
	v->a[2955] = sym_word;
	v->a[2956] = actions(49);
	v->a[2957] = 1;
	v->a[2958] = anon_sym_BANG;
	v->a[2959] = actions(53);
	small_parse_table_148(v);
}

void	small_parse_table_148(t_small_parse_table_array *v)
{
	v->a[2960] = 1;
	v->a[2961] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[2962] = actions(55);
	v->a[2963] = 1;
	v->a[2964] = anon_sym_DOLLAR;
	v->a[2965] = actions(57);
	v->a[2966] = 1;
	v->a[2967] = anon_sym_DQUOTE;
	v->a[2968] = actions(61);
	v->a[2969] = 1;
	v->a[2970] = anon_sym_DOLLAR_LBRACE;
	v->a[2971] = actions(63);
	v->a[2972] = 1;
	v->a[2973] = anon_sym_DOLLAR_LPAREN;
	v->a[2974] = actions(65);
	v->a[2975] = 1;
	v->a[2976] = anon_sym_BQUOTE;
	v->a[2977] = actions(67);
	v->a[2978] = 1;
	v->a[2979] = sym_variable_name;
	small_parse_table_149(v);
}

void	small_parse_table_149(t_small_parse_table_array *v)
{
	v->a[2980] = state(19);
	v->a[2981] = 1;
	v->a[2982] = aux_sym__terminated_statement;
	v->a[2983] = state(185);
	v->a[2984] = 1;
	v->a[2985] = sym_command_name;
	v->a[2986] = state(231);
	v->a[2987] = 1;
	v->a[2988] = sym_variable_assignment;
	v->a[2989] = state(411);
	v->a[2990] = 1;
	v->a[2991] = aux_sym_command_repeat1;
	v->a[2992] = state(551);
	v->a[2993] = 1;
	v->a[2994] = sym_file_redirect;
	v->a[2995] = state(555);
	v->a[2996] = 1;
	v->a[2997] = sym_concatenation;
	v->a[2998] = state(1070);
	v->a[2999] = 1;
	small_parse_table_150(v);
}

/* EOF small_parse_table_29.c */
