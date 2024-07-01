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
	v->a[15900] = actions(57);
	v->a[15901] = 2;
	v->a[15902] = anon_sym_LT_AMP_DASH;
	v->a[15903] = anon_sym_GT_AMP_DASH;
	v->a[15904] = actions(65);
	v->a[15905] = 2;
	v->a[15906] = sym_raw_string;
	v->a[15907] = sym_number;
	v->a[15908] = state(443);
	v->a[15909] = 5;
	v->a[15910] = sym_arithmetic_expansion;
	v->a[15911] = sym_string;
	v->a[15912] = sym_simple_expansion;
	v->a[15913] = sym_expansion;
	v->a[15914] = sym_command_substitution;
	v->a[15915] = actions(55);
	v->a[15916] = 6;
	v->a[15917] = anon_sym_LT;
	v->a[15918] = anon_sym_GT;
	v->a[15919] = anon_sym_GT_GT;
	small_parse_table_796(v);
}

void	small_parse_table_796(t_small_parse_table_array *v)
{
	v->a[15920] = anon_sym_LT_AMP;
	v->a[15921] = anon_sym_GT_AMP;
	v->a[15922] = anon_sym_GT_PIPE;
	v->a[15923] = state(1157);
	v->a[15924] = 12;
	v->a[15925] = sym_redirected_statement;
	v->a[15926] = sym_for_statement;
	v->a[15927] = sym_while_statement;
	v->a[15928] = sym_if_statement;
	v->a[15929] = sym_case_statement;
	v->a[15930] = sym_function_definition;
	v->a[15931] = sym_compound_statement;
	v->a[15932] = sym_subshell;
	v->a[15933] = sym_list;
	v->a[15934] = sym_negated_command;
	v->a[15935] = sym_command;
	v->a[15936] = sym__variable_assignments;
	v->a[15937] = 42;
	v->a[15938] = actions(3);
	v->a[15939] = 1;
	small_parse_table_797(v);
}

void	small_parse_table_797(t_small_parse_table_array *v)
{
	v->a[15940] = sym_comment;
	v->a[15941] = actions(9);
	v->a[15942] = 1;
	v->a[15943] = anon_sym_for;
	v->a[15944] = actions(13);
	v->a[15945] = 1;
	v->a[15946] = anon_sym_if;
	v->a[15947] = actions(15);
	v->a[15948] = 1;
	v->a[15949] = anon_sym_case;
	v->a[15950] = actions(17);
	v->a[15951] = 1;
	v->a[15952] = anon_sym_LPAREN;
	v->a[15953] = actions(19);
	v->a[15954] = 1;
	v->a[15955] = anon_sym_LBRACE;
	v->a[15956] = actions(59);
	v->a[15957] = 1;
	v->a[15958] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[15959] = actions(61);
	small_parse_table_798(v);
}

void	small_parse_table_798(t_small_parse_table_array *v)
{
	v->a[15960] = 1;
	v->a[15961] = anon_sym_DOLLAR;
	v->a[15962] = actions(63);
	v->a[15963] = 1;
	v->a[15964] = anon_sym_DQUOTE;
	v->a[15965] = actions(67);
	v->a[15966] = 1;
	v->a[15967] = anon_sym_DOLLAR_LBRACE;
	v->a[15968] = actions(69);
	v->a[15969] = 1;
	v->a[15970] = anon_sym_DOLLAR_LPAREN;
	v->a[15971] = actions(71);
	v->a[15972] = 1;
	v->a[15973] = anon_sym_BQUOTE;
	v->a[15974] = actions(220);
	v->a[15975] = 1;
	v->a[15976] = sym_word;
	v->a[15977] = actions(222);
	v->a[15978] = 1;
	v->a[15979] = anon_sym_BANG;
	small_parse_table_799(v);
}

void	small_parse_table_799(t_small_parse_table_array *v)
{
	v->a[15980] = actions(230);
	v->a[15981] = 1;
	v->a[15982] = sym_file_descriptor;
	v->a[15983] = actions(232);
	v->a[15984] = 1;
	v->a[15985] = sym_variable_name;
	v->a[15986] = state(131);
	v->a[15987] = 1;
	v->a[15988] = aux_sym__statements_repeat1;
	v->a[15989] = state(180);
	v->a[15990] = 1;
	v->a[15991] = sym_command_name;
	v->a[15992] = state(221);
	v->a[15993] = 1;
	v->a[15994] = sym_variable_assignment;
	v->a[15995] = state(650);
	v->a[15996] = 1;
	v->a[15997] = sym_concatenation;
	v->a[15998] = state(710);
	v->a[15999] = 1;
	small_parse_table_800(v);
}

/* EOF small_parse_table_159.c */
