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
	v->a[63902] = anon_sym_LT_AMP_DASH;
	v->a[63903] = anon_sym_GT_AMP_DASH;
	v->a[63904] = anon_sym_LT_LT;
	v->a[63905] = anon_sym_LT_LT_DASH;
	v->a[63906] = anon_sym_AMP;
	v->a[63907] = anon_sym_SEMI;
	v->a[63908] = 6;
	v->a[63909] = actions(3);
	v->a[63910] = 1;
	v->a[63911] = sym_comment;
	v->a[63912] = actions(2298);
	v->a[63913] = 1;
	v->a[63914] = aux_sym_concatenation_token1;
	v->a[63915] = actions(2300);
	v->a[63916] = 1;
	v->a[63917] = sym__concat;
	v->a[63918] = state(1032);
	v->a[63919] = 1;
	small_parse_table_3196(v);
}

void	small_parse_table_3196(t_small_parse_table_array *v)
{
	v->a[63920] = aux_sym_concatenation_repeat1;
	v->a[63921] = actions(1127);
	v->a[63922] = 2;
	v->a[63923] = sym_file_descriptor;
	v->a[63924] = aux_sym_heredoc_redirect_token1;
	v->a[63925] = actions(1129);
	v->a[63926] = 19;
	v->a[63927] = anon_sym_esac;
	v->a[63928] = anon_sym_PIPE;
	v->a[63929] = anon_sym_SEMI_SEMI;
	v->a[63930] = anon_sym_AMP_AMP;
	v->a[63931] = anon_sym_PIPE_PIPE;
	v->a[63932] = anon_sym_LT;
	v->a[63933] = anon_sym_GT;
	v->a[63934] = anon_sym_GT_GT;
	v->a[63935] = anon_sym_AMP_GT;
	v->a[63936] = anon_sym_AMP_GT_GT;
	v->a[63937] = anon_sym_LT_AMP;
	v->a[63938] = anon_sym_GT_AMP;
	v->a[63939] = anon_sym_GT_PIPE;
	small_parse_table_3197(v);
}

void	small_parse_table_3197(t_small_parse_table_array *v)
{
	v->a[63940] = anon_sym_LT_AMP_DASH;
	v->a[63941] = anon_sym_GT_AMP_DASH;
	v->a[63942] = anon_sym_LT_LT;
	v->a[63943] = anon_sym_LT_LT_DASH;
	v->a[63944] = anon_sym_AMP;
	v->a[63945] = anon_sym_SEMI;
	v->a[63946] = 5;
	v->a[63947] = actions(3);
	v->a[63948] = 1;
	v->a[63949] = sym_comment;
	v->a[63950] = actions(1006);
	v->a[63951] = 1;
	v->a[63952] = sym_file_descriptor;
	v->a[63953] = actions(1095);
	v->a[63954] = 1;
	v->a[63955] = sym_variable_name;
	v->a[63956] = state(1151);
	v->a[63957] = 2;
	v->a[63958] = sym_variable_assignment;
	v->a[63959] = aux_sym_variable_assignments_repeat1;
	small_parse_table_3198(v);
}

void	small_parse_table_3198(t_small_parse_table_array *v)
{
	v->a[63960] = actions(1000);
	v->a[63961] = 20;
	v->a[63962] = anon_sym_LT;
	v->a[63963] = anon_sym_GT;
	v->a[63964] = anon_sym_GT_GT;
	v->a[63965] = anon_sym_AMP_GT;
	v->a[63966] = anon_sym_AMP_GT_GT;
	v->a[63967] = anon_sym_LT_AMP;
	v->a[63968] = anon_sym_GT_AMP;
	v->a[63969] = anon_sym_GT_PIPE;
	v->a[63970] = anon_sym_LT_AMP_DASH;
	v->a[63971] = anon_sym_GT_AMP_DASH;
	v->a[63972] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[63973] = anon_sym_DOLLAR;
	v->a[63974] = anon_sym_DQUOTE;
	v->a[63975] = sym_raw_string;
	v->a[63976] = aux_sym_number_token1;
	v->a[63977] = aux_sym_number_token2;
	v->a[63978] = anon_sym_DOLLAR_LBRACE;
	v->a[63979] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_3199(v);
}

void	small_parse_table_3199(t_small_parse_table_array *v)
{
	v->a[63980] = anon_sym_BQUOTE;
	v->a[63981] = sym_word;
	v->a[63982] = 8;
	v->a[63983] = actions(3);
	v->a[63984] = 1;
	v->a[63985] = sym_comment;
	v->a[63986] = actions(2308);
	v->a[63987] = 1;
	v->a[63988] = aux_sym_heredoc_redirect_token1;
	v->a[63989] = actions(2310);
	v->a[63990] = 1;
	v->a[63991] = sym_file_descriptor;
	v->a[63992] = actions(1037);
	v->a[63993] = 2;
	v->a[63994] = anon_sym_LT_LT;
	v->a[63995] = anon_sym_LT_LT_DASH;
	v->a[63996] = actions(2306);
	v->a[63997] = 2;
	v->a[63998] = anon_sym_LT_AMP_DASH;
	v->a[63999] = anon_sym_GT_AMP_DASH;
	small_parse_table_3200(v);
}

/* EOF small_parse_table_639.c */
