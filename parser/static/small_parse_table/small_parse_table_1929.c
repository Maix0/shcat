/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1929.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9645(t_small_parse_table_array *v)
{
	v->a[192900] = sym_word;
	v->a[192901] = actions(2096);
	v->a[192902] = 22;
	v->a[192903] = sym_file_descriptor;
	v->a[192904] = sym_variable_name;
	v->a[192905] = sym_test_operator;
	v->a[192906] = sym__brace_start;
	v->a[192907] = anon_sym_LPAREN_LPAREN;
	v->a[192908] = anon_sym_GT_GT;
	v->a[192909] = anon_sym_AMP_GT_GT;
	v->a[192910] = anon_sym_GT_PIPE;
	v->a[192911] = anon_sym_LT_AMP_DASH;
	v->a[192912] = anon_sym_GT_AMP_DASH;
	v->a[192913] = anon_sym_LT_LT_LT;
	v->a[192914] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[192915] = anon_sym_DOLLAR_LBRACK;
	v->a[192916] = sym__special_character;
	v->a[192917] = anon_sym_DQUOTE;
	v->a[192918] = sym_raw_string;
	v->a[192919] = sym_ansi_c_string;
	small_parse_table_9646(v);
}

void	small_parse_table_9646(t_small_parse_table_array *v)
{
	v->a[192920] = anon_sym_DOLLAR_LBRACE;
	v->a[192921] = anon_sym_BQUOTE;
	v->a[192922] = anon_sym_DOLLAR_BQUOTE;
	v->a[192923] = anon_sym_LT_LPAREN;
	v->a[192924] = anon_sym_GT_LPAREN;
	v->a[192925] = 21;
	v->a[192926] = actions(71);
	v->a[192927] = 1;
	v->a[192928] = sym_comment;
	v->a[192929] = actions(8565);
	v->a[192930] = 1;
	v->a[192931] = sym_word;
	v->a[192932] = actions(8571);
	v->a[192933] = 1;
	v->a[192934] = anon_sym_DOLLAR_LBRACK;
	v->a[192935] = actions(8573);
	v->a[192936] = 1;
	v->a[192937] = anon_sym_DOLLAR;
	v->a[192938] = actions(8575);
	v->a[192939] = 1;
	small_parse_table_9647(v);
}

void	small_parse_table_9647(t_small_parse_table_array *v)
{
	v->a[192940] = sym__special_character;
	v->a[192941] = actions(8577);
	v->a[192942] = 1;
	v->a[192943] = anon_sym_DQUOTE;
	v->a[192944] = actions(8581);
	v->a[192945] = 1;
	v->a[192946] = aux_sym_number_token1;
	v->a[192947] = actions(8583);
	v->a[192948] = 1;
	v->a[192949] = aux_sym_number_token2;
	v->a[192950] = actions(8585);
	v->a[192951] = 1;
	v->a[192952] = anon_sym_DOLLAR_LBRACE;
	v->a[192953] = actions(8587);
	v->a[192954] = 1;
	v->a[192955] = anon_sym_DOLLAR_LPAREN;
	v->a[192956] = actions(8589);
	v->a[192957] = 1;
	v->a[192958] = anon_sym_BQUOTE;
	v->a[192959] = actions(8591);
	small_parse_table_9648(v);
}

void	small_parse_table_9648(t_small_parse_table_array *v)
{
	v->a[192960] = 1;
	v->a[192961] = anon_sym_DOLLAR_BQUOTE;
	v->a[192962] = actions(8595);
	v->a[192963] = 1;
	v->a[192964] = sym_test_operator;
	v->a[192965] = actions(8597);
	v->a[192966] = 1;
	v->a[192967] = sym__brace_start;
	v->a[192968] = actions(8617);
	v->a[192969] = 1;
	v->a[192970] = anon_sym_RPAREN;
	v->a[192971] = state(5365);
	v->a[192972] = 1;
	v->a[192973] = aux_sym__literal_repeat1;
	v->a[192974] = actions(8567);
	v->a[192975] = 2;
	v->a[192976] = anon_sym_LPAREN_LPAREN;
	v->a[192977] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[192978] = actions(8579);
	v->a[192979] = 2;
	small_parse_table_9649(v);
}

void	small_parse_table_9649(t_small_parse_table_array *v)
{
	v->a[192980] = sym_raw_string;
	v->a[192981] = sym_ansi_c_string;
	v->a[192982] = actions(8593);
	v->a[192983] = 2;
	v->a[192984] = anon_sym_LT_LPAREN;
	v->a[192985] = anon_sym_GT_LPAREN;
	v->a[192986] = state(3546);
	v->a[192987] = 2;
	v->a[192988] = sym_concatenation;
	v->a[192989] = aux_sym_for_statement_repeat1;
	v->a[192990] = state(5045);
	v->a[192991] = 9;
	v->a[192992] = sym_arithmetic_expansion;
	v->a[192993] = sym_brace_expression;
	v->a[192994] = sym_string;
	v->a[192995] = sym_translated_string;
	v->a[192996] = sym_number;
	v->a[192997] = sym_simple_expansion;
	v->a[192998] = sym_expansion;
	v->a[192999] = sym_command_substitution;
	small_parse_table_9650(v);
}

/* EOF small_parse_table_1929.c */
