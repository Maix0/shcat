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
	v->a[17900] = sym_file_redirect;
	v->a[17901] = state(828);
	v->a[17902] = 1;
	v->a[17903] = aux_sym_command_repeat1;
	v->a[17904] = state(1331);
	v->a[17905] = 1;
	v->a[17906] = aux_sym_redirected_statement_repeat2;
	v->a[17907] = state(1602);
	v->a[17908] = 1;
	v->a[17909] = sym_pipeline;
	v->a[17910] = actions(11);
	v->a[17911] = 2;
	v->a[17912] = anon_sym_while;
	v->a[17913] = anon_sym_until;
	v->a[17914] = actions(226);
	v->a[17915] = 2;
	v->a[17916] = anon_sym_LT_AMP_DASH;
	v->a[17917] = anon_sym_GT_AMP_DASH;
	v->a[17918] = actions(228);
	v->a[17919] = 2;
	small_parse_table_896(v);
}

void	small_parse_table_896(t_small_parse_table_array *v)
{
	v->a[17920] = sym_raw_string;
	v->a[17921] = sym_number;
	v->a[17922] = state(294);
	v->a[17923] = 5;
	v->a[17924] = sym_arithmetic_expansion;
	v->a[17925] = sym_string;
	v->a[17926] = sym_simple_expansion;
	v->a[17927] = sym_expansion;
	v->a[17928] = sym_command_substitution;
	v->a[17929] = actions(224);
	v->a[17930] = 8;
	v->a[17931] = anon_sym_LT;
	v->a[17932] = anon_sym_GT;
	v->a[17933] = anon_sym_GT_GT;
	v->a[17934] = anon_sym_AMP_GT;
	v->a[17935] = anon_sym_AMP_GT_GT;
	v->a[17936] = anon_sym_LT_AMP;
	v->a[17937] = anon_sym_GT_AMP;
	v->a[17938] = anon_sym_GT_PIPE;
	v->a[17939] = state(1239);
	small_parse_table_897(v);
}

void	small_parse_table_897(t_small_parse_table_array *v)
{
	v->a[17940] = 13;
	v->a[17941] = sym__statement_not_pipeline;
	v->a[17942] = sym_redirected_statement;
	v->a[17943] = sym_for_statement;
	v->a[17944] = sym_while_statement;
	v->a[17945] = sym_if_statement;
	v->a[17946] = sym_case_statement;
	v->a[17947] = sym_function_definition;
	v->a[17948] = sym_compound_statement;
	v->a[17949] = sym_subshell;
	v->a[17950] = sym_list;
	v->a[17951] = sym_negated_command;
	v->a[17952] = sym_command;
	v->a[17953] = sym_variable_assignments;
	v->a[17954] = 29;
	v->a[17955] = actions(3);
	v->a[17956] = 1;
	v->a[17957] = sym_comment;
	v->a[17958] = actions(9);
	v->a[17959] = 1;
	small_parse_table_898(v);
}

void	small_parse_table_898(t_small_parse_table_array *v)
{
	v->a[17960] = anon_sym_for;
	v->a[17961] = actions(13);
	v->a[17962] = 1;
	v->a[17963] = anon_sym_if;
	v->a[17964] = actions(15);
	v->a[17965] = 1;
	v->a[17966] = anon_sym_case;
	v->a[17967] = actions(17);
	v->a[17968] = 1;
	v->a[17969] = anon_sym_LPAREN;
	v->a[17970] = actions(19);
	v->a[17971] = 1;
	v->a[17972] = anon_sym_LBRACE;
	v->a[17973] = actions(59);
	v->a[17974] = 1;
	v->a[17975] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17976] = actions(61);
	v->a[17977] = 1;
	v->a[17978] = anon_sym_DOLLAR;
	v->a[17979] = actions(63);
	small_parse_table_899(v);
}

void	small_parse_table_899(t_small_parse_table_array *v)
{
	v->a[17980] = 1;
	v->a[17981] = anon_sym_DQUOTE;
	v->a[17982] = actions(67);
	v->a[17983] = 1;
	v->a[17984] = anon_sym_DOLLAR_LBRACE;
	v->a[17985] = actions(69);
	v->a[17986] = 1;
	v->a[17987] = anon_sym_DOLLAR_LPAREN;
	v->a[17988] = actions(71);
	v->a[17989] = 1;
	v->a[17990] = anon_sym_BQUOTE;
	v->a[17991] = actions(363);
	v->a[17992] = 1;
	v->a[17993] = sym_word;
	v->a[17994] = actions(365);
	v->a[17995] = 1;
	v->a[17996] = anon_sym_BANG;
	v->a[17997] = actions(373);
	v->a[17998] = 1;
	v->a[17999] = sym_file_descriptor;
	small_parse_table_900(v);
}

/* EOF small_parse_table_179.c */
