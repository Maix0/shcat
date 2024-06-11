/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_999.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4995(t_small_parse_table_array *v)
{
	v->a[99900] = actions(4486);
	v->a[99901] = 1;
	v->a[99902] = aux_sym_heredoc_redirect_token1;
	v->a[99903] = actions(4484);
	v->a[99904] = 3;
	v->a[99905] = anon_sym_SEMI_SEMI;
	v->a[99906] = anon_sym_AMP;
	v->a[99907] = anon_sym_SEMI;
	v->a[99908] = 5;
	v->a[99909] = actions(1094);
	v->a[99910] = 1;
	v->a[99911] = sym_comment;
	v->a[99912] = actions(4462);
	v->a[99913] = 1;
	v->a[99914] = sym_simple_heredoc_body;
	v->a[99915] = actions(4464);
	v->a[99916] = 1;
	v->a[99917] = sym__heredoc_body_beginning;
	v->a[99918] = state(2439);
	v->a[99919] = 1;
	small_parse_table_4996(v);
}

void	small_parse_table_4996(t_small_parse_table_array *v)
{
	v->a[99920] = sym_heredoc_body;
	v->a[99921] = state(1532);
	v->a[99922] = 2;
	v->a[99923] = sym__heredoc_body;
	v->a[99924] = sym__simple_heredoc_body;
	v->a[99925] = 2;
	v->a[99926] = actions(1094);
	v->a[99927] = 1;
	v->a[99928] = sym_comment;
	v->a[99929] = actions(1145);
	v->a[99930] = 5;
	v->a[99931] = sym__concat;
	v->a[99932] = anon_sym_PIPE;
	v->a[99933] = anon_sym_RPAREN;
	v->a[99934] = anon_sym_RBRACE;
	v->a[99935] = aux_sym_concatenation_token1;
	v->a[99936] = 6;
	v->a[99937] = actions(1094);
	v->a[99938] = 1;
	v->a[99939] = sym_comment;
	small_parse_table_4997(v);
}

void	small_parse_table_4997(t_small_parse_table_array *v)
{
	v->a[99940] = actions(4462);
	v->a[99941] = 1;
	v->a[99942] = sym_simple_heredoc_body;
	v->a[99943] = actions(4464);
	v->a[99944] = 1;
	v->a[99945] = sym__heredoc_body_beginning;
	v->a[99946] = state(1525);
	v->a[99947] = 1;
	v->a[99948] = sym__heredoc_body;
	v->a[99949] = state(1527);
	v->a[99950] = 1;
	v->a[99951] = sym__simple_heredoc_body;
	v->a[99952] = state(2439);
	v->a[99953] = 1;
	v->a[99954] = sym_heredoc_body;
	v->a[99955] = 5;
	v->a[99956] = actions(1094);
	v->a[99957] = 1;
	v->a[99958] = sym_comment;
	v->a[99959] = actions(4464);
	small_parse_table_4998(v);
}

void	small_parse_table_4998(t_small_parse_table_array *v)
{
	v->a[99960] = 1;
	v->a[99961] = sym__heredoc_body_beginning;
	v->a[99962] = actions(4470);
	v->a[99963] = 1;
	v->a[99964] = sym_simple_heredoc_body;
	v->a[99965] = state(2390);
	v->a[99966] = 1;
	v->a[99967] = sym_heredoc_body;
	v->a[99968] = state(1368);
	v->a[99969] = 2;
	v->a[99970] = sym__heredoc_body;
	v->a[99971] = sym__simple_heredoc_body;
	v->a[99972] = 6;
	v->a[99973] = actions(1094);
	v->a[99974] = 1;
	v->a[99975] = sym_comment;
	v->a[99976] = actions(4462);
	v->a[99977] = 1;
	v->a[99978] = sym_simple_heredoc_body;
	v->a[99979] = actions(4464);
	small_parse_table_4999(v);
}

void	small_parse_table_4999(t_small_parse_table_array *v)
{
	v->a[99980] = 1;
	v->a[99981] = sym__heredoc_body_beginning;
	v->a[99982] = state(1522);
	v->a[99983] = 1;
	v->a[99984] = sym__heredoc_body;
	v->a[99985] = state(1523);
	v->a[99986] = 1;
	v->a[99987] = sym__simple_heredoc_body;
	v->a[99988] = state(2439);
	v->a[99989] = 1;
	v->a[99990] = sym_heredoc_body;
	v->a[99991] = 6;
	v->a[99992] = actions(1094);
	v->a[99993] = 1;
	v->a[99994] = sym_comment;
	v->a[99995] = actions(4464);
	v->a[99996] = 1;
	v->a[99997] = sym__heredoc_body_beginning;
	v->a[99998] = actions(4470);
	v->a[99999] = 1;
	small_parse_table_5000(v);
}

/* EOF small_parse_table_999.c */
