/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2729.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13645(t_small_parse_table_array *v)
{
	v->a[272900] = actions(4692);
	v->a[272901] = 2;
	v->a[272902] = anon_sym_LT_LT;
	v->a[272903] = anon_sym_LT_LT_DASH;
	v->a[272904] = actions(4809);
	v->a[272905] = 2;
	v->a[272906] = anon_sym_PIPE_PIPE;
	v->a[272907] = anon_sym_AMP_AMP;
	v->a[272908] = actions(11542);
	v->a[272909] = 2;
	v->a[272910] = anon_sym_LT_AMP_DASH;
	v->a[272911] = anon_sym_GT_AMP_DASH;
	v->a[272912] = actions(4409);
	v->a[272913] = 3;
	v->a[272914] = anon_sym_SEMI;
	v->a[272915] = anon_sym_AMP;
	v->a[272916] = anon_sym_SEMI_SEMI;
	v->a[272917] = state(4746);
	v->a[272918] = 3;
	v->a[272919] = sym_file_redirect;
	small_parse_table_13646(v);
}

void	small_parse_table_13646(t_small_parse_table_array *v)
{
	v->a[272920] = sym_heredoc_redirect;
	v->a[272921] = aux_sym_redirected_statement_repeat1;
	v->a[272922] = actions(11540);
	v->a[272923] = 8;
	v->a[272924] = anon_sym_LT;
	v->a[272925] = anon_sym_GT;
	v->a[272926] = anon_sym_GT_GT;
	v->a[272927] = anon_sym_AMP_GT;
	v->a[272928] = anon_sym_AMP_GT_GT;
	v->a[272929] = anon_sym_LT_AMP;
	v->a[272930] = anon_sym_GT_AMP;
	v->a[272931] = anon_sym_GT_PIPE;
	v->a[272932] = 6;
	v->a[272933] = actions(3);
	v->a[272934] = 1;
	v->a[272935] = sym_comment;
	v->a[272936] = actions(11568);
	v->a[272937] = 1;
	v->a[272938] = aux_sym_concatenation_token1;
	v->a[272939] = actions(12315);
	small_parse_table_13647(v);
}

void	small_parse_table_13647(t_small_parse_table_array *v)
{
	v->a[272940] = 1;
	v->a[272941] = sym__concat;
	v->a[272942] = state(4520);
	v->a[272943] = 1;
	v->a[272944] = aux_sym_concatenation_repeat1;
	v->a[272945] = actions(1288);
	v->a[272946] = 3;
	v->a[272947] = sym_test_operator;
	v->a[272948] = sym__brace_start;
	v->a[272949] = aux_sym_heredoc_redirect_token1;
	v->a[272950] = actions(1286);
	v->a[272951] = 17;
	v->a[272952] = anon_sym_LPAREN_LPAREN;
	v->a[272953] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[272954] = anon_sym_DOLLAR_LBRACK;
	v->a[272955] = anon_sym_DOLLAR;
	v->a[272956] = sym__special_character;
	v->a[272957] = anon_sym_DQUOTE;
	v->a[272958] = sym_raw_string;
	v->a[272959] = sym_ansi_c_string;
	small_parse_table_13648(v);
}

void	small_parse_table_13648(t_small_parse_table_array *v)
{
	v->a[272960] = aux_sym_number_token1;
	v->a[272961] = aux_sym_number_token2;
	v->a[272962] = anon_sym_DOLLAR_LBRACE;
	v->a[272963] = anon_sym_DOLLAR_LPAREN;
	v->a[272964] = anon_sym_BQUOTE;
	v->a[272965] = anon_sym_DOLLAR_BQUOTE;
	v->a[272966] = anon_sym_LT_LPAREN;
	v->a[272967] = anon_sym_GT_LPAREN;
	v->a[272968] = sym_word;
	v->a[272969] = 7;
	v->a[272970] = actions(3);
	v->a[272971] = 1;
	v->a[272972] = sym_comment;
	v->a[272973] = actions(12317);
	v->a[272974] = 1;
	v->a[272975] = anon_sym_LT_LT_LT;
	v->a[272976] = state(4912);
	v->a[272977] = 1;
	v->a[272978] = sym_herestring_redirect;
	v->a[272979] = actions(4253);
	small_parse_table_13649(v);
}

void	small_parse_table_13649(t_small_parse_table_array *v)
{
	v->a[272980] = 2;
	v->a[272981] = anon_sym_PIPE;
	v->a[272982] = anon_sym_PIPE_AMP;
	v->a[272983] = actions(4272);
	v->a[272984] = 2;
	v->a[272985] = sym_file_descriptor;
	v->a[272986] = aux_sym_heredoc_redirect_token1;
	v->a[272987] = state(5366);
	v->a[272988] = 3;
	v->a[272989] = sym_file_redirect;
	v->a[272990] = sym_heredoc_redirect;
	v->a[272991] = aux_sym_redirected_statement_repeat1;
	v->a[272992] = actions(4270);
	v->a[272993] = 14;
	v->a[272994] = anon_sym_PIPE_PIPE;
	v->a[272995] = anon_sym_AMP_AMP;
	v->a[272996] = anon_sym_LT;
	v->a[272997] = anon_sym_GT;
	v->a[272998] = anon_sym_LT_LT;
	v->a[272999] = anon_sym_GT_GT;
	small_parse_table_13650(v);
}

/* EOF small_parse_table_2729.c */
