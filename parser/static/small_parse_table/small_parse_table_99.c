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
	v->a[9900] = anon_sym_BANG;
	v->a[9901] = actions(59);
	v->a[9902] = 1;
	v->a[9903] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[9904] = actions(61);
	v->a[9905] = 1;
	v->a[9906] = anon_sym_DOLLAR;
	v->a[9907] = actions(63);
	v->a[9908] = 1;
	v->a[9909] = anon_sym_DQUOTE;
	v->a[9910] = actions(67);
	v->a[9911] = 1;
	v->a[9912] = anon_sym_DOLLAR_LBRACE;
	v->a[9913] = actions(69);
	v->a[9914] = 1;
	v->a[9915] = anon_sym_DOLLAR_LPAREN;
	v->a[9916] = actions(71);
	v->a[9917] = 1;
	v->a[9918] = anon_sym_BQUOTE;
	v->a[9919] = actions(73);
	small_parse_table_496(v);
}

void	small_parse_table_496(t_small_parse_table_array *v)
{
	v->a[9920] = 1;
	v->a[9921] = sym_file_descriptor;
	v->a[9922] = actions(75);
	v->a[9923] = 1;
	v->a[9924] = sym_variable_name;
	v->a[9925] = actions(252);
	v->a[9926] = 1;
	v->a[9927] = anon_sym_done;
	v->a[9928] = state(36);
	v->a[9929] = 1;
	v->a[9930] = aux_sym__terminated_statement;
	v->a[9931] = state(191);
	v->a[9932] = 1;
	v->a[9933] = sym_command_name;
	v->a[9934] = state(252);
	v->a[9935] = 1;
	v->a[9936] = sym_variable_assignment;
	v->a[9937] = state(624);
	v->a[9938] = 1;
	v->a[9939] = sym_concatenation;
	small_parse_table_497(v);
}

void	small_parse_table_497(t_small_parse_table_array *v)
{
	v->a[9940] = state(726);
	v->a[9941] = 1;
	v->a[9942] = sym_file_redirect;
	v->a[9943] = state(733);
	v->a[9944] = 1;
	v->a[9945] = aux_sym_command_repeat1;
	v->a[9946] = state(1246);
	v->a[9947] = 1;
	v->a[9948] = sym_pipeline;
	v->a[9949] = state(1307);
	v->a[9950] = 1;
	v->a[9951] = aux_sym_redirected_statement_repeat2;
	v->a[9952] = state(2117);
	v->a[9953] = 1;
	v->a[9954] = sym__statement_not_pipeline;
	v->a[9955] = actions(11);
	v->a[9956] = 2;
	v->a[9957] = anon_sym_while;
	v->a[9958] = anon_sym_until;
	v->a[9959] = actions(57);
	small_parse_table_498(v);
}

void	small_parse_table_498(t_small_parse_table_array *v)
{
	v->a[9960] = 2;
	v->a[9961] = anon_sym_LT_AMP_DASH;
	v->a[9962] = anon_sym_GT_AMP_DASH;
	v->a[9963] = actions(65);
	v->a[9964] = 2;
	v->a[9965] = sym_raw_string;
	v->a[9966] = sym_number;
	v->a[9967] = state(420);
	v->a[9968] = 5;
	v->a[9969] = sym_arithmetic_expansion;
	v->a[9970] = sym_string;
	v->a[9971] = sym_simple_expansion;
	v->a[9972] = sym_expansion;
	v->a[9973] = sym_command_substitution;
	v->a[9974] = actions(55);
	v->a[9975] = 8;
	v->a[9976] = anon_sym_LT;
	v->a[9977] = anon_sym_GT;
	v->a[9978] = anon_sym_GT_GT;
	v->a[9979] = anon_sym_AMP_GT;
	small_parse_table_499(v);
}

void	small_parse_table_499(t_small_parse_table_array *v)
{
	v->a[9980] = anon_sym_AMP_GT_GT;
	v->a[9981] = anon_sym_LT_AMP;
	v->a[9982] = anon_sym_GT_AMP;
	v->a[9983] = anon_sym_GT_PIPE;
	v->a[9984] = state(1112);
	v->a[9985] = 12;
	v->a[9986] = sym_redirected_statement;
	v->a[9987] = sym_for_statement;
	v->a[9988] = sym_while_statement;
	v->a[9989] = sym_if_statement;
	v->a[9990] = sym_case_statement;
	v->a[9991] = sym_function_definition;
	v->a[9992] = sym_compound_statement;
	v->a[9993] = sym_subshell;
	v->a[9994] = sym_list;
	v->a[9995] = sym_negated_command;
	v->a[9996] = sym_command;
	v->a[9997] = sym__variable_assignments;
	v->a[9998] = 32;
	v->a[9999] = actions(3);
	small_parse_table_500(v);
}

/* EOF small_parse_table_99.c */
