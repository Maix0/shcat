/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2649.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13245(t_small_parse_table_array *v)
{
	v->a[264900] = state(3532);
	v->a[264901] = 1;
	v->a[264902] = sym_subscript;
	v->a[264903] = state(6428);
	v->a[264904] = 1;
	v->a[264905] = aux_sym__expansion_body_repeat1;
	v->a[264906] = state(6472);
	v->a[264907] = 1;
	v->a[264908] = sym_command_substitution;
	v->a[264909] = state(7137);
	v->a[264910] = 1;
	v->a[264911] = sym__expansion_body;
	v->a[264912] = actions(11762);
	v->a[264913] = 2;
	v->a[264914] = anon_sym_POUND2;
	v->a[264915] = anon_sym_EQ2;
	v->a[264916] = actions(8050);
	v->a[264917] = 3;
	v->a[264918] = sym__external_expansion_sym_hash;
	v->a[264919] = sym__external_expansion_sym_bang;
	small_parse_table_13246(v);
}

void	small_parse_table_13246(t_small_parse_table_array *v)
{
	v->a[264920] = sym__external_expansion_sym_equal;
	v->a[264921] = actions(11754);
	v->a[264922] = 4;
	v->a[264923] = anon_sym_DASH;
	v->a[264924] = anon_sym_STAR;
	v->a[264925] = anon_sym_QMARK;
	v->a[264926] = anon_sym_AT2;
	v->a[264927] = actions(11756);
	v->a[264928] = 5;
	v->a[264929] = anon_sym_BANG;
	v->a[264930] = anon_sym_DOLLAR;
	v->a[264931] = anon_sym_POUND;
	v->a[264932] = anon_sym_0;
	v->a[264933] = anon_sym__;
	v->a[264934] = 3;
	v->a[264935] = actions(3);
	v->a[264936] = 1;
	v->a[264937] = sym_comment;
	v->a[264938] = actions(1334);
	v->a[264939] = 4;
	small_parse_table_13247(v);
}

void	small_parse_table_13247(t_small_parse_table_array *v)
{
	v->a[264940] = sym__concat;
	v->a[264941] = sym_test_operator;
	v->a[264942] = sym__brace_start;
	v->a[264943] = aux_sym_heredoc_redirect_token1;
	v->a[264944] = actions(1332);
	v->a[264945] = 21;
	v->a[264946] = anon_sym_LPAREN_LPAREN;
	v->a[264947] = anon_sym_SEMI;
	v->a[264948] = anon_sym_AMP;
	v->a[264949] = anon_sym_SEMI_SEMI;
	v->a[264950] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[264951] = anon_sym_DOLLAR_LBRACK;
	v->a[264952] = aux_sym_concatenation_token1;
	v->a[264953] = anon_sym_DOLLAR;
	v->a[264954] = sym__special_character;
	v->a[264955] = anon_sym_DQUOTE;
	v->a[264956] = sym_raw_string;
	v->a[264957] = sym_ansi_c_string;
	v->a[264958] = aux_sym_number_token1;
	v->a[264959] = aux_sym_number_token2;
	small_parse_table_13248(v);
}

void	small_parse_table_13248(t_small_parse_table_array *v)
{
	v->a[264960] = anon_sym_DOLLAR_LBRACE;
	v->a[264961] = anon_sym_DOLLAR_LPAREN;
	v->a[264962] = anon_sym_BQUOTE;
	v->a[264963] = anon_sym_DOLLAR_BQUOTE;
	v->a[264964] = anon_sym_LT_LPAREN;
	v->a[264965] = anon_sym_GT_LPAREN;
	v->a[264966] = sym_word;
	v->a[264967] = 6;
	v->a[264968] = actions(3);
	v->a[264969] = 1;
	v->a[264970] = sym_comment;
	v->a[264971] = actions(11512);
	v->a[264972] = 1;
	v->a[264973] = aux_sym_concatenation_token1;
	v->a[264974] = actions(11514);
	v->a[264975] = 1;
	v->a[264976] = sym__concat;
	v->a[264977] = state(4777);
	v->a[264978] = 1;
	v->a[264979] = aux_sym_concatenation_repeat1;
	small_parse_table_13249(v);
}

void	small_parse_table_13249(t_small_parse_table_array *v)
{
	v->a[264980] = actions(2096);
	v->a[264981] = 2;
	v->a[264982] = sym_file_descriptor;
	v->a[264983] = aux_sym_heredoc_redirect_token1;
	v->a[264984] = actions(2094);
	v->a[264985] = 20;
	v->a[264986] = anon_sym_SEMI;
	v->a[264987] = anon_sym_PIPE_PIPE;
	v->a[264988] = anon_sym_AMP_AMP;
	v->a[264989] = anon_sym_PIPE;
	v->a[264990] = anon_sym_AMP;
	v->a[264991] = anon_sym_LT;
	v->a[264992] = anon_sym_GT;
	v->a[264993] = anon_sym_LT_LT;
	v->a[264994] = anon_sym_GT_GT;
	v->a[264995] = anon_sym_SEMI_SEMI;
	v->a[264996] = anon_sym_PIPE_AMP;
	v->a[264997] = anon_sym_AMP_GT;
	v->a[264998] = anon_sym_AMP_GT_GT;
	v->a[264999] = anon_sym_LT_AMP;
	small_parse_table_13250(v);
}

/* EOF small_parse_table_2649.c */
