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
	v->a[61900] = anon_sym_DOLLAR;
	v->a[61901] = anon_sym_DQUOTE;
	v->a[61902] = sym_raw_string;
	v->a[61903] = sym_number;
	v->a[61904] = anon_sym_DOLLAR_LBRACE;
	v->a[61905] = anon_sym_DOLLAR_LPAREN;
	v->a[61906] = anon_sym_BQUOTE;
	v->a[61907] = sym_word;
	v->a[61908] = 3;
	v->a[61909] = actions(3);
	v->a[61910] = 1;
	v->a[61911] = sym_comment;
	v->a[61912] = actions(1100);
	v->a[61913] = 2;
	v->a[61914] = sym_file_descriptor;
	v->a[61915] = sym__concat;
	v->a[61916] = actions(1098);
	v->a[61917] = 23;
	v->a[61918] = anon_sym_AMP_AMP;
	v->a[61919] = anon_sym_PIPE_PIPE;
	small_parse_table_3096(v);
}

void	small_parse_table_3096(t_small_parse_table_array *v)
{
	v->a[61920] = anon_sym_LT;
	v->a[61921] = anon_sym_GT;
	v->a[61922] = anon_sym_GT_GT;
	v->a[61923] = anon_sym_AMP_GT;
	v->a[61924] = anon_sym_AMP_GT_GT;
	v->a[61925] = anon_sym_LT_AMP;
	v->a[61926] = anon_sym_GT_AMP;
	v->a[61927] = anon_sym_GT_PIPE;
	v->a[61928] = anon_sym_LT_AMP_DASH;
	v->a[61929] = anon_sym_GT_AMP_DASH;
	v->a[61930] = aux_sym_heredoc_redirect_token1;
	v->a[61931] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[61932] = aux_sym_concatenation_token1;
	v->a[61933] = anon_sym_DOLLAR;
	v->a[61934] = anon_sym_DQUOTE;
	v->a[61935] = sym_raw_string;
	v->a[61936] = sym_number;
	v->a[61937] = anon_sym_DOLLAR_LBRACE;
	v->a[61938] = anon_sym_DOLLAR_LPAREN;
	v->a[61939] = anon_sym_BQUOTE;
	small_parse_table_3097(v);
}

void	small_parse_table_3097(t_small_parse_table_array *v)
{
	v->a[61940] = sym_word;
	v->a[61941] = 12;
	v->a[61942] = actions(3);
	v->a[61943] = 1;
	v->a[61944] = sym_comment;
	v->a[61945] = actions(766);
	v->a[61946] = 1;
	v->a[61947] = anon_sym_PIPE;
	v->a[61948] = actions(840);
	v->a[61949] = 1;
	v->a[61950] = ts_builtin_sym_end;
	v->a[61951] = actions(2017);
	v->a[61952] = 1;
	v->a[61953] = aux_sym_heredoc_redirect_token1;
	v->a[61954] = actions(2019);
	v->a[61955] = 1;
	v->a[61956] = sym_file_descriptor;
	v->a[61957] = state(790);
	v->a[61958] = 1;
	v->a[61959] = sym_terminator;
	small_parse_table_3098(v);
}

void	small_parse_table_3098(t_small_parse_table_array *v)
{
	v->a[61960] = actions(804);
	v->a[61961] = 2;
	v->a[61962] = anon_sym_LT_LT;
	v->a[61963] = anon_sym_LT_LT_DASH;
	v->a[61964] = actions(835);
	v->a[61965] = 2;
	v->a[61966] = anon_sym_AMP_AMP;
	v->a[61967] = anon_sym_PIPE_PIPE;
	v->a[61968] = actions(2015);
	v->a[61969] = 2;
	v->a[61970] = anon_sym_LT_AMP_DASH;
	v->a[61971] = anon_sym_GT_AMP_DASH;
	v->a[61972] = actions(833);
	v->a[61973] = 3;
	v->a[61974] = anon_sym_SEMI_SEMI;
	v->a[61975] = anon_sym_AMP;
	v->a[61976] = anon_sym_SEMI;
	v->a[61977] = state(1133);
	v->a[61978] = 3;
	v->a[61979] = sym_file_redirect;
	small_parse_table_3099(v);
}

void	small_parse_table_3099(t_small_parse_table_array *v)
{
	v->a[61980] = sym_heredoc_redirect;
	v->a[61981] = aux_sym_redirected_statement_repeat1;
	v->a[61982] = actions(2013);
	v->a[61983] = 8;
	v->a[61984] = anon_sym_LT;
	v->a[61985] = anon_sym_GT;
	v->a[61986] = anon_sym_GT_GT;
	v->a[61987] = anon_sym_AMP_GT;
	v->a[61988] = anon_sym_AMP_GT_GT;
	v->a[61989] = anon_sym_LT_AMP;
	v->a[61990] = anon_sym_GT_AMP;
	v->a[61991] = anon_sym_GT_PIPE;
	v->a[61992] = 3;
	v->a[61993] = actions(3);
	v->a[61994] = 1;
	v->a[61995] = sym_comment;
	v->a[61996] = actions(1104);
	v->a[61997] = 2;
	v->a[61998] = sym_file_descriptor;
	v->a[61999] = sym__concat;
	small_parse_table_3100(v);
}

/* EOF small_parse_table_619.c */
