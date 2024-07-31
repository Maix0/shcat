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
	v->a[15900] = anon_sym_GT_PIPE;
	v->a[15901] = anon_sym_LT_GT;
	v->a[15902] = state(1151);
	v->a[15903] = 7;
	v->a[15904] = sym_for_statement;
	v->a[15905] = sym_while_statement;
	v->a[15906] = sym_if_statement;
	v->a[15907] = sym_compound_statement;
	v->a[15908] = sym_subshell;
	v->a[15909] = sym_command;
	v->a[15910] = sym__variable_assignments;
	v->a[15911] = 23;
	v->a[15912] = actions(3);
	v->a[15913] = 1;
	v->a[15914] = sym_comment;
	v->a[15915] = actions(309);
	v->a[15916] = 1;
	v->a[15917] = anon_sym_for;
	v->a[15918] = actions(313);
	v->a[15919] = 1;
	small_parse_table_796(v);
}

void	small_parse_table_796(t_small_parse_table_array *v)
{
	v->a[15920] = anon_sym_if;
	v->a[15921] = actions(317);
	v->a[15922] = 1;
	v->a[15923] = anon_sym_LPAREN;
	v->a[15924] = actions(319);
	v->a[15925] = 1;
	v->a[15926] = anon_sym_LBRACE;
	v->a[15927] = actions(325);
	v->a[15928] = 1;
	v->a[15929] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[15930] = actions(327);
	v->a[15931] = 1;
	v->a[15932] = anon_sym_DOLLAR;
	v->a[15933] = actions(329);
	v->a[15934] = 1;
	v->a[15935] = anon_sym_DQUOTE;
	v->a[15936] = actions(333);
	v->a[15937] = 1;
	v->a[15938] = anon_sym_DOLLAR_LBRACE;
	v->a[15939] = actions(335);
	small_parse_table_797(v);
}

void	small_parse_table_797(t_small_parse_table_array *v)
{
	v->a[15940] = 1;
	v->a[15941] = anon_sym_DOLLAR_LPAREN;
	v->a[15942] = actions(337);
	v->a[15943] = 1;
	v->a[15944] = anon_sym_BQUOTE;
	v->a[15945] = actions(341);
	v->a[15946] = 1;
	v->a[15947] = sym_variable_name;
	v->a[15948] = state(342);
	v->a[15949] = 1;
	v->a[15950] = sym_command_name;
	v->a[15951] = state(489);
	v->a[15952] = 1;
	v->a[15953] = aux_sym_command_repeat1;
	v->a[15954] = state(717);
	v->a[15955] = 1;
	v->a[15956] = sym_file_redirect;
	v->a[15957] = state(732);
	v->a[15958] = 1;
	v->a[15959] = sym_concatenation;
	small_parse_table_798(v);
}

void	small_parse_table_798(t_small_parse_table_array *v)
{
	v->a[15960] = state(963);
	v->a[15961] = 1;
	v->a[15962] = sym_variable_assignment;
	v->a[15963] = state(1241);
	v->a[15964] = 1;
	v->a[15965] = aux_sym_redirected_statement_repeat2;
	v->a[15966] = actions(311);
	v->a[15967] = 2;
	v->a[15968] = anon_sym_while;
	v->a[15969] = anon_sym_until;
	v->a[15970] = actions(331);
	v->a[15971] = 3;
	v->a[15972] = sym_raw_string;
	v->a[15973] = sym_number;
	v->a[15974] = sym_word;
	v->a[15975] = state(635);
	v->a[15976] = 5;
	v->a[15977] = sym_arithmetic_expansion;
	v->a[15978] = sym_string;
	v->a[15979] = sym_simple_expansion;
	small_parse_table_799(v);
}

void	small_parse_table_799(t_small_parse_table_array *v)
{
	v->a[15980] = sym_expansion;
	v->a[15981] = sym_command_substitution;
	v->a[15982] = actions(323);
	v->a[15983] = 7;
	v->a[15984] = anon_sym_LT;
	v->a[15985] = anon_sym_GT;
	v->a[15986] = anon_sym_GT_GT;
	v->a[15987] = anon_sym_LT_AMP;
	v->a[15988] = anon_sym_GT_AMP;
	v->a[15989] = anon_sym_GT_PIPE;
	v->a[15990] = anon_sym_LT_GT;
	v->a[15991] = state(1355);
	v->a[15992] = 7;
	v->a[15993] = sym_for_statement;
	v->a[15994] = sym_while_statement;
	v->a[15995] = sym_if_statement;
	v->a[15996] = sym_compound_statement;
	v->a[15997] = sym_subshell;
	v->a[15998] = sym_command;
	v->a[15999] = sym__variable_assignments;
	small_parse_table_800(v);
}

/* EOF small_parse_table_159.c */
