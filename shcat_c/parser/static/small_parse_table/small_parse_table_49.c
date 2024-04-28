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
	v->a[4900] = anon_sym_DOLLAR_LBRACK;
	v->a[4901] = actions(2038);
	v->a[4902] = 1;
	v->a[4903] = anon_sym_DOLLAR;
	v->a[4904] = actions(2040);
	v->a[4905] = 1;
	v->a[4906] = sym__special_character;
	v->a[4907] = actions(2042);
	v->a[4908] = 1;
	v->a[4909] = anon_sym_DQUOTE;
	v->a[4910] = actions(2044);
	v->a[4911] = 1;
	v->a[4912] = aux_sym_number_token1;
	v->a[4913] = actions(2046);
	v->a[4914] = 1;
	v->a[4915] = aux_sym_number_token2;
	v->a[4916] = actions(2048);
	v->a[4917] = 1;
	v->a[4918] = anon_sym_DOLLAR_LBRACE;
	v->a[4919] = actions(2050);
	small_parse_table_246(v);
}

void	small_parse_table_246(t_small_parse_table_array *v)
{
	v->a[4920] = 1;
	v->a[4921] = anon_sym_DOLLAR_LPAREN;
	v->a[4922] = actions(2052);
	v->a[4923] = 1;
	v->a[4924] = anon_sym_BQUOTE;
	v->a[4925] = actions(2054);
	v->a[4926] = 1;
	v->a[4927] = anon_sym_DOLLAR_BQUOTE;
	v->a[4928] = actions(2060);
	v->a[4929] = 1;
	v->a[4930] = sym_variable_name;
	v->a[4931] = actions(2062);
	v->a[4932] = 1;
	v->a[4933] = sym_test_operator;
	v->a[4934] = actions(2064);
	v->a[4935] = 1;
	v->a[4936] = sym__brace_start;
	v->a[4937] = actions(2098);
	v->a[4938] = 1;
	v->a[4939] = aux_sym__simple_variable_name_token1;
	small_parse_table_247(v);
}

void	small_parse_table_247(t_small_parse_table_array *v)
{
	v->a[4940] = state(1816);
	v->a[4941] = 1;
	v->a[4942] = aux_sym__literal_repeat1;
	v->a[4943] = state(6731);
	v->a[4944] = 1;
	v->a[4945] = sym_subscript;
	v->a[4946] = actions(2034);
	v->a[4947] = 2;
	v->a[4948] = anon_sym_LPAREN_LPAREN;
	v->a[4949] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[4950] = actions(2056);
	v->a[4951] = 2;
	v->a[4952] = anon_sym_LT_LPAREN;
	v->a[4953] = anon_sym_GT_LPAREN;
	v->a[4954] = actions(1757);
	v->a[4955] = 3;
	v->a[4956] = sym_file_descriptor;
	v->a[4957] = ts_builtin_sym_end;
	v->a[4958] = aux_sym_heredoc_redirect_token1;
	v->a[4959] = actions(2032);
	small_parse_table_248(v);
}

void	small_parse_table_248(t_small_parse_table_array *v)
{
	v->a[4960] = 3;
	v->a[4961] = sym_raw_string;
	v->a[4962] = sym_ansi_c_string;
	v->a[4963] = sym_word;
	v->a[4964] = state(570);
	v->a[4965] = 3;
	v->a[4966] = sym_variable_assignment;
	v->a[4967] = sym_concatenation;
	v->a[4968] = aux_sym_declaration_command_repeat1;
	v->a[4969] = state(1322);
	v->a[4970] = 9;
	v->a[4971] = sym_arithmetic_expansion;
	v->a[4972] = sym_brace_expression;
	v->a[4973] = sym_string;
	v->a[4974] = sym_translated_string;
	v->a[4975] = sym_number;
	v->a[4976] = sym_simple_expansion;
	v->a[4977] = sym_expansion;
	v->a[4978] = sym_command_substitution;
	v->a[4979] = sym_process_substitution;
	small_parse_table_249(v);
}

void	small_parse_table_249(t_small_parse_table_array *v)
{
	v->a[4980] = actions(1755);
	v->a[4981] = 19;
	v->a[4982] = anon_sym_SEMI;
	v->a[4983] = anon_sym_PIPE_PIPE;
	v->a[4984] = anon_sym_AMP_AMP;
	v->a[4985] = anon_sym_PIPE;
	v->a[4986] = anon_sym_AMP;
	v->a[4987] = anon_sym_LT;
	v->a[4988] = anon_sym_GT;
	v->a[4989] = anon_sym_LT_LT;
	v->a[4990] = anon_sym_GT_GT;
	v->a[4991] = anon_sym_SEMI_SEMI;
	v->a[4992] = anon_sym_PIPE_AMP;
	v->a[4993] = anon_sym_AMP_GT;
	v->a[4994] = anon_sym_AMP_GT_GT;
	v->a[4995] = anon_sym_LT_AMP;
	v->a[4996] = anon_sym_GT_AMP;
	v->a[4997] = anon_sym_GT_PIPE;
	v->a[4998] = anon_sym_LT_AMP_DASH;
	v->a[4999] = anon_sym_GT_AMP_DASH;
	small_parse_table_250(v);
}

/* EOF small_parse_table_49.c */
