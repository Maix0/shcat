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
	v->a[63900] = anon_sym_GT_AMP;
	v->a[63901] = anon_sym_GT_PIPE;
	v->a[63902] = anon_sym_LT_GT;
	v->a[63903] = anon_sym_LT_LT;
	v->a[63904] = anon_sym_LT_LT_DASH;
	v->a[63905] = anon_sym_AMP;
	v->a[63906] = anon_sym_SEMI;
	v->a[63907] = 6;
	v->a[63908] = actions(3);
	v->a[63909] = 1;
	v->a[63910] = sym_comment;
	v->a[63911] = actions(2055);
	v->a[63912] = 1;
	v->a[63913] = aux_sym_heredoc_redirect_token1;
	v->a[63914] = actions(2314);
	v->a[63915] = 1;
	v->a[63916] = sym_file_descriptor;
	v->a[63917] = state(1204);
	v->a[63918] = 2;
	v->a[63919] = sym_file_redirect;
	small_parse_table_3196(v);
}

void	small_parse_table_3196(t_small_parse_table_array *v)
{
	v->a[63920] = aux_sym_redirected_statement_repeat2;
	v->a[63921] = actions(2311);
	v->a[63922] = 7;
	v->a[63923] = anon_sym_LT;
	v->a[63924] = anon_sym_GT;
	v->a[63925] = anon_sym_GT_GT;
	v->a[63926] = anon_sym_LT_AMP;
	v->a[63927] = anon_sym_GT_AMP;
	v->a[63928] = anon_sym_GT_PIPE;
	v->a[63929] = anon_sym_LT_GT;
	v->a[63930] = actions(2050);
	v->a[63931] = 8;
	v->a[63932] = anon_sym_PIPE;
	v->a[63933] = anon_sym_SEMI_SEMI;
	v->a[63934] = anon_sym_AMP_AMP;
	v->a[63935] = anon_sym_PIPE_PIPE;
	v->a[63936] = anon_sym_LT_LT;
	v->a[63937] = anon_sym_LT_LT_DASH;
	v->a[63938] = anon_sym_AMP;
	v->a[63939] = anon_sym_SEMI;
	small_parse_table_3197(v);
}

void	small_parse_table_3197(t_small_parse_table_array *v)
{
	v->a[63940] = 5;
	v->a[63941] = actions(3);
	v->a[63942] = 1;
	v->a[63943] = sym_comment;
	v->a[63944] = actions(2317);
	v->a[63945] = 1;
	v->a[63946] = anon_sym_PIPE;
	v->a[63947] = state(1200);
	v->a[63948] = 1;
	v->a[63949] = aux_sym_pipeline_repeat1;
	v->a[63950] = actions(2307);
	v->a[63951] = 2;
	v->a[63952] = sym_file_descriptor;
	v->a[63953] = aux_sym_heredoc_redirect_token1;
	v->a[63954] = actions(2305);
	v->a[63955] = 15;
	v->a[63956] = anon_sym_RPAREN;
	v->a[63957] = anon_sym_SEMI_SEMI;
	v->a[63958] = anon_sym_AMP_AMP;
	v->a[63959] = anon_sym_PIPE_PIPE;
	small_parse_table_3198(v);
}

void	small_parse_table_3198(t_small_parse_table_array *v)
{
	v->a[63960] = anon_sym_LT;
	v->a[63961] = anon_sym_GT;
	v->a[63962] = anon_sym_GT_GT;
	v->a[63963] = anon_sym_LT_AMP;
	v->a[63964] = anon_sym_GT_AMP;
	v->a[63965] = anon_sym_GT_PIPE;
	v->a[63966] = anon_sym_LT_GT;
	v->a[63967] = anon_sym_LT_LT;
	v->a[63968] = anon_sym_LT_LT_DASH;
	v->a[63969] = anon_sym_AMP;
	v->a[63970] = anon_sym_SEMI;
	v->a[63971] = 5;
	v->a[63972] = actions(3);
	v->a[63973] = 1;
	v->a[63974] = sym_comment;
	v->a[63975] = actions(2319);
	v->a[63976] = 1;
	v->a[63977] = anon_sym_PIPE;
	v->a[63978] = state(1206);
	v->a[63979] = 1;
	small_parse_table_3199(v);
}

void	small_parse_table_3199(t_small_parse_table_array *v)
{
	v->a[63980] = aux_sym_pipeline_repeat1;
	v->a[63981] = actions(1918);
	v->a[63982] = 3;
	v->a[63983] = sym_file_descriptor;
	v->a[63984] = ts_builtin_sym_end;
	v->a[63985] = aux_sym_heredoc_redirect_token1;
	v->a[63986] = actions(1923);
	v->a[63987] = 14;
	v->a[63988] = anon_sym_SEMI_SEMI;
	v->a[63989] = anon_sym_AMP_AMP;
	v->a[63990] = anon_sym_PIPE_PIPE;
	v->a[63991] = anon_sym_LT;
	v->a[63992] = anon_sym_GT;
	v->a[63993] = anon_sym_GT_GT;
	v->a[63994] = anon_sym_LT_AMP;
	v->a[63995] = anon_sym_GT_AMP;
	v->a[63996] = anon_sym_GT_PIPE;
	v->a[63997] = anon_sym_LT_GT;
	v->a[63998] = anon_sym_LT_LT;
	v->a[63999] = anon_sym_LT_LT_DASH;
	small_parse_table_3200(v);
}

/* EOF small_parse_table_639.c */
