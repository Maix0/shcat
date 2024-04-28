/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1939.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9695(t_small_parse_table_array *v)
{
	v->a[193900] = actions(8671);
	v->a[193901] = 1;
	v->a[193902] = anon_sym_DOLLAR_LBRACE;
	v->a[193903] = actions(8674);
	v->a[193904] = 1;
	v->a[193905] = anon_sym_DOLLAR_LPAREN;
	v->a[193906] = actions(8677);
	v->a[193907] = 1;
	v->a[193908] = anon_sym_BQUOTE;
	v->a[193909] = actions(8680);
	v->a[193910] = 1;
	v->a[193911] = anon_sym_DOLLAR_BQUOTE;
	v->a[193912] = actions(8686);
	v->a[193913] = 1;
	v->a[193914] = sym_test_operator;
	v->a[193915] = actions(8689);
	v->a[193916] = 1;
	v->a[193917] = sym__brace_start;
	v->a[193918] = state(3571);
	v->a[193919] = 1;
	small_parse_table_9696(v);
}

void	small_parse_table_9696(t_small_parse_table_array *v)
{
	v->a[193920] = aux_sym__heredoc_command;
	v->a[193921] = state(5351);
	v->a[193922] = 1;
	v->a[193923] = aux_sym__literal_repeat1;
	v->a[193924] = state(5456);
	v->a[193925] = 1;
	v->a[193926] = sym_concatenation;
	v->a[193927] = actions(8648);
	v->a[193928] = 2;
	v->a[193929] = anon_sym_LPAREN_LPAREN;
	v->a[193930] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[193931] = actions(8683);
	v->a[193932] = 2;
	v->a[193933] = anon_sym_LT_LPAREN;
	v->a[193934] = anon_sym_GT_LPAREN;
	v->a[193935] = actions(8645);
	v->a[193936] = 3;
	v->a[193937] = sym_raw_string;
	v->a[193938] = sym_ansi_c_string;
	v->a[193939] = sym_word;
	small_parse_table_9697(v);
}

void	small_parse_table_9697(t_small_parse_table_array *v)
{
	v->a[193940] = state(5062);
	v->a[193941] = 9;
	v->a[193942] = sym_arithmetic_expansion;
	v->a[193943] = sym_brace_expression;
	v->a[193944] = sym_string;
	v->a[193945] = sym_translated_string;
	v->a[193946] = sym_number;
	v->a[193947] = sym_simple_expansion;
	v->a[193948] = sym_expansion;
	v->a[193949] = sym_command_substitution;
	v->a[193950] = sym_process_substitution;
	v->a[193951] = 8;
	v->a[193952] = actions(3);
	v->a[193953] = 1;
	v->a[193954] = sym_comment;
	v->a[193955] = actions(1235);
	v->a[193956] = 1;
	v->a[193957] = sym_file_descriptor;
	v->a[193958] = actions(8694);
	v->a[193959] = 1;
	small_parse_table_9698(v);
}

void	small_parse_table_9698(t_small_parse_table_array *v)
{
	v->a[193960] = anon_sym_DQUOTE;
	v->a[193961] = actions(8698);
	v->a[193962] = 1;
	v->a[193963] = sym_variable_name;
	v->a[193964] = state(5487);
	v->a[193965] = 1;
	v->a[193966] = sym_string;
	v->a[193967] = actions(8696);
	v->a[193968] = 2;
	v->a[193969] = aux_sym__simple_variable_name_token1;
	v->a[193970] = aux_sym__multiline_variable_name_token1;
	v->a[193971] = actions(8692);
	v->a[193972] = 9;
	v->a[193973] = anon_sym_DASH;
	v->a[193974] = anon_sym_STAR;
	v->a[193975] = anon_sym_BANG;
	v->a[193976] = anon_sym_QMARK;
	v->a[193977] = anon_sym_DOLLAR;
	v->a[193978] = anon_sym_POUND;
	v->a[193979] = anon_sym_AT2;
	small_parse_table_9699(v);
}

void	small_parse_table_9699(t_small_parse_table_array *v)
{
	v->a[193980] = anon_sym_0;
	v->a[193981] = anon_sym__;
	v->a[193982] = actions(1227);
	v->a[193983] = 17;
	v->a[193984] = anon_sym_PIPE_PIPE;
	v->a[193985] = anon_sym_AMP_AMP;
	v->a[193986] = anon_sym_PIPE;
	v->a[193987] = anon_sym_LT;
	v->a[193988] = anon_sym_GT;
	v->a[193989] = anon_sym_LT_LT;
	v->a[193990] = anon_sym_GT_GT;
	v->a[193991] = anon_sym_PIPE_AMP;
	v->a[193992] = anon_sym_RBRACK;
	v->a[193993] = anon_sym_AMP_GT;
	v->a[193994] = anon_sym_AMP_GT_GT;
	v->a[193995] = anon_sym_LT_AMP;
	v->a[193996] = anon_sym_GT_AMP;
	v->a[193997] = anon_sym_GT_PIPE;
	v->a[193998] = anon_sym_LT_AMP_DASH;
	v->a[193999] = anon_sym_GT_AMP_DASH;
	small_parse_table_9700(v);
}

/* EOF small_parse_table_1939.c */
