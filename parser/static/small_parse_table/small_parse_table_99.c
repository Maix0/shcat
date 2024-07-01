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
	v->a[9900] = 1;
	v->a[9901] = aux_sym_command_repeat1;
	v->a[9902] = state(795);
	v->a[9903] = 1;
	v->a[9904] = sym_file_redirect;
	v->a[9905] = state(1154);
	v->a[9906] = 1;
	v->a[9907] = sym_pipeline;
	v->a[9908] = state(1240);
	v->a[9909] = 1;
	v->a[9910] = aux_sym_redirected_statement_repeat2;
	v->a[9911] = state(2119);
	v->a[9912] = 1;
	v->a[9913] = sym__statement_not_pipeline;
	v->a[9914] = state(2234);
	v->a[9915] = 1;
	v->a[9916] = sym__statements;
	v->a[9917] = actions(11);
	v->a[9918] = 2;
	v->a[9919] = anon_sym_while;
	small_parse_table_496(v);
}

void	small_parse_table_496(t_small_parse_table_array *v)
{
	v->a[9920] = anon_sym_until;
	v->a[9921] = actions(57);
	v->a[9922] = 2;
	v->a[9923] = anon_sym_LT_AMP_DASH;
	v->a[9924] = anon_sym_GT_AMP_DASH;
	v->a[9925] = actions(65);
	v->a[9926] = 2;
	v->a[9927] = sym_raw_string;
	v->a[9928] = sym_number;
	v->a[9929] = state(443);
	v->a[9930] = 5;
	v->a[9931] = sym_arithmetic_expansion;
	v->a[9932] = sym_string;
	v->a[9933] = sym_simple_expansion;
	v->a[9934] = sym_expansion;
	v->a[9935] = sym_command_substitution;
	v->a[9936] = actions(55);
	v->a[9937] = 6;
	v->a[9938] = anon_sym_LT;
	v->a[9939] = anon_sym_GT;
	small_parse_table_497(v);
}

void	small_parse_table_497(t_small_parse_table_array *v)
{
	v->a[9940] = anon_sym_GT_GT;
	v->a[9941] = anon_sym_LT_AMP;
	v->a[9942] = anon_sym_GT_AMP;
	v->a[9943] = anon_sym_GT_PIPE;
	v->a[9944] = state(1030);
	v->a[9945] = 12;
	v->a[9946] = sym_redirected_statement;
	v->a[9947] = sym_for_statement;
	v->a[9948] = sym_while_statement;
	v->a[9949] = sym_if_statement;
	v->a[9950] = sym_case_statement;
	v->a[9951] = sym_function_definition;
	v->a[9952] = sym_compound_statement;
	v->a[9953] = sym_subshell;
	v->a[9954] = sym_list;
	v->a[9955] = sym_negated_command;
	v->a[9956] = sym_command;
	v->a[9957] = sym__variable_assignments;
	v->a[9958] = 32;
	v->a[9959] = actions(3);
	small_parse_table_498(v);
}

void	small_parse_table_498(t_small_parse_table_array *v)
{
	v->a[9960] = 1;
	v->a[9961] = sym_comment;
	v->a[9962] = actions(9);
	v->a[9963] = 1;
	v->a[9964] = anon_sym_for;
	v->a[9965] = actions(13);
	v->a[9966] = 1;
	v->a[9967] = anon_sym_if;
	v->a[9968] = actions(15);
	v->a[9969] = 1;
	v->a[9970] = anon_sym_case;
	v->a[9971] = actions(17);
	v->a[9972] = 1;
	v->a[9973] = anon_sym_LPAREN;
	v->a[9974] = actions(19);
	v->a[9975] = 1;
	v->a[9976] = anon_sym_LBRACE;
	v->a[9977] = actions(59);
	v->a[9978] = 1;
	v->a[9979] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_499(v);
}

void	small_parse_table_499(t_small_parse_table_array *v)
{
	v->a[9980] = actions(61);
	v->a[9981] = 1;
	v->a[9982] = anon_sym_DOLLAR;
	v->a[9983] = actions(63);
	v->a[9984] = 1;
	v->a[9985] = anon_sym_DQUOTE;
	v->a[9986] = actions(67);
	v->a[9987] = 1;
	v->a[9988] = anon_sym_DOLLAR_LBRACE;
	v->a[9989] = actions(69);
	v->a[9990] = 1;
	v->a[9991] = anon_sym_DOLLAR_LPAREN;
	v->a[9992] = actions(71);
	v->a[9993] = 1;
	v->a[9994] = anon_sym_BQUOTE;
	v->a[9995] = actions(220);
	v->a[9996] = 1;
	v->a[9997] = sym_word;
	v->a[9998] = actions(222);
	v->a[9999] = 1;
	small_parse_table_500(v);
}

/* EOF small_parse_table_99.c */
