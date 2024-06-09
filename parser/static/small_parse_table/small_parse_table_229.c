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
	v->a[22900] = actions(499);
	v->a[22901] = 1;
	v->a[22902] = anon_sym_BQUOTE;
	v->a[22903] = actions(501);
	v->a[22904] = 1;
	v->a[22905] = sym__bare_dollar;
	v->a[22906] = actions(559);
	v->a[22907] = 1;
	v->a[22908] = sym_file_descriptor;
	v->a[22909] = state(201);
	v->a[22910] = 1;
	v->a[22911] = aux_sym_command_repeat2;
	v->a[22912] = state(753);
	v->a[22913] = 1;
	v->a[22914] = sym_concatenation;
	v->a[22915] = actions(483);
	v->a[22916] = 2;
	v->a[22917] = sym_raw_string;
	v->a[22918] = sym_word;
	v->a[22919] = state(341);
	small_parse_table_1146(v);
}

void	small_parse_table_1146(t_small_parse_table_array *v)
{
	v->a[22920] = 6;
	v->a[22921] = sym_arithmetic_expansion;
	v->a[22922] = sym_string;
	v->a[22923] = sym_number;
	v->a[22924] = sym_simple_expansion;
	v->a[22925] = sym_expansion;
	v->a[22926] = sym_command_substitution;
	v->a[22927] = actions(557);
	v->a[22928] = 20;
	v->a[22929] = anon_sym_PIPE;
	v->a[22930] = anon_sym_RPAREN;
	v->a[22931] = anon_sym_SEMI_SEMI;
	v->a[22932] = anon_sym_AMP_AMP;
	v->a[22933] = anon_sym_PIPE_PIPE;
	v->a[22934] = anon_sym_LT;
	v->a[22935] = anon_sym_GT;
	v->a[22936] = anon_sym_GT_GT;
	v->a[22937] = anon_sym_AMP_GT;
	v->a[22938] = anon_sym_AMP_GT_GT;
	v->a[22939] = anon_sym_LT_AMP;
	small_parse_table_1147(v);
}

void	small_parse_table_1147(t_small_parse_table_array *v)
{
	v->a[22940] = anon_sym_GT_AMP;
	v->a[22941] = anon_sym_GT_PIPE;
	v->a[22942] = anon_sym_LT_AMP_DASH;
	v->a[22943] = anon_sym_GT_AMP_DASH;
	v->a[22944] = anon_sym_LT_LT;
	v->a[22945] = anon_sym_LT_LT_DASH;
	v->a[22946] = aux_sym_heredoc_redirect_token1;
	v->a[22947] = anon_sym_AMP;
	v->a[22948] = anon_sym_SEMI;
	v->a[22949] = 5;
	v->a[22950] = actions(3);
	v->a[22951] = 1;
	v->a[22952] = sym_comment;
	v->a[22953] = actions(565);
	v->a[22954] = 2;
	v->a[22955] = sym_file_descriptor;
	v->a[22956] = sym_variable_name;
	v->a[22957] = state(204);
	v->a[22958] = 2;
	v->a[22959] = sym_concatenation;
	small_parse_table_1148(v);
}

void	small_parse_table_1148(t_small_parse_table_array *v)
{
	v->a[22960] = aux_sym_for_statement_repeat1;
	v->a[22961] = state(324);
	v->a[22962] = 6;
	v->a[22963] = sym_arithmetic_expansion;
	v->a[22964] = sym_string;
	v->a[22965] = sym_number;
	v->a[22966] = sym_simple_expansion;
	v->a[22967] = sym_expansion;
	v->a[22968] = sym_command_substitution;
	v->a[22969] = actions(567);
	v->a[22970] = 30;
	v->a[22971] = anon_sym_PIPE;
	v->a[22972] = anon_sym_RPAREN;
	v->a[22973] = anon_sym_SEMI_SEMI;
	v->a[22974] = anon_sym_AMP_AMP;
	v->a[22975] = anon_sym_PIPE_PIPE;
	v->a[22976] = anon_sym_LT;
	v->a[22977] = anon_sym_GT;
	v->a[22978] = anon_sym_GT_GT;
	v->a[22979] = anon_sym_AMP_GT;
	small_parse_table_1149(v);
}

void	small_parse_table_1149(t_small_parse_table_array *v)
{
	v->a[22980] = anon_sym_AMP_GT_GT;
	v->a[22981] = anon_sym_LT_AMP;
	v->a[22982] = anon_sym_GT_AMP;
	v->a[22983] = anon_sym_GT_PIPE;
	v->a[22984] = anon_sym_LT_AMP_DASH;
	v->a[22985] = anon_sym_GT_AMP_DASH;
	v->a[22986] = anon_sym_LT_LT;
	v->a[22987] = anon_sym_LT_LT_DASH;
	v->a[22988] = aux_sym_heredoc_redirect_token1;
	v->a[22989] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22990] = anon_sym_AMP;
	v->a[22991] = anon_sym_DOLLAR;
	v->a[22992] = anon_sym_DQUOTE;
	v->a[22993] = sym_raw_string;
	v->a[22994] = aux_sym_number_token1;
	v->a[22995] = aux_sym_number_token2;
	v->a[22996] = anon_sym_DOLLAR_LBRACE;
	v->a[22997] = anon_sym_DOLLAR_LPAREN;
	v->a[22998] = anon_sym_BQUOTE;
	v->a[22999] = sym_word;
	small_parse_table_1150(v);
}

/* EOF small_parse_table_229.c */
