/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_699.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3495(t_small_parse_table_array *v)
{
	v->a[69900] = actions(2053);
	v->a[69901] = 5;
	v->a[69902] = anon_sym_PIPE;
	v->a[69903] = anon_sym_AMP_AMP;
	v->a[69904] = anon_sym_PIPE_PIPE;
	v->a[69905] = anon_sym_LT_LT;
	v->a[69906] = anon_sym_LT_LT_DASH;
	v->a[69907] = actions(2432);
	v->a[69908] = 7;
	v->a[69909] = anon_sym_LT;
	v->a[69910] = anon_sym_GT;
	v->a[69911] = anon_sym_GT_GT;
	v->a[69912] = anon_sym_LT_AMP;
	v->a[69913] = anon_sym_GT_AMP;
	v->a[69914] = anon_sym_GT_PIPE;
	v->a[69915] = anon_sym_LT_GT;
	v->a[69916] = 6;
	v->a[69917] = actions(3);
	v->a[69918] = 1;
	v->a[69919] = sym_comment;
	small_parse_table_3496(v);
}

void	small_parse_table_3496(t_small_parse_table_array *v)
{
	v->a[69920] = actions(2001);
	v->a[69921] = 1;
	v->a[69922] = aux_sym_heredoc_redirect_token1;
	v->a[69923] = actions(2743);
	v->a[69924] = 1;
	v->a[69925] = sym_file_descriptor;
	v->a[69926] = state(1381);
	v->a[69927] = 2;
	v->a[69928] = sym_file_redirect;
	v->a[69929] = aux_sym_redirected_statement_repeat2;
	v->a[69930] = actions(2003);
	v->a[69931] = 5;
	v->a[69932] = anon_sym_PIPE;
	v->a[69933] = anon_sym_AMP_AMP;
	v->a[69934] = anon_sym_PIPE_PIPE;
	v->a[69935] = anon_sym_LT_LT;
	v->a[69936] = anon_sym_LT_LT_DASH;
	v->a[69937] = actions(2740);
	v->a[69938] = 7;
	v->a[69939] = anon_sym_LT;
	small_parse_table_3497(v);
}

void	small_parse_table_3497(t_small_parse_table_array *v)
{
	v->a[69940] = anon_sym_GT;
	v->a[69941] = anon_sym_GT_GT;
	v->a[69942] = anon_sym_LT_AMP;
	v->a[69943] = anon_sym_GT_AMP;
	v->a[69944] = anon_sym_GT_PIPE;
	v->a[69945] = anon_sym_LT_GT;
	v->a[69946] = 5;
	v->a[69947] = actions(664);
	v->a[69948] = 1;
	v->a[69949] = sym_comment;
	v->a[69950] = actions(2746);
	v->a[69951] = 1;
	v->a[69952] = sym_variable_name;
	v->a[69953] = state(1367);
	v->a[69954] = 2;
	v->a[69955] = sym_variable_assignment;
	v->a[69956] = aux_sym__variable_assignments_repeat1;
	v->a[69957] = actions(1906);
	v->a[69958] = 4;
	v->a[69959] = anon_sym_PIPE;
	small_parse_table_3498(v);
}

void	small_parse_table_3498(t_small_parse_table_array *v)
{
	v->a[69960] = anon_sym_LT;
	v->a[69961] = anon_sym_GT;
	v->a[69962] = anon_sym_LT_LT;
	v->a[69963] = actions(1908);
	v->a[69964] = 9;
	v->a[69965] = sym_file_descriptor;
	v->a[69966] = anon_sym_AMP_AMP;
	v->a[69967] = anon_sym_PIPE_PIPE;
	v->a[69968] = anon_sym_GT_GT;
	v->a[69969] = anon_sym_LT_AMP;
	v->a[69970] = anon_sym_GT_AMP;
	v->a[69971] = anon_sym_GT_PIPE;
	v->a[69972] = anon_sym_LT_GT;
	v->a[69973] = anon_sym_LT_LT_DASH;
	v->a[69974] = 6;
	v->a[69975] = actions(3);
	v->a[69976] = 1;
	v->a[69977] = sym_comment;
	v->a[69978] = actions(2111);
	v->a[69979] = 1;
	small_parse_table_3499(v);
}

void	small_parse_table_3499(t_small_parse_table_array *v)
{
	v->a[69980] = aux_sym_heredoc_redirect_token1;
	v->a[69981] = actions(2738);
	v->a[69982] = 1;
	v->a[69983] = sym_file_descriptor;
	v->a[69984] = state(1381);
	v->a[69985] = 2;
	v->a[69986] = sym_file_redirect;
	v->a[69987] = aux_sym_redirected_statement_repeat2;
	v->a[69988] = actions(2109);
	v->a[69989] = 5;
	v->a[69990] = anon_sym_PIPE;
	v->a[69991] = anon_sym_AMP_AMP;
	v->a[69992] = anon_sym_PIPE_PIPE;
	v->a[69993] = anon_sym_LT_LT;
	v->a[69994] = anon_sym_LT_LT_DASH;
	v->a[69995] = actions(2432);
	v->a[69996] = 7;
	v->a[69997] = anon_sym_LT;
	v->a[69998] = anon_sym_GT;
	v->a[69999] = anon_sym_GT_GT;
	small_parse_table_3500(v);
}

/* EOF small_parse_table_699.c */
