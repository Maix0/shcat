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
	v->a[80900] = 2;
	v->a[80901] = sym_elif_clause;
	v->a[80902] = aux_sym_if_statement_repeat1;
	v->a[80903] = 3;
	v->a[80904] = actions(680);
	v->a[80905] = 1;
	v->a[80906] = sym_comment;
	v->a[80907] = actions(742);
	v->a[80908] = 1;
	v->a[80909] = anon_sym_DOLLAR;
	v->a[80910] = actions(744);
	v->a[80911] = 5;
	v->a[80912] = sym_heredoc_content;
	v->a[80913] = sym_heredoc_end;
	v->a[80914] = anon_sym_DOLLAR_LBRACE;
	v->a[80915] = anon_sym_DOLLAR_LPAREN;
	v->a[80916] = anon_sym_BQUOTE;
	v->a[80917] = 6;
	v->a[80918] = actions(680);
	v->a[80919] = 1;
	small_parse_table_4046(v);
}

void	small_parse_table_4046(t_small_parse_table_array *v)
{
	v->a[80920] = sym_comment;
	v->a[80921] = actions(3602);
	v->a[80922] = 1;
	v->a[80923] = anon_sym_PIPE;
	v->a[80924] = actions(3628);
	v->a[80925] = 1;
	v->a[80926] = anon_sym_RPAREN;
	v->a[80927] = state(1825);
	v->a[80928] = 1;
	v->a[80929] = aux_sym_concatenation_repeat1;
	v->a[80930] = state(1874);
	v->a[80931] = 1;
	v->a[80932] = aux_sym__case_item_last_repeat1;
	v->a[80933] = actions(3606);
	v->a[80934] = 2;
	v->a[80935] = sym__concat;
	v->a[80936] = aux_sym_concatenation_token1;
	v->a[80937] = 6;
	v->a[80938] = actions(680);
	v->a[80939] = 1;
	small_parse_table_4047(v);
}

void	small_parse_table_4047(t_small_parse_table_array *v)
{
	v->a[80940] = sym_comment;
	v->a[80941] = actions(3602);
	v->a[80942] = 1;
	v->a[80943] = anon_sym_PIPE;
	v->a[80944] = actions(3630);
	v->a[80945] = 1;
	v->a[80946] = anon_sym_RPAREN;
	v->a[80947] = state(1825);
	v->a[80948] = 1;
	v->a[80949] = aux_sym_concatenation_repeat1;
	v->a[80950] = state(1887);
	v->a[80951] = 1;
	v->a[80952] = aux_sym__case_item_last_repeat1;
	v->a[80953] = actions(3606);
	v->a[80954] = 2;
	v->a[80955] = sym__concat;
	v->a[80956] = aux_sym_concatenation_token1;
	v->a[80957] = 3;
	v->a[80958] = actions(680);
	v->a[80959] = 1;
	small_parse_table_4048(v);
}

void	small_parse_table_4048(t_small_parse_table_array *v)
{
	v->a[80960] = sym_comment;
	v->a[80961] = actions(711);
	v->a[80962] = 1;
	v->a[80963] = anon_sym_DOLLAR;
	v->a[80964] = actions(713);
	v->a[80965] = 5;
	v->a[80966] = sym_heredoc_content;
	v->a[80967] = sym_heredoc_end;
	v->a[80968] = anon_sym_DOLLAR_LBRACE;
	v->a[80969] = anon_sym_DOLLAR_LPAREN;
	v->a[80970] = anon_sym_BQUOTE;
	v->a[80971] = 3;
	v->a[80972] = actions(3);
	v->a[80973] = 1;
	v->a[80974] = sym_comment;
	v->a[80975] = actions(796);
	v->a[80976] = 2;
	v->a[80977] = sym_regex;
	v->a[80978] = aux_sym__expansion_regex_token1;
	v->a[80979] = actions(794);
	small_parse_table_4049(v);
}

void	small_parse_table_4049(t_small_parse_table_array *v)
{
	v->a[80980] = 4;
	v->a[80981] = anon_sym_RPAREN;
	v->a[80982] = anon_sym_RBRACE;
	v->a[80983] = anon_sym_DQUOTE;
	v->a[80984] = sym_raw_string;
	v->a[80985] = 6;
	v->a[80986] = actions(680);
	v->a[80987] = 1;
	v->a[80988] = sym_comment;
	v->a[80989] = actions(3598);
	v->a[80990] = 1;
	v->a[80991] = anon_sym_elif;
	v->a[80992] = actions(3600);
	v->a[80993] = 1;
	v->a[80994] = anon_sym_else;
	v->a[80995] = actions(3632);
	v->a[80996] = 1;
	v->a[80997] = anon_sym_fi;
	v->a[80998] = state(1996);
	v->a[80999] = 1;
	small_parse_table_4050(v);
}

/* EOF small_parse_table_809.c */
