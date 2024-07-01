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
	v->a[60900] = anon_sym_GT_GT;
	v->a[60901] = anon_sym_LT_AMP;
	v->a[60902] = anon_sym_GT_AMP;
	v->a[60903] = anon_sym_GT_PIPE;
	v->a[60904] = 12;
	v->a[60905] = actions(3);
	v->a[60906] = 1;
	v->a[60907] = sym_comment;
	v->a[60908] = actions(682);
	v->a[60909] = 1;
	v->a[60910] = anon_sym_PIPE;
	v->a[60911] = actions(695);
	v->a[60912] = 1;
	v->a[60913] = anon_sym_BQUOTE;
	v->a[60914] = actions(2009);
	v->a[60915] = 1;
	v->a[60916] = aux_sym_heredoc_redirect_token1;
	v->a[60917] = actions(2041);
	v->a[60918] = 1;
	v->a[60919] = sym_file_descriptor;
	small_parse_table_3046(v);
}

void	small_parse_table_3046(t_small_parse_table_array *v)
{
	v->a[60920] = state(823);
	v->a[60921] = 1;
	v->a[60922] = sym_terminator;
	v->a[60923] = actions(754);
	v->a[60924] = 2;
	v->a[60925] = anon_sym_LT_LT;
	v->a[60926] = anon_sym_LT_LT_DASH;
	v->a[60927] = actions(963);
	v->a[60928] = 2;
	v->a[60929] = anon_sym_AMP_AMP;
	v->a[60930] = anon_sym_PIPE_PIPE;
	v->a[60931] = actions(2039);
	v->a[60932] = 2;
	v->a[60933] = anon_sym_LT_AMP_DASH;
	v->a[60934] = anon_sym_GT_AMP_DASH;
	v->a[60935] = actions(750);
	v->a[60936] = 3;
	v->a[60937] = anon_sym_SEMI_SEMI;
	v->a[60938] = anon_sym_AMP;
	v->a[60939] = anon_sym_SEMI;
	small_parse_table_3047(v);
}

void	small_parse_table_3047(t_small_parse_table_array *v)
{
	v->a[60940] = state(1165);
	v->a[60941] = 3;
	v->a[60942] = sym_file_redirect;
	v->a[60943] = sym_heredoc_redirect;
	v->a[60944] = aux_sym_redirected_statement_repeat1;
	v->a[60945] = actions(2037);
	v->a[60946] = 6;
	v->a[60947] = anon_sym_LT;
	v->a[60948] = anon_sym_GT;
	v->a[60949] = anon_sym_GT_GT;
	v->a[60950] = anon_sym_LT_AMP;
	v->a[60951] = anon_sym_GT_AMP;
	v->a[60952] = anon_sym_GT_PIPE;
	v->a[60953] = 12;
	v->a[60954] = actions(3);
	v->a[60955] = 1;
	v->a[60956] = sym_comment;
	v->a[60957] = actions(682);
	v->a[60958] = 1;
	v->a[60959] = anon_sym_PIPE;
	small_parse_table_3048(v);
}

void	small_parse_table_3048(t_small_parse_table_array *v)
{
	v->a[60960] = actions(695);
	v->a[60961] = 1;
	v->a[60962] = anon_sym_BQUOTE;
	v->a[60963] = actions(2009);
	v->a[60964] = 1;
	v->a[60965] = aux_sym_heredoc_redirect_token1;
	v->a[60966] = actions(2041);
	v->a[60967] = 1;
	v->a[60968] = sym_file_descriptor;
	v->a[60969] = state(824);
	v->a[60970] = 1;
	v->a[60971] = sym_terminator;
	v->a[60972] = actions(754);
	v->a[60973] = 2;
	v->a[60974] = anon_sym_LT_LT;
	v->a[60975] = anon_sym_LT_LT_DASH;
	v->a[60976] = actions(963);
	v->a[60977] = 2;
	v->a[60978] = anon_sym_AMP_AMP;
	v->a[60979] = anon_sym_PIPE_PIPE;
	small_parse_table_3049(v);
}

void	small_parse_table_3049(t_small_parse_table_array *v)
{
	v->a[60980] = actions(2039);
	v->a[60981] = 2;
	v->a[60982] = anon_sym_LT_AMP_DASH;
	v->a[60983] = anon_sym_GT_AMP_DASH;
	v->a[60984] = actions(750);
	v->a[60985] = 3;
	v->a[60986] = anon_sym_SEMI_SEMI;
	v->a[60987] = anon_sym_AMP;
	v->a[60988] = anon_sym_SEMI;
	v->a[60989] = state(1165);
	v->a[60990] = 3;
	v->a[60991] = sym_file_redirect;
	v->a[60992] = sym_heredoc_redirect;
	v->a[60993] = aux_sym_redirected_statement_repeat1;
	v->a[60994] = actions(2037);
	v->a[60995] = 6;
	v->a[60996] = anon_sym_LT;
	v->a[60997] = anon_sym_GT;
	v->a[60998] = anon_sym_GT_GT;
	v->a[60999] = anon_sym_LT_AMP;
	small_parse_table_3050(v);
}

/* EOF small_parse_table_609.c */
