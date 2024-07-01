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
	v->a[80900] = anon_sym_DASH3;
	v->a[80901] = anon_sym_COLON_EQ;
	v->a[80902] = anon_sym_EQ2;
	v->a[80903] = anon_sym_COLON_QMARK;
	v->a[80904] = anon_sym_QMARK2;
	v->a[80905] = anon_sym_COLON_PLUS;
	v->a[80906] = anon_sym_PLUS3;
	v->a[80907] = 3;
	v->a[80908] = actions(3);
	v->a[80909] = 1;
	v->a[80910] = sym_comment;
	v->a[80911] = actions(1015);
	v->a[80912] = 1;
	v->a[80913] = sym__concat;
	v->a[80914] = actions(1013);
	v->a[80915] = 14;
	v->a[80916] = anon_sym_SEMI_SEMI;
	v->a[80917] = aux_sym_heredoc_redirect_token1;
	v->a[80918] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80919] = anon_sym_AMP;
	small_parse_table_4046(v);
}

void	small_parse_table_4046(t_small_parse_table_array *v)
{
	v->a[80920] = aux_sym_concatenation_token1;
	v->a[80921] = anon_sym_DOLLAR;
	v->a[80922] = anon_sym_DQUOTE;
	v->a[80923] = sym_raw_string;
	v->a[80924] = sym_number;
	v->a[80925] = anon_sym_DOLLAR_LBRACE;
	v->a[80926] = anon_sym_DOLLAR_LPAREN;
	v->a[80927] = anon_sym_BQUOTE;
	v->a[80928] = sym_word;
	v->a[80929] = anon_sym_SEMI;
	v->a[80930] = 13;
	v->a[80931] = actions(3);
	v->a[80932] = 1;
	v->a[80933] = sym_comment;
	v->a[80934] = actions(1780);
	v->a[80935] = 1;
	v->a[80936] = anon_sym_DOLLAR;
	v->a[80937] = actions(1782);
	v->a[80938] = 1;
	v->a[80939] = anon_sym_DQUOTE;
	small_parse_table_4047(v);
}

void	small_parse_table_4047(t_small_parse_table_array *v)
{
	v->a[80940] = actions(1784);
	v->a[80941] = 1;
	v->a[80942] = anon_sym_DOLLAR_LBRACE;
	v->a[80943] = actions(1786);
	v->a[80944] = 1;
	v->a[80945] = anon_sym_DOLLAR_LPAREN;
	v->a[80946] = actions(1788);
	v->a[80947] = 1;
	v->a[80948] = anon_sym_BQUOTE;
	v->a[80949] = actions(3156);
	v->a[80950] = 1;
	v->a[80951] = anon_sym_RBRACE;
	v->a[80952] = actions(3158);
	v->a[80953] = 1;
	v->a[80954] = sym_variable_name;
	v->a[80955] = actions(3160);
	v->a[80956] = 1;
	v->a[80957] = sym__expansion_word;
	v->a[80958] = state(2285);
	v->a[80959] = 1;
	small_parse_table_4048(v);
}

void	small_parse_table_4048(t_small_parse_table_array *v)
{
	v->a[80960] = sym__concatenation_in_expansion;
	v->a[80961] = actions(3154);
	v->a[80962] = 2;
	v->a[80963] = sym_raw_string;
	v->a[80964] = sym_word;
	v->a[80965] = state(2073);
	v->a[80966] = 2;
	v->a[80967] = sym_string;
	v->a[80968] = sym_expansion;
	v->a[80969] = state(2095);
	v->a[80970] = 2;
	v->a[80971] = sym_simple_expansion;
	v->a[80972] = sym_command_substitution;
	v->a[80973] = 8;
	v->a[80974] = actions(3);
	v->a[80975] = 1;
	v->a[80976] = sym_comment;
	v->a[80977] = actions(906);
	v->a[80978] = 1;
	v->a[80979] = sym_file_descriptor;
	small_parse_table_4049(v);
}

void	small_parse_table_4049(t_small_parse_table_array *v)
{
	v->a[80980] = actions(3162);
	v->a[80981] = 1;
	v->a[80982] = aux_sym_heredoc_redirect_token1;
	v->a[80983] = state(2181);
	v->a[80984] = 1;
	v->a[80985] = sym__heredoc_expression;
	v->a[80986] = actions(886);
	v->a[80987] = 2;
	v->a[80988] = anon_sym_AMP_AMP;
	v->a[80989] = anon_sym_PIPE_PIPE;
	v->a[80990] = actions(890);
	v->a[80991] = 2;
	v->a[80992] = anon_sym_LT_AMP_DASH;
	v->a[80993] = anon_sym_GT_AMP_DASH;
	v->a[80994] = state(1670);
	v->a[80995] = 2;
	v->a[80996] = sym_file_redirect;
	v->a[80997] = aux_sym_redirected_statement_repeat2;
	v->a[80998] = actions(888);
	v->a[80999] = 6;
	small_parse_table_4050(v);
}

/* EOF small_parse_table_809.c */
