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
	v->a[80900] = state(1814);
	v->a[80901] = 1;
	v->a[80902] = aux_sym_concatenation_repeat1;
	v->a[80903] = actions(1093);
	v->a[80904] = 2;
	v->a[80905] = anon_sym_PIPE;
	v->a[80906] = anon_sym_RPAREN;
	v->a[80907] = actions(3615);
	v->a[80908] = 2;
	v->a[80909] = sym__concat;
	v->a[80910] = aux_sym_concatenation_token1;
	v->a[80911] = 5;
	v->a[80912] = actions(664);
	v->a[80913] = 1;
	v->a[80914] = sym_comment;
	v->a[80915] = actions(3613);
	v->a[80916] = 1;
	v->a[80917] = sym__heredoc_body_beginning;
	v->a[80918] = actions(3618);
	v->a[80919] = 1;
	small_parse_table_4046(v);
}

void	small_parse_table_4046(t_small_parse_table_array *v)
{
	v->a[80920] = sym_simple_heredoc_body;
	v->a[80921] = state(2071);
	v->a[80922] = 1;
	v->a[80923] = sym_heredoc_body;
	v->a[80924] = state(1121);
	v->a[80925] = 2;
	v->a[80926] = sym__heredoc_body;
	v->a[80927] = sym__simple_heredoc_body;
	v->a[80928] = 5;
	v->a[80929] = actions(664);
	v->a[80930] = 1;
	v->a[80931] = sym_comment;
	v->a[80932] = actions(3611);
	v->a[80933] = 1;
	v->a[80934] = sym_simple_heredoc_body;
	v->a[80935] = actions(3613);
	v->a[80936] = 1;
	v->a[80937] = sym__heredoc_body_beginning;
	v->a[80938] = state(1927);
	v->a[80939] = 1;
	small_parse_table_4047(v);
}

void	small_parse_table_4047(t_small_parse_table_array *v)
{
	v->a[80940] = sym_heredoc_body;
	v->a[80941] = state(1214);
	v->a[80942] = 2;
	v->a[80943] = sym__heredoc_body;
	v->a[80944] = sym__simple_heredoc_body;
	v->a[80945] = 6;
	v->a[80946] = actions(664);
	v->a[80947] = 1;
	v->a[80948] = sym_comment;
	v->a[80949] = actions(3613);
	v->a[80950] = 1;
	v->a[80951] = sym__heredoc_body_beginning;
	v->a[80952] = actions(3620);
	v->a[80953] = 1;
	v->a[80954] = sym_simple_heredoc_body;
	v->a[80955] = state(1526);
	v->a[80956] = 1;
	v->a[80957] = sym__simple_heredoc_body;
	v->a[80958] = state(1588);
	v->a[80959] = 1;
	small_parse_table_4048(v);
}

void	small_parse_table_4048(t_small_parse_table_array *v)
{
	v->a[80960] = sym__heredoc_body;
	v->a[80961] = state(1960);
	v->a[80962] = 1;
	v->a[80963] = sym_heredoc_body;
	v->a[80964] = 4;
	v->a[80965] = actions(664);
	v->a[80966] = 1;
	v->a[80967] = sym_comment;
	v->a[80968] = actions(3624);
	v->a[80969] = 1;
	v->a[80970] = anon_sym_elif;
	v->a[80971] = actions(3622);
	v->a[80972] = 2;
	v->a[80973] = anon_sym_fi;
	v->a[80974] = anon_sym_else;
	v->a[80975] = state(1818);
	v->a[80976] = 2;
	v->a[80977] = sym_elif_clause;
	v->a[80978] = aux_sym_if_statement_repeat1;
	v->a[80979] = 5;
	small_parse_table_4049(v);
}

void	small_parse_table_4049(t_small_parse_table_array *v)
{
	v->a[80980] = actions(664);
	v->a[80981] = 1;
	v->a[80982] = sym_comment;
	v->a[80983] = actions(3611);
	v->a[80984] = 1;
	v->a[80985] = sym_simple_heredoc_body;
	v->a[80986] = actions(3613);
	v->a[80987] = 1;
	v->a[80988] = sym__heredoc_body_beginning;
	v->a[80989] = state(1927);
	v->a[80990] = 1;
	v->a[80991] = sym_heredoc_body;
	v->a[80992] = state(1253);
	v->a[80993] = 2;
	v->a[80994] = sym__heredoc_body;
	v->a[80995] = sym__simple_heredoc_body;
	v->a[80996] = 6;
	v->a[80997] = actions(664);
	v->a[80998] = 1;
	v->a[80999] = sym_comment;
	small_parse_table_4050(v);
}

/* EOF small_parse_table_809.c */
