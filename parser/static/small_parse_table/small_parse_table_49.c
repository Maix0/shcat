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
	v->a[4900] = sym_redirected_statement;
	v->a[4901] = sym_for_statement;
	v->a[4902] = sym_while_statement;
	v->a[4903] = sym_if_statement;
	v->a[4904] = sym_case_statement;
	v->a[4905] = sym_function_definition;
	v->a[4906] = sym_compound_statement;
	v->a[4907] = sym_subshell;
	v->a[4908] = sym_list;
	v->a[4909] = sym_negated_command;
	v->a[4910] = sym_command;
	v->a[4911] = sym__variable_assignments;
	v->a[4912] = 30;
	v->a[4913] = actions(3);
	v->a[4914] = 1;
	v->a[4915] = sym_comment;
	v->a[4916] = actions(9);
	v->a[4917] = 1;
	v->a[4918] = anon_sym_for;
	v->a[4919] = actions(13);
	small_parse_table_246(v);
}

void	small_parse_table_246(t_small_parse_table_array *v)
{
	v->a[4920] = 1;
	v->a[4921] = anon_sym_if;
	v->a[4922] = actions(15);
	v->a[4923] = 1;
	v->a[4924] = anon_sym_case;
	v->a[4925] = actions(17);
	v->a[4926] = 1;
	v->a[4927] = anon_sym_LPAREN;
	v->a[4928] = actions(19);
	v->a[4929] = 1;
	v->a[4930] = anon_sym_LBRACE;
	v->a[4931] = actions(53);
	v->a[4932] = 1;
	v->a[4933] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[4934] = actions(55);
	v->a[4935] = 1;
	v->a[4936] = anon_sym_DOLLAR;
	v->a[4937] = actions(57);
	v->a[4938] = 1;
	v->a[4939] = anon_sym_DQUOTE;
	small_parse_table_247(v);
}

void	small_parse_table_247(t_small_parse_table_array *v)
{
	v->a[4940] = actions(61);
	v->a[4941] = 1;
	v->a[4942] = anon_sym_DOLLAR_LBRACE;
	v->a[4943] = actions(63);
	v->a[4944] = 1;
	v->a[4945] = anon_sym_DOLLAR_LPAREN;
	v->a[4946] = actions(65);
	v->a[4947] = 1;
	v->a[4948] = anon_sym_BQUOTE;
	v->a[4949] = actions(206);
	v->a[4950] = 1;
	v->a[4951] = sym_word;
	v->a[4952] = actions(208);
	v->a[4953] = 1;
	v->a[4954] = anon_sym_BANG;
	v->a[4955] = actions(214);
	v->a[4956] = 1;
	v->a[4957] = sym_variable_name;
	v->a[4958] = state(106);
	v->a[4959] = 1;
	small_parse_table_248(v);
}

void	small_parse_table_248(t_small_parse_table_array *v)
{
	v->a[4960] = aux_sym__statements_repeat1;
	v->a[4961] = state(227);
	v->a[4962] = 1;
	v->a[4963] = sym_command_name;
	v->a[4964] = state(277);
	v->a[4965] = 1;
	v->a[4966] = sym_variable_assignment;
	v->a[4967] = state(506);
	v->a[4968] = 1;
	v->a[4969] = aux_sym_command_repeat1;
	v->a[4970] = state(602);
	v->a[4971] = 1;
	v->a[4972] = sym_concatenation;
	v->a[4973] = state(616);
	v->a[4974] = 1;
	v->a[4975] = sym_file_redirect;
	v->a[4976] = state(911);
	v->a[4977] = 1;
	v->a[4978] = sym_pipeline;
	v->a[4979] = state(1001);
	small_parse_table_249(v);
}

void	small_parse_table_249(t_small_parse_table_array *v)
{
	v->a[4980] = 1;
	v->a[4981] = aux_sym_redirected_statement_repeat2;
	v->a[4982] = state(1606);
	v->a[4983] = 1;
	v->a[4984] = sym__statement_not_pipeline;
	v->a[4985] = state(1726);
	v->a[4986] = 1;
	v->a[4987] = sym__statements;
	v->a[4988] = actions(11);
	v->a[4989] = 2;
	v->a[4990] = anon_sym_while;
	v->a[4991] = anon_sym_until;
	v->a[4992] = actions(212);
	v->a[4993] = 2;
	v->a[4994] = sym_raw_string;
	v->a[4995] = sym_number;
	v->a[4996] = state(327);
	v->a[4997] = 5;
	v->a[4998] = sym_arithmetic_expansion;
	v->a[4999] = sym_string;
	small_parse_table_250(v);
}

/* EOF small_parse_table_49.c */
