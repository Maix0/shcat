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
	v->a[15900] = sym_file_descriptor;
	v->a[15901] = actions(345);
	v->a[15902] = 1;
	v->a[15903] = sym_variable_name;
	v->a[15904] = state(326);
	v->a[15905] = 1;
	v->a[15906] = sym_command_name;
	v->a[15907] = state(596);
	v->a[15908] = 1;
	v->a[15909] = sym_variable_assignment;
	v->a[15910] = state(643);
	v->a[15911] = 1;
	v->a[15912] = aux_sym_command_repeat1;
	v->a[15913] = state(896);
	v->a[15914] = 1;
	v->a[15915] = sym_concatenation;
	v->a[15916] = state(903);
	v->a[15917] = 1;
	v->a[15918] = sym_file_redirect;
	v->a[15919] = state(1438);
	small_parse_table_796(v);
}

void	small_parse_table_796(t_small_parse_table_array *v)
{
	v->a[15920] = 1;
	v->a[15921] = aux_sym_redirected_statement_repeat2;
	v->a[15922] = state(1441);
	v->a[15923] = 1;
	v->a[15924] = sym_pipeline;
	v->a[15925] = actions(315);
	v->a[15926] = 2;
	v->a[15927] = anon_sym_while;
	v->a[15928] = anon_sym_until;
	v->a[15929] = actions(335);
	v->a[15930] = 2;
	v->a[15931] = sym_raw_string;
	v->a[15932] = sym_number;
	v->a[15933] = state(725);
	v->a[15934] = 5;
	v->a[15935] = sym_arithmetic_expansion;
	v->a[15936] = sym_string;
	v->a[15937] = sym_simple_expansion;
	v->a[15938] = sym_expansion;
	v->a[15939] = sym_command_substitution;
	small_parse_table_797(v);
}

void	small_parse_table_797(t_small_parse_table_array *v)
{
	v->a[15940] = actions(327);
	v->a[15941] = 7;
	v->a[15942] = anon_sym_LT;
	v->a[15943] = anon_sym_GT;
	v->a[15944] = anon_sym_GT_GT;
	v->a[15945] = anon_sym_LT_AMP;
	v->a[15946] = anon_sym_GT_AMP;
	v->a[15947] = anon_sym_GT_PIPE;
	v->a[15948] = anon_sym_LT_GT;
	v->a[15949] = state(1459);
	v->a[15950] = 13;
	v->a[15951] = sym__statement_not_pipeline;
	v->a[15952] = sym_redirected_statement;
	v->a[15953] = sym_for_statement;
	v->a[15954] = sym_while_statement;
	v->a[15955] = sym_if_statement;
	v->a[15956] = sym_case_statement;
	v->a[15957] = sym_function_definition;
	v->a[15958] = sym_compound_statement;
	v->a[15959] = sym_subshell;
	small_parse_table_798(v);
}

void	small_parse_table_798(t_small_parse_table_array *v)
{
	v->a[15960] = sym_list;
	v->a[15961] = sym_negated_command;
	v->a[15962] = sym_command;
	v->a[15963] = sym__variable_assignments;
	v->a[15964] = 29;
	v->a[15965] = actions(3);
	v->a[15966] = 1;
	v->a[15967] = sym_comment;
	v->a[15968] = actions(9);
	v->a[15969] = 1;
	v->a[15970] = anon_sym_for;
	v->a[15971] = actions(13);
	v->a[15972] = 1;
	v->a[15973] = anon_sym_if;
	v->a[15974] = actions(15);
	v->a[15975] = 1;
	v->a[15976] = anon_sym_case;
	v->a[15977] = actions(17);
	v->a[15978] = 1;
	v->a[15979] = anon_sym_LPAREN;
	small_parse_table_799(v);
}

void	small_parse_table_799(t_small_parse_table_array *v)
{
	v->a[15980] = actions(19);
	v->a[15981] = 1;
	v->a[15982] = anon_sym_LBRACE;
	v->a[15983] = actions(43);
	v->a[15984] = 1;
	v->a[15985] = sym_word;
	v->a[15986] = actions(51);
	v->a[15987] = 1;
	v->a[15988] = anon_sym_BANG;
	v->a[15989] = actions(55);
	v->a[15990] = 1;
	v->a[15991] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[15992] = actions(57);
	v->a[15993] = 1;
	v->a[15994] = anon_sym_DOLLAR;
	v->a[15995] = actions(59);
	v->a[15996] = 1;
	v->a[15997] = anon_sym_DQUOTE;
	v->a[15998] = actions(63);
	v->a[15999] = 1;
	small_parse_table_800(v);
}

/* EOF small_parse_table_159.c */
