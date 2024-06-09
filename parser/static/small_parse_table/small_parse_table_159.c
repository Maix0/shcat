/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_159.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_795(t_small_parse_table_array *v)
{
	v->a[15900] = actions(81);
	v->a[15901] = 1;
	v->a[15902] = sym_file_descriptor;
	v->a[15903] = actions(83);
	v->a[15904] = 1;
	v->a[15905] = sym_variable_name;
	v->a[15906] = actions(238);
	v->a[15907] = 1;
	v->a[15908] = sym_word;
	v->a[15909] = actions(240);
	v->a[15910] = 1;
	v->a[15911] = anon_sym_BANG;
	v->a[15912] = state(132);
	v->a[15913] = 1;
	v->a[15914] = aux_sym__statements_repeat1;
	v->a[15915] = state(185);
	v->a[15916] = 1;
	v->a[15917] = sym_command_name;
	v->a[15918] = state(297);
	v->a[15919] = 1;
	small_parse_table_796(v);
}

void	small_parse_table_796(t_small_parse_table_array *v)
{
	v->a[15920] = sym_variable_assignment;
	v->a[15921] = state(582);
	v->a[15922] = 1;
	v->a[15923] = sym_concatenation;
	v->a[15924] = state(614);
	v->a[15925] = 1;
	v->a[15926] = aux_sym_command_repeat1;
	v->a[15927] = state(769);
	v->a[15928] = 1;
	v->a[15929] = sym_file_redirect;
	v->a[15930] = state(1133);
	v->a[15931] = 1;
	v->a[15932] = aux_sym_redirected_statement_repeat2;
	v->a[15933] = state(1142);
	v->a[15934] = 1;
	v->a[15935] = sym_pipeline;
	v->a[15936] = state(2041);
	v->a[15937] = 1;
	v->a[15938] = sym__statement_not_pipeline;
	v->a[15939] = state(2192);
	small_parse_table_797(v);
}

void	small_parse_table_797(t_small_parse_table_array *v)
{
	v->a[15940] = 1;
	v->a[15941] = sym__statements;
	v->a[15942] = actions(11);
	v->a[15943] = 2;
	v->a[15944] = anon_sym_while;
	v->a[15945] = anon_sym_until;
	v->a[15946] = actions(61);
	v->a[15947] = 2;
	v->a[15948] = anon_sym_LT_AMP_DASH;
	v->a[15949] = anon_sym_GT_AMP_DASH;
	v->a[15950] = state(397);
	v->a[15951] = 6;
	v->a[15952] = sym_arithmetic_expansion;
	v->a[15953] = sym_string;
	v->a[15954] = sym_number;
	v->a[15955] = sym_simple_expansion;
	v->a[15956] = sym_expansion;
	v->a[15957] = sym_command_substitution;
	v->a[15958] = actions(59);
	v->a[15959] = 8;
	small_parse_table_798(v);
}

void	small_parse_table_798(t_small_parse_table_array *v)
{
	v->a[15960] = anon_sym_LT;
	v->a[15961] = anon_sym_GT;
	v->a[15962] = anon_sym_GT_GT;
	v->a[15963] = anon_sym_AMP_GT;
	v->a[15964] = anon_sym_AMP_GT_GT;
	v->a[15965] = anon_sym_LT_AMP;
	v->a[15966] = anon_sym_GT_AMP;
	v->a[15967] = anon_sym_GT_PIPE;
	v->a[15968] = state(1071);
	v->a[15969] = 12;
	v->a[15970] = sym_redirected_statement;
	v->a[15971] = sym_for_statement;
	v->a[15972] = sym_while_statement;
	v->a[15973] = sym_if_statement;
	v->a[15974] = sym_case_statement;
	v->a[15975] = sym_function_definition;
	v->a[15976] = sym_compound_statement;
	v->a[15977] = sym_subshell;
	v->a[15978] = sym_list;
	v->a[15979] = sym_negated_command;
	small_parse_table_799(v);
}

void	small_parse_table_799(t_small_parse_table_array *v)
{
	v->a[15980] = sym_command;
	v->a[15981] = sym_variable_assignments;
	v->a[15982] = 34;
	v->a[15983] = actions(3);
	v->a[15984] = 1;
	v->a[15985] = sym_comment;
	v->a[15986] = actions(9);
	v->a[15987] = 1;
	v->a[15988] = anon_sym_for;
	v->a[15989] = actions(13);
	v->a[15990] = 1;
	v->a[15991] = anon_sym_if;
	v->a[15992] = actions(15);
	v->a[15993] = 1;
	v->a[15994] = anon_sym_case;
	v->a[15995] = actions(17);
	v->a[15996] = 1;
	v->a[15997] = anon_sym_LPAREN;
	v->a[15998] = actions(19);
	v->a[15999] = 1;
	small_parse_table_800(v);
}

/* EOF small_parse_table_159.c */
