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
	v->a[17900] = actions(15);
	v->a[17901] = 1;
	v->a[17902] = anon_sym_case;
	v->a[17903] = actions(17);
	v->a[17904] = 1;
	v->a[17905] = anon_sym_LPAREN;
	v->a[17906] = actions(19);
	v->a[17907] = 1;
	v->a[17908] = anon_sym_LBRACE;
	v->a[17909] = actions(59);
	v->a[17910] = 1;
	v->a[17911] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17912] = actions(61);
	v->a[17913] = 1;
	v->a[17914] = anon_sym_DOLLAR;
	v->a[17915] = actions(63);
	v->a[17916] = 1;
	v->a[17917] = anon_sym_DQUOTE;
	v->a[17918] = actions(67);
	v->a[17919] = 1;
	small_parse_table_896(v);
}

void	small_parse_table_896(t_small_parse_table_array *v)
{
	v->a[17920] = anon_sym_DOLLAR_LBRACE;
	v->a[17921] = actions(69);
	v->a[17922] = 1;
	v->a[17923] = anon_sym_DOLLAR_LPAREN;
	v->a[17924] = actions(71);
	v->a[17925] = 1;
	v->a[17926] = anon_sym_BQUOTE;
	v->a[17927] = actions(220);
	v->a[17928] = 1;
	v->a[17929] = sym_word;
	v->a[17930] = actions(222);
	v->a[17931] = 1;
	v->a[17932] = anon_sym_BANG;
	v->a[17933] = actions(230);
	v->a[17934] = 1;
	v->a[17935] = sym_file_descriptor;
	v->a[17936] = actions(232);
	v->a[17937] = 1;
	v->a[17938] = sym_variable_name;
	v->a[17939] = state(180);
	small_parse_table_897(v);
}

void	small_parse_table_897(t_small_parse_table_array *v)
{
	v->a[17940] = 1;
	v->a[17941] = sym_command_name;
	v->a[17942] = state(251);
	v->a[17943] = 1;
	v->a[17944] = sym_variable_assignment;
	v->a[17945] = state(650);
	v->a[17946] = 1;
	v->a[17947] = sym_concatenation;
	v->a[17948] = state(710);
	v->a[17949] = 1;
	v->a[17950] = aux_sym_command_repeat1;
	v->a[17951] = state(712);
	v->a[17952] = 1;
	v->a[17953] = sym_file_redirect;
	v->a[17954] = state(1126);
	v->a[17955] = 1;
	v->a[17956] = sym_pipeline;
	v->a[17957] = state(1282);
	v->a[17958] = 1;
	v->a[17959] = aux_sym_redirected_statement_repeat2;
	small_parse_table_898(v);
}

void	small_parse_table_898(t_small_parse_table_array *v)
{
	v->a[17960] = state(2127);
	v->a[17961] = 1;
	v->a[17962] = sym__statement_not_pipeline;
	v->a[17963] = actions(11);
	v->a[17964] = 2;
	v->a[17965] = anon_sym_while;
	v->a[17966] = anon_sym_until;
	v->a[17967] = actions(226);
	v->a[17968] = 2;
	v->a[17969] = anon_sym_LT_AMP_DASH;
	v->a[17970] = anon_sym_GT_AMP_DASH;
	v->a[17971] = actions(228);
	v->a[17972] = 2;
	v->a[17973] = sym_raw_string;
	v->a[17974] = sym_number;
	v->a[17975] = state(382);
	v->a[17976] = 5;
	v->a[17977] = sym_arithmetic_expansion;
	v->a[17978] = sym_string;
	v->a[17979] = sym_simple_expansion;
	small_parse_table_899(v);
}

void	small_parse_table_899(t_small_parse_table_array *v)
{
	v->a[17980] = sym_expansion;
	v->a[17981] = sym_command_substitution;
	v->a[17982] = actions(224);
	v->a[17983] = 6;
	v->a[17984] = anon_sym_LT;
	v->a[17985] = anon_sym_GT;
	v->a[17986] = anon_sym_GT_GT;
	v->a[17987] = anon_sym_LT_AMP;
	v->a[17988] = anon_sym_GT_AMP;
	v->a[17989] = anon_sym_GT_PIPE;
	v->a[17990] = state(1127);
	v->a[17991] = 12;
	v->a[17992] = sym_redirected_statement;
	v->a[17993] = sym_for_statement;
	v->a[17994] = sym_while_statement;
	v->a[17995] = sym_if_statement;
	v->a[17996] = sym_case_statement;
	v->a[17997] = sym_function_definition;
	v->a[17998] = sym_compound_statement;
	v->a[17999] = sym_subshell;
	small_parse_table_900(v);
}

/* EOF small_parse_table_179.c */
