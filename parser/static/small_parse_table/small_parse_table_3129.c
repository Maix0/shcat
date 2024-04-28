/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_3129.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_15645(t_small_parse_table_array *v)
{
	v->a[312900] = 1;
	v->a[312901] = sym__heredoc_body_beginning;
	v->a[312902] = actions(14722);
	v->a[312903] = 1;
	v->a[312904] = sym_simple_heredoc_body;
	v->a[312905] = state(6845);
	v->a[312906] = 1;
	v->a[312907] = sym_heredoc_body;
	v->a[312908] = state(4892);
	v->a[312909] = 2;
	v->a[312910] = sym__heredoc_body;
	v->a[312911] = sym__simple_heredoc_body;
	v->a[312912] = 4;
	v->a[312913] = actions(3);
	v->a[312914] = 1;
	v->a[312915] = sym_comment;
	v->a[312916] = actions(14399);
	v->a[312917] = 1;
	v->a[312918] = anon_sym_in;
	v->a[312919] = actions(14403);
	small_parse_table_15646(v);
}

void	small_parse_table_15646(t_small_parse_table_array *v)
{
	v->a[312920] = 1;
	v->a[312921] = aux_sym_heredoc_redirect_token1;
	v->a[312922] = actions(14401);
	v->a[312923] = 3;
	v->a[312924] = anon_sym_SEMI;
	v->a[312925] = anon_sym_AMP;
	v->a[312926] = anon_sym_SEMI_SEMI;
	v->a[312927] = 6;
	v->a[312928] = actions(71);
	v->a[312929] = 1;
	v->a[312930] = sym_comment;
	v->a[312931] = actions(14710);
	v->a[312932] = 1;
	v->a[312933] = sym__heredoc_body_beginning;
	v->a[312934] = actions(14722);
	v->a[312935] = 1;
	v->a[312936] = sym_simple_heredoc_body;
	v->a[312937] = state(4979);
	v->a[312938] = 1;
	v->a[312939] = sym__simple_heredoc_body;
	small_parse_table_15647(v);
}

void	small_parse_table_15647(t_small_parse_table_array *v)
{
	v->a[312940] = state(4983);
	v->a[312941] = 1;
	v->a[312942] = sym__heredoc_body;
	v->a[312943] = state(6845);
	v->a[312944] = 1;
	v->a[312945] = sym_heredoc_body;
	v->a[312946] = 6;
	v->a[312947] = actions(71);
	v->a[312948] = 1;
	v->a[312949] = sym_comment;
	v->a[312950] = actions(14710);
	v->a[312951] = 1;
	v->a[312952] = sym__heredoc_body_beginning;
	v->a[312953] = actions(14722);
	v->a[312954] = 1;
	v->a[312955] = sym_simple_heredoc_body;
	v->a[312956] = state(4970);
	v->a[312957] = 1;
	v->a[312958] = sym__simple_heredoc_body;
	v->a[312959] = state(4973);
	small_parse_table_15648(v);
}

void	small_parse_table_15648(t_small_parse_table_array *v)
{
	v->a[312960] = 1;
	v->a[312961] = sym__heredoc_body;
	v->a[312962] = state(6845);
	v->a[312963] = 1;
	v->a[312964] = sym_heredoc_body;
	v->a[312965] = 5;
	v->a[312966] = actions(71);
	v->a[312967] = 1;
	v->a[312968] = sym_comment;
	v->a[312969] = actions(14674);
	v->a[312970] = 1;
	v->a[312971] = anon_sym_SLASH;
	v->a[312972] = actions(14676);
	v->a[312973] = 1;
	v->a[312974] = anon_sym_RBRACE3;
	v->a[312975] = state(6475);
	v->a[312976] = 1;
	v->a[312977] = aux_sym__concatenation_in_expansion_repeat1;
	v->a[312978] = actions(14590);
	v->a[312979] = 2;
	small_parse_table_15649(v);
}

void	small_parse_table_15649(t_small_parse_table_array *v)
{
	v->a[312980] = sym__concat;
	v->a[312981] = aux_sym_concatenation_token1;
	v->a[312982] = 5;
	v->a[312983] = actions(71);
	v->a[312984] = 1;
	v->a[312985] = sym_comment;
	v->a[312986] = actions(14710);
	v->a[312987] = 1;
	v->a[312988] = sym__heredoc_body_beginning;
	v->a[312989] = actions(14724);
	v->a[312990] = 1;
	v->a[312991] = sym_simple_heredoc_body;
	v->a[312992] = state(7519);
	v->a[312993] = 1;
	v->a[312994] = sym_heredoc_body;
	v->a[312995] = state(4890);
	v->a[312996] = 2;
	v->a[312997] = sym__heredoc_body;
	v->a[312998] = sym__simple_heredoc_body;
	v->a[312999] = 4;
	small_parse_table_15650(v);
}

/* EOF small_parse_table_3129.c */
