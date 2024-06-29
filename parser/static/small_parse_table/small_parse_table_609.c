/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_609.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3045(t_small_parse_table_array *v)
{
	v->a[60900] = sym_file_descriptor;
	v->a[60901] = sym_variable_name;
	v->a[60902] = aux_sym_heredoc_redirect_token1;
	v->a[60903] = actions(1090);
	v->a[60904] = 19;
	v->a[60905] = anon_sym_esac;
	v->a[60906] = anon_sym_PIPE;
	v->a[60907] = anon_sym_SEMI_SEMI;
	v->a[60908] = anon_sym_AMP_AMP;
	v->a[60909] = anon_sym_PIPE_PIPE;
	v->a[60910] = anon_sym_LT;
	v->a[60911] = anon_sym_GT;
	v->a[60912] = anon_sym_GT_GT;
	v->a[60913] = anon_sym_AMP_GT;
	v->a[60914] = anon_sym_AMP_GT_GT;
	v->a[60915] = anon_sym_LT_AMP;
	v->a[60916] = anon_sym_GT_AMP;
	v->a[60917] = anon_sym_GT_PIPE;
	v->a[60918] = anon_sym_LT_AMP_DASH;
	v->a[60919] = anon_sym_GT_AMP_DASH;
	small_parse_table_3046(v);
}

void	small_parse_table_3046(t_small_parse_table_array *v)
{
	v->a[60920] = anon_sym_LT_LT;
	v->a[60921] = anon_sym_LT_LT_DASH;
	v->a[60922] = anon_sym_AMP;
	v->a[60923] = anon_sym_SEMI;
	v->a[60924] = 12;
	v->a[60925] = actions(3);
	v->a[60926] = 1;
	v->a[60927] = sym_comment;
	v->a[60928] = actions(766);
	v->a[60929] = 1;
	v->a[60930] = anon_sym_PIPE;
	v->a[60931] = actions(2003);
	v->a[60932] = 1;
	v->a[60933] = aux_sym_heredoc_redirect_token1;
	v->a[60934] = actions(2005);
	v->a[60935] = 1;
	v->a[60936] = sym_file_descriptor;
	v->a[60937] = state(754);
	v->a[60938] = 1;
	v->a[60939] = sym_terminator;
	small_parse_table_3047(v);
}

void	small_parse_table_3047(t_small_parse_table_array *v)
{
	v->a[60940] = actions(764);
	v->a[60941] = 2;
	v->a[60942] = anon_sym_esac;
	v->a[60943] = anon_sym_SEMI_SEMI;
	v->a[60944] = actions(768);
	v->a[60945] = 2;
	v->a[60946] = anon_sym_AMP_AMP;
	v->a[60947] = anon_sym_PIPE_PIPE;
	v->a[60948] = actions(770);
	v->a[60949] = 2;
	v->a[60950] = anon_sym_LT_LT;
	v->a[60951] = anon_sym_LT_LT_DASH;
	v->a[60952] = actions(772);
	v->a[60953] = 2;
	v->a[60954] = anon_sym_AMP;
	v->a[60955] = anon_sym_SEMI;
	v->a[60956] = actions(2001);
	v->a[60957] = 2;
	v->a[60958] = anon_sym_LT_AMP_DASH;
	v->a[60959] = anon_sym_GT_AMP_DASH;
	small_parse_table_3048(v);
}

void	small_parse_table_3048(t_small_parse_table_array *v)
{
	v->a[60960] = state(1123);
	v->a[60961] = 3;
	v->a[60962] = sym_file_redirect;
	v->a[60963] = sym_heredoc_redirect;
	v->a[60964] = aux_sym_redirected_statement_repeat1;
	v->a[60965] = actions(1999);
	v->a[60966] = 8;
	v->a[60967] = anon_sym_LT;
	v->a[60968] = anon_sym_GT;
	v->a[60969] = anon_sym_GT_GT;
	v->a[60970] = anon_sym_AMP_GT;
	v->a[60971] = anon_sym_AMP_GT_GT;
	v->a[60972] = anon_sym_LT_AMP;
	v->a[60973] = anon_sym_GT_AMP;
	v->a[60974] = anon_sym_GT_PIPE;
	v->a[60975] = 6;
	v->a[60976] = actions(3);
	v->a[60977] = 1;
	v->a[60978] = sym_comment;
	v->a[60979] = actions(2021);
	small_parse_table_3049(v);
}

void	small_parse_table_3049(t_small_parse_table_array *v)
{
	v->a[60980] = 1;
	v->a[60981] = aux_sym_concatenation_token1;
	v->a[60982] = actions(2025);
	v->a[60983] = 1;
	v->a[60984] = sym__concat;
	v->a[60985] = state(1005);
	v->a[60986] = 1;
	v->a[60987] = aux_sym_concatenation_repeat1;
	v->a[60988] = actions(961);
	v->a[60989] = 3;
	v->a[60990] = sym_file_descriptor;
	v->a[60991] = sym_variable_name;
	v->a[60992] = aux_sym_heredoc_redirect_token1;
	v->a[60993] = actions(957);
	v->a[60994] = 19;
	v->a[60995] = anon_sym_esac;
	v->a[60996] = anon_sym_PIPE;
	v->a[60997] = anon_sym_SEMI_SEMI;
	v->a[60998] = anon_sym_AMP_AMP;
	v->a[60999] = anon_sym_PIPE_PIPE;
	small_parse_table_3050(v);
}

/* EOF small_parse_table_609.c */
