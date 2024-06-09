/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_59.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_295(t_small_parse_table_array *v)
{
	v->a[5900] = sym_raw_string;
	v->a[5901] = actions(71);
	v->a[5902] = 1;
	v->a[5903] = aux_sym_number_token1;
	v->a[5904] = actions(73);
	v->a[5905] = 1;
	v->a[5906] = aux_sym_number_token2;
	v->a[5907] = actions(75);
	v->a[5908] = 1;
	v->a[5909] = anon_sym_DOLLAR_LBRACE;
	v->a[5910] = actions(77);
	v->a[5911] = 1;
	v->a[5912] = anon_sym_DOLLAR_LPAREN;
	v->a[5913] = actions(79);
	v->a[5914] = 1;
	v->a[5915] = anon_sym_BQUOTE;
	v->a[5916] = actions(81);
	v->a[5917] = 1;
	v->a[5918] = sym_file_descriptor;
	v->a[5919] = actions(83);
	small_parse_table_296(v);
}

void	small_parse_table_296(t_small_parse_table_array *v)
{
	v->a[5920] = 1;
	v->a[5921] = sym_variable_name;
	v->a[5922] = actions(238);
	v->a[5923] = 1;
	v->a[5924] = sym_word;
	v->a[5925] = actions(240);
	v->a[5926] = 1;
	v->a[5927] = anon_sym_BANG;
	v->a[5928] = state(132);
	v->a[5929] = 1;
	v->a[5930] = aux_sym__statements_repeat1;
	v->a[5931] = state(185);
	v->a[5932] = 1;
	v->a[5933] = sym_command_name;
	v->a[5934] = state(297);
	v->a[5935] = 1;
	v->a[5936] = sym_variable_assignment;
	v->a[5937] = state(582);
	v->a[5938] = 1;
	v->a[5939] = sym_concatenation;
	small_parse_table_297(v);
}

void	small_parse_table_297(t_small_parse_table_array *v)
{
	v->a[5940] = state(614);
	v->a[5941] = 1;
	v->a[5942] = aux_sym_command_repeat1;
	v->a[5943] = state(769);
	v->a[5944] = 1;
	v->a[5945] = sym_file_redirect;
	v->a[5946] = state(1133);
	v->a[5947] = 1;
	v->a[5948] = aux_sym_redirected_statement_repeat2;
	v->a[5949] = state(1142);
	v->a[5950] = 1;
	v->a[5951] = sym_pipeline;
	v->a[5952] = state(2041);
	v->a[5953] = 1;
	v->a[5954] = sym__statement_not_pipeline;
	v->a[5955] = state(2097);
	v->a[5956] = 1;
	v->a[5957] = sym__statements;
	v->a[5958] = actions(11);
	v->a[5959] = 2;
	small_parse_table_298(v);
}

void	small_parse_table_298(t_small_parse_table_array *v)
{
	v->a[5960] = anon_sym_while;
	v->a[5961] = anon_sym_until;
	v->a[5962] = actions(61);
	v->a[5963] = 2;
	v->a[5964] = anon_sym_LT_AMP_DASH;
	v->a[5965] = anon_sym_GT_AMP_DASH;
	v->a[5966] = state(397);
	v->a[5967] = 6;
	v->a[5968] = sym_arithmetic_expansion;
	v->a[5969] = sym_string;
	v->a[5970] = sym_number;
	v->a[5971] = sym_simple_expansion;
	v->a[5972] = sym_expansion;
	v->a[5973] = sym_command_substitution;
	v->a[5974] = actions(59);
	v->a[5975] = 8;
	v->a[5976] = anon_sym_LT;
	v->a[5977] = anon_sym_GT;
	v->a[5978] = anon_sym_GT_GT;
	v->a[5979] = anon_sym_AMP_GT;
	small_parse_table_299(v);
}

void	small_parse_table_299(t_small_parse_table_array *v)
{
	v->a[5980] = anon_sym_AMP_GT_GT;
	v->a[5981] = anon_sym_LT_AMP;
	v->a[5982] = anon_sym_GT_AMP;
	v->a[5983] = anon_sym_GT_PIPE;
	v->a[5984] = state(1071);
	v->a[5985] = 12;
	v->a[5986] = sym_redirected_statement;
	v->a[5987] = sym_for_statement;
	v->a[5988] = sym_while_statement;
	v->a[5989] = sym_if_statement;
	v->a[5990] = sym_case_statement;
	v->a[5991] = sym_function_definition;
	v->a[5992] = sym_compound_statement;
	v->a[5993] = sym_subshell;
	v->a[5994] = sym_list;
	v->a[5995] = sym_negated_command;
	v->a[5996] = sym_command;
	v->a[5997] = sym_variable_assignments;
	v->a[5998] = 34;
	v->a[5999] = actions(3);
	small_parse_table_300(v);
}

/* EOF small_parse_table_59.c */
