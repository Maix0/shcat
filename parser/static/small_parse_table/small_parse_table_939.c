/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_939.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4695(t_small_parse_table_array *v)
{
	v->a[93900] = 1;
	v->a[93901] = sym_comment;
	v->a[93902] = actions(4018);
	v->a[93903] = 1;
	v->a[93904] = sym__heredoc_body_beginning;
	v->a[93905] = actions(4020);
	v->a[93906] = 1;
	v->a[93907] = sym_simple_heredoc_body;
	v->a[93908] = state(2136);
	v->a[93909] = 1;
	v->a[93910] = sym_heredoc_body;
	v->a[93911] = state(1358);
	v->a[93912] = 2;
	v->a[93913] = sym__heredoc_body;
	v->a[93914] = sym__simple_heredoc_body;
	v->a[93915] = 6;
	v->a[93916] = actions(1074);
	v->a[93917] = 1;
	v->a[93918] = sym_comment;
	v->a[93919] = actions(4018);
	small_parse_table_4696(v);
}

void	small_parse_table_4696(t_small_parse_table_array *v)
{
	v->a[93920] = 1;
	v->a[93921] = sym__heredoc_body_beginning;
	v->a[93922] = actions(4020);
	v->a[93923] = 1;
	v->a[93924] = sym_simple_heredoc_body;
	v->a[93925] = state(1362);
	v->a[93926] = 1;
	v->a[93927] = sym__heredoc_body;
	v->a[93928] = state(1363);
	v->a[93929] = 1;
	v->a[93930] = sym__simple_heredoc_body;
	v->a[93931] = state(2136);
	v->a[93932] = 1;
	v->a[93933] = sym_heredoc_body;
	v->a[93934] = 5;
	v->a[93935] = actions(1074);
	v->a[93936] = 1;
	v->a[93937] = sym_comment;
	v->a[93938] = actions(3990);
	v->a[93939] = 1;
	small_parse_table_4697(v);
}

void	small_parse_table_4697(t_small_parse_table_array *v)
{
	v->a[93940] = aux_sym_concatenation_token1;
	v->a[93941] = actions(4024);
	v->a[93942] = 1;
	v->a[93943] = sym__concat;
	v->a[93944] = state(2066);
	v->a[93945] = 1;
	v->a[93946] = aux_sym_concatenation_repeat1;
	v->a[93947] = actions(961);
	v->a[93948] = 2;
	v->a[93949] = anon_sym_PIPE;
	v->a[93950] = anon_sym_RPAREN;
	v->a[93951] = 6;
	v->a[93952] = actions(1074);
	v->a[93953] = 1;
	v->a[93954] = sym_comment;
	v->a[93955] = actions(4018);
	v->a[93956] = 1;
	v->a[93957] = sym__heredoc_body_beginning;
	v->a[93958] = actions(4020);
	v->a[93959] = 1;
	small_parse_table_4698(v);
}

void	small_parse_table_4698(t_small_parse_table_array *v)
{
	v->a[93960] = sym_simple_heredoc_body;
	v->a[93961] = state(1364);
	v->a[93962] = 1;
	v->a[93963] = sym__heredoc_body;
	v->a[93964] = state(1368);
	v->a[93965] = 1;
	v->a[93966] = sym__simple_heredoc_body;
	v->a[93967] = state(2136);
	v->a[93968] = 1;
	v->a[93969] = sym_heredoc_body;
	v->a[93970] = 5;
	v->a[93971] = actions(1074);
	v->a[93972] = 1;
	v->a[93973] = sym_comment;
	v->a[93974] = actions(4018);
	v->a[93975] = 1;
	v->a[93976] = sym__heredoc_body_beginning;
	v->a[93977] = actions(4020);
	v->a[93978] = 1;
	v->a[93979] = sym_simple_heredoc_body;
	small_parse_table_4699(v);
}

void	small_parse_table_4699(t_small_parse_table_array *v)
{
	v->a[93980] = state(2136);
	v->a[93981] = 1;
	v->a[93982] = sym_heredoc_body;
	v->a[93983] = state(1369);
	v->a[93984] = 2;
	v->a[93985] = sym__heredoc_body;
	v->a[93986] = sym__simple_heredoc_body;
	v->a[93987] = 5;
	v->a[93988] = actions(1074);
	v->a[93989] = 1;
	v->a[93990] = sym_comment;
	v->a[93991] = actions(4018);
	v->a[93992] = 1;
	v->a[93993] = sym__heredoc_body_beginning;
	v->a[93994] = actions(4020);
	v->a[93995] = 1;
	v->a[93996] = sym_simple_heredoc_body;
	v->a[93997] = state(2136);
	v->a[93998] = 1;
	v->a[93999] = sym_heredoc_body;
	small_parse_table_4700(v);
}

/* EOF small_parse_table_939.c */
