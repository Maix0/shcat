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
	v->a[2900] = state(1061);
	v->a[2901] = 1;
	v->a[2902] = sym_string;
	v->a[2903] = actions(1813);
	v->a[2904] = 2;
	v->a[2905] = aux_sym__simple_variable_name_token1;
	v->a[2906] = aux_sym__multiline_variable_name_token1;
	v->a[2907] = actions(1235);
	v->a[2908] = 4;
	v->a[2909] = sym_file_descriptor;
	v->a[2910] = sym_test_operator;
	v->a[2911] = sym__bare_dollar;
	v->a[2912] = sym__brace_start;
	v->a[2913] = actions(1809);
	v->a[2914] = 9;
	v->a[2915] = anon_sym_DASH;
	v->a[2916] = anon_sym_STAR;
	v->a[2917] = anon_sym_BANG;
	v->a[2918] = anon_sym_QMARK;
	v->a[2919] = anon_sym_DOLLAR;
	small_parse_table_146(v);
}

void	small_parse_table_146(t_small_parse_table_array *v)
{
	v->a[2920] = anon_sym_POUND;
	v->a[2921] = anon_sym_AT2;
	v->a[2922] = anon_sym_0;
	v->a[2923] = anon_sym__;
	v->a[2924] = actions(1227);
	v->a[2925] = 40;
	v->a[2926] = anon_sym_LPAREN_LPAREN;
	v->a[2927] = anon_sym_SEMI;
	v->a[2928] = anon_sym_PIPE_PIPE;
	v->a[2929] = anon_sym_AMP_AMP;
	v->a[2930] = anon_sym_PIPE;
	v->a[2931] = anon_sym_AMP;
	v->a[2932] = anon_sym_EQ_EQ;
	v->a[2933] = anon_sym_LT;
	v->a[2934] = anon_sym_GT;
	v->a[2935] = anon_sym_LT_LT;
	v->a[2936] = anon_sym_GT_GT;
	v->a[2937] = anon_sym_LPAREN;
	v->a[2938] = anon_sym_RPAREN;
	v->a[2939] = anon_sym_SEMI_SEMI;
	small_parse_table_147(v);
}

void	small_parse_table_147(t_small_parse_table_array *v)
{
	v->a[2940] = anon_sym_PIPE_AMP;
	v->a[2941] = anon_sym_EQ_TILDE;
	v->a[2942] = anon_sym_AMP_GT;
	v->a[2943] = anon_sym_AMP_GT_GT;
	v->a[2944] = anon_sym_LT_AMP;
	v->a[2945] = anon_sym_GT_AMP;
	v->a[2946] = anon_sym_GT_PIPE;
	v->a[2947] = anon_sym_LT_AMP_DASH;
	v->a[2948] = anon_sym_GT_AMP_DASH;
	v->a[2949] = anon_sym_LT_LT_DASH;
	v->a[2950] = aux_sym_heredoc_redirect_token1;
	v->a[2951] = anon_sym_LT_LT_LT;
	v->a[2952] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[2953] = anon_sym_DOLLAR_LBRACK;
	v->a[2954] = sym__special_character;
	v->a[2955] = sym_raw_string;
	v->a[2956] = sym_ansi_c_string;
	v->a[2957] = aux_sym_number_token1;
	v->a[2958] = aux_sym_number_token2;
	v->a[2959] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_148(v);
}

void	small_parse_table_148(t_small_parse_table_array *v)
{
	v->a[2960] = anon_sym_DOLLAR_LPAREN;
	v->a[2961] = anon_sym_BQUOTE;
	v->a[2962] = anon_sym_DOLLAR_BQUOTE;
	v->a[2963] = anon_sym_LT_LPAREN;
	v->a[2964] = anon_sym_GT_LPAREN;
	v->a[2965] = sym_word;
	v->a[2966] = 8;
	v->a[2967] = actions(3);
	v->a[2968] = 1;
	v->a[2969] = sym_comment;
	v->a[2970] = actions(1819);
	v->a[2971] = 1;
	v->a[2972] = anon_sym_DQUOTE;
	v->a[2973] = actions(1823);
	v->a[2974] = 1;
	v->a[2975] = sym_variable_name;
	v->a[2976] = state(1125);
	v->a[2977] = 1;
	v->a[2978] = sym_string;
	v->a[2979] = actions(1821);
	small_parse_table_149(v);
}

void	small_parse_table_149(t_small_parse_table_array *v)
{
	v->a[2980] = 2;
	v->a[2981] = aux_sym__simple_variable_name_token1;
	v->a[2982] = aux_sym__multiline_variable_name_token1;
	v->a[2983] = actions(1241);
	v->a[2984] = 5;
	v->a[2985] = sym_file_descriptor;
	v->a[2986] = sym_test_operator;
	v->a[2987] = sym__bare_dollar;
	v->a[2988] = sym__brace_start;
	v->a[2989] = ts_builtin_sym_end;
	v->a[2990] = actions(1817);
	v->a[2991] = 9;
	v->a[2992] = anon_sym_DASH;
	v->a[2993] = anon_sym_STAR;
	v->a[2994] = anon_sym_BANG;
	v->a[2995] = anon_sym_QMARK;
	v->a[2996] = anon_sym_DOLLAR;
	v->a[2997] = anon_sym_POUND;
	v->a[2998] = anon_sym_AT2;
	v->a[2999] = anon_sym_0;
	small_parse_table_150(v);
}

/* EOF small_parse_table_29.c */
