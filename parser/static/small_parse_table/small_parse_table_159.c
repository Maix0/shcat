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
	v->a[15901] = anon_sym_LPAREN;
	v->a[15902] = actions(19);
	v->a[15903] = 1;
	v->a[15904] = anon_sym_LBRACE;
	v->a[15905] = actions(45);
	v->a[15906] = 1;
	v->a[15907] = sym_word;
	v->a[15908] = actions(53);
	v->a[15909] = 1;
	v->a[15910] = anon_sym_BANG;
	v->a[15911] = actions(59);
	v->a[15912] = 1;
	v->a[15913] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[15914] = actions(61);
	v->a[15915] = 1;
	v->a[15916] = anon_sym_DOLLAR;
	v->a[15917] = actions(63);
	v->a[15918] = 1;
	v->a[15919] = anon_sym_DQUOTE;
	small_parse_table_796(v);
}

void	small_parse_table_796(t_small_parse_table_array *v)
{
	v->a[15920] = actions(67);
	v->a[15921] = 1;
	v->a[15922] = anon_sym_DOLLAR_LBRACE;
	v->a[15923] = actions(69);
	v->a[15924] = 1;
	v->a[15925] = anon_sym_DOLLAR_LPAREN;
	v->a[15926] = actions(71);
	v->a[15927] = 1;
	v->a[15928] = anon_sym_BQUOTE;
	v->a[15929] = actions(73);
	v->a[15930] = 1;
	v->a[15931] = sym_file_descriptor;
	v->a[15932] = actions(75);
	v->a[15933] = 1;
	v->a[15934] = sym_variable_name;
	v->a[15935] = state(36);
	v->a[15936] = 1;
	v->a[15937] = aux_sym__terminated_statement;
	v->a[15938] = state(187);
	v->a[15939] = 1;
	small_parse_table_797(v);
}

void	small_parse_table_797(t_small_parse_table_array *v)
{
	v->a[15940] = sym_command_name;
	v->a[15941] = state(300);
	v->a[15942] = 1;
	v->a[15943] = sym_variable_assignment;
	v->a[15944] = state(647);
	v->a[15945] = 1;
	v->a[15946] = sym_concatenation;
	v->a[15947] = state(736);
	v->a[15948] = 1;
	v->a[15949] = aux_sym_command_repeat1;
	v->a[15950] = state(738);
	v->a[15951] = 1;
	v->a[15952] = sym_file_redirect;
	v->a[15953] = state(1455);
	v->a[15954] = 1;
	v->a[15955] = sym_pipeline;
	v->a[15956] = state(1460);
	v->a[15957] = 1;
	v->a[15958] = aux_sym_redirected_statement_repeat2;
	v->a[15959] = state(2269);
	small_parse_table_798(v);
}

void	small_parse_table_798(t_small_parse_table_array *v)
{
	v->a[15960] = 1;
	v->a[15961] = sym__statement_not_pipeline;
	v->a[15962] = actions(11);
	v->a[15963] = 2;
	v->a[15964] = anon_sym_while;
	v->a[15965] = anon_sym_until;
	v->a[15966] = actions(57);
	v->a[15967] = 2;
	v->a[15968] = anon_sym_LT_AMP_DASH;
	v->a[15969] = anon_sym_GT_AMP_DASH;
	v->a[15970] = actions(65);
	v->a[15971] = 2;
	v->a[15972] = sym_raw_string;
	v->a[15973] = sym_number;
	v->a[15974] = state(394);
	v->a[15975] = 5;
	v->a[15976] = sym_arithmetic_expansion;
	v->a[15977] = sym_string;
	v->a[15978] = sym_simple_expansion;
	v->a[15979] = sym_expansion;
	small_parse_table_799(v);
}

void	small_parse_table_799(t_small_parse_table_array *v)
{
	v->a[15980] = sym_command_substitution;
	v->a[15981] = actions(55);
	v->a[15982] = 8;
	v->a[15983] = anon_sym_LT;
	v->a[15984] = anon_sym_GT;
	v->a[15985] = anon_sym_GT_GT;
	v->a[15986] = anon_sym_AMP_GT;
	v->a[15987] = anon_sym_AMP_GT_GT;
	v->a[15988] = anon_sym_LT_AMP;
	v->a[15989] = anon_sym_GT_AMP;
	v->a[15990] = anon_sym_GT_PIPE;
	v->a[15991] = state(1359);
	v->a[15992] = 12;
	v->a[15993] = sym_redirected_statement;
	v->a[15994] = sym_for_statement;
	v->a[15995] = sym_while_statement;
	v->a[15996] = sym_if_statement;
	v->a[15997] = sym_case_statement;
	v->a[15998] = sym_function_definition;
	v->a[15999] = sym_compound_statement;
	small_parse_table_800(v);
}

/* EOF small_parse_table_159.c */
