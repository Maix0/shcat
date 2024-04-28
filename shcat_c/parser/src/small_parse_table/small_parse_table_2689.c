/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2689.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13445(t_small_parse_table_array *v)
{
	v->a[268900] = state(4455);
	v->a[268901] = 3;
	v->a[268902] = sym_file_redirect;
	v->a[268903] = sym_heredoc_redirect;
	v->a[268904] = aux_sym_redirected_statement_repeat1;
	v->a[268905] = actions(11333);
	v->a[268906] = 8;
	v->a[268907] = anon_sym_LT;
	v->a[268908] = anon_sym_GT;
	v->a[268909] = anon_sym_GT_GT;
	v->a[268910] = anon_sym_AMP_GT;
	v->a[268911] = anon_sym_AMP_GT_GT;
	v->a[268912] = anon_sym_LT_AMP;
	v->a[268913] = anon_sym_GT_AMP;
	v->a[268914] = anon_sym_GT_PIPE;
	v->a[268915] = 3;
	v->a[268916] = actions(3);
	v->a[268917] = 1;
	v->a[268918] = sym_comment;
	v->a[268919] = actions(12253);
	small_parse_table_13446(v);
}

void	small_parse_table_13446(t_small_parse_table_array *v)
{
	v->a[268920] = 3;
	v->a[268921] = sym_file_descriptor;
	v->a[268922] = ts_builtin_sym_end;
	v->a[268923] = aux_sym_heredoc_redirect_token1;
	v->a[268924] = actions(12255);
	v->a[268925] = 21;
	v->a[268926] = anon_sym_SEMI;
	v->a[268927] = anon_sym_PIPE_PIPE;
	v->a[268928] = anon_sym_AMP_AMP;
	v->a[268929] = anon_sym_PIPE;
	v->a[268930] = anon_sym_AMP;
	v->a[268931] = anon_sym_LT;
	v->a[268932] = anon_sym_GT;
	v->a[268933] = anon_sym_LT_LT;
	v->a[268934] = anon_sym_GT_GT;
	v->a[268935] = anon_sym_RPAREN;
	v->a[268936] = anon_sym_SEMI_SEMI;
	v->a[268937] = anon_sym_PIPE_AMP;
	v->a[268938] = anon_sym_AMP_GT;
	v->a[268939] = anon_sym_AMP_GT_GT;
	small_parse_table_13447(v);
}

void	small_parse_table_13447(t_small_parse_table_array *v)
{
	v->a[268940] = anon_sym_LT_AMP;
	v->a[268941] = anon_sym_GT_AMP;
	v->a[268942] = anon_sym_GT_PIPE;
	v->a[268943] = anon_sym_LT_AMP_DASH;
	v->a[268944] = anon_sym_GT_AMP_DASH;
	v->a[268945] = anon_sym_LT_LT_DASH;
	v->a[268946] = anon_sym_BQUOTE;
	v->a[268947] = 6;
	v->a[268948] = actions(3);
	v->a[268949] = 1;
	v->a[268950] = sym_comment;
	v->a[268951] = actions(11651);
	v->a[268952] = 1;
	v->a[268953] = aux_sym_concatenation_token1;
	v->a[268954] = actions(11653);
	v->a[268955] = 1;
	v->a[268956] = sym__concat;
	v->a[268957] = state(5031);
	v->a[268958] = 1;
	v->a[268959] = aux_sym_concatenation_repeat1;
	small_parse_table_13448(v);
}

void	small_parse_table_13448(t_small_parse_table_array *v)
{
	v->a[268960] = actions(5723);
	v->a[268961] = 2;
	v->a[268962] = sym_file_descriptor;
	v->a[268963] = aux_sym_heredoc_redirect_token1;
	v->a[268964] = actions(5721);
	v->a[268965] = 19;
	v->a[268966] = anon_sym_SEMI;
	v->a[268967] = anon_sym_PIPE_PIPE;
	v->a[268968] = anon_sym_AMP_AMP;
	v->a[268969] = anon_sym_PIPE;
	v->a[268970] = anon_sym_AMP;
	v->a[268971] = anon_sym_LT;
	v->a[268972] = anon_sym_GT;
	v->a[268973] = anon_sym_LT_LT;
	v->a[268974] = anon_sym_GT_GT;
	v->a[268975] = anon_sym_SEMI_SEMI;
	v->a[268976] = anon_sym_PIPE_AMP;
	v->a[268977] = anon_sym_AMP_GT;
	v->a[268978] = anon_sym_AMP_GT_GT;
	v->a[268979] = anon_sym_LT_AMP;
	small_parse_table_13449(v);
}

void	small_parse_table_13449(t_small_parse_table_array *v)
{
	v->a[268980] = anon_sym_GT_AMP;
	v->a[268981] = anon_sym_GT_PIPE;
	v->a[268982] = anon_sym_LT_AMP_DASH;
	v->a[268983] = anon_sym_GT_AMP_DASH;
	v->a[268984] = anon_sym_LT_LT_DASH;
	v->a[268985] = 5;
	v->a[268986] = actions(3);
	v->a[268987] = 1;
	v->a[268988] = sym_comment;
	v->a[268989] = state(5602);
	v->a[268990] = 1;
	v->a[268991] = aux_sym_pipeline_repeat1;
	v->a[268992] = actions(11745);
	v->a[268993] = 2;
	v->a[268994] = anon_sym_PIPE;
	v->a[268995] = anon_sym_PIPE_AMP;
	v->a[268996] = actions(11748);
	v->a[268997] = 2;
	v->a[268998] = sym_file_descriptor;
	v->a[268999] = aux_sym_heredoc_redirect_token1;
	small_parse_table_13450(v);
}

/* EOF small_parse_table_2689.c */
