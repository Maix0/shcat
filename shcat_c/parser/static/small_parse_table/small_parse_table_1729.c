/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1729.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_8645(t_small_parse_table_array *v)
{
	v->a[172900] = anon_sym_DOLLAR_LPAREN;
	v->a[172901] = actions(6508);
	v->a[172902] = 1;
	v->a[172903] = sym_test_operator;
	v->a[172904] = actions(6510);
	v->a[172905] = 1;
	v->a[172906] = sym_extglob_pattern;
	v->a[172907] = actions(6512);
	v->a[172908] = 1;
	v->a[172909] = sym__brace_start;
	v->a[172910] = actions(7226);
	v->a[172911] = 1;
	v->a[172912] = anon_sym_DOLLAR_LBRACK;
	v->a[172913] = actions(7228);
	v->a[172914] = 1;
	v->a[172915] = sym__special_character;
	v->a[172916] = actions(7230);
	v->a[172917] = 1;
	v->a[172918] = anon_sym_DQUOTE;
	v->a[172919] = actions(7234);
	small_parse_table_8646(v);
}

void	small_parse_table_8646(t_small_parse_table_array *v)
{
	v->a[172920] = 1;
	v->a[172921] = anon_sym_DOLLAR_LBRACE;
	v->a[172922] = actions(7236);
	v->a[172923] = 1;
	v->a[172924] = anon_sym_BQUOTE;
	v->a[172925] = actions(7238);
	v->a[172926] = 1;
	v->a[172927] = anon_sym_DOLLAR_BQUOTE;
	v->a[172928] = state(6426);
	v->a[172929] = 1;
	v->a[172930] = aux_sym__literal_repeat1;
	v->a[172931] = state(6851);
	v->a[172932] = 1;
	v->a[172933] = sym_last_case_item;
	v->a[172934] = actions(7224);
	v->a[172935] = 2;
	v->a[172936] = anon_sym_LPAREN_LPAREN;
	v->a[172937] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[172938] = actions(7232);
	v->a[172939] = 2;
	small_parse_table_8647(v);
}

void	small_parse_table_8647(t_small_parse_table_array *v)
{
	v->a[172940] = sym_raw_string;
	v->a[172941] = sym_ansi_c_string;
	v->a[172942] = actions(7240);
	v->a[172943] = 2;
	v->a[172944] = anon_sym_LT_LPAREN;
	v->a[172945] = anon_sym_GT_LPAREN;
	v->a[172946] = state(3477);
	v->a[172947] = 2;
	v->a[172948] = sym_case_item;
	v->a[172949] = aux_sym_case_statement_repeat1;
	v->a[172950] = state(6695);
	v->a[172951] = 2;
	v->a[172952] = sym_concatenation;
	v->a[172953] = sym__extglob_blob;
	v->a[172954] = state(6303);
	v->a[172955] = 9;
	v->a[172956] = sym_arithmetic_expansion;
	v->a[172957] = sym_brace_expression;
	v->a[172958] = sym_string;
	v->a[172959] = sym_translated_string;
	small_parse_table_8648(v);
}

void	small_parse_table_8648(t_small_parse_table_array *v)
{
	v->a[172960] = sym_number;
	v->a[172961] = sym_simple_expansion;
	v->a[172962] = sym_expansion;
	v->a[172963] = sym_command_substitution;
	v->a[172964] = sym_process_substitution;
	v->a[172965] = 3;
	v->a[172966] = actions(71);
	v->a[172967] = 1;
	v->a[172968] = sym_comment;
	v->a[172969] = actions(1308);
	v->a[172970] = 14;
	v->a[172971] = anon_sym_EQ;
	v->a[172972] = anon_sym_PIPE;
	v->a[172973] = anon_sym_CARET;
	v->a[172974] = anon_sym_AMP;
	v->a[172975] = anon_sym_LT;
	v->a[172976] = anon_sym_GT;
	v->a[172977] = anon_sym_LT_LT;
	v->a[172978] = anon_sym_GT_GT;
	v->a[172979] = anon_sym_PLUS;
	small_parse_table_8649(v);
}

void	small_parse_table_8649(t_small_parse_table_array *v)
{
	v->a[172980] = anon_sym_DASH;
	v->a[172981] = anon_sym_STAR;
	v->a[172982] = anon_sym_SLASH;
	v->a[172983] = anon_sym_PERCENT;
	v->a[172984] = anon_sym_STAR_STAR;
	v->a[172985] = actions(1310);
	v->a[172986] = 22;
	v->a[172987] = anon_sym_PLUS_PLUS;
	v->a[172988] = anon_sym_DASH_DASH;
	v->a[172989] = anon_sym_PLUS_EQ;
	v->a[172990] = anon_sym_DASH_EQ;
	v->a[172991] = anon_sym_STAR_EQ;
	v->a[172992] = anon_sym_SLASH_EQ;
	v->a[172993] = anon_sym_PERCENT_EQ;
	v->a[172994] = anon_sym_STAR_STAR_EQ;
	v->a[172995] = anon_sym_LT_LT_EQ;
	v->a[172996] = anon_sym_GT_GT_EQ;
	v->a[172997] = anon_sym_AMP_EQ;
	v->a[172998] = anon_sym_CARET_EQ;
	v->a[172999] = anon_sym_PIPE_EQ;
	small_parse_table_8650(v);
}

/* EOF small_parse_table_1729.c */
