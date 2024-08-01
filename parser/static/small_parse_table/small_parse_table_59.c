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
	v->a[5900] = state(186);
	v->a[5901] = 1;
	v->a[5902] = sym_variable_assignment;
	v->a[5903] = state(298);
	v->a[5904] = 1;
	v->a[5905] = aux_sym_command_repeat1;
	v->a[5906] = state(555);
	v->a[5907] = 1;
	v->a[5908] = sym_concatenation;
	v->a[5909] = state(577);
	v->a[5910] = 1;
	v->a[5911] = sym_file_redirect;
	v->a[5912] = state(937);
	v->a[5913] = 1;
	v->a[5914] = sym_pipeline;
	v->a[5915] = state(1019);
	v->a[5916] = 1;
	v->a[5917] = aux_sym_redirected_statement_repeat2;
	v->a[5918] = state(1557);
	v->a[5919] = 1;
	small_parse_table_296(v);
}

void	small_parse_table_296(t_small_parse_table_array *v)
{
	v->a[5920] = sym__statement_not_pipeline;
	v->a[5921] = state(1586);
	v->a[5922] = 1;
	v->a[5923] = sym__statements;
	v->a[5924] = actions(11);
	v->a[5925] = 2;
	v->a[5926] = anon_sym_while;
	v->a[5927] = anon_sym_until;
	v->a[5928] = actions(214);
	v->a[5929] = 2;
	v->a[5930] = sym_raw_string;
	v->a[5931] = sym_number;
	v->a[5932] = actions(212);
	v->a[5933] = 3;
	v->a[5934] = anon_sym_LT;
	v->a[5935] = anon_sym_GT;
	v->a[5936] = anon_sym_GT_GT;
	v->a[5937] = state(277);
	v->a[5938] = 5;
	v->a[5939] = sym_arithmetic_expansion;
	small_parse_table_297(v);
}

void	small_parse_table_297(t_small_parse_table_array *v)
{
	v->a[5940] = sym_string;
	v->a[5941] = sym_simple_expansion;
	v->a[5942] = sym_expansion;
	v->a[5943] = sym_command_substitution;
	v->a[5944] = state(877);
	v->a[5945] = 12;
	v->a[5946] = sym_redirected_statement;
	v->a[5947] = sym_for_statement;
	v->a[5948] = sym_while_statement;
	v->a[5949] = sym_if_statement;
	v->a[5950] = sym_case_statement;
	v->a[5951] = sym_function_definition;
	v->a[5952] = sym_compound_statement;
	v->a[5953] = sym_subshell;
	v->a[5954] = sym_list;
	v->a[5955] = sym_negated_command;
	v->a[5956] = sym_command;
	v->a[5957] = sym__variable_assignments;
	v->a[5958] = 30;
	v->a[5959] = actions(3);
	small_parse_table_298(v);
}

void	small_parse_table_298(t_small_parse_table_array *v)
{
	v->a[5960] = 1;
	v->a[5961] = sym_comment;
	v->a[5962] = actions(9);
	v->a[5963] = 1;
	v->a[5964] = anon_sym_for;
	v->a[5965] = actions(13);
	v->a[5966] = 1;
	v->a[5967] = anon_sym_if;
	v->a[5968] = actions(15);
	v->a[5969] = 1;
	v->a[5970] = anon_sym_case;
	v->a[5971] = actions(17);
	v->a[5972] = 1;
	v->a[5973] = anon_sym_LPAREN;
	v->a[5974] = actions(19);
	v->a[5975] = 1;
	v->a[5976] = anon_sym_LBRACE;
	v->a[5977] = actions(53);
	v->a[5978] = 1;
	v->a[5979] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_299(v);
}

void	small_parse_table_299(t_small_parse_table_array *v)
{
	v->a[5980] = actions(55);
	v->a[5981] = 1;
	v->a[5982] = anon_sym_DOLLAR;
	v->a[5983] = actions(57);
	v->a[5984] = 1;
	v->a[5985] = anon_sym_DQUOTE;
	v->a[5986] = actions(61);
	v->a[5987] = 1;
	v->a[5988] = anon_sym_DOLLAR_LBRACE;
	v->a[5989] = actions(63);
	v->a[5990] = 1;
	v->a[5991] = anon_sym_DOLLAR_LPAREN;
	v->a[5992] = actions(65);
	v->a[5993] = 1;
	v->a[5994] = anon_sym_BQUOTE;
	v->a[5995] = actions(208);
	v->a[5996] = 1;
	v->a[5997] = sym_word;
	v->a[5998] = actions(210);
	v->a[5999] = 1;
	small_parse_table_300(v);
}

/* EOF small_parse_table_59.c */
