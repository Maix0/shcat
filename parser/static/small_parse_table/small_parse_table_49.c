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
	v->a[4901] = sym__brace_start;
	v->a[4902] = state(1034);
	v->a[4903] = 1;
	v->a[4904] = aux_sym__literal_repeat1;
	v->a[4905] = actions(1390);
	v->a[4906] = 2;
	v->a[4907] = sym_file_descriptor;
	v->a[4908] = aux_sym_heredoc_redirect_token1;
	v->a[4909] = actions(1536);
	v->a[4910] = 2;
	v->a[4911] = sym_raw_string;
	v->a[4912] = sym_word;
	v->a[4913] = state(342);
	v->a[4914] = 2;
	v->a[4915] = sym_concatenation;
	v->a[4916] = aux_sym_for_statement_repeat1;
	v->a[4917] = state(634);
	v->a[4918] = 7;
	v->a[4919] = sym_arithmetic_expansion;
	small_parse_table_246(v);
}

void	small_parse_table_246(t_small_parse_table_array *v)
{
	v->a[4920] = sym_brace_expression;
	v->a[4921] = sym_string;
	v->a[4922] = sym_number;
	v->a[4923] = sym_simple_expansion;
	v->a[4924] = sym_expansion;
	v->a[4925] = sym_command_substitution;
	v->a[4926] = actions(1388);
	v->a[4927] = 22;
	v->a[4928] = anon_sym_esac;
	v->a[4929] = anon_sym_PIPE;
	v->a[4930] = anon_sym_SEMI_SEMI;
	v->a[4931] = anon_sym_SEMI_AMP;
	v->a[4932] = anon_sym_SEMI_SEMI_AMP;
	v->a[4933] = anon_sym_PIPE_AMP;
	v->a[4934] = anon_sym_AMP_AMP;
	v->a[4935] = anon_sym_PIPE_PIPE;
	v->a[4936] = anon_sym_LT;
	v->a[4937] = anon_sym_GT;
	v->a[4938] = anon_sym_GT_GT;
	v->a[4939] = anon_sym_AMP_GT;
	small_parse_table_247(v);
}

void	small_parse_table_247(t_small_parse_table_array *v)
{
	v->a[4940] = anon_sym_AMP_GT_GT;
	v->a[4941] = anon_sym_LT_AMP;
	v->a[4942] = anon_sym_GT_AMP;
	v->a[4943] = anon_sym_GT_PIPE;
	v->a[4944] = anon_sym_LT_AMP_DASH;
	v->a[4945] = anon_sym_GT_AMP_DASH;
	v->a[4946] = anon_sym_LT_LT;
	v->a[4947] = anon_sym_LT_LT_DASH;
	v->a[4948] = anon_sym_AMP;
	v->a[4949] = anon_sym_SEMI;
	v->a[4950] = 6;
	v->a[4951] = actions(3);
	v->a[4952] = 1;
	v->a[4953] = sym_comment;
	v->a[4954] = actions(1526);
	v->a[4955] = 1;
	v->a[4956] = sym_variable_name;
	v->a[4957] = actions(1524);
	v->a[4958] = 2;
	v->a[4959] = aux_sym__simple_variable_name_token1;
	small_parse_table_248(v);
}

void	small_parse_table_248(t_small_parse_table_array *v)
{
	v->a[4960] = aux_sym__multiline_variable_name_token1;
	v->a[4961] = actions(816);
	v->a[4962] = 3;
	v->a[4963] = sym_file_descriptor;
	v->a[4964] = sym_test_operator;
	v->a[4965] = sym__brace_start;
	v->a[4966] = actions(1522);
	v->a[4967] = 9;
	v->a[4968] = anon_sym_BANG;
	v->a[4969] = anon_sym_DASH;
	v->a[4970] = anon_sym_STAR;
	v->a[4971] = anon_sym_QMARK;
	v->a[4972] = anon_sym_DOLLAR;
	v->a[4973] = anon_sym_POUND;
	v->a[4974] = anon_sym_AT;
	v->a[4975] = anon_sym_0;
	v->a[4976] = anon_sym__;
	v->a[4977] = actions(810);
	v->a[4978] = 33;
	v->a[4979] = anon_sym_PIPE;
	small_parse_table_249(v);
}

void	small_parse_table_249(t_small_parse_table_array *v)
{
	v->a[4980] = anon_sym_SEMI_SEMI;
	v->a[4981] = anon_sym_SEMI_AMP;
	v->a[4982] = anon_sym_SEMI_SEMI_AMP;
	v->a[4983] = anon_sym_PIPE_AMP;
	v->a[4984] = anon_sym_AMP_AMP;
	v->a[4985] = anon_sym_PIPE_PIPE;
	v->a[4986] = anon_sym_LT;
	v->a[4987] = anon_sym_GT;
	v->a[4988] = anon_sym_GT_GT;
	v->a[4989] = anon_sym_AMP_GT;
	v->a[4990] = anon_sym_AMP_GT_GT;
	v->a[4991] = anon_sym_LT_AMP;
	v->a[4992] = anon_sym_GT_AMP;
	v->a[4993] = anon_sym_GT_PIPE;
	v->a[4994] = anon_sym_LT_AMP_DASH;
	v->a[4995] = anon_sym_GT_AMP_DASH;
	v->a[4996] = anon_sym_LT_LT;
	v->a[4997] = anon_sym_LT_LT_DASH;
	v->a[4998] = aux_sym_heredoc_redirect_token1;
	v->a[4999] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_250(v);
}

/* EOF small_parse_table_49.c */
