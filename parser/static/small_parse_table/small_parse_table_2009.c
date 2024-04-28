/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2009.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10045(t_small_parse_table_array *v)
{
	v->a[200900] = sym_concatenation;
	v->a[200901] = actions(2630);
	v->a[200902] = 2;
	v->a[200903] = anon_sym_LPAREN_LPAREN;
	v->a[200904] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[200905] = actions(2658);
	v->a[200906] = 2;
	v->a[200907] = anon_sym_LT_LPAREN;
	v->a[200908] = anon_sym_GT_LPAREN;
	v->a[200909] = actions(9168);
	v->a[200910] = 2;
	v->a[200911] = sym_raw_string;
	v->a[200912] = sym_ansi_c_string;
	v->a[200913] = state(2199);
	v->a[200914] = 9;
	v->a[200915] = sym_arithmetic_expansion;
	v->a[200916] = sym_brace_expression;
	v->a[200917] = sym_string;
	v->a[200918] = sym_translated_string;
	v->a[200919] = sym_number;
	small_parse_table_10046(v);
}

void	small_parse_table_10046(t_small_parse_table_array *v)
{
	v->a[200920] = sym_simple_expansion;
	v->a[200921] = sym_expansion;
	v->a[200922] = sym_command_substitution;
	v->a[200923] = sym_process_substitution;
	v->a[200924] = 20;
	v->a[200925] = actions(71);
	v->a[200926] = 1;
	v->a[200927] = sym_comment;
	v->a[200928] = actions(8474);
	v->a[200929] = 1;
	v->a[200930] = anon_sym_DOLLAR_LBRACK;
	v->a[200931] = actions(8476);
	v->a[200932] = 1;
	v->a[200933] = anon_sym_DOLLAR;
	v->a[200934] = actions(8478);
	v->a[200935] = 1;
	v->a[200936] = sym__special_character;
	v->a[200937] = actions(8480);
	v->a[200938] = 1;
	v->a[200939] = anon_sym_DQUOTE;
	small_parse_table_10047(v);
}

void	small_parse_table_10047(t_small_parse_table_array *v)
{
	v->a[200940] = actions(8484);
	v->a[200941] = 1;
	v->a[200942] = aux_sym_number_token1;
	v->a[200943] = actions(8486);
	v->a[200944] = 1;
	v->a[200945] = aux_sym_number_token2;
	v->a[200946] = actions(8488);
	v->a[200947] = 1;
	v->a[200948] = anon_sym_DOLLAR_LBRACE;
	v->a[200949] = actions(8490);
	v->a[200950] = 1;
	v->a[200951] = anon_sym_DOLLAR_LPAREN;
	v->a[200952] = actions(8492);
	v->a[200953] = 1;
	v->a[200954] = anon_sym_BQUOTE;
	v->a[200955] = actions(8494);
	v->a[200956] = 1;
	v->a[200957] = anon_sym_DOLLAR_BQUOTE;
	v->a[200958] = actions(8504);
	v->a[200959] = 1;
	small_parse_table_10048(v);
}

void	small_parse_table_10048(t_small_parse_table_array *v)
{
	v->a[200960] = sym__brace_start;
	v->a[200961] = actions(9174);
	v->a[200962] = 1;
	v->a[200963] = sym_word;
	v->a[200964] = actions(9178);
	v->a[200965] = 1;
	v->a[200966] = sym_test_operator;
	v->a[200967] = state(1801);
	v->a[200968] = 1;
	v->a[200969] = aux_sym__literal_repeat1;
	v->a[200970] = actions(8470);
	v->a[200971] = 2;
	v->a[200972] = anon_sym_LPAREN_LPAREN;
	v->a[200973] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[200974] = actions(8496);
	v->a[200975] = 2;
	v->a[200976] = anon_sym_LT_LPAREN;
	v->a[200977] = anon_sym_GT_LPAREN;
	v->a[200978] = actions(9176);
	v->a[200979] = 2;
	small_parse_table_10049(v);
}

void	small_parse_table_10049(t_small_parse_table_array *v)
{
	v->a[200980] = sym_raw_string;
	v->a[200981] = sym_ansi_c_string;
	v->a[200982] = state(654);
	v->a[200983] = 2;
	v->a[200984] = sym_concatenation;
	v->a[200985] = aux_sym_for_statement_repeat1;
	v->a[200986] = state(1399);
	v->a[200987] = 9;
	v->a[200988] = sym_arithmetic_expansion;
	v->a[200989] = sym_brace_expression;
	v->a[200990] = sym_string;
	v->a[200991] = sym_translated_string;
	v->a[200992] = sym_number;
	v->a[200993] = sym_simple_expansion;
	v->a[200994] = sym_expansion;
	v->a[200995] = sym_command_substitution;
	v->a[200996] = sym_process_substitution;
	v->a[200997] = 20;
	v->a[200998] = actions(71);
	v->a[200999] = 1;
	small_parse_table_10050(v);
}

/* EOF small_parse_table_2009.c */
