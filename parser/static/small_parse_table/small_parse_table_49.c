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
	v->a[4900] = 1;
	v->a[4901] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[4902] = actions(61);
	v->a[4903] = 1;
	v->a[4904] = anon_sym_DOLLAR;
	v->a[4905] = actions(63);
	v->a[4906] = 1;
	v->a[4907] = anon_sym_DQUOTE;
	v->a[4908] = actions(67);
	v->a[4909] = 1;
	v->a[4910] = anon_sym_DOLLAR_LBRACE;
	v->a[4911] = actions(69);
	v->a[4912] = 1;
	v->a[4913] = anon_sym_DOLLAR_LPAREN;
	v->a[4914] = actions(71);
	v->a[4915] = 1;
	v->a[4916] = anon_sym_BQUOTE;
	v->a[4917] = actions(73);
	v->a[4918] = 1;
	v->a[4919] = sym_file_descriptor;
	small_parse_table_246(v);
}

void	small_parse_table_246(t_small_parse_table_array *v)
{
	v->a[4920] = actions(75);
	v->a[4921] = 1;
	v->a[4922] = sym_variable_name;
	v->a[4923] = actions(234);
	v->a[4924] = 1;
	v->a[4925] = anon_sym_done;
	v->a[4926] = state(35);
	v->a[4927] = 1;
	v->a[4928] = aux_sym__terminated_statement;
	v->a[4929] = state(187);
	v->a[4930] = 1;
	v->a[4931] = sym_command_name;
	v->a[4932] = state(274);
	v->a[4933] = 1;
	v->a[4934] = sym_variable_assignment;
	v->a[4935] = state(647);
	v->a[4936] = 1;
	v->a[4937] = sym_concatenation;
	v->a[4938] = state(736);
	v->a[4939] = 1;
	small_parse_table_247(v);
}

void	small_parse_table_247(t_small_parse_table_array *v)
{
	v->a[4940] = aux_sym_command_repeat1;
	v->a[4941] = state(738);
	v->a[4942] = 1;
	v->a[4943] = sym_file_redirect;
	v->a[4944] = state(1439);
	v->a[4945] = 1;
	v->a[4946] = sym_pipeline;
	v->a[4947] = state(1460);
	v->a[4948] = 1;
	v->a[4949] = aux_sym_redirected_statement_repeat2;
	v->a[4950] = state(2269);
	v->a[4951] = 1;
	v->a[4952] = sym__statement_not_pipeline;
	v->a[4953] = actions(11);
	v->a[4954] = 2;
	v->a[4955] = anon_sym_while;
	v->a[4956] = anon_sym_until;
	v->a[4957] = actions(57);
	v->a[4958] = 2;
	v->a[4959] = anon_sym_LT_AMP_DASH;
	small_parse_table_248(v);
}

void	small_parse_table_248(t_small_parse_table_array *v)
{
	v->a[4960] = anon_sym_GT_AMP_DASH;
	v->a[4961] = actions(65);
	v->a[4962] = 2;
	v->a[4963] = sym_raw_string;
	v->a[4964] = sym_number;
	v->a[4965] = state(394);
	v->a[4966] = 5;
	v->a[4967] = sym_arithmetic_expansion;
	v->a[4968] = sym_string;
	v->a[4969] = sym_simple_expansion;
	v->a[4970] = sym_expansion;
	v->a[4971] = sym_command_substitution;
	v->a[4972] = actions(55);
	v->a[4973] = 8;
	v->a[4974] = anon_sym_LT;
	v->a[4975] = anon_sym_GT;
	v->a[4976] = anon_sym_GT_GT;
	v->a[4977] = anon_sym_AMP_GT;
	v->a[4978] = anon_sym_AMP_GT_GT;
	v->a[4979] = anon_sym_LT_AMP;
	small_parse_table_249(v);
}

void	small_parse_table_249(t_small_parse_table_array *v)
{
	v->a[4980] = anon_sym_GT_AMP;
	v->a[4981] = anon_sym_GT_PIPE;
	v->a[4982] = state(1312);
	v->a[4983] = 12;
	v->a[4984] = sym_redirected_statement;
	v->a[4985] = sym_for_statement;
	v->a[4986] = sym_while_statement;
	v->a[4987] = sym_if_statement;
	v->a[4988] = sym_case_statement;
	v->a[4989] = sym_function_definition;
	v->a[4990] = sym_compound_statement;
	v->a[4991] = sym_subshell;
	v->a[4992] = sym_list;
	v->a[4993] = sym_negated_command;
	v->a[4994] = sym_command;
	v->a[4995] = sym_variable_assignments;
	v->a[4996] = 32;
	v->a[4997] = actions(3);
	v->a[4998] = 1;
	v->a[4999] = sym_comment;
	small_parse_table_250(v);
}

/* EOF small_parse_table_49.c */
