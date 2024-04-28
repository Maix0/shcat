/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1109.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5545(t_small_parse_table_array *v)
{
	v->a[110900] = actions(5395);
	v->a[110901] = 4;
	v->a[110902] = sym_file_descriptor;
	v->a[110903] = sym_test_operator;
	v->a[110904] = sym__brace_start;
	v->a[110905] = aux_sym_heredoc_redirect_token1;
	v->a[110906] = actions(5393);
	v->a[110907] = 37;
	v->a[110908] = anon_sym_LPAREN_LPAREN;
	v->a[110909] = anon_sym_SEMI;
	v->a[110910] = anon_sym_PIPE_PIPE;
	v->a[110911] = anon_sym_AMP_AMP;
	v->a[110912] = anon_sym_PIPE;
	v->a[110913] = anon_sym_AMP;
	v->a[110914] = anon_sym_LT;
	v->a[110915] = anon_sym_GT;
	v->a[110916] = anon_sym_LT_LT;
	v->a[110917] = anon_sym_GT_GT;
	v->a[110918] = anon_sym_RPAREN;
	v->a[110919] = anon_sym_SEMI_SEMI;
	small_parse_table_5546(v);
}

void	small_parse_table_5546(t_small_parse_table_array *v)
{
	v->a[110920] = anon_sym_PIPE_AMP;
	v->a[110921] = anon_sym_AMP_GT;
	v->a[110922] = anon_sym_AMP_GT_GT;
	v->a[110923] = anon_sym_LT_AMP;
	v->a[110924] = anon_sym_GT_AMP;
	v->a[110925] = anon_sym_GT_PIPE;
	v->a[110926] = anon_sym_LT_AMP_DASH;
	v->a[110927] = anon_sym_GT_AMP_DASH;
	v->a[110928] = anon_sym_LT_LT_DASH;
	v->a[110929] = anon_sym_LT_LT_LT;
	v->a[110930] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[110931] = anon_sym_DOLLAR_LBRACK;
	v->a[110932] = anon_sym_DOLLAR;
	v->a[110933] = anon_sym_DQUOTE;
	v->a[110934] = sym_raw_string;
	v->a[110935] = sym_ansi_c_string;
	v->a[110936] = aux_sym_number_token1;
	v->a[110937] = aux_sym_number_token2;
	v->a[110938] = anon_sym_DOLLAR_LBRACE;
	v->a[110939] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_5547(v);
}

void	small_parse_table_5547(t_small_parse_table_array *v)
{
	v->a[110940] = anon_sym_BQUOTE;
	v->a[110941] = anon_sym_DOLLAR_BQUOTE;
	v->a[110942] = anon_sym_LT_LPAREN;
	v->a[110943] = anon_sym_GT_LPAREN;
	v->a[110944] = sym_word;
	v->a[110945] = 3;
	v->a[110946] = actions(3);
	v->a[110947] = 1;
	v->a[110948] = sym_comment;
	v->a[110949] = actions(1326);
	v->a[110950] = 5;
	v->a[110951] = sym_file_descriptor;
	v->a[110952] = sym__concat;
	v->a[110953] = sym_test_operator;
	v->a[110954] = sym__brace_start;
	v->a[110955] = aux_sym_heredoc_redirect_token1;
	v->a[110956] = actions(1324);
	v->a[110957] = 38;
	v->a[110958] = anon_sym_LPAREN_LPAREN;
	v->a[110959] = anon_sym_SEMI;
	small_parse_table_5548(v);
}

void	small_parse_table_5548(t_small_parse_table_array *v)
{
	v->a[110960] = anon_sym_PIPE_PIPE;
	v->a[110961] = anon_sym_AMP_AMP;
	v->a[110962] = anon_sym_PIPE;
	v->a[110963] = anon_sym_AMP;
	v->a[110964] = anon_sym_LT;
	v->a[110965] = anon_sym_GT;
	v->a[110966] = anon_sym_LT_LT;
	v->a[110967] = anon_sym_GT_GT;
	v->a[110968] = anon_sym_RPAREN;
	v->a[110969] = anon_sym_SEMI_SEMI;
	v->a[110970] = anon_sym_PIPE_AMP;
	v->a[110971] = anon_sym_AMP_GT;
	v->a[110972] = anon_sym_AMP_GT_GT;
	v->a[110973] = anon_sym_LT_AMP;
	v->a[110974] = anon_sym_GT_AMP;
	v->a[110975] = anon_sym_GT_PIPE;
	v->a[110976] = anon_sym_LT_AMP_DASH;
	v->a[110977] = anon_sym_GT_AMP_DASH;
	v->a[110978] = anon_sym_LT_LT_DASH;
	v->a[110979] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_5549(v);
}

void	small_parse_table_5549(t_small_parse_table_array *v)
{
	v->a[110980] = anon_sym_DOLLAR_LBRACK;
	v->a[110981] = aux_sym_concatenation_token1;
	v->a[110982] = anon_sym_DOLLAR;
	v->a[110983] = sym__special_character;
	v->a[110984] = anon_sym_DQUOTE;
	v->a[110985] = sym_raw_string;
	v->a[110986] = sym_ansi_c_string;
	v->a[110987] = aux_sym_number_token1;
	v->a[110988] = aux_sym_number_token2;
	v->a[110989] = anon_sym_DOLLAR_LBRACE;
	v->a[110990] = anon_sym_DOLLAR_LPAREN;
	v->a[110991] = anon_sym_BQUOTE;
	v->a[110992] = anon_sym_DOLLAR_BQUOTE;
	v->a[110993] = anon_sym_LT_LPAREN;
	v->a[110994] = anon_sym_GT_LPAREN;
	v->a[110995] = sym_word;
	v->a[110996] = 8;
	v->a[110997] = actions(3);
	v->a[110998] = 1;
	v->a[110999] = sym_comment;
	small_parse_table_5550(v);
}

/* EOF small_parse_table_1109.c */
