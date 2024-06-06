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
	v->a[2900] = sym_concatenation;
	v->a[2901] = state(2185);
	v->a[2902] = 1;
	v->a[2903] = sym_subshell;
	v->a[2904] = actions(695);
	v->a[2905] = 2;
	v->a[2906] = sym_file_descriptor;
	v->a[2907] = aux_sym_heredoc_redirect_token1;
	v->a[2908] = actions(1250);
	v->a[2909] = 2;
	v->a[2910] = sym_raw_string;
	v->a[2911] = sym_word;
	v->a[2912] = state(770);
	v->a[2913] = 7;
	v->a[2914] = sym_arithmetic_expansion;
	v->a[2915] = sym_brace_expression;
	v->a[2916] = sym_string;
	v->a[2917] = sym_number;
	v->a[2918] = sym_simple_expansion;
	v->a[2919] = sym_expansion;
	small_parse_table_146(v);
}

void	small_parse_table_146(t_small_parse_table_array *v)
{
	v->a[2920] = sym_command_substitution;
	v->a[2921] = actions(691);
	v->a[2922] = 20;
	v->a[2923] = anon_sym_PIPE;
	v->a[2924] = anon_sym_RPAREN;
	v->a[2925] = anon_sym_SEMI_SEMI;
	v->a[2926] = anon_sym_PIPE_AMP;
	v->a[2927] = anon_sym_AMP_AMP;
	v->a[2928] = anon_sym_PIPE_PIPE;
	v->a[2929] = anon_sym_LT;
	v->a[2930] = anon_sym_GT;
	v->a[2931] = anon_sym_GT_GT;
	v->a[2932] = anon_sym_AMP_GT;
	v->a[2933] = anon_sym_AMP_GT_GT;
	v->a[2934] = anon_sym_LT_AMP;
	v->a[2935] = anon_sym_GT_AMP;
	v->a[2936] = anon_sym_GT_PIPE;
	v->a[2937] = anon_sym_LT_AMP_DASH;
	v->a[2938] = anon_sym_GT_AMP_DASH;
	v->a[2939] = anon_sym_LT_LT;
	small_parse_table_147(v);
}

void	small_parse_table_147(t_small_parse_table_array *v)
{
	v->a[2940] = anon_sym_LT_LT_DASH;
	v->a[2941] = anon_sym_AMP;
	v->a[2942] = anon_sym_SEMI;
	v->a[2943] = 21;
	v->a[2944] = actions(3);
	v->a[2945] = 1;
	v->a[2946] = sym_comment;
	v->a[2947] = actions(697);
	v->a[2948] = 1;
	v->a[2949] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[2950] = actions(699);
	v->a[2951] = 1;
	v->a[2952] = anon_sym_DOLLAR;
	v->a[2953] = actions(701);
	v->a[2954] = 1;
	v->a[2955] = sym__special_character;
	v->a[2956] = actions(703);
	v->a[2957] = 1;
	v->a[2958] = anon_sym_DQUOTE;
	v->a[2959] = actions(705);
	small_parse_table_148(v);
}

void	small_parse_table_148(t_small_parse_table_array *v)
{
	v->a[2960] = 1;
	v->a[2961] = aux_sym_number_token1;
	v->a[2962] = actions(707);
	v->a[2963] = 1;
	v->a[2964] = aux_sym_number_token2;
	v->a[2965] = actions(709);
	v->a[2966] = 1;
	v->a[2967] = anon_sym_DOLLAR_LBRACE;
	v->a[2968] = actions(711);
	v->a[2969] = 1;
	v->a[2970] = anon_sym_DOLLAR_LPAREN;
	v->a[2971] = actions(713);
	v->a[2972] = 1;
	v->a[2973] = anon_sym_BQUOTE;
	v->a[2974] = actions(715);
	v->a[2975] = 1;
	v->a[2976] = anon_sym_DOLLAR_BQUOTE;
	v->a[2977] = actions(717);
	v->a[2978] = 1;
	v->a[2979] = sym_test_operator;
	small_parse_table_149(v);
}

void	small_parse_table_149(t_small_parse_table_array *v)
{
	v->a[2980] = actions(719);
	v->a[2981] = 1;
	v->a[2982] = sym__bare_dollar;
	v->a[2983] = actions(721);
	v->a[2984] = 1;
	v->a[2985] = sym__brace_start;
	v->a[2986] = state(284);
	v->a[2987] = 1;
	v->a[2988] = aux_sym_command_repeat2;
	v->a[2989] = state(901);
	v->a[2990] = 1;
	v->a[2991] = aux_sym__literal_repeat1;
	v->a[2992] = state(1121);
	v->a[2993] = 1;
	v->a[2994] = sym_concatenation;
	v->a[2995] = actions(689);
	v->a[2996] = 2;
	v->a[2997] = sym_raw_string;
	v->a[2998] = sym_word;
	v->a[2999] = actions(1280);
	small_parse_table_150(v);
}

/* EOF small_parse_table_29.c */
