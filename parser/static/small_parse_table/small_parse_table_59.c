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
	v->a[5900] = actions(61);
	v->a[5901] = 1;
	v->a[5902] = anon_sym_DOLLAR;
	v->a[5903] = actions(63);
	v->a[5904] = 1;
	v->a[5905] = anon_sym_DQUOTE;
	v->a[5906] = actions(67);
	v->a[5907] = 1;
	v->a[5908] = anon_sym_DOLLAR_LBRACE;
	v->a[5909] = actions(69);
	v->a[5910] = 1;
	v->a[5911] = anon_sym_DOLLAR_LPAREN;
	v->a[5912] = actions(71);
	v->a[5913] = 1;
	v->a[5914] = anon_sym_BQUOTE;
	v->a[5915] = actions(220);
	v->a[5916] = 1;
	v->a[5917] = sym_word;
	v->a[5918] = actions(222);
	v->a[5919] = 1;
	small_parse_table_296(v);
}

void	small_parse_table_296(t_small_parse_table_array *v)
{
	v->a[5920] = anon_sym_BANG;
	v->a[5921] = actions(230);
	v->a[5922] = 1;
	v->a[5923] = sym_file_descriptor;
	v->a[5924] = actions(232);
	v->a[5925] = 1;
	v->a[5926] = sym_variable_name;
	v->a[5927] = state(133);
	v->a[5928] = 1;
	v->a[5929] = aux_sym__statements_repeat1;
	v->a[5930] = state(180);
	v->a[5931] = 1;
	v->a[5932] = sym_command_name;
	v->a[5933] = state(231);
	v->a[5934] = 1;
	v->a[5935] = sym_variable_assignment;
	v->a[5936] = state(650);
	v->a[5937] = 1;
	v->a[5938] = sym_concatenation;
	v->a[5939] = state(710);
	small_parse_table_297(v);
}

void	small_parse_table_297(t_small_parse_table_array *v)
{
	v->a[5940] = 1;
	v->a[5941] = aux_sym_command_repeat1;
	v->a[5942] = state(712);
	v->a[5943] = 1;
	v->a[5944] = sym_file_redirect;
	v->a[5945] = state(1095);
	v->a[5946] = 1;
	v->a[5947] = sym_pipeline;
	v->a[5948] = state(1282);
	v->a[5949] = 1;
	v->a[5950] = aux_sym_redirected_statement_repeat2;
	v->a[5951] = state(2127);
	v->a[5952] = 1;
	v->a[5953] = sym__statement_not_pipeline;
	v->a[5954] = state(2289);
	v->a[5955] = 1;
	v->a[5956] = sym__statements;
	v->a[5957] = actions(11);
	v->a[5958] = 2;
	v->a[5959] = anon_sym_while;
	small_parse_table_298(v);
}

void	small_parse_table_298(t_small_parse_table_array *v)
{
	v->a[5960] = anon_sym_until;
	v->a[5961] = actions(226);
	v->a[5962] = 2;
	v->a[5963] = anon_sym_LT_AMP_DASH;
	v->a[5964] = anon_sym_GT_AMP_DASH;
	v->a[5965] = actions(228);
	v->a[5966] = 2;
	v->a[5967] = sym_raw_string;
	v->a[5968] = sym_number;
	v->a[5969] = state(382);
	v->a[5970] = 5;
	v->a[5971] = sym_arithmetic_expansion;
	v->a[5972] = sym_string;
	v->a[5973] = sym_simple_expansion;
	v->a[5974] = sym_expansion;
	v->a[5975] = sym_command_substitution;
	v->a[5976] = actions(224);
	v->a[5977] = 6;
	v->a[5978] = anon_sym_LT;
	v->a[5979] = anon_sym_GT;
	small_parse_table_299(v);
}

void	small_parse_table_299(t_small_parse_table_array *v)
{
	v->a[5980] = anon_sym_GT_GT;
	v->a[5981] = anon_sym_LT_AMP;
	v->a[5982] = anon_sym_GT_AMP;
	v->a[5983] = anon_sym_GT_PIPE;
	v->a[5984] = state(1087);
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
	v->a[5997] = sym__variable_assignments;
	v->a[5998] = 32;
	v->a[5999] = actions(3);
	small_parse_table_300(v);
}

/* EOF small_parse_table_59.c */
