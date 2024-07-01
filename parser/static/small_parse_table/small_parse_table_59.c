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
	v->a[5900] = actions(221);
	v->a[5901] = 1;
	v->a[5902] = sym_variable_name;
	v->a[5903] = state(125);
	v->a[5904] = 1;
	v->a[5905] = aux_sym__statements_repeat1;
	v->a[5906] = state(173);
	v->a[5907] = 1;
	v->a[5908] = sym_command_name;
	v->a[5909] = state(224);
	v->a[5910] = 1;
	v->a[5911] = sym_variable_assignment;
	v->a[5912] = state(603);
	v->a[5913] = 1;
	v->a[5914] = sym_concatenation;
	v->a[5915] = state(673);
	v->a[5916] = 1;
	v->a[5917] = aux_sym_command_repeat1;
	v->a[5918] = state(680);
	v->a[5919] = 1;
	small_parse_table_296(v);
}

void	small_parse_table_296(t_small_parse_table_array *v)
{
	v->a[5920] = sym_file_redirect;
	v->a[5921] = state(1020);
	v->a[5922] = 1;
	v->a[5923] = sym_pipeline;
	v->a[5924] = state(1136);
	v->a[5925] = 1;
	v->a[5926] = aux_sym_redirected_statement_repeat2;
	v->a[5927] = state(1898);
	v->a[5928] = 1;
	v->a[5929] = sym__statement_not_pipeline;
	v->a[5930] = state(1971);
	v->a[5931] = 1;
	v->a[5932] = sym__statements;
	v->a[5933] = actions(11);
	v->a[5934] = 2;
	v->a[5935] = anon_sym_while;
	v->a[5936] = anon_sym_until;
	v->a[5937] = actions(217);
	v->a[5938] = 2;
	v->a[5939] = sym_raw_string;
	small_parse_table_297(v);
}

void	small_parse_table_297(t_small_parse_table_array *v)
{
	v->a[5940] = sym_number;
	v->a[5941] = state(362);
	v->a[5942] = 5;
	v->a[5943] = sym_arithmetic_expansion;
	v->a[5944] = sym_string;
	v->a[5945] = sym_simple_expansion;
	v->a[5946] = sym_expansion;
	v->a[5947] = sym_command_substitution;
	v->a[5948] = actions(215);
	v->a[5949] = 7;
	v->a[5950] = anon_sym_LT;
	v->a[5951] = anon_sym_GT;
	v->a[5952] = anon_sym_GT_GT;
	v->a[5953] = anon_sym_LT_AMP;
	v->a[5954] = anon_sym_GT_AMP;
	v->a[5955] = anon_sym_GT_PIPE;
	v->a[5956] = anon_sym_LT_GT;
	v->a[5957] = state(1003);
	v->a[5958] = 12;
	v->a[5959] = sym_redirected_statement;
	small_parse_table_298(v);
}

void	small_parse_table_298(t_small_parse_table_array *v)
{
	v->a[5960] = sym_for_statement;
	v->a[5961] = sym_while_statement;
	v->a[5962] = sym_if_statement;
	v->a[5963] = sym_case_statement;
	v->a[5964] = sym_function_definition;
	v->a[5965] = sym_compound_statement;
	v->a[5966] = sym_subshell;
	v->a[5967] = sym_list;
	v->a[5968] = sym_negated_command;
	v->a[5969] = sym_command;
	v->a[5970] = sym__variable_assignments;
	v->a[5971] = 31;
	v->a[5972] = actions(3);
	v->a[5973] = 1;
	v->a[5974] = sym_comment;
	v->a[5975] = actions(9);
	v->a[5976] = 1;
	v->a[5977] = anon_sym_for;
	v->a[5978] = actions(13);
	v->a[5979] = 1;
	small_parse_table_299(v);
}

void	small_parse_table_299(t_small_parse_table_array *v)
{
	v->a[5980] = anon_sym_if;
	v->a[5981] = actions(15);
	v->a[5982] = 1;
	v->a[5983] = anon_sym_case;
	v->a[5984] = actions(17);
	v->a[5985] = 1;
	v->a[5986] = anon_sym_LPAREN;
	v->a[5987] = actions(19);
	v->a[5988] = 1;
	v->a[5989] = anon_sym_LBRACE;
	v->a[5990] = actions(55);
	v->a[5991] = 1;
	v->a[5992] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[5993] = actions(57);
	v->a[5994] = 1;
	v->a[5995] = anon_sym_DOLLAR;
	v->a[5996] = actions(59);
	v->a[5997] = 1;
	v->a[5998] = anon_sym_DQUOTE;
	v->a[5999] = actions(63);
	small_parse_table_300(v);
}

/* EOF small_parse_table_59.c */
