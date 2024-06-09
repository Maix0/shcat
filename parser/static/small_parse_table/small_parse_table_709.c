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
	v->a[70900] = 1;
	v->a[70901] = aux_sym_number_token2;
	v->a[70902] = actions(943);
	v->a[70903] = 1;
	v->a[70904] = anon_sym_DOLLAR_LBRACE;
	v->a[70905] = actions(945);
	v->a[70906] = 1;
	v->a[70907] = anon_sym_DOLLAR_LPAREN;
	v->a[70908] = actions(947);
	v->a[70909] = 1;
	v->a[70910] = anon_sym_BQUOTE;
	v->a[70911] = actions(2641);
	v->a[70912] = 2;
	v->a[70913] = sym_raw_string;
	v->a[70914] = sym_word;
	v->a[70915] = state(1232);
	v->a[70916] = 2;
	v->a[70917] = sym_concatenation;
	v->a[70918] = aux_sym_for_statement_repeat1;
	v->a[70919] = actions(2643);
	small_parse_table_3546(v);
}

void	small_parse_table_3546(t_small_parse_table_array *v)
{
	v->a[70920] = 4;
	v->a[70921] = anon_sym_SEMI_SEMI;
	v->a[70922] = aux_sym_heredoc_redirect_token1;
	v->a[70923] = anon_sym_AMP;
	v->a[70924] = anon_sym_SEMI;
	v->a[70925] = state(1503);
	v->a[70926] = 6;
	v->a[70927] = sym_arithmetic_expansion;
	v->a[70928] = sym_string;
	v->a[70929] = sym_number;
	v->a[70930] = sym_simple_expansion;
	v->a[70931] = sym_expansion;
	v->a[70932] = sym_command_substitution;
	v->a[70933] = 9;
	v->a[70934] = actions(3);
	v->a[70935] = 1;
	v->a[70936] = sym_comment;
	v->a[70937] = actions(2458);
	v->a[70938] = 1;
	v->a[70939] = aux_sym_heredoc_redirect_token1;
	small_parse_table_3547(v);
}

void	small_parse_table_3547(t_small_parse_table_array *v)
{
	v->a[70940] = actions(2460);
	v->a[70941] = 1;
	v->a[70942] = sym_file_descriptor;
	v->a[70943] = actions(1062);
	v->a[70944] = 2;
	v->a[70945] = anon_sym_LT_LT;
	v->a[70946] = anon_sym_LT_LT_DASH;
	v->a[70947] = actions(1093);
	v->a[70948] = 2;
	v->a[70949] = anon_sym_AMP_AMP;
	v->a[70950] = anon_sym_PIPE_PIPE;
	v->a[70951] = actions(2456);
	v->a[70952] = 2;
	v->a[70953] = anon_sym_LT_AMP_DASH;
	v->a[70954] = anon_sym_GT_AMP_DASH;
	v->a[70955] = actions(1122);
	v->a[70956] = 3;
	v->a[70957] = anon_sym_SEMI_SEMI;
	v->a[70958] = anon_sym_AMP;
	v->a[70959] = anon_sym_SEMI;
	small_parse_table_3548(v);
}

void	small_parse_table_3548(t_small_parse_table_array *v)
{
	v->a[70960] = state(1160);
	v->a[70961] = 3;
	v->a[70962] = sym_file_redirect;
	v->a[70963] = sym_heredoc_redirect;
	v->a[70964] = aux_sym_redirected_statement_repeat1;
	v->a[70965] = actions(2454);
	v->a[70966] = 8;
	v->a[70967] = anon_sym_LT;
	v->a[70968] = anon_sym_GT;
	v->a[70969] = anon_sym_GT_GT;
	v->a[70970] = anon_sym_AMP_GT;
	v->a[70971] = anon_sym_AMP_GT_GT;
	v->a[70972] = anon_sym_LT_AMP;
	v->a[70973] = anon_sym_GT_AMP;
	v->a[70974] = anon_sym_GT_PIPE;
	v->a[70975] = 5;
	v->a[70976] = actions(3);
	v->a[70977] = 1;
	v->a[70978] = sym_comment;
	v->a[70979] = actions(2645);
	small_parse_table_3549(v);
}

void	small_parse_table_3549(t_small_parse_table_array *v)
{
	v->a[70980] = 1;
	v->a[70981] = anon_sym_PIPE;
	v->a[70982] = state(1218);
	v->a[70983] = 1;
	v->a[70984] = aux_sym_pipeline_repeat1;
	v->a[70985] = actions(2247);
	v->a[70986] = 2;
	v->a[70987] = sym_file_descriptor;
	v->a[70988] = aux_sym_heredoc_redirect_token1;
	v->a[70989] = actions(2252);
	v->a[70990] = 18;
	v->a[70991] = anon_sym_RPAREN;
	v->a[70992] = anon_sym_SEMI_SEMI;
	v->a[70993] = anon_sym_AMP_AMP;
	v->a[70994] = anon_sym_PIPE_PIPE;
	v->a[70995] = anon_sym_LT;
	v->a[70996] = anon_sym_GT;
	v->a[70997] = anon_sym_GT_GT;
	v->a[70998] = anon_sym_AMP_GT;
	v->a[70999] = anon_sym_AMP_GT_GT;
	small_parse_table_3550(v);
}

/* EOF small_parse_table_709.c */
