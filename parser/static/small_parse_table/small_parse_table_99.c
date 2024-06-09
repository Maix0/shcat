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
	v->a[9901] = sym_command_name;
	v->a[9902] = state(278);
	v->a[9903] = 1;
	v->a[9904] = sym_variable_assignment;
	v->a[9905] = state(567);
	v->a[9906] = 1;
	v->a[9907] = aux_sym_command_repeat1;
	v->a[9908] = state(582);
	v->a[9909] = 1;
	v->a[9910] = sym_concatenation;
	v->a[9911] = state(700);
	v->a[9912] = 1;
	v->a[9913] = sym_file_redirect;
	v->a[9914] = state(1100);
	v->a[9915] = 1;
	v->a[9916] = sym_pipeline;
	v->a[9917] = state(1196);
	v->a[9918] = 1;
	v->a[9919] = aux_sym_redirected_statement_repeat2;
	small_parse_table_496(v);
}

void	small_parse_table_496(t_small_parse_table_array *v)
{
	v->a[9920] = state(2037);
	v->a[9921] = 1;
	v->a[9922] = sym__statement_not_pipeline;
	v->a[9923] = state(2183);
	v->a[9924] = 1;
	v->a[9925] = sym__statements;
	v->a[9926] = actions(11);
	v->a[9927] = 2;
	v->a[9928] = anon_sym_while;
	v->a[9929] = anon_sym_until;
	v->a[9930] = actions(254);
	v->a[9931] = 2;
	v->a[9932] = anon_sym_LT_AMP_DASH;
	v->a[9933] = anon_sym_GT_AMP_DASH;
	v->a[9934] = state(295);
	v->a[9935] = 6;
	v->a[9936] = sym_arithmetic_expansion;
	v->a[9937] = sym_string;
	v->a[9938] = sym_number;
	v->a[9939] = sym_simple_expansion;
	small_parse_table_497(v);
}

void	small_parse_table_497(t_small_parse_table_array *v)
{
	v->a[9940] = sym_expansion;
	v->a[9941] = sym_command_substitution;
	v->a[9942] = actions(252);
	v->a[9943] = 8;
	v->a[9944] = anon_sym_LT;
	v->a[9945] = anon_sym_GT;
	v->a[9946] = anon_sym_GT_GT;
	v->a[9947] = anon_sym_AMP_GT;
	v->a[9948] = anon_sym_AMP_GT_GT;
	v->a[9949] = anon_sym_LT_AMP;
	v->a[9950] = anon_sym_GT_AMP;
	v->a[9951] = anon_sym_GT_PIPE;
	v->a[9952] = state(1031);
	v->a[9953] = 12;
	v->a[9954] = sym_redirected_statement;
	v->a[9955] = sym_for_statement;
	v->a[9956] = sym_while_statement;
	v->a[9957] = sym_if_statement;
	v->a[9958] = sym_case_statement;
	v->a[9959] = sym_function_definition;
	small_parse_table_498(v);
}

void	small_parse_table_498(t_small_parse_table_array *v)
{
	v->a[9960] = sym_compound_statement;
	v->a[9961] = sym_subshell;
	v->a[9962] = sym_list;
	v->a[9963] = sym_negated_command;
	v->a[9964] = sym_command;
	v->a[9965] = sym_variable_assignments;
	v->a[9966] = 34;
	v->a[9967] = actions(3);
	v->a[9968] = 1;
	v->a[9969] = sym_comment;
	v->a[9970] = actions(9);
	v->a[9971] = 1;
	v->a[9972] = anon_sym_for;
	v->a[9973] = actions(13);
	v->a[9974] = 1;
	v->a[9975] = anon_sym_if;
	v->a[9976] = actions(15);
	v->a[9977] = 1;
	v->a[9978] = anon_sym_case;
	v->a[9979] = actions(17);
	small_parse_table_499(v);
}

void	small_parse_table_499(t_small_parse_table_array *v)
{
	v->a[9980] = 1;
	v->a[9981] = anon_sym_LPAREN;
	v->a[9982] = actions(19);
	v->a[9983] = 1;
	v->a[9984] = anon_sym_LBRACE;
	v->a[9985] = actions(63);
	v->a[9986] = 1;
	v->a[9987] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[9988] = actions(65);
	v->a[9989] = 1;
	v->a[9990] = anon_sym_DOLLAR;
	v->a[9991] = actions(67);
	v->a[9992] = 1;
	v->a[9993] = anon_sym_DQUOTE;
	v->a[9994] = actions(71);
	v->a[9995] = 1;
	v->a[9996] = aux_sym_number_token1;
	v->a[9997] = actions(73);
	v->a[9998] = 1;
	v->a[9999] = aux_sym_number_token2;
	small_parse_table_500(v);
}

/* EOF small_parse_table_99.c */
