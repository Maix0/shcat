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
	v->a[15900] = anon_sym_DOLLAR_LBRACE;
	v->a[15901] = actions(69);
	v->a[15902] = 1;
	v->a[15903] = anon_sym_DOLLAR_LPAREN;
	v->a[15904] = actions(71);
	v->a[15905] = 1;
	v->a[15906] = anon_sym_BQUOTE;
	v->a[15907] = actions(73);
	v->a[15908] = 1;
	v->a[15909] = sym_file_descriptor;
	v->a[15910] = actions(75);
	v->a[15911] = 1;
	v->a[15912] = sym_variable_name;
	v->a[15913] = state(137);
	v->a[15914] = 1;
	v->a[15915] = aux_sym__statements_repeat1;
	v->a[15916] = state(191);
	v->a[15917] = 1;
	v->a[15918] = sym_command_name;
	v->a[15919] = state(255);
	small_parse_table_796(v);
}

void	small_parse_table_796(t_small_parse_table_array *v)
{
	v->a[15920] = 1;
	v->a[15921] = sym_variable_assignment;
	v->a[15922] = state(624);
	v->a[15923] = 1;
	v->a[15924] = sym_concatenation;
	v->a[15925] = state(726);
	v->a[15926] = 1;
	v->a[15927] = sym_file_redirect;
	v->a[15928] = state(733);
	v->a[15929] = 1;
	v->a[15930] = aux_sym_command_repeat1;
	v->a[15931] = state(1095);
	v->a[15932] = 1;
	v->a[15933] = sym_function_definition;
	v->a[15934] = state(1102);
	v->a[15935] = 1;
	v->a[15936] = sym_redirected_statement;
	v->a[15937] = state(1130);
	v->a[15938] = 1;
	v->a[15939] = sym_for_statement;
	small_parse_table_797(v);
}

void	small_parse_table_797(t_small_parse_table_array *v)
{
	v->a[15940] = state(1144);
	v->a[15941] = 1;
	v->a[15942] = sym_while_statement;
	v->a[15943] = state(1145);
	v->a[15944] = 1;
	v->a[15945] = sym_if_statement;
	v->a[15946] = state(1147);
	v->a[15947] = 1;
	v->a[15948] = sym__variable_assignments;
	v->a[15949] = state(1151);
	v->a[15950] = 1;
	v->a[15951] = sym_command;
	v->a[15952] = state(1153);
	v->a[15953] = 1;
	v->a[15954] = sym_negated_command;
	v->a[15955] = state(1155);
	v->a[15956] = 1;
	v->a[15957] = sym_list;
	v->a[15958] = state(1161);
	v->a[15959] = 1;
	small_parse_table_798(v);
}

void	small_parse_table_798(t_small_parse_table_array *v)
{
	v->a[15960] = sym_compound_statement;
	v->a[15961] = state(1165);
	v->a[15962] = 1;
	v->a[15963] = sym_subshell;
	v->a[15964] = state(1180);
	v->a[15965] = 1;
	v->a[15966] = sym_case_statement;
	v->a[15967] = state(1194);
	v->a[15968] = 1;
	v->a[15969] = sym_pipeline;
	v->a[15970] = state(1307);
	v->a[15971] = 1;
	v->a[15972] = aux_sym_redirected_statement_repeat2;
	v->a[15973] = state(2117);
	v->a[15974] = 1;
	v->a[15975] = sym__statement_not_pipeline;
	v->a[15976] = actions(11);
	v->a[15977] = 2;
	v->a[15978] = anon_sym_while;
	v->a[15979] = anon_sym_until;
	small_parse_table_799(v);
}

void	small_parse_table_799(t_small_parse_table_array *v)
{
	v->a[15980] = actions(57);
	v->a[15981] = 2;
	v->a[15982] = anon_sym_LT_AMP_DASH;
	v->a[15983] = anon_sym_GT_AMP_DASH;
	v->a[15984] = actions(65);
	v->a[15985] = 2;
	v->a[15986] = sym_raw_string;
	v->a[15987] = sym_number;
	v->a[15988] = state(420);
	v->a[15989] = 5;
	v->a[15990] = sym_arithmetic_expansion;
	v->a[15991] = sym_string;
	v->a[15992] = sym_simple_expansion;
	v->a[15993] = sym_expansion;
	v->a[15994] = sym_command_substitution;
	v->a[15995] = actions(55);
	v->a[15996] = 8;
	v->a[15997] = anon_sym_LT;
	v->a[15998] = anon_sym_GT;
	v->a[15999] = anon_sym_GT_GT;
	small_parse_table_800(v);
}

/* EOF small_parse_table_159.c */
