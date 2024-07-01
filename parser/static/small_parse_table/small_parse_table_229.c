/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_229.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1145(t_small_parse_table_array *v)
{
	v->a[22900] = anon_sym_GT_AMP;
	v->a[22901] = anon_sym_GT_PIPE;
	v->a[22902] = anon_sym_LT_GT;
	v->a[22903] = anon_sym_LT_LT;
	v->a[22904] = anon_sym_LT_LT_DASH;
	v->a[22905] = aux_sym_heredoc_redirect_token1;
	v->a[22906] = anon_sym_AMP;
	v->a[22907] = anon_sym_SEMI;
	v->a[22908] = 12;
	v->a[22909] = actions(3);
	v->a[22910] = 1;
	v->a[22911] = sym_comment;
	v->a[22912] = actions(736);
	v->a[22913] = 1;
	v->a[22914] = anon_sym_PIPE;
	v->a[22915] = actions(746);
	v->a[22916] = 1;
	v->a[22917] = sym_file_descriptor;
	v->a[22918] = actions(748);
	v->a[22919] = 1;
	small_parse_table_1146(v);
}

void	small_parse_table_1146(t_small_parse_table_array *v)
{
	v->a[22920] = sym_variable_name;
	v->a[22921] = actions(842);
	v->a[22922] = 1;
	v->a[22923] = anon_sym_RPAREN;
	v->a[22924] = state(685);
	v->a[22925] = 1;
	v->a[22926] = sym_terminator;
	v->a[22927] = actions(742);
	v->a[22928] = 2;
	v->a[22929] = anon_sym_AMP_AMP;
	v->a[22930] = anon_sym_PIPE_PIPE;
	v->a[22931] = actions(744);
	v->a[22932] = 2;
	v->a[22933] = anon_sym_LT_LT;
	v->a[22934] = anon_sym_LT_LT_DASH;
	v->a[22935] = state(1045);
	v->a[22936] = 2;
	v->a[22937] = sym_variable_assignment;
	v->a[22938] = aux_sym__variable_assignments_repeat1;
	v->a[22939] = state(1080);
	small_parse_table_1147(v);
}

void	small_parse_table_1147(t_small_parse_table_array *v)
{
	v->a[22940] = 3;
	v->a[22941] = sym_file_redirect;
	v->a[22942] = sym_heredoc_redirect;
	v->a[22943] = aux_sym_redirected_statement_repeat1;
	v->a[22944] = actions(740);
	v->a[22945] = 4;
	v->a[22946] = anon_sym_SEMI_SEMI;
	v->a[22947] = aux_sym_heredoc_redirect_token1;
	v->a[22948] = anon_sym_AMP;
	v->a[22949] = anon_sym_SEMI;
	v->a[22950] = actions(734);
	v->a[22951] = 16;
	v->a[22952] = anon_sym_LT;
	v->a[22953] = anon_sym_GT;
	v->a[22954] = anon_sym_GT_GT;
	v->a[22955] = anon_sym_LT_AMP;
	v->a[22956] = anon_sym_GT_AMP;
	v->a[22957] = anon_sym_GT_PIPE;
	v->a[22958] = anon_sym_LT_GT;
	v->a[22959] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1148(v);
}

void	small_parse_table_1148(t_small_parse_table_array *v)
{
	v->a[22960] = anon_sym_DOLLAR;
	v->a[22961] = anon_sym_DQUOTE;
	v->a[22962] = sym_raw_string;
	v->a[22963] = sym_number;
	v->a[22964] = anon_sym_DOLLAR_LBRACE;
	v->a[22965] = anon_sym_DOLLAR_LPAREN;
	v->a[22966] = anon_sym_BQUOTE;
	v->a[22967] = sym_word;
	v->a[22968] = 14;
	v->a[22969] = actions(3);
	v->a[22970] = 1;
	v->a[22971] = sym_comment;
	v->a[22972] = actions(459);
	v->a[22973] = 1;
	v->a[22974] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22975] = actions(461);
	v->a[22976] = 1;
	v->a[22977] = anon_sym_DOLLAR;
	v->a[22978] = actions(463);
	v->a[22979] = 1;
	small_parse_table_1149(v);
}

void	small_parse_table_1149(t_small_parse_table_array *v)
{
	v->a[22980] = anon_sym_DQUOTE;
	v->a[22981] = actions(465);
	v->a[22982] = 1;
	v->a[22983] = anon_sym_DOLLAR_LBRACE;
	v->a[22984] = actions(467);
	v->a[22985] = 1;
	v->a[22986] = anon_sym_DOLLAR_LPAREN;
	v->a[22987] = actions(469);
	v->a[22988] = 1;
	v->a[22989] = anon_sym_BQUOTE;
	v->a[22990] = actions(471);
	v->a[22991] = 1;
	v->a[22992] = sym__bare_dollar;
	v->a[22993] = actions(560);
	v->a[22994] = 1;
	v->a[22995] = sym_file_descriptor;
	v->a[22996] = state(235);
	v->a[22997] = 1;
	v->a[22998] = aux_sym_command_repeat2;
	v->a[22999] = state(627);
	small_parse_table_1150(v);
}

/* EOF small_parse_table_229.c */
