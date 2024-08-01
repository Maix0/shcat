/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_49.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_245(t_small_parse_table_array *v)
{
	v->a[4900] = anon_sym_BQUOTE;
	v->a[4901] = actions(67);
	v->a[4902] = 1;
	v->a[4903] = sym_variable_name;
	v->a[4904] = actions(218);
	v->a[4905] = 1;
	v->a[4906] = anon_sym_fi;
	v->a[4907] = state(88);
	v->a[4908] = 1;
	v->a[4909] = aux_sym__terminated_statement;
	v->a[4910] = state(185);
	v->a[4911] = 1;
	v->a[4912] = sym_command_name;
	v->a[4913] = state(220);
	v->a[4914] = 1;
	v->a[4915] = sym_variable_assignment;
	v->a[4916] = state(411);
	v->a[4917] = 1;
	v->a[4918] = aux_sym_command_repeat1;
	v->a[4919] = state(551);
	small_parse_table_246(v);
}

void	small_parse_table_246(t_small_parse_table_array *v)
{
	v->a[4920] = 1;
	v->a[4921] = sym_file_redirect;
	v->a[4922] = state(555);
	v->a[4923] = 1;
	v->a[4924] = sym_concatenation;
	v->a[4925] = state(1085);
	v->a[4926] = 1;
	v->a[4927] = sym_pipeline;
	v->a[4928] = state(1126);
	v->a[4929] = 1;
	v->a[4930] = aux_sym_redirected_statement_repeat2;
	v->a[4931] = state(1561);
	v->a[4932] = 1;
	v->a[4933] = sym__statement_not_pipeline;
	v->a[4934] = actions(11);
	v->a[4935] = 2;
	v->a[4936] = anon_sym_while;
	v->a[4937] = anon_sym_until;
	v->a[4938] = actions(59);
	v->a[4939] = 2;
	small_parse_table_247(v);
}

void	small_parse_table_247(t_small_parse_table_array *v)
{
	v->a[4940] = sym_raw_string;
	v->a[4941] = sym_number;
	v->a[4942] = actions(51);
	v->a[4943] = 3;
	v->a[4944] = anon_sym_LT;
	v->a[4945] = anon_sym_GT;
	v->a[4946] = anon_sym_GT_GT;
	v->a[4947] = state(401);
	v->a[4948] = 5;
	v->a[4949] = sym_arithmetic_expansion;
	v->a[4950] = sym_string;
	v->a[4951] = sym_simple_expansion;
	v->a[4952] = sym_expansion;
	v->a[4953] = sym_command_substitution;
	v->a[4954] = state(920);
	v->a[4955] = 12;
	v->a[4956] = sym_redirected_statement;
	v->a[4957] = sym_for_statement;
	v->a[4958] = sym_while_statement;
	v->a[4959] = sym_if_statement;
	small_parse_table_248(v);
}

void	small_parse_table_248(t_small_parse_table_array *v)
{
	v->a[4960] = sym_case_statement;
	v->a[4961] = sym_function_definition;
	v->a[4962] = sym_compound_statement;
	v->a[4963] = sym_subshell;
	v->a[4964] = sym_list;
	v->a[4965] = sym_negated_command;
	v->a[4966] = sym_command;
	v->a[4967] = sym__variable_assignments;
	v->a[4968] = 30;
	v->a[4969] = actions(3);
	v->a[4970] = 1;
	v->a[4971] = sym_comment;
	v->a[4972] = actions(9);
	v->a[4973] = 1;
	v->a[4974] = anon_sym_for;
	v->a[4975] = actions(13);
	v->a[4976] = 1;
	v->a[4977] = anon_sym_if;
	v->a[4978] = actions(15);
	v->a[4979] = 1;
	small_parse_table_249(v);
}

void	small_parse_table_249(t_small_parse_table_array *v)
{
	v->a[4980] = anon_sym_case;
	v->a[4981] = actions(17);
	v->a[4982] = 1;
	v->a[4983] = anon_sym_LPAREN;
	v->a[4984] = actions(19);
	v->a[4985] = 1;
	v->a[4986] = anon_sym_LBRACE;
	v->a[4987] = actions(53);
	v->a[4988] = 1;
	v->a[4989] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[4990] = actions(55);
	v->a[4991] = 1;
	v->a[4992] = anon_sym_DOLLAR;
	v->a[4993] = actions(57);
	v->a[4994] = 1;
	v->a[4995] = anon_sym_DQUOTE;
	v->a[4996] = actions(61);
	v->a[4997] = 1;
	v->a[4998] = anon_sym_DOLLAR_LBRACE;
	v->a[4999] = actions(63);
	small_parse_table_250(v);
}

/* EOF small_parse_table_49.c */
