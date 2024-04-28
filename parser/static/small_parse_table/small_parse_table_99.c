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
	v->a[9900] = anon_sym_DOLLAR_LPAREN;
	v->a[9901] = anon_sym_BQUOTE;
	v->a[9902] = anon_sym_DOLLAR_BQUOTE;
	v->a[9903] = anon_sym_LT_LPAREN;
	v->a[9904] = anon_sym_GT_LPAREN;
	v->a[9905] = sym_word;
	v->a[9906] = 22;
	v->a[9907] = actions(3);
	v->a[9908] = 1;
	v->a[9909] = sym_comment;
	v->a[9910] = actions(2784);
	v->a[9911] = 1;
	v->a[9912] = anon_sym_DOLLAR_LBRACK;
	v->a[9913] = actions(2786);
	v->a[9914] = 1;
	v->a[9915] = anon_sym_DOLLAR;
	v->a[9916] = actions(2788);
	v->a[9917] = 1;
	v->a[9918] = sym__special_character;
	v->a[9919] = actions(2790);
	small_parse_table_496(v);
}

void	small_parse_table_496(t_small_parse_table_array *v)
{
	v->a[9920] = 1;
	v->a[9921] = anon_sym_DQUOTE;
	v->a[9922] = actions(2792);
	v->a[9923] = 1;
	v->a[9924] = aux_sym_number_token1;
	v->a[9925] = actions(2794);
	v->a[9926] = 1;
	v->a[9927] = aux_sym_number_token2;
	v->a[9928] = actions(2796);
	v->a[9929] = 1;
	v->a[9930] = anon_sym_DOLLAR_LBRACE;
	v->a[9931] = actions(2798);
	v->a[9932] = 1;
	v->a[9933] = anon_sym_DOLLAR_LPAREN;
	v->a[9934] = actions(2800);
	v->a[9935] = 1;
	v->a[9936] = anon_sym_BQUOTE;
	v->a[9937] = actions(2802);
	v->a[9938] = 1;
	v->a[9939] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_497(v);
}

void	small_parse_table_497(t_small_parse_table_array *v)
{
	v->a[9940] = actions(2806);
	v->a[9941] = 1;
	v->a[9942] = aux_sym__simple_variable_name_token1;
	v->a[9943] = actions(2808);
	v->a[9944] = 1;
	v->a[9945] = sym_test_operator;
	v->a[9946] = actions(2810);
	v->a[9947] = 1;
	v->a[9948] = sym__brace_start;
	v->a[9949] = state(1860);
	v->a[9950] = 1;
	v->a[9951] = aux_sym__literal_repeat1;
	v->a[9952] = actions(2564);
	v->a[9953] = 2;
	v->a[9954] = sym_file_descriptor;
	v->a[9955] = aux_sym_heredoc_redirect_token1;
	v->a[9956] = actions(2782);
	v->a[9957] = 2;
	v->a[9958] = anon_sym_LPAREN_LPAREN;
	v->a[9959] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_498(v);
}

void	small_parse_table_498(t_small_parse_table_array *v)
{
	v->a[9960] = actions(2804);
	v->a[9961] = 2;
	v->a[9962] = anon_sym_LT_LPAREN;
	v->a[9963] = anon_sym_GT_LPAREN;
	v->a[9964] = state(633);
	v->a[9965] = 2;
	v->a[9966] = sym_concatenation;
	v->a[9967] = aux_sym_unset_command_repeat1;
	v->a[9968] = actions(2780);
	v->a[9969] = 3;
	v->a[9970] = sym_raw_string;
	v->a[9971] = sym_ansi_c_string;
	v->a[9972] = sym_word;
	v->a[9973] = state(1326);
	v->a[9974] = 9;
	v->a[9975] = sym_arithmetic_expansion;
	v->a[9976] = sym_brace_expression;
	v->a[9977] = sym_string;
	v->a[9978] = sym_translated_string;
	v->a[9979] = sym_number;
	small_parse_table_499(v);
}

void	small_parse_table_499(t_small_parse_table_array *v)
{
	v->a[9980] = sym_simple_expansion;
	v->a[9981] = sym_expansion;
	v->a[9982] = sym_command_substitution;
	v->a[9983] = sym_process_substitution;
	v->a[9984] = actions(2562);
	v->a[9985] = 21;
	v->a[9986] = anon_sym_SEMI;
	v->a[9987] = anon_sym_PIPE_PIPE;
	v->a[9988] = anon_sym_AMP_AMP;
	v->a[9989] = anon_sym_PIPE;
	v->a[9990] = anon_sym_AMP;
	v->a[9991] = anon_sym_LT;
	v->a[9992] = anon_sym_GT;
	v->a[9993] = anon_sym_LT_LT;
	v->a[9994] = anon_sym_GT_GT;
	v->a[9995] = anon_sym_SEMI_SEMI;
	v->a[9996] = anon_sym_SEMI_AMP;
	v->a[9997] = anon_sym_SEMI_SEMI_AMP;
	v->a[9998] = anon_sym_PIPE_AMP;
	v->a[9999] = anon_sym_AMP_GT;
	small_parse_table_500(v);
}

/* EOF small_parse_table_99.c */
