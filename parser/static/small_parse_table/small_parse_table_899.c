/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_899.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4495(t_small_parse_table_array *v)
{
	v->a[89900] = sym_number;
	v->a[89901] = sym_word;
	v->a[89902] = state(1200);
	v->a[89903] = 5;
	v->a[89904] = sym_arithmetic_expansion;
	v->a[89905] = sym_string;
	v->a[89906] = sym_simple_expansion;
	v->a[89907] = sym_expansion;
	v->a[89908] = sym_command_substitution;
	v->a[89909] = 3;
	v->a[89910] = actions(3);
	v->a[89911] = 1;
	v->a[89912] = sym_comment;
	v->a[89913] = actions(1177);
	v->a[89914] = 3;
	v->a[89915] = sym_file_descriptor;
	v->a[89916] = sym__concat;
	v->a[89917] = aux_sym_heredoc_redirect_token1;
	v->a[89918] = actions(1179);
	v->a[89919] = 13;
	small_parse_table_4496(v);
}

void	small_parse_table_4496(t_small_parse_table_array *v)
{
	v->a[89920] = anon_sym_AMP_AMP;
	v->a[89921] = anon_sym_PIPE_PIPE;
	v->a[89922] = anon_sym_LT;
	v->a[89923] = anon_sym_GT;
	v->a[89924] = anon_sym_GT_GT;
	v->a[89925] = anon_sym_AMP_GT;
	v->a[89926] = anon_sym_AMP_GT_GT;
	v->a[89927] = anon_sym_LT_AMP;
	v->a[89928] = anon_sym_GT_AMP;
	v->a[89929] = anon_sym_GT_PIPE;
	v->a[89930] = anon_sym_LT_AMP_DASH;
	v->a[89931] = anon_sym_GT_AMP_DASH;
	v->a[89932] = aux_sym_concatenation_token1;
	v->a[89933] = 3;
	v->a[89934] = actions(3);
	v->a[89935] = 1;
	v->a[89936] = sym_comment;
	v->a[89937] = actions(1147);
	v->a[89938] = 3;
	v->a[89939] = sym_file_descriptor;
	small_parse_table_4497(v);
}

void	small_parse_table_4497(t_small_parse_table_array *v)
{
	v->a[89940] = sym__concat;
	v->a[89941] = aux_sym_heredoc_redirect_token1;
	v->a[89942] = actions(1149);
	v->a[89943] = 13;
	v->a[89944] = anon_sym_AMP_AMP;
	v->a[89945] = anon_sym_PIPE_PIPE;
	v->a[89946] = anon_sym_LT;
	v->a[89947] = anon_sym_GT;
	v->a[89948] = anon_sym_GT_GT;
	v->a[89949] = anon_sym_AMP_GT;
	v->a[89950] = anon_sym_AMP_GT_GT;
	v->a[89951] = anon_sym_LT_AMP;
	v->a[89952] = anon_sym_GT_AMP;
	v->a[89953] = anon_sym_GT_PIPE;
	v->a[89954] = anon_sym_LT_AMP_DASH;
	v->a[89955] = anon_sym_GT_AMP_DASH;
	v->a[89956] = aux_sym_concatenation_token1;
	v->a[89957] = 3;
	v->a[89958] = actions(1094);
	v->a[89959] = 1;
	small_parse_table_4498(v);
}

void	small_parse_table_4498(t_small_parse_table_array *v)
{
	v->a[89960] = sym_comment;
	v->a[89961] = actions(2634);
	v->a[89962] = 7;
	v->a[89963] = anon_sym_PIPE;
	v->a[89964] = anon_sym_LT;
	v->a[89965] = anon_sym_GT;
	v->a[89966] = anon_sym_AMP_GT;
	v->a[89967] = anon_sym_LT_AMP;
	v->a[89968] = anon_sym_GT_AMP;
	v->a[89969] = anon_sym_LT_LT;
	v->a[89970] = actions(2632);
	v->a[89971] = 9;
	v->a[89972] = sym_file_descriptor;
	v->a[89973] = anon_sym_AMP_AMP;
	v->a[89974] = anon_sym_PIPE_PIPE;
	v->a[89975] = anon_sym_GT_GT;
	v->a[89976] = anon_sym_AMP_GT_GT;
	v->a[89977] = anon_sym_GT_PIPE;
	v->a[89978] = anon_sym_LT_AMP_DASH;
	v->a[89979] = anon_sym_GT_AMP_DASH;
	small_parse_table_4499(v);
}

void	small_parse_table_4499(t_small_parse_table_array *v)
{
	v->a[89980] = anon_sym_LT_LT_DASH;
	v->a[89981] = 3;
	v->a[89982] = actions(3);
	v->a[89983] = 1;
	v->a[89984] = sym_comment;
	v->a[89985] = actions(1187);
	v->a[89986] = 3;
	v->a[89987] = sym_file_descriptor;
	v->a[89988] = sym__concat;
	v->a[89989] = aux_sym_heredoc_redirect_token1;
	v->a[89990] = actions(1185);
	v->a[89991] = 13;
	v->a[89992] = anon_sym_AMP_AMP;
	v->a[89993] = anon_sym_PIPE_PIPE;
	v->a[89994] = anon_sym_LT;
	v->a[89995] = anon_sym_GT;
	v->a[89996] = anon_sym_GT_GT;
	v->a[89997] = anon_sym_AMP_GT;
	v->a[89998] = anon_sym_AMP_GT_GT;
	v->a[89999] = anon_sym_LT_AMP;
	small_parse_table_4500(v);
}

/* EOF small_parse_table_899.c */
