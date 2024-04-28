/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1879.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9395(t_small_parse_table_array *v)
{
	v->a[187900] = 3;
	v->a[187901] = anon_sym_SEMI;
	v->a[187902] = anon_sym_AMP;
	v->a[187903] = anon_sym_SEMI_SEMI;
	v->a[187904] = state(4460);
	v->a[187905] = 9;
	v->a[187906] = sym_arithmetic_expansion;
	v->a[187907] = sym_brace_expression;
	v->a[187908] = sym_string;
	v->a[187909] = sym_translated_string;
	v->a[187910] = sym_number;
	v->a[187911] = sym_simple_expansion;
	v->a[187912] = sym_expansion;
	v->a[187913] = sym_command_substitution;
	v->a[187914] = sym_process_substitution;
	v->a[187915] = 5;
	v->a[187916] = actions(71);
	v->a[187917] = 1;
	v->a[187918] = sym_comment;
	v->a[187919] = state(3459);
	small_parse_table_9396(v);
}

void	small_parse_table_9396(t_small_parse_table_array *v)
{
	v->a[187920] = 1;
	v->a[187921] = aux_sym_concatenation_repeat1;
	v->a[187922] = actions(7751);
	v->a[187923] = 2;
	v->a[187924] = sym__concat;
	v->a[187925] = aux_sym_concatenation_token1;
	v->a[187926] = actions(1261);
	v->a[187927] = 11;
	v->a[187928] = anon_sym_LT;
	v->a[187929] = anon_sym_GT;
	v->a[187930] = anon_sym_AMP_GT;
	v->a[187931] = anon_sym_LT_AMP;
	v->a[187932] = anon_sym_GT_AMP;
	v->a[187933] = anon_sym_DOLLAR;
	v->a[187934] = aux_sym_number_token1;
	v->a[187935] = aux_sym_number_token2;
	v->a[187936] = anon_sym_DOLLAR_LPAREN;
	v->a[187937] = anon_sym_BQUOTE;
	v->a[187938] = sym_word;
	v->a[187939] = actions(1263);
	small_parse_table_9397(v);
}

void	small_parse_table_9397(t_small_parse_table_array *v)
{
	v->a[187940] = 21;
	v->a[187941] = sym_file_descriptor;
	v->a[187942] = sym_variable_name;
	v->a[187943] = sym_test_operator;
	v->a[187944] = sym__brace_start;
	v->a[187945] = anon_sym_LPAREN_LPAREN;
	v->a[187946] = anon_sym_GT_GT;
	v->a[187947] = anon_sym_AMP_GT_GT;
	v->a[187948] = anon_sym_GT_PIPE;
	v->a[187949] = anon_sym_LT_AMP_DASH;
	v->a[187950] = anon_sym_GT_AMP_DASH;
	v->a[187951] = anon_sym_LT_LT_LT;
	v->a[187952] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[187953] = anon_sym_DOLLAR_LBRACK;
	v->a[187954] = sym__special_character;
	v->a[187955] = anon_sym_DQUOTE;
	v->a[187956] = sym_raw_string;
	v->a[187957] = sym_ansi_c_string;
	v->a[187958] = anon_sym_DOLLAR_LBRACE;
	v->a[187959] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_9398(v);
}

void	small_parse_table_9398(t_small_parse_table_array *v)
{
	v->a[187960] = anon_sym_LT_LPAREN;
	v->a[187961] = anon_sym_GT_LPAREN;
	v->a[187962] = 23;
	v->a[187963] = actions(71);
	v->a[187964] = 1;
	v->a[187965] = sym_comment;
	v->a[187966] = actions(7839);
	v->a[187967] = 1;
	v->a[187968] = sym_word;
	v->a[187969] = actions(7845);
	v->a[187970] = 1;
	v->a[187971] = anon_sym_LPAREN;
	v->a[187972] = actions(7848);
	v->a[187973] = 1;
	v->a[187974] = anon_sym_DOLLAR_LBRACK;
	v->a[187975] = actions(7851);
	v->a[187976] = 1;
	v->a[187977] = anon_sym_DOLLAR;
	v->a[187978] = actions(7854);
	v->a[187979] = 1;
	small_parse_table_9399(v);
}

void	small_parse_table_9399(t_small_parse_table_array *v)
{
	v->a[187980] = sym__special_character;
	v->a[187981] = actions(7857);
	v->a[187982] = 1;
	v->a[187983] = anon_sym_DQUOTE;
	v->a[187984] = actions(7863);
	v->a[187985] = 1;
	v->a[187986] = aux_sym_number_token1;
	v->a[187987] = actions(7866);
	v->a[187988] = 1;
	v->a[187989] = aux_sym_number_token2;
	v->a[187990] = actions(7869);
	v->a[187991] = 1;
	v->a[187992] = anon_sym_DOLLAR_LBRACE;
	v->a[187993] = actions(7872);
	v->a[187994] = 1;
	v->a[187995] = anon_sym_DOLLAR_LPAREN;
	v->a[187996] = actions(7875);
	v->a[187997] = 1;
	v->a[187998] = anon_sym_BQUOTE;
	v->a[187999] = actions(7878);
	small_parse_table_9400(v);
}

/* EOF small_parse_table_1879.c */
