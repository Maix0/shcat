/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1949.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9745(t_small_parse_table_array *v)
{
	v->a[194900] = 1;
	v->a[194901] = aux_sym__literal_repeat1;
	v->a[194902] = actions(8567);
	v->a[194903] = 2;
	v->a[194904] = anon_sym_LPAREN_LPAREN;
	v->a[194905] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[194906] = actions(8579);
	v->a[194907] = 2;
	v->a[194908] = sym_raw_string;
	v->a[194909] = sym_ansi_c_string;
	v->a[194910] = actions(8593);
	v->a[194911] = 2;
	v->a[194912] = anon_sym_LT_LPAREN;
	v->a[194913] = anon_sym_GT_LPAREN;
	v->a[194914] = state(3604);
	v->a[194915] = 2;
	v->a[194916] = sym_concatenation;
	v->a[194917] = aux_sym_for_statement_repeat1;
	v->a[194918] = state(5045);
	v->a[194919] = 9;
	small_parse_table_9746(v);
}

void	small_parse_table_9746(t_small_parse_table_array *v)
{
	v->a[194920] = sym_arithmetic_expansion;
	v->a[194921] = sym_brace_expression;
	v->a[194922] = sym_string;
	v->a[194923] = sym_translated_string;
	v->a[194924] = sym_number;
	v->a[194925] = sym_simple_expansion;
	v->a[194926] = sym_expansion;
	v->a[194927] = sym_command_substitution;
	v->a[194928] = sym_process_substitution;
	v->a[194929] = 21;
	v->a[194930] = actions(71);
	v->a[194931] = 1;
	v->a[194932] = sym_comment;
	v->a[194933] = actions(8565);
	v->a[194934] = 1;
	v->a[194935] = sym_word;
	v->a[194936] = actions(8571);
	v->a[194937] = 1;
	v->a[194938] = anon_sym_DOLLAR_LBRACK;
	v->a[194939] = actions(8573);
	small_parse_table_9747(v);
}

void	small_parse_table_9747(t_small_parse_table_array *v)
{
	v->a[194940] = 1;
	v->a[194941] = anon_sym_DOLLAR;
	v->a[194942] = actions(8575);
	v->a[194943] = 1;
	v->a[194944] = sym__special_character;
	v->a[194945] = actions(8577);
	v->a[194946] = 1;
	v->a[194947] = anon_sym_DQUOTE;
	v->a[194948] = actions(8581);
	v->a[194949] = 1;
	v->a[194950] = aux_sym_number_token1;
	v->a[194951] = actions(8583);
	v->a[194952] = 1;
	v->a[194953] = aux_sym_number_token2;
	v->a[194954] = actions(8585);
	v->a[194955] = 1;
	v->a[194956] = anon_sym_DOLLAR_LBRACE;
	v->a[194957] = actions(8587);
	v->a[194958] = 1;
	v->a[194959] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_9748(v);
}

void	small_parse_table_9748(t_small_parse_table_array *v)
{
	v->a[194960] = actions(8589);
	v->a[194961] = 1;
	v->a[194962] = anon_sym_BQUOTE;
	v->a[194963] = actions(8591);
	v->a[194964] = 1;
	v->a[194965] = anon_sym_DOLLAR_BQUOTE;
	v->a[194966] = actions(8595);
	v->a[194967] = 1;
	v->a[194968] = sym_test_operator;
	v->a[194969] = actions(8597);
	v->a[194970] = 1;
	v->a[194971] = sym__brace_start;
	v->a[194972] = actions(8728);
	v->a[194973] = 1;
	v->a[194974] = anon_sym_RPAREN;
	v->a[194975] = state(5365);
	v->a[194976] = 1;
	v->a[194977] = aux_sym__literal_repeat1;
	v->a[194978] = actions(8567);
	v->a[194979] = 2;
	small_parse_table_9749(v);
}

void	small_parse_table_9749(t_small_parse_table_array *v)
{
	v->a[194980] = anon_sym_LPAREN_LPAREN;
	v->a[194981] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[194982] = actions(8579);
	v->a[194983] = 2;
	v->a[194984] = sym_raw_string;
	v->a[194985] = sym_ansi_c_string;
	v->a[194986] = actions(8593);
	v->a[194987] = 2;
	v->a[194988] = anon_sym_LT_LPAREN;
	v->a[194989] = anon_sym_GT_LPAREN;
	v->a[194990] = state(3604);
	v->a[194991] = 2;
	v->a[194992] = sym_concatenation;
	v->a[194993] = aux_sym_for_statement_repeat1;
	v->a[194994] = state(5045);
	v->a[194995] = 9;
	v->a[194996] = sym_arithmetic_expansion;
	v->a[194997] = sym_brace_expression;
	v->a[194998] = sym_string;
	v->a[194999] = sym_translated_string;
	small_parse_table_9750(v);
}

/* EOF small_parse_table_1949.c */
