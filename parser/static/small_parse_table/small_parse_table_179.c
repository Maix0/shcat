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
	v->a[17900] = 1;
	v->a[17901] = anon_sym_DOLLAR_LBRACE;
	v->a[17902] = actions(65);
	v->a[17903] = 1;
	v->a[17904] = anon_sym_DOLLAR_LPAREN;
	v->a[17905] = actions(67);
	v->a[17906] = 1;
	v->a[17907] = anon_sym_BQUOTE;
	v->a[17908] = actions(219);
	v->a[17909] = 1;
	v->a[17910] = sym_file_descriptor;
	v->a[17911] = actions(359);
	v->a[17912] = 1;
	v->a[17913] = sym_variable_name;
	v->a[17914] = state(173);
	v->a[17915] = 1;
	v->a[17916] = sym_command_name;
	v->a[17917] = state(603);
	v->a[17918] = 1;
	v->a[17919] = sym_concatenation;
	small_parse_table_896(v);
}

void	small_parse_table_896(t_small_parse_table_array *v)
{
	v->a[17920] = state(644);
	v->a[17921] = 1;
	v->a[17922] = sym_file_redirect;
	v->a[17923] = state(673);
	v->a[17924] = 1;
	v->a[17925] = aux_sym_command_repeat1;
	v->a[17926] = state(1127);
	v->a[17927] = 1;
	v->a[17928] = sym_variable_assignment;
	v->a[17929] = state(1180);
	v->a[17930] = 1;
	v->a[17931] = aux_sym_redirected_statement_repeat2;
	v->a[17932] = actions(11);
	v->a[17933] = 2;
	v->a[17934] = anon_sym_while;
	v->a[17935] = anon_sym_until;
	v->a[17936] = actions(217);
	v->a[17937] = 3;
	v->a[17938] = sym_raw_string;
	v->a[17939] = sym_number;
	small_parse_table_897(v);
}

void	small_parse_table_897(t_small_parse_table_array *v)
{
	v->a[17940] = sym_word;
	v->a[17941] = state(362);
	v->a[17942] = 5;
	v->a[17943] = sym_arithmetic_expansion;
	v->a[17944] = sym_string;
	v->a[17945] = sym_simple_expansion;
	v->a[17946] = sym_expansion;
	v->a[17947] = sym_command_substitution;
	v->a[17948] = actions(215);
	v->a[17949] = 7;
	v->a[17950] = anon_sym_LT;
	v->a[17951] = anon_sym_GT;
	v->a[17952] = anon_sym_GT_GT;
	v->a[17953] = anon_sym_LT_AMP;
	v->a[17954] = anon_sym_GT_AMP;
	v->a[17955] = anon_sym_GT_PIPE;
	v->a[17956] = anon_sym_LT_GT;
	v->a[17957] = state(1115);
	v->a[17958] = 7;
	v->a[17959] = sym_for_statement;
	small_parse_table_898(v);
}

void	small_parse_table_898(t_small_parse_table_array *v)
{
	v->a[17960] = sym_while_statement;
	v->a[17961] = sym_if_statement;
	v->a[17962] = sym_compound_statement;
	v->a[17963] = sym_subshell;
	v->a[17964] = sym_command;
	v->a[17965] = sym__variable_assignments;
	v->a[17966] = 24;
	v->a[17967] = actions(3);
	v->a[17968] = 1;
	v->a[17969] = sym_comment;
	v->a[17970] = actions(9);
	v->a[17971] = 1;
	v->a[17972] = anon_sym_for;
	v->a[17973] = actions(13);
	v->a[17974] = 1;
	v->a[17975] = anon_sym_if;
	v->a[17976] = actions(17);
	v->a[17977] = 1;
	v->a[17978] = anon_sym_LPAREN;
	v->a[17979] = actions(19);
	small_parse_table_899(v);
}

void	small_parse_table_899(t_small_parse_table_array *v)
{
	v->a[17980] = 1;
	v->a[17981] = anon_sym_LBRACE;
	v->a[17982] = actions(25);
	v->a[17983] = 1;
	v->a[17984] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[17985] = actions(27);
	v->a[17986] = 1;
	v->a[17987] = anon_sym_DOLLAR;
	v->a[17988] = actions(29);
	v->a[17989] = 1;
	v->a[17990] = anon_sym_DQUOTE;
	v->a[17991] = actions(33);
	v->a[17992] = 1;
	v->a[17993] = anon_sym_DOLLAR_LBRACE;
	v->a[17994] = actions(35);
	v->a[17995] = 1;
	v->a[17996] = anon_sym_DOLLAR_LPAREN;
	v->a[17997] = actions(37);
	v->a[17998] = 1;
	v->a[17999] = anon_sym_BQUOTE;
	small_parse_table_900(v);
}

/* EOF small_parse_table_179.c */
