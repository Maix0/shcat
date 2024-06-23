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
	v->a[5900] = 1;
	v->a[5901] = anon_sym_RBRACE;
	v->a[5902] = state(119);
	v->a[5903] = 1;
	v->a[5904] = aux_sym__terminated_statement;
	v->a[5905] = state(187);
	v->a[5906] = 1;
	v->a[5907] = sym_command_name;
	v->a[5908] = state(281);
	v->a[5909] = 1;
	v->a[5910] = sym_variable_assignment;
	v->a[5911] = state(647);
	v->a[5912] = 1;
	v->a[5913] = sym_concatenation;
	v->a[5914] = state(736);
	v->a[5915] = 1;
	v->a[5916] = aux_sym_command_repeat1;
	v->a[5917] = state(738);
	v->a[5918] = 1;
	v->a[5919] = sym_file_redirect;
	small_parse_table_296(v);
}

void	small_parse_table_296(t_small_parse_table_array *v)
{
	v->a[5920] = state(1460);
	v->a[5921] = 1;
	v->a[5922] = aux_sym_redirected_statement_repeat2;
	v->a[5923] = state(1464);
	v->a[5924] = 1;
	v->a[5925] = sym_pipeline;
	v->a[5926] = state(2269);
	v->a[5927] = 1;
	v->a[5928] = sym__statement_not_pipeline;
	v->a[5929] = actions(11);
	v->a[5930] = 2;
	v->a[5931] = anon_sym_while;
	v->a[5932] = anon_sym_until;
	v->a[5933] = actions(57);
	v->a[5934] = 2;
	v->a[5935] = anon_sym_LT_AMP_DASH;
	v->a[5936] = anon_sym_GT_AMP_DASH;
	v->a[5937] = actions(65);
	v->a[5938] = 2;
	v->a[5939] = sym_raw_string;
	small_parse_table_297(v);
}

void	small_parse_table_297(t_small_parse_table_array *v)
{
	v->a[5940] = sym_number;
	v->a[5941] = state(394);
	v->a[5942] = 5;
	v->a[5943] = sym_arithmetic_expansion;
	v->a[5944] = sym_string;
	v->a[5945] = sym_simple_expansion;
	v->a[5946] = sym_expansion;
	v->a[5947] = sym_command_substitution;
	v->a[5948] = actions(55);
	v->a[5949] = 8;
	v->a[5950] = anon_sym_LT;
	v->a[5951] = anon_sym_GT;
	v->a[5952] = anon_sym_GT_GT;
	v->a[5953] = anon_sym_AMP_GT;
	v->a[5954] = anon_sym_AMP_GT_GT;
	v->a[5955] = anon_sym_LT_AMP;
	v->a[5956] = anon_sym_GT_AMP;
	v->a[5957] = anon_sym_GT_PIPE;
	v->a[5958] = state(1324);
	v->a[5959] = 12;
	small_parse_table_298(v);
}

void	small_parse_table_298(t_small_parse_table_array *v)
{
	v->a[5960] = sym_redirected_statement;
	v->a[5961] = sym_for_statement;
	v->a[5962] = sym_while_statement;
	v->a[5963] = sym_if_statement;
	v->a[5964] = sym_case_statement;
	v->a[5965] = sym_function_definition;
	v->a[5966] = sym_compound_statement;
	v->a[5967] = sym_subshell;
	v->a[5968] = sym_list;
	v->a[5969] = sym_negated_command;
	v->a[5970] = sym_command;
	v->a[5971] = sym__variable_assignments;
	v->a[5972] = 32;
	v->a[5973] = actions(3);
	v->a[5974] = 1;
	v->a[5975] = sym_comment;
	v->a[5976] = actions(9);
	v->a[5977] = 1;
	v->a[5978] = anon_sym_for;
	v->a[5979] = actions(13);
	small_parse_table_299(v);
}

void	small_parse_table_299(t_small_parse_table_array *v)
{
	v->a[5980] = 1;
	v->a[5981] = anon_sym_if;
	v->a[5982] = actions(15);
	v->a[5983] = 1;
	v->a[5984] = anon_sym_case;
	v->a[5985] = actions(17);
	v->a[5986] = 1;
	v->a[5987] = anon_sym_LPAREN;
	v->a[5988] = actions(19);
	v->a[5989] = 1;
	v->a[5990] = anon_sym_LBRACE;
	v->a[5991] = actions(59);
	v->a[5992] = 1;
	v->a[5993] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[5994] = actions(61);
	v->a[5995] = 1;
	v->a[5996] = anon_sym_DOLLAR;
	v->a[5997] = actions(63);
	v->a[5998] = 1;
	v->a[5999] = anon_sym_DQUOTE;
	small_parse_table_300(v);
}

/* EOF small_parse_table_59.c */
