/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_709.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3545(t_small_parse_table_array *v)
{
	v->a[70900] = sym_string;
	v->a[70901] = sym_simple_expansion;
	v->a[70902] = sym_expansion;
	v->a[70903] = sym_command_substitution;
	v->a[70904] = 10;
	v->a[70905] = actions(3);
	v->a[70906] = 1;
	v->a[70907] = sym_comment;
	v->a[70908] = actions(668);
	v->a[70909] = 1;
	v->a[70910] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[70911] = actions(670);
	v->a[70912] = 1;
	v->a[70913] = anon_sym_DOLLAR;
	v->a[70914] = actions(672);
	v->a[70915] = 1;
	v->a[70916] = anon_sym_DQUOTE;
	v->a[70917] = actions(674);
	v->a[70918] = 1;
	v->a[70919] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3546(v);
}

void	small_parse_table_3546(t_small_parse_table_array *v)
{
	v->a[70920] = actions(676);
	v->a[70921] = 1;
	v->a[70922] = anon_sym_DOLLAR_LPAREN;
	v->a[70923] = actions(678);
	v->a[70924] = 1;
	v->a[70925] = anon_sym_BQUOTE;
	v->a[70926] = state(229);
	v->a[70927] = 2;
	v->a[70928] = sym_concatenation;
	v->a[70929] = aux_sym_for_statement_repeat1;
	v->a[70930] = actions(666);
	v->a[70931] = 3;
	v->a[70932] = sym_raw_string;
	v->a[70933] = sym_number;
	v->a[70934] = sym_word;
	v->a[70935] = state(463);
	v->a[70936] = 5;
	v->a[70937] = sym_arithmetic_expansion;
	v->a[70938] = sym_string;
	v->a[70939] = sym_simple_expansion;
	small_parse_table_3547(v);
}

void	small_parse_table_3547(t_small_parse_table_array *v)
{
	v->a[70940] = sym_expansion;
	v->a[70941] = sym_command_substitution;
	v->a[70942] = 3;
	v->a[70943] = actions(664);
	v->a[70944] = 1;
	v->a[70945] = sym_comment;
	v->a[70946] = actions(660);
	v->a[70947] = 4;
	v->a[70948] = anon_sym_PIPE;
	v->a[70949] = anon_sym_LT;
	v->a[70950] = anon_sym_GT;
	v->a[70951] = anon_sym_LT_LT;
	v->a[70952] = actions(662);
	v->a[70953] = 12;
	v->a[70954] = sym_file_descriptor;
	v->a[70955] = sym__concat;
	v->a[70956] = sym_variable_name;
	v->a[70957] = anon_sym_AMP_AMP;
	v->a[70958] = anon_sym_PIPE_PIPE;
	v->a[70959] = anon_sym_GT_GT;
	small_parse_table_3548(v);
}

void	small_parse_table_3548(t_small_parse_table_array *v)
{
	v->a[70960] = anon_sym_LT_AMP;
	v->a[70961] = anon_sym_GT_AMP;
	v->a[70962] = anon_sym_GT_PIPE;
	v->a[70963] = anon_sym_LT_GT;
	v->a[70964] = anon_sym_LT_LT_DASH;
	v->a[70965] = aux_sym_concatenation_token1;
	v->a[70966] = 3;
	v->a[70967] = actions(664);
	v->a[70968] = 1;
	v->a[70969] = sym_comment;
	v->a[70970] = actions(751);
	v->a[70971] = 4;
	v->a[70972] = anon_sym_PIPE;
	v->a[70973] = anon_sym_LT;
	v->a[70974] = anon_sym_GT;
	v->a[70975] = anon_sym_LT_LT;
	v->a[70976] = actions(753);
	v->a[70977] = 12;
	v->a[70978] = sym_file_descriptor;
	v->a[70979] = sym__concat;
	small_parse_table_3549(v);
}

void	small_parse_table_3549(t_small_parse_table_array *v)
{
	v->a[70980] = sym_variable_name;
	v->a[70981] = anon_sym_AMP_AMP;
	v->a[70982] = anon_sym_PIPE_PIPE;
	v->a[70983] = anon_sym_GT_GT;
	v->a[70984] = anon_sym_LT_AMP;
	v->a[70985] = anon_sym_GT_AMP;
	v->a[70986] = anon_sym_GT_PIPE;
	v->a[70987] = anon_sym_LT_GT;
	v->a[70988] = anon_sym_LT_LT_DASH;
	v->a[70989] = aux_sym_concatenation_token1;
	v->a[70990] = 10;
	v->a[70991] = actions(3);
	v->a[70992] = 1;
	v->a[70993] = sym_comment;
	v->a[70994] = actions(2462);
	v->a[70995] = 1;
	v->a[70996] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[70997] = actions(2466);
	v->a[70998] = 1;
	v->a[70999] = anon_sym_DQUOTE;
	small_parse_table_3550(v);
}

/* EOF small_parse_table_709.c */
