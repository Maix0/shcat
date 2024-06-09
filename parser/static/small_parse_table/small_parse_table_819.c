/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_819.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4095(t_small_parse_table_array *v)
{
	v->a[81900] = actions(3);
	v->a[81901] = 1;
	v->a[81902] = sym_comment;
	v->a[81903] = actions(949);
	v->a[81904] = 1;
	v->a[81905] = sym_file_descriptor;
	v->a[81906] = actions(3399);
	v->a[81907] = 1;
	v->a[81908] = aux_sym_heredoc_redirect_token1;
	v->a[81909] = state(2060);
	v->a[81910] = 1;
	v->a[81911] = sym__heredoc_expression;
	v->a[81912] = actions(925);
	v->a[81913] = 2;
	v->a[81914] = anon_sym_AMP_AMP;
	v->a[81915] = anon_sym_PIPE_PIPE;
	v->a[81916] = actions(929);
	v->a[81917] = 2;
	v->a[81918] = anon_sym_LT_AMP_DASH;
	v->a[81919] = anon_sym_GT_AMP_DASH;
	small_parse_table_4096(v);
}

void	small_parse_table_4096(t_small_parse_table_array *v)
{
	v->a[81920] = state(1523);
	v->a[81921] = 2;
	v->a[81922] = sym_file_redirect;
	v->a[81923] = aux_sym_redirected_statement_repeat2;
	v->a[81924] = actions(927);
	v->a[81925] = 8;
	v->a[81926] = anon_sym_LT;
	v->a[81927] = anon_sym_GT;
	v->a[81928] = anon_sym_GT_GT;
	v->a[81929] = anon_sym_AMP_GT;
	v->a[81930] = anon_sym_AMP_GT_GT;
	v->a[81931] = anon_sym_LT_AMP;
	v->a[81932] = anon_sym_GT_AMP;
	v->a[81933] = anon_sym_GT_PIPE;
	v->a[81934] = 5;
	v->a[81935] = actions(1404);
	v->a[81936] = 1;
	v->a[81937] = sym_comment;
	v->a[81938] = actions(2249);
	v->a[81939] = 1;
	small_parse_table_4097(v);
}

void	small_parse_table_4097(t_small_parse_table_array *v)
{
	v->a[81940] = anon_sym_PIPE;
	v->a[81941] = state(1506);
	v->a[81942] = 1;
	v->a[81943] = aux_sym_pipeline_repeat1;
	v->a[81944] = actions(2252);
	v->a[81945] = 6;
	v->a[81946] = anon_sym_LT;
	v->a[81947] = anon_sym_GT;
	v->a[81948] = anon_sym_AMP_GT;
	v->a[81949] = anon_sym_LT_AMP;
	v->a[81950] = anon_sym_GT_AMP;
	v->a[81951] = anon_sym_LT_LT;
	v->a[81952] = actions(2247);
	v->a[81953] = 9;
	v->a[81954] = sym_file_descriptor;
	v->a[81955] = anon_sym_AMP_AMP;
	v->a[81956] = anon_sym_PIPE_PIPE;
	v->a[81957] = anon_sym_GT_GT;
	v->a[81958] = anon_sym_AMP_GT_GT;
	v->a[81959] = anon_sym_GT_PIPE;
	small_parse_table_4098(v);
}

void	small_parse_table_4098(t_small_parse_table_array *v)
{
	v->a[81960] = anon_sym_LT_AMP_DASH;
	v->a[81961] = anon_sym_GT_AMP_DASH;
	v->a[81962] = anon_sym_LT_LT_DASH;
	v->a[81963] = 8;
	v->a[81964] = actions(3);
	v->a[81965] = 1;
	v->a[81966] = sym_comment;
	v->a[81967] = actions(949);
	v->a[81968] = 1;
	v->a[81969] = sym_file_descriptor;
	v->a[81970] = actions(3401);
	v->a[81971] = 1;
	v->a[81972] = aux_sym_heredoc_redirect_token1;
	v->a[81973] = state(2064);
	v->a[81974] = 1;
	v->a[81975] = sym__heredoc_expression;
	v->a[81976] = actions(925);
	v->a[81977] = 2;
	v->a[81978] = anon_sym_AMP_AMP;
	v->a[81979] = anon_sym_PIPE_PIPE;
	small_parse_table_4099(v);
}

void	small_parse_table_4099(t_small_parse_table_array *v)
{
	v->a[81980] = actions(929);
	v->a[81981] = 2;
	v->a[81982] = anon_sym_LT_AMP_DASH;
	v->a[81983] = anon_sym_GT_AMP_DASH;
	v->a[81984] = state(1523);
	v->a[81985] = 2;
	v->a[81986] = sym_file_redirect;
	v->a[81987] = aux_sym_redirected_statement_repeat2;
	v->a[81988] = actions(927);
	v->a[81989] = 8;
	v->a[81990] = anon_sym_LT;
	v->a[81991] = anon_sym_GT;
	v->a[81992] = anon_sym_GT_GT;
	v->a[81993] = anon_sym_AMP_GT;
	v->a[81994] = anon_sym_AMP_GT_GT;
	v->a[81995] = anon_sym_LT_AMP;
	v->a[81996] = anon_sym_GT_AMP;
	v->a[81997] = anon_sym_GT_PIPE;
	v->a[81998] = 12;
	v->a[81999] = actions(3);
	small_parse_table_4100(v);
}

/* EOF small_parse_table_819.c */
