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
	v->a[9900] = sym_string;
	v->a[9901] = sym_simple_expansion;
	v->a[9902] = sym_expansion;
	v->a[9903] = sym_command_substitution;
	v->a[9904] = state(820);
	v->a[9905] = 12;
	v->a[9906] = sym_redirected_statement;
	v->a[9907] = sym_for_statement;
	v->a[9908] = sym_while_statement;
	v->a[9909] = sym_if_statement;
	v->a[9910] = sym_case_statement;
	v->a[9911] = sym_function_definition;
	v->a[9912] = sym_compound_statement;
	v->a[9913] = sym_subshell;
	v->a[9914] = sym_list;
	v->a[9915] = sym_negated_command;
	v->a[9916] = sym_command;
	v->a[9917] = sym__variable_assignments;
	v->a[9918] = 30;
	v->a[9919] = actions(3);
	small_parse_table_496(v);
}

void	small_parse_table_496(t_small_parse_table_array *v)
{
	v->a[9920] = 1;
	v->a[9921] = sym_comment;
	v->a[9922] = actions(9);
	v->a[9923] = 1;
	v->a[9924] = anon_sym_for;
	v->a[9925] = actions(13);
	v->a[9926] = 1;
	v->a[9927] = anon_sym_if;
	v->a[9928] = actions(15);
	v->a[9929] = 1;
	v->a[9930] = anon_sym_case;
	v->a[9931] = actions(17);
	v->a[9932] = 1;
	v->a[9933] = anon_sym_LPAREN;
	v->a[9934] = actions(19);
	v->a[9935] = 1;
	v->a[9936] = anon_sym_LBRACE;
	v->a[9937] = actions(53);
	v->a[9938] = 1;
	v->a[9939] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_497(v);
}

void	small_parse_table_497(t_small_parse_table_array *v)
{
	v->a[9940] = actions(55);
	v->a[9941] = 1;
	v->a[9942] = anon_sym_DOLLAR;
	v->a[9943] = actions(57);
	v->a[9944] = 1;
	v->a[9945] = anon_sym_DQUOTE;
	v->a[9946] = actions(61);
	v->a[9947] = 1;
	v->a[9948] = anon_sym_DOLLAR_LBRACE;
	v->a[9949] = actions(63);
	v->a[9950] = 1;
	v->a[9951] = anon_sym_DOLLAR_LPAREN;
	v->a[9952] = actions(65);
	v->a[9953] = 1;
	v->a[9954] = anon_sym_BQUOTE;
	v->a[9955] = actions(208);
	v->a[9956] = 1;
	v->a[9957] = sym_word;
	v->a[9958] = actions(210);
	v->a[9959] = 1;
	small_parse_table_498(v);
}

void	small_parse_table_498(t_small_parse_table_array *v)
{
	v->a[9960] = anon_sym_BANG;
	v->a[9961] = actions(216);
	v->a[9962] = 1;
	v->a[9963] = sym_variable_name;
	v->a[9964] = state(112);
	v->a[9965] = 1;
	v->a[9966] = aux_sym__statements_repeat1;
	v->a[9967] = state(158);
	v->a[9968] = 1;
	v->a[9969] = sym_command_name;
	v->a[9970] = state(186);
	v->a[9971] = 1;
	v->a[9972] = sym_variable_assignment;
	v->a[9973] = state(298);
	v->a[9974] = 1;
	v->a[9975] = aux_sym_command_repeat1;
	v->a[9976] = state(519);
	v->a[9977] = 1;
	v->a[9978] = sym_file_redirect;
	v->a[9979] = state(555);
	small_parse_table_499(v);
}

void	small_parse_table_499(t_small_parse_table_array *v)
{
	v->a[9980] = 1;
	v->a[9981] = sym_concatenation;
	v->a[9982] = state(937);
	v->a[9983] = 1;
	v->a[9984] = sym_pipeline;
	v->a[9985] = state(1019);
	v->a[9986] = 1;
	v->a[9987] = aux_sym_redirected_statement_repeat2;
	v->a[9988] = state(1557);
	v->a[9989] = 1;
	v->a[9990] = sym__statement_not_pipeline;
	v->a[9991] = state(1678);
	v->a[9992] = 1;
	v->a[9993] = sym__statements;
	v->a[9994] = actions(11);
	v->a[9995] = 2;
	v->a[9996] = anon_sym_while;
	v->a[9997] = anon_sym_until;
	v->a[9998] = actions(214);
	v->a[9999] = 2;
	small_parse_table_500(v);
}

/* EOF small_parse_table_99.c */
