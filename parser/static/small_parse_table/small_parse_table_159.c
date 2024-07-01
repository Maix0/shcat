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
	v->a[15900] = 1;
	v->a[15901] = sym_variable_name;
	v->a[15902] = state(183);
	v->a[15903] = 1;
	v->a[15904] = sym_command_name;
	v->a[15905] = state(349);
	v->a[15906] = 1;
	v->a[15907] = sym_variable_assignment;
	v->a[15908] = state(603);
	v->a[15909] = 1;
	v->a[15910] = sym_concatenation;
	v->a[15911] = state(639);
	v->a[15912] = 1;
	v->a[15913] = aux_sym_command_repeat1;
	v->a[15914] = state(644);
	v->a[15915] = 1;
	v->a[15916] = sym_file_redirect;
	v->a[15917] = state(1196);
	v->a[15918] = 1;
	v->a[15919] = aux_sym_redirected_statement_repeat2;
	small_parse_table_796(v);
}

void	small_parse_table_796(t_small_parse_table_array *v)
{
	v->a[15920] = state(1428);
	v->a[15921] = 1;
	v->a[15922] = sym_pipeline;
	v->a[15923] = actions(11);
	v->a[15924] = 2;
	v->a[15925] = anon_sym_while;
	v->a[15926] = anon_sym_until;
	v->a[15927] = actions(61);
	v->a[15928] = 2;
	v->a[15929] = sym_raw_string;
	v->a[15930] = sym_number;
	v->a[15931] = state(436);
	v->a[15932] = 5;
	v->a[15933] = sym_arithmetic_expansion;
	v->a[15934] = sym_string;
	v->a[15935] = sym_simple_expansion;
	v->a[15936] = sym_expansion;
	v->a[15937] = sym_command_substitution;
	v->a[15938] = actions(53);
	v->a[15939] = 7;
	small_parse_table_797(v);
}

void	small_parse_table_797(t_small_parse_table_array *v)
{
	v->a[15940] = anon_sym_LT;
	v->a[15941] = anon_sym_GT;
	v->a[15942] = anon_sym_GT_GT;
	v->a[15943] = anon_sym_LT_AMP;
	v->a[15944] = anon_sym_GT_AMP;
	v->a[15945] = anon_sym_GT_PIPE;
	v->a[15946] = anon_sym_LT_GT;
	v->a[15947] = state(1074);
	v->a[15948] = 13;
	v->a[15949] = sym__statement_not_pipeline;
	v->a[15950] = sym_redirected_statement;
	v->a[15951] = sym_for_statement;
	v->a[15952] = sym_while_statement;
	v->a[15953] = sym_if_statement;
	v->a[15954] = sym_case_statement;
	v->a[15955] = sym_function_definition;
	v->a[15956] = sym_compound_statement;
	v->a[15957] = sym_subshell;
	v->a[15958] = sym_list;
	v->a[15959] = sym_negated_command;
	small_parse_table_798(v);
}

void	small_parse_table_798(t_small_parse_table_array *v)
{
	v->a[15960] = sym_command;
	v->a[15961] = sym__variable_assignments;
	v->a[15962] = 29;
	v->a[15963] = actions(3);
	v->a[15964] = 1;
	v->a[15965] = sym_comment;
	v->a[15966] = actions(9);
	v->a[15967] = 1;
	v->a[15968] = anon_sym_for;
	v->a[15969] = actions(13);
	v->a[15970] = 1;
	v->a[15971] = anon_sym_if;
	v->a[15972] = actions(15);
	v->a[15973] = 1;
	v->a[15974] = anon_sym_case;
	v->a[15975] = actions(17);
	v->a[15976] = 1;
	v->a[15977] = anon_sym_LPAREN;
	v->a[15978] = actions(19);
	v->a[15979] = 1;
	small_parse_table_799(v);
}

void	small_parse_table_799(t_small_parse_table_array *v)
{
	v->a[15980] = anon_sym_LBRACE;
	v->a[15981] = actions(55);
	v->a[15982] = 1;
	v->a[15983] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[15984] = actions(57);
	v->a[15985] = 1;
	v->a[15986] = anon_sym_DOLLAR;
	v->a[15987] = actions(59);
	v->a[15988] = 1;
	v->a[15989] = anon_sym_DQUOTE;
	v->a[15990] = actions(63);
	v->a[15991] = 1;
	v->a[15992] = anon_sym_DOLLAR_LBRACE;
	v->a[15993] = actions(65);
	v->a[15994] = 1;
	v->a[15995] = anon_sym_DOLLAR_LPAREN;
	v->a[15996] = actions(67);
	v->a[15997] = 1;
	v->a[15998] = anon_sym_BQUOTE;
	v->a[15999] = actions(347);
	small_parse_table_800(v);
}

/* EOF small_parse_table_159.c */
