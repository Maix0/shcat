/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2019.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10095(t_small_parse_table_array *v)
{
	v->a[201900] = 1;
	v->a[201901] = anon_sym_BQUOTE;
	v->a[201902] = actions(9210);
	v->a[201903] = 1;
	v->a[201904] = anon_sym_DOLLAR_BQUOTE;
	v->a[201905] = actions(9216);
	v->a[201906] = 1;
	v->a[201907] = sym_regex;
	v->a[201908] = actions(9222);
	v->a[201909] = 1;
	v->a[201910] = sym_word;
	v->a[201911] = actions(9224);
	v->a[201912] = 1;
	v->a[201913] = sym__special_character;
	v->a[201914] = actions(9228);
	v->a[201915] = 1;
	v->a[201916] = sym_test_operator;
	v->a[201917] = state(1379);
	v->a[201918] = 1;
	v->a[201919] = aux_sym__literal_repeat1;
	small_parse_table_10096(v);
}

void	small_parse_table_10096(t_small_parse_table_array *v)
{
	v->a[201920] = state(1611);
	v->a[201921] = 1;
	v->a[201922] = sym_concatenation;
	v->a[201923] = actions(9196);
	v->a[201924] = 2;
	v->a[201925] = anon_sym_LPAREN_LPAREN;
	v->a[201926] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[201927] = actions(9212);
	v->a[201928] = 2;
	v->a[201929] = anon_sym_LT_LPAREN;
	v->a[201930] = anon_sym_GT_LPAREN;
	v->a[201931] = actions(9226);
	v->a[201932] = 2;
	v->a[201933] = sym_raw_string;
	v->a[201934] = sym_ansi_c_string;
	v->a[201935] = state(1124);
	v->a[201936] = 9;
	v->a[201937] = sym_arithmetic_expansion;
	v->a[201938] = sym_brace_expression;
	v->a[201939] = sym_string;
	small_parse_table_10097(v);
}

void	small_parse_table_10097(t_small_parse_table_array *v)
{
	v->a[201940] = sym_translated_string;
	v->a[201941] = sym_number;
	v->a[201942] = sym_simple_expansion;
	v->a[201943] = sym_expansion;
	v->a[201944] = sym_command_substitution;
	v->a[201945] = sym_process_substitution;
	v->a[201946] = 20;
	v->a[201947] = actions(71);
	v->a[201948] = 1;
	v->a[201949] = sym_comment;
	v->a[201950] = actions(3333);
	v->a[201951] = 1;
	v->a[201952] = sym_word;
	v->a[201953] = actions(3339);
	v->a[201954] = 1;
	v->a[201955] = anon_sym_DOLLAR;
	v->a[201956] = actions(3343);
	v->a[201957] = 1;
	v->a[201958] = aux_sym_number_token1;
	v->a[201959] = actions(3345);
	small_parse_table_10098(v);
}

void	small_parse_table_10098(t_small_parse_table_array *v)
{
	v->a[201960] = 1;
	v->a[201961] = aux_sym_number_token2;
	v->a[201962] = actions(3349);
	v->a[201963] = 1;
	v->a[201964] = anon_sym_DOLLAR_LPAREN;
	v->a[201965] = actions(3357);
	v->a[201966] = 1;
	v->a[201967] = sym_test_operator;
	v->a[201968] = actions(3359);
	v->a[201969] = 1;
	v->a[201970] = sym__brace_start;
	v->a[201971] = actions(9046);
	v->a[201972] = 1;
	v->a[201973] = anon_sym_DOLLAR_LBRACK;
	v->a[201974] = actions(9048);
	v->a[201975] = 1;
	v->a[201976] = sym__special_character;
	v->a[201977] = actions(9050);
	v->a[201978] = 1;
	v->a[201979] = anon_sym_DQUOTE;
	small_parse_table_10099(v);
}

void	small_parse_table_10099(t_small_parse_table_array *v)
{
	v->a[201980] = actions(9054);
	v->a[201981] = 1;
	v->a[201982] = anon_sym_DOLLAR_LBRACE;
	v->a[201983] = actions(9056);
	v->a[201984] = 1;
	v->a[201985] = anon_sym_BQUOTE;
	v->a[201986] = actions(9058);
	v->a[201987] = 1;
	v->a[201988] = anon_sym_DOLLAR_BQUOTE;
	v->a[201989] = state(2147);
	v->a[201990] = 1;
	v->a[201991] = aux_sym__literal_repeat1;
	v->a[201992] = actions(9044);
	v->a[201993] = 2;
	v->a[201994] = anon_sym_LPAREN_LPAREN;
	v->a[201995] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[201996] = actions(9052);
	v->a[201997] = 2;
	v->a[201998] = sym_raw_string;
	v->a[201999] = sym_ansi_c_string;
	small_parse_table_10100(v);
}

/* EOF small_parse_table_2019.c */
