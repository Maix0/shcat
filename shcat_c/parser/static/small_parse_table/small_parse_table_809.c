/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_809.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4045(t_small_parse_table_array *v)
{
	v->a[80900] = actions(5844);
	v->a[80901] = 1;
	v->a[80902] = aux_sym_concatenation_token1;
	v->a[80903] = actions(5846);
	v->a[80904] = 1;
	v->a[80905] = sym__concat;
	v->a[80906] = state(1672);
	v->a[80907] = 1;
	v->a[80908] = aux_sym_concatenation_repeat1;
	v->a[80909] = actions(1263);
	v->a[80910] = 4;
	v->a[80911] = sym_file_descriptor;
	v->a[80912] = sym_test_operator;
	v->a[80913] = sym__brace_start;
	v->a[80914] = aux_sym_heredoc_redirect_token1;
	v->a[80915] = actions(1261);
	v->a[80916] = 38;
	v->a[80917] = anon_sym_LPAREN_LPAREN;
	v->a[80918] = anon_sym_SEMI;
	v->a[80919] = anon_sym_PIPE_PIPE;
	small_parse_table_4046(v);
}

void	small_parse_table_4046(t_small_parse_table_array *v)
{
	v->a[80920] = anon_sym_AMP_AMP;
	v->a[80921] = anon_sym_PIPE;
	v->a[80922] = anon_sym_AMP;
	v->a[80923] = anon_sym_LT;
	v->a[80924] = anon_sym_GT;
	v->a[80925] = anon_sym_LT_LT;
	v->a[80926] = anon_sym_GT_GT;
	v->a[80927] = anon_sym_RPAREN;
	v->a[80928] = anon_sym_SEMI_SEMI;
	v->a[80929] = anon_sym_PIPE_AMP;
	v->a[80930] = anon_sym_AMP_GT;
	v->a[80931] = anon_sym_AMP_GT_GT;
	v->a[80932] = anon_sym_LT_AMP;
	v->a[80933] = anon_sym_GT_AMP;
	v->a[80934] = anon_sym_GT_PIPE;
	v->a[80935] = anon_sym_LT_AMP_DASH;
	v->a[80936] = anon_sym_GT_AMP_DASH;
	v->a[80937] = anon_sym_LT_LT_DASH;
	v->a[80938] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80939] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_4047(v);
}

void	small_parse_table_4047(t_small_parse_table_array *v)
{
	v->a[80940] = anon_sym_DOLLAR;
	v->a[80941] = sym__special_character;
	v->a[80942] = anon_sym_DQUOTE;
	v->a[80943] = sym_raw_string;
	v->a[80944] = sym_ansi_c_string;
	v->a[80945] = aux_sym_number_token1;
	v->a[80946] = aux_sym_number_token2;
	v->a[80947] = anon_sym_DOLLAR_LBRACE;
	v->a[80948] = anon_sym_DOLLAR_LPAREN;
	v->a[80949] = anon_sym_BQUOTE;
	v->a[80950] = anon_sym_DOLLAR_BQUOTE;
	v->a[80951] = anon_sym_LT_LPAREN;
	v->a[80952] = anon_sym_GT_LPAREN;
	v->a[80953] = aux_sym__simple_variable_name_token1;
	v->a[80954] = sym_word;
	v->a[80955] = 11;
	v->a[80956] = actions(3);
	v->a[80957] = 1;
	v->a[80958] = sym_comment;
	v->a[80959] = actions(5776);
	small_parse_table_4048(v);
}

void	small_parse_table_4048(t_small_parse_table_array *v)
{
	v->a[80960] = 1;
	v->a[80961] = sym_variable_name;
	v->a[80962] = actions(5942);
	v->a[80963] = 1;
	v->a[80964] = aux_sym_heredoc_redirect_token1;
	v->a[80965] = state(6746);
	v->a[80966] = 1;
	v->a[80967] = sym_subscript;
	v->a[80968] = actions(4253);
	v->a[80969] = 2;
	v->a[80970] = anon_sym_PIPE;
	v->a[80971] = anon_sym_PIPE_AMP;
	v->a[80972] = actions(4692);
	v->a[80973] = 2;
	v->a[80974] = anon_sym_LT_LT;
	v->a[80975] = anon_sym_LT_LT_DASH;
	v->a[80976] = actions(5940);
	v->a[80977] = 2;
	v->a[80978] = anon_sym_PIPE_PIPE;
	v->a[80979] = anon_sym_AMP_AMP;
	small_parse_table_4049(v);
}

void	small_parse_table_4049(t_small_parse_table_array *v)
{
	v->a[80980] = state(5148);
	v->a[80981] = 2;
	v->a[80982] = sym_variable_assignment;
	v->a[80983] = aux_sym_variable_assignments_repeat1;
	v->a[80984] = actions(4261);
	v->a[80985] = 3;
	v->a[80986] = sym_file_descriptor;
	v->a[80987] = sym_test_operator;
	v->a[80988] = sym__brace_start;
	v->a[80989] = state(5366);
	v->a[80990] = 3;
	v->a[80991] = sym_file_redirect;
	v->a[80992] = sym_heredoc_redirect;
	v->a[80993] = aux_sym_redirected_statement_repeat1;
	v->a[80994] = actions(4247);
	v->a[80995] = 28;
	v->a[80996] = anon_sym_LPAREN_LPAREN;
	v->a[80997] = anon_sym_LT;
	v->a[80998] = anon_sym_GT;
	v->a[80999] = anon_sym_GT_GT;
	small_parse_table_4050(v);
}

/* EOF small_parse_table_809.c */
