/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_619.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3095(t_small_parse_table_array *v)
{
	v->a[61900] = anon_sym_GT_GT;
	v->a[61901] = anon_sym_LT_AMP;
	v->a[61902] = anon_sym_GT_AMP;
	v->a[61903] = anon_sym_GT_PIPE;
	v->a[61904] = 12;
	v->a[61905] = actions(3);
	v->a[61906] = 1;
	v->a[61907] = sym_comment;
	v->a[61908] = actions(682);
	v->a[61909] = 1;
	v->a[61910] = anon_sym_PIPE;
	v->a[61911] = actions(695);
	v->a[61912] = 1;
	v->a[61913] = anon_sym_RPAREN;
	v->a[61914] = actions(2009);
	v->a[61915] = 1;
	v->a[61916] = aux_sym_heredoc_redirect_token1;
	v->a[61917] = actions(2011);
	v->a[61918] = 1;
	v->a[61919] = sym_file_descriptor;
	small_parse_table_3096(v);
}

void	small_parse_table_3096(t_small_parse_table_array *v)
{
	v->a[61920] = state(744);
	v->a[61921] = 1;
	v->a[61922] = sym_terminator;
	v->a[61923] = actions(752);
	v->a[61924] = 2;
	v->a[61925] = anon_sym_AMP_AMP;
	v->a[61926] = anon_sym_PIPE_PIPE;
	v->a[61927] = actions(754);
	v->a[61928] = 2;
	v->a[61929] = anon_sym_LT_LT;
	v->a[61930] = anon_sym_LT_LT_DASH;
	v->a[61931] = actions(2007);
	v->a[61932] = 2;
	v->a[61933] = anon_sym_LT_AMP_DASH;
	v->a[61934] = anon_sym_GT_AMP_DASH;
	v->a[61935] = actions(750);
	v->a[61936] = 3;
	v->a[61937] = anon_sym_SEMI_SEMI;
	v->a[61938] = anon_sym_AMP;
	v->a[61939] = anon_sym_SEMI;
	small_parse_table_3097(v);
}

void	small_parse_table_3097(t_small_parse_table_array *v)
{
	v->a[61940] = state(1128);
	v->a[61941] = 3;
	v->a[61942] = sym_file_redirect;
	v->a[61943] = sym_heredoc_redirect;
	v->a[61944] = aux_sym_redirected_statement_repeat1;
	v->a[61945] = actions(2005);
	v->a[61946] = 6;
	v->a[61947] = anon_sym_LT;
	v->a[61948] = anon_sym_GT;
	v->a[61949] = anon_sym_GT_GT;
	v->a[61950] = anon_sym_LT_AMP;
	v->a[61951] = anon_sym_GT_AMP;
	v->a[61952] = anon_sym_GT_PIPE;
	v->a[61953] = 12;
	v->a[61954] = actions(3);
	v->a[61955] = 1;
	v->a[61956] = sym_comment;
	v->a[61957] = actions(682);
	v->a[61958] = 1;
	v->a[61959] = anon_sym_PIPE;
	small_parse_table_3098(v);
}

void	small_parse_table_3098(t_small_parse_table_array *v)
{
	v->a[61960] = actions(695);
	v->a[61961] = 1;
	v->a[61962] = anon_sym_RPAREN;
	v->a[61963] = actions(2009);
	v->a[61964] = 1;
	v->a[61965] = aux_sym_heredoc_redirect_token1;
	v->a[61966] = actions(2011);
	v->a[61967] = 1;
	v->a[61968] = sym_file_descriptor;
	v->a[61969] = state(742);
	v->a[61970] = 1;
	v->a[61971] = sym_terminator;
	v->a[61972] = actions(752);
	v->a[61973] = 2;
	v->a[61974] = anon_sym_AMP_AMP;
	v->a[61975] = anon_sym_PIPE_PIPE;
	v->a[61976] = actions(754);
	v->a[61977] = 2;
	v->a[61978] = anon_sym_LT_LT;
	v->a[61979] = anon_sym_LT_LT_DASH;
	small_parse_table_3099(v);
}

void	small_parse_table_3099(t_small_parse_table_array *v)
{
	v->a[61980] = actions(2007);
	v->a[61981] = 2;
	v->a[61982] = anon_sym_LT_AMP_DASH;
	v->a[61983] = anon_sym_GT_AMP_DASH;
	v->a[61984] = actions(750);
	v->a[61985] = 3;
	v->a[61986] = anon_sym_SEMI_SEMI;
	v->a[61987] = anon_sym_AMP;
	v->a[61988] = anon_sym_SEMI;
	v->a[61989] = state(1128);
	v->a[61990] = 3;
	v->a[61991] = sym_file_redirect;
	v->a[61992] = sym_heredoc_redirect;
	v->a[61993] = aux_sym_redirected_statement_repeat1;
	v->a[61994] = actions(2005);
	v->a[61995] = 6;
	v->a[61996] = anon_sym_LT;
	v->a[61997] = anon_sym_GT;
	v->a[61998] = anon_sym_GT_GT;
	v->a[61999] = anon_sym_LT_AMP;
	small_parse_table_3100(v);
}

/* EOF small_parse_table_619.c */
