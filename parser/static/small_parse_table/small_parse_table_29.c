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
	v->a[2900] = sym_while_statement;
	v->a[2901] = sym_if_statement;
	v->a[2902] = sym_case_statement;
	v->a[2903] = sym_function_definition;
	v->a[2904] = sym_compound_statement;
	v->a[2905] = sym_subshell;
	v->a[2906] = sym_list;
	v->a[2907] = sym_negated_command;
	v->a[2908] = sym_command;
	v->a[2909] = sym__variable_assignments;
	v->a[2910] = 32;
	v->a[2911] = actions(3);
	v->a[2912] = 1;
	v->a[2913] = sym_comment;
	v->a[2914] = actions(9);
	v->a[2915] = 1;
	v->a[2916] = anon_sym_for;
	v->a[2917] = actions(13);
	v->a[2918] = 1;
	v->a[2919] = anon_sym_if;
	small_parse_table_146(v);
}

void	small_parse_table_146(t_small_parse_table_array *v)
{
	v->a[2920] = actions(15);
	v->a[2921] = 1;
	v->a[2922] = anon_sym_case;
	v->a[2923] = actions(17);
	v->a[2924] = 1;
	v->a[2925] = anon_sym_LPAREN;
	v->a[2926] = actions(19);
	v->a[2927] = 1;
	v->a[2928] = anon_sym_LBRACE;
	v->a[2929] = actions(41);
	v->a[2930] = 1;
	v->a[2931] = sym_word;
	v->a[2932] = actions(49);
	v->a[2933] = 1;
	v->a[2934] = anon_sym_BANG;
	v->a[2935] = actions(53);
	v->a[2936] = 1;
	v->a[2937] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[2938] = actions(55);
	v->a[2939] = 1;
	small_parse_table_147(v);
}

void	small_parse_table_147(t_small_parse_table_array *v)
{
	v->a[2940] = anon_sym_DOLLAR;
	v->a[2941] = actions(57);
	v->a[2942] = 1;
	v->a[2943] = anon_sym_DQUOTE;
	v->a[2944] = actions(61);
	v->a[2945] = 1;
	v->a[2946] = anon_sym_DOLLAR_LBRACE;
	v->a[2947] = actions(63);
	v->a[2948] = 1;
	v->a[2949] = anon_sym_DOLLAR_LPAREN;
	v->a[2950] = actions(65);
	v->a[2951] = 1;
	v->a[2952] = anon_sym_BQUOTE;
	v->a[2953] = actions(67);
	v->a[2954] = 1;
	v->a[2955] = sym_variable_name;
	v->a[2956] = actions(186);
	v->a[2957] = 1;
	v->a[2958] = anon_sym_LF;
	v->a[2959] = state(16);
	small_parse_table_148(v);
}

void	small_parse_table_148(t_small_parse_table_array *v)
{
	v->a[2960] = 1;
	v->a[2961] = aux_sym__case_item_last_repeat2;
	v->a[2962] = state(117);
	v->a[2963] = 1;
	v->a[2964] = aux_sym__statements_repeat1;
	v->a[2965] = state(271);
	v->a[2966] = 1;
	v->a[2967] = sym_command_name;
	v->a[2968] = state(288);
	v->a[2969] = 1;
	v->a[2970] = sym_variable_assignment;
	v->a[2971] = state(482);
	v->a[2972] = 1;
	v->a[2973] = aux_sym_command_repeat1;
	v->a[2974] = state(600);
	v->a[2975] = 1;
	v->a[2976] = sym_file_redirect;
	v->a[2977] = state(602);
	v->a[2978] = 1;
	v->a[2979] = sym_concatenation;
	small_parse_table_149(v);
}

void	small_parse_table_149(t_small_parse_table_array *v)
{
	v->a[2980] = state(1014);
	v->a[2981] = 1;
	v->a[2982] = sym_pipeline;
	v->a[2983] = state(1068);
	v->a[2984] = 1;
	v->a[2985] = aux_sym_redirected_statement_repeat2;
	v->a[2986] = state(1609);
	v->a[2987] = 1;
	v->a[2988] = sym__statement_not_pipeline;
	v->a[2989] = state(1764);
	v->a[2990] = 1;
	v->a[2991] = sym__statements;
	v->a[2992] = actions(11);
	v->a[2993] = 2;
	v->a[2994] = anon_sym_while;
	v->a[2995] = anon_sym_until;
	v->a[2996] = actions(59);
	v->a[2997] = 2;
	v->a[2998] = sym_raw_string;
	v->a[2999] = sym_number;
	small_parse_table_150(v);
}

/* EOF small_parse_table_29.c */
