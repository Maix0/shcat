/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_179.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_895(t_small_parse_table_array *v)
{
	v->a[17900] = actions(37);
	v->a[17901] = 1;
	v->a[17902] = aux_sym_number_token2;
	v->a[17903] = actions(39);
	v->a[17904] = 1;
	v->a[17905] = anon_sym_DOLLAR_LBRACE;
	v->a[17906] = actions(41);
	v->a[17907] = 1;
	v->a[17908] = anon_sym_DOLLAR_LPAREN;
	v->a[17909] = actions(43);
	v->a[17910] = 1;
	v->a[17911] = anon_sym_BQUOTE;
	v->a[17912] = actions(45);
	v->a[17913] = 1;
	v->a[17914] = sym_file_descriptor;
	v->a[17915] = actions(47);
	v->a[17916] = 1;
	v->a[17917] = sym_variable_name;
	v->a[17918] = state(135);
	v->a[17919] = 1;
	small_parse_table_896(v);
}

void	small_parse_table_896(t_small_parse_table_array *v)
{
	v->a[17920] = aux_sym__statements_repeat1;
	v->a[17921] = state(182);
	v->a[17922] = 1;
	v->a[17923] = sym_command_name;
	v->a[17924] = state(267);
	v->a[17925] = 1;
	v->a[17926] = sym_variable_assignment;
	v->a[17927] = state(565);
	v->a[17928] = 1;
	v->a[17929] = sym_concatenation;
	v->a[17930] = state(572);
	v->a[17931] = 1;
	v->a[17932] = aux_sym_command_repeat1;
	v->a[17933] = state(698);
	v->a[17934] = 1;
	v->a[17935] = sym_file_redirect;
	v->a[17936] = state(1138);
	v->a[17937] = 1;
	v->a[17938] = aux_sym_redirected_statement_repeat2;
	v->a[17939] = state(1201);
	small_parse_table_897(v);
}

void	small_parse_table_897(t_small_parse_table_array *v)
{
	v->a[17940] = 1;
	v->a[17941] = sym_pipeline;
	v->a[17942] = state(2052);
	v->a[17943] = 1;
	v->a[17944] = sym__statement_not_pipeline;
	v->a[17945] = actions(11);
	v->a[17946] = 2;
	v->a[17947] = anon_sym_while;
	v->a[17948] = anon_sym_until;
	v->a[17949] = actions(25);
	v->a[17950] = 2;
	v->a[17951] = anon_sym_LT_AMP_DASH;
	v->a[17952] = anon_sym_GT_AMP_DASH;
	v->a[17953] = state(311);
	v->a[17954] = 6;
	v->a[17955] = sym_arithmetic_expansion;
	v->a[17956] = sym_string;
	v->a[17957] = sym_number;
	v->a[17958] = sym_simple_expansion;
	v->a[17959] = sym_expansion;
	small_parse_table_898(v);
}

void	small_parse_table_898(t_small_parse_table_array *v)
{
	v->a[17960] = sym_command_substitution;
	v->a[17961] = actions(23);
	v->a[17962] = 8;
	v->a[17963] = anon_sym_LT;
	v->a[17964] = anon_sym_GT;
	v->a[17965] = anon_sym_GT_GT;
	v->a[17966] = anon_sym_AMP_GT;
	v->a[17967] = anon_sym_AMP_GT_GT;
	v->a[17968] = anon_sym_LT_AMP;
	v->a[17969] = anon_sym_GT_AMP;
	v->a[17970] = anon_sym_GT_PIPE;
	v->a[17971] = state(1047);
	v->a[17972] = 12;
	v->a[17973] = sym_redirected_statement;
	v->a[17974] = sym_for_statement;
	v->a[17975] = sym_while_statement;
	v->a[17976] = sym_if_statement;
	v->a[17977] = sym_case_statement;
	v->a[17978] = sym_function_definition;
	v->a[17979] = sym_compound_statement;
	small_parse_table_899(v);
}

void	small_parse_table_899(t_small_parse_table_array *v)
{
	v->a[17980] = sym_subshell;
	v->a[17981] = sym_list;
	v->a[17982] = sym_negated_command;
	v->a[17983] = sym_command;
	v->a[17984] = sym_variable_assignments;
	v->a[17985] = 33;
	v->a[17986] = actions(3);
	v->a[17987] = 1;
	v->a[17988] = sym_comment;
	v->a[17989] = actions(9);
	v->a[17990] = 1;
	v->a[17991] = anon_sym_for;
	v->a[17992] = actions(13);
	v->a[17993] = 1;
	v->a[17994] = anon_sym_if;
	v->a[17995] = actions(15);
	v->a[17996] = 1;
	v->a[17997] = anon_sym_case;
	v->a[17998] = actions(17);
	v->a[17999] = 1;
	small_parse_table_900(v);
}

/* EOF small_parse_table_179.c */
