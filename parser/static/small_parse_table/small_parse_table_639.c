/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_639.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3195(t_small_parse_table_array *v)
{
	v->a[63900] = sym_terminator;
	v->a[63901] = actions(764);
	v->a[63902] = 2;
	v->a[63903] = anon_sym_esac;
	v->a[63904] = anon_sym_SEMI_SEMI;
	v->a[63905] = actions(768);
	v->a[63906] = 2;
	v->a[63907] = anon_sym_AMP_AMP;
	v->a[63908] = anon_sym_PIPE_PIPE;
	v->a[63909] = actions(770);
	v->a[63910] = 2;
	v->a[63911] = anon_sym_LT_LT;
	v->a[63912] = anon_sym_LT_LT_DASH;
	v->a[63913] = actions(772);
	v->a[63914] = 2;
	v->a[63915] = anon_sym_AMP;
	v->a[63916] = anon_sym_SEMI;
	v->a[63917] = actions(2001);
	v->a[63918] = 2;
	v->a[63919] = anon_sym_LT_AMP_DASH;
	small_parse_table_3196(v);
}

void	small_parse_table_3196(t_small_parse_table_array *v)
{
	v->a[63920] = anon_sym_GT_AMP_DASH;
	v->a[63921] = state(1123);
	v->a[63922] = 3;
	v->a[63923] = sym_file_redirect;
	v->a[63924] = sym_heredoc_redirect;
	v->a[63925] = aux_sym_redirected_statement_repeat1;
	v->a[63926] = actions(1999);
	v->a[63927] = 8;
	v->a[63928] = anon_sym_LT;
	v->a[63929] = anon_sym_GT;
	v->a[63930] = anon_sym_GT_GT;
	v->a[63931] = anon_sym_AMP_GT;
	v->a[63932] = anon_sym_AMP_GT_GT;
	v->a[63933] = anon_sym_LT_AMP;
	v->a[63934] = anon_sym_GT_AMP;
	v->a[63935] = anon_sym_GT_PIPE;
	v->a[63936] = 12;
	v->a[63937] = actions(3);
	v->a[63938] = 1;
	v->a[63939] = sym_comment;
	small_parse_table_3197(v);
}

void	small_parse_table_3197(t_small_parse_table_array *v)
{
	v->a[63940] = actions(766);
	v->a[63941] = 1;
	v->a[63942] = anon_sym_PIPE;
	v->a[63943] = actions(840);
	v->a[63944] = 1;
	v->a[63945] = ts_builtin_sym_end;
	v->a[63946] = actions(2017);
	v->a[63947] = 1;
	v->a[63948] = aux_sym_heredoc_redirect_token1;
	v->a[63949] = actions(2019);
	v->a[63950] = 1;
	v->a[63951] = sym_file_descriptor;
	v->a[63952] = state(785);
	v->a[63953] = 1;
	v->a[63954] = sym_terminator;
	v->a[63955] = actions(804);
	v->a[63956] = 2;
	v->a[63957] = anon_sym_LT_LT;
	v->a[63958] = anon_sym_LT_LT_DASH;
	v->a[63959] = actions(835);
	small_parse_table_3198(v);
}

void	small_parse_table_3198(t_small_parse_table_array *v)
{
	v->a[63960] = 2;
	v->a[63961] = anon_sym_AMP_AMP;
	v->a[63962] = anon_sym_PIPE_PIPE;
	v->a[63963] = actions(2015);
	v->a[63964] = 2;
	v->a[63965] = anon_sym_LT_AMP_DASH;
	v->a[63966] = anon_sym_GT_AMP_DASH;
	v->a[63967] = actions(833);
	v->a[63968] = 3;
	v->a[63969] = anon_sym_SEMI_SEMI;
	v->a[63970] = anon_sym_AMP;
	v->a[63971] = anon_sym_SEMI;
	v->a[63972] = state(1133);
	v->a[63973] = 3;
	v->a[63974] = sym_file_redirect;
	v->a[63975] = sym_heredoc_redirect;
	v->a[63976] = aux_sym_redirected_statement_repeat1;
	v->a[63977] = actions(2013);
	v->a[63978] = 8;
	v->a[63979] = anon_sym_LT;
	small_parse_table_3199(v);
}

void	small_parse_table_3199(t_small_parse_table_array *v)
{
	v->a[63980] = anon_sym_GT;
	v->a[63981] = anon_sym_GT_GT;
	v->a[63982] = anon_sym_AMP_GT;
	v->a[63983] = anon_sym_AMP_GT_GT;
	v->a[63984] = anon_sym_LT_AMP;
	v->a[63985] = anon_sym_GT_AMP;
	v->a[63986] = anon_sym_GT_PIPE;
	v->a[63987] = 3;
	v->a[63988] = actions(3);
	v->a[63989] = 1;
	v->a[63990] = sym_comment;
	v->a[63991] = actions(1118);
	v->a[63992] = 4;
	v->a[63993] = sym_file_descriptor;
	v->a[63994] = sym__concat;
	v->a[63995] = ts_builtin_sym_end;
	v->a[63996] = aux_sym_heredoc_redirect_token1;
	v->a[63997] = actions(1116);
	v->a[63998] = 21;
	v->a[63999] = anon_sym_PIPE;
	small_parse_table_3200(v);
}

/* EOF small_parse_table_639.c */
