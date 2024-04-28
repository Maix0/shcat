/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2859.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14295(t_small_parse_table_array *v)
{
	v->a[285900] = sym_raw_string;
	v->a[285901] = sym_ansi_c_string;
	v->a[285902] = anon_sym_DOLLAR_LBRACE;
	v->a[285903] = anon_sym_BQUOTE;
	v->a[285904] = anon_sym_DOLLAR_BQUOTE;
	v->a[285905] = anon_sym_LT_LPAREN;
	v->a[285906] = anon_sym_GT_LPAREN;
	v->a[285907] = 5;
	v->a[285908] = actions(71);
	v->a[285909] = 1;
	v->a[285910] = sym_comment;
	v->a[285911] = state(5471);
	v->a[285912] = 1;
	v->a[285913] = aux_sym_concatenation_repeat1;
	v->a[285914] = actions(12688);
	v->a[285915] = 2;
	v->a[285916] = sym__concat;
	v->a[285917] = aux_sym_concatenation_token1;
	v->a[285918] = actions(5695);
	v->a[285919] = 7;
	small_parse_table_14296(v);
}

void	small_parse_table_14296(t_small_parse_table_array *v)
{
	v->a[285920] = anon_sym_PIPE;
	v->a[285921] = anon_sym_LT;
	v->a[285922] = anon_sym_GT;
	v->a[285923] = anon_sym_LT_LT;
	v->a[285924] = anon_sym_AMP_GT;
	v->a[285925] = anon_sym_LT_AMP;
	v->a[285926] = anon_sym_GT_AMP;
	v->a[285927] = actions(5697);
	v->a[285928] = 10;
	v->a[285929] = sym_file_descriptor;
	v->a[285930] = anon_sym_PIPE_PIPE;
	v->a[285931] = anon_sym_AMP_AMP;
	v->a[285932] = anon_sym_GT_GT;
	v->a[285933] = anon_sym_PIPE_AMP;
	v->a[285934] = anon_sym_AMP_GT_GT;
	v->a[285935] = anon_sym_GT_PIPE;
	v->a[285936] = anon_sym_LT_AMP_DASH;
	v->a[285937] = anon_sym_GT_AMP_DASH;
	v->a[285938] = anon_sym_LT_LT_DASH;
	v->a[285939] = 5;
	small_parse_table_14297(v);
}

void	small_parse_table_14297(t_small_parse_table_array *v)
{
	v->a[285940] = actions(71);
	v->a[285941] = 1;
	v->a[285942] = sym_comment;
	v->a[285943] = state(5407);
	v->a[285944] = 1;
	v->a[285945] = aux_sym_concatenation_repeat1;
	v->a[285946] = actions(12688);
	v->a[285947] = 2;
	v->a[285948] = sym__concat;
	v->a[285949] = aux_sym_concatenation_token1;
	v->a[285950] = actions(2072);
	v->a[285951] = 7;
	v->a[285952] = anon_sym_PIPE;
	v->a[285953] = anon_sym_LT;
	v->a[285954] = anon_sym_GT;
	v->a[285955] = anon_sym_LT_LT;
	v->a[285956] = anon_sym_AMP_GT;
	v->a[285957] = anon_sym_LT_AMP;
	v->a[285958] = anon_sym_GT_AMP;
	v->a[285959] = actions(2074);
	small_parse_table_14298(v);
}

void	small_parse_table_14298(t_small_parse_table_array *v)
{
	v->a[285960] = 10;
	v->a[285961] = sym_file_descriptor;
	v->a[285962] = anon_sym_PIPE_PIPE;
	v->a[285963] = anon_sym_AMP_AMP;
	v->a[285964] = anon_sym_GT_GT;
	v->a[285965] = anon_sym_PIPE_AMP;
	v->a[285966] = anon_sym_AMP_GT_GT;
	v->a[285967] = anon_sym_GT_PIPE;
	v->a[285968] = anon_sym_LT_AMP_DASH;
	v->a[285969] = anon_sym_GT_AMP_DASH;
	v->a[285970] = anon_sym_LT_LT_DASH;
	v->a[285971] = 4;
	v->a[285972] = actions(71);
	v->a[285973] = 1;
	v->a[285974] = sym_comment;
	v->a[285975] = state(5436);
	v->a[285976] = 3;
	v->a[285977] = sym_file_redirect;
	v->a[285978] = sym_heredoc_redirect;
	v->a[285979] = aux_sym_redirected_statement_repeat1;
	small_parse_table_14299(v);
}

void	small_parse_table_14299(t_small_parse_table_array *v)
{
	v->a[285980] = actions(4270);
	v->a[285981] = 7;
	v->a[285982] = anon_sym_PIPE;
	v->a[285983] = anon_sym_LT;
	v->a[285984] = anon_sym_GT;
	v->a[285985] = anon_sym_LT_LT;
	v->a[285986] = anon_sym_AMP_GT;
	v->a[285987] = anon_sym_LT_AMP;
	v->a[285988] = anon_sym_GT_AMP;
	v->a[285989] = actions(4272);
	v->a[285990] = 10;
	v->a[285991] = sym_file_descriptor;
	v->a[285992] = anon_sym_PIPE_PIPE;
	v->a[285993] = anon_sym_AMP_AMP;
	v->a[285994] = anon_sym_GT_GT;
	v->a[285995] = anon_sym_PIPE_AMP;
	v->a[285996] = anon_sym_AMP_GT_GT;
	v->a[285997] = anon_sym_GT_PIPE;
	v->a[285998] = anon_sym_LT_AMP_DASH;
	v->a[285999] = anon_sym_GT_AMP_DASH;
	small_parse_table_14300(v);
}

/* EOF small_parse_table_2859.c */
