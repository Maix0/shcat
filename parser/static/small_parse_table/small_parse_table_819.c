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
	v->a[81900] = actions(2137);
	v->a[81901] = 3;
	v->a[81902] = anon_sym_PIPE;
	v->a[81903] = anon_sym_AMP_AMP;
	v->a[81904] = anon_sym_PIPE_PIPE;
	v->a[81905] = state(1556);
	v->a[81906] = 3;
	v->a[81907] = sym_file_redirect;
	v->a[81908] = sym_heredoc_redirect;
	v->a[81909] = aux_sym_redirected_statement_repeat1;
	v->a[81910] = actions(3004);
	v->a[81911] = 8;
	v->a[81912] = anon_sym_LT;
	v->a[81913] = anon_sym_GT;
	v->a[81914] = anon_sym_GT_GT;
	v->a[81915] = anon_sym_AMP_GT;
	v->a[81916] = anon_sym_AMP_GT_GT;
	v->a[81917] = anon_sym_LT_AMP;
	v->a[81918] = anon_sym_GT_AMP;
	v->a[81919] = anon_sym_GT_PIPE;
	small_parse_table_4096(v);
}

void	small_parse_table_4096(t_small_parse_table_array *v)
{
	v->a[81920] = 4;
	v->a[81921] = actions(3);
	v->a[81922] = 1;
	v->a[81923] = sym_comment;
	v->a[81924] = actions(803);
	v->a[81925] = 2;
	v->a[81926] = sym_file_descriptor;
	v->a[81927] = aux_sym_heredoc_redirect_token1;
	v->a[81928] = state(1546);
	v->a[81929] = 3;
	v->a[81930] = sym_file_redirect;
	v->a[81931] = sym_heredoc_redirect;
	v->a[81932] = aux_sym_redirected_statement_repeat1;
	v->a[81933] = actions(809);
	v->a[81934] = 15;
	v->a[81935] = anon_sym_PIPE;
	v->a[81936] = anon_sym_AMP_AMP;
	v->a[81937] = anon_sym_PIPE_PIPE;
	v->a[81938] = anon_sym_LT;
	v->a[81939] = anon_sym_GT;
	small_parse_table_4097(v);
}

void	small_parse_table_4097(t_small_parse_table_array *v)
{
	v->a[81940] = anon_sym_GT_GT;
	v->a[81941] = anon_sym_AMP_GT;
	v->a[81942] = anon_sym_AMP_GT_GT;
	v->a[81943] = anon_sym_LT_AMP;
	v->a[81944] = anon_sym_GT_AMP;
	v->a[81945] = anon_sym_GT_PIPE;
	v->a[81946] = anon_sym_LT_AMP_DASH;
	v->a[81947] = anon_sym_GT_AMP_DASH;
	v->a[81948] = anon_sym_LT_LT;
	v->a[81949] = anon_sym_LT_LT_DASH;
	v->a[81950] = 5;
	v->a[81951] = actions(1094);
	v->a[81952] = 1;
	v->a[81953] = sym_comment;
	v->a[81954] = state(1574);
	v->a[81955] = 1;
	v->a[81956] = aux_sym_concatenation_repeat1;
	v->a[81957] = actions(3013);
	v->a[81958] = 2;
	v->a[81959] = sym__concat;
	small_parse_table_4098(v);
}

void	small_parse_table_4098(t_small_parse_table_array *v)
{
	v->a[81960] = aux_sym_concatenation_token1;
	v->a[81961] = actions(541);
	v->a[81962] = 7;
	v->a[81963] = anon_sym_PIPE;
	v->a[81964] = anon_sym_LT;
	v->a[81965] = anon_sym_GT;
	v->a[81966] = anon_sym_AMP_GT;
	v->a[81967] = anon_sym_LT_AMP;
	v->a[81968] = anon_sym_GT_AMP;
	v->a[81969] = anon_sym_LT_LT;
	v->a[81970] = actions(543);
	v->a[81971] = 9;
	v->a[81972] = sym_file_descriptor;
	v->a[81973] = anon_sym_AMP_AMP;
	v->a[81974] = anon_sym_PIPE_PIPE;
	v->a[81975] = anon_sym_GT_GT;
	v->a[81976] = anon_sym_AMP_GT_GT;
	v->a[81977] = anon_sym_GT_PIPE;
	v->a[81978] = anon_sym_LT_AMP_DASH;
	v->a[81979] = anon_sym_GT_AMP_DASH;
	small_parse_table_4099(v);
}

void	small_parse_table_4099(t_small_parse_table_array *v)
{
	v->a[81980] = anon_sym_LT_LT_DASH;
	v->a[81981] = 10;
	v->a[81982] = actions(1094);
	v->a[81983] = 1;
	v->a[81984] = sym_comment;
	v->a[81985] = actions(2176);
	v->a[81986] = 1;
	v->a[81987] = anon_sym_PIPE;
	v->a[81988] = actions(3021);
	v->a[81989] = 1;
	v->a[81990] = anon_sym_LT_LT;
	v->a[81991] = actions(3023);
	v->a[81992] = 1;
	v->a[81993] = anon_sym_LT_LT_DASH;
	v->a[81994] = actions(3025);
	v->a[81995] = 1;
	v->a[81996] = sym_file_descriptor;
	v->a[81997] = actions(2182);
	v->a[81998] = 2;
	v->a[81999] = anon_sym_AMP_AMP;
	small_parse_table_4100(v);
}

/* EOF small_parse_table_819.c */
