/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_99.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_495(t_small_parse_table_array *v)
{
	v->a[9900] = aux_sym_number_token2;
	v->a[9901] = anon_sym_DOLLAR_LBRACE;
	v->a[9902] = anon_sym_DOLLAR_LPAREN;
	v->a[9903] = anon_sym_BQUOTE;
	v->a[9904] = anon_sym_DOLLAR_BQUOTE;
	v->a[9905] = sym_word;
	v->a[9906] = anon_sym_SEMI;
	v->a[9907] = 20;
	v->a[9908] = actions(3);
	v->a[9909] = 1;
	v->a[9910] = sym_comment;
	v->a[9911] = actions(1859);
	v->a[9912] = 1;
	v->a[9913] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[9914] = actions(1861);
	v->a[9915] = 1;
	v->a[9916] = anon_sym_DOLLAR;
	v->a[9917] = actions(1863);
	v->a[9918] = 1;
	v->a[9919] = sym__special_character;
	small_parse_table_496(v);
}

void	small_parse_table_496(t_small_parse_table_array *v)
{
	v->a[9920] = actions(1865);
	v->a[9921] = 1;
	v->a[9922] = anon_sym_DQUOTE;
	v->a[9923] = actions(1867);
	v->a[9924] = 1;
	v->a[9925] = aux_sym_number_token1;
	v->a[9926] = actions(1869);
	v->a[9927] = 1;
	v->a[9928] = aux_sym_number_token2;
	v->a[9929] = actions(1871);
	v->a[9930] = 1;
	v->a[9931] = anon_sym_DOLLAR_LBRACE;
	v->a[9932] = actions(1873);
	v->a[9933] = 1;
	v->a[9934] = anon_sym_DOLLAR_LPAREN;
	v->a[9935] = actions(1875);
	v->a[9936] = 1;
	v->a[9937] = anon_sym_BQUOTE;
	v->a[9938] = actions(1877);
	v->a[9939] = 1;
	small_parse_table_497(v);
}

void	small_parse_table_497(t_small_parse_table_array *v)
{
	v->a[9940] = anon_sym_DOLLAR_BQUOTE;
	v->a[9941] = actions(1881);
	v->a[9942] = 1;
	v->a[9943] = sym_test_operator;
	v->a[9944] = actions(1883);
	v->a[9945] = 1;
	v->a[9946] = sym__brace_start;
	v->a[9947] = actions(2106);
	v->a[9948] = 1;
	v->a[9949] = aux_sym__simple_variable_name_token1;
	v->a[9950] = state(1209);
	v->a[9951] = 1;
	v->a[9952] = aux_sym__literal_repeat1;
	v->a[9953] = actions(1857);
	v->a[9954] = 2;
	v->a[9955] = sym_raw_string;
	v->a[9956] = sym_word;
	v->a[9957] = state(367);
	v->a[9958] = 2;
	v->a[9959] = sym_concatenation;
	small_parse_table_498(v);
}

void	small_parse_table_498(t_small_parse_table_array *v)
{
	v->a[9960] = aux_sym_unset_command_repeat1;
	v->a[9961] = actions(1041);
	v->a[9962] = 3;
	v->a[9963] = sym_file_descriptor;
	v->a[9964] = ts_builtin_sym_end;
	v->a[9965] = aux_sym_heredoc_redirect_token1;
	v->a[9966] = state(774);
	v->a[9967] = 7;
	v->a[9968] = sym_arithmetic_expansion;
	v->a[9969] = sym_brace_expression;
	v->a[9970] = sym_string;
	v->a[9971] = sym_number;
	v->a[9972] = sym_simple_expansion;
	v->a[9973] = sym_expansion;
	v->a[9974] = sym_command_substitution;
	v->a[9975] = actions(1039);
	v->a[9976] = 19;
	v->a[9977] = anon_sym_PIPE;
	v->a[9978] = anon_sym_SEMI_SEMI;
	v->a[9979] = anon_sym_PIPE_AMP;
	small_parse_table_499(v);
}

void	small_parse_table_499(t_small_parse_table_array *v)
{
	v->a[9980] = anon_sym_AMP_AMP;
	v->a[9981] = anon_sym_PIPE_PIPE;
	v->a[9982] = anon_sym_LT;
	v->a[9983] = anon_sym_GT;
	v->a[9984] = anon_sym_GT_GT;
	v->a[9985] = anon_sym_AMP_GT;
	v->a[9986] = anon_sym_AMP_GT_GT;
	v->a[9987] = anon_sym_LT_AMP;
	v->a[9988] = anon_sym_GT_AMP;
	v->a[9989] = anon_sym_GT_PIPE;
	v->a[9990] = anon_sym_LT_AMP_DASH;
	v->a[9991] = anon_sym_GT_AMP_DASH;
	v->a[9992] = anon_sym_LT_LT;
	v->a[9993] = anon_sym_LT_LT_DASH;
	v->a[9994] = anon_sym_AMP;
	v->a[9995] = anon_sym_SEMI;
	v->a[9996] = 5;
	v->a[9997] = actions(57);
	v->a[9998] = 1;
	v->a[9999] = sym_comment;
	small_parse_table_500(v);
}

/* EOF small_parse_table_99.c */
