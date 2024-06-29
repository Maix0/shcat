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
	v->a[22900] = anon_sym_GT_PIPE;
	v->a[22901] = anon_sym_LT_AMP_DASH;
	v->a[22902] = anon_sym_GT_AMP_DASH;
	v->a[22903] = anon_sym_LT_LT;
	v->a[22904] = anon_sym_LT_LT_DASH;
	v->a[22905] = aux_sym_heredoc_redirect_token1;
	v->a[22906] = anon_sym_AMP;
	v->a[22907] = anon_sym_SEMI;
	v->a[22908] = 12;
	v->a[22909] = actions(3);
	v->a[22910] = 1;
	v->a[22911] = sym_comment;
	v->a[22912] = actions(704);
	v->a[22913] = 1;
	v->a[22914] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22915] = actions(706);
	v->a[22916] = 1;
	v->a[22917] = anon_sym_DOLLAR;
	v->a[22918] = actions(708);
	v->a[22919] = 1;
	small_parse_table_1146(v);
}

void	small_parse_table_1146(t_small_parse_table_array *v)
{
	v->a[22920] = anon_sym_DQUOTE;
	v->a[22921] = actions(710);
	v->a[22922] = 1;
	v->a[22923] = anon_sym_DOLLAR_LBRACE;
	v->a[22924] = actions(712);
	v->a[22925] = 1;
	v->a[22926] = anon_sym_DOLLAR_LPAREN;
	v->a[22927] = actions(714);
	v->a[22928] = 1;
	v->a[22929] = anon_sym_BQUOTE;
	v->a[22930] = actions(548);
	v->a[22931] = 2;
	v->a[22932] = sym_file_descriptor;
	v->a[22933] = ts_builtin_sym_end;
	v->a[22934] = state(220);
	v->a[22935] = 2;
	v->a[22936] = sym_concatenation;
	v->a[22937] = aux_sym_for_statement_repeat1;
	v->a[22938] = actions(702);
	v->a[22939] = 3;
	small_parse_table_1147(v);
}

void	small_parse_table_1147(t_small_parse_table_array *v)
{
	v->a[22940] = sym_raw_string;
	v->a[22941] = sym_number;
	v->a[22942] = sym_word;
	v->a[22943] = state(447);
	v->a[22944] = 5;
	v->a[22945] = sym_arithmetic_expansion;
	v->a[22946] = sym_string;
	v->a[22947] = sym_simple_expansion;
	v->a[22948] = sym_expansion;
	v->a[22949] = sym_command_substitution;
	v->a[22950] = actions(546);
	v->a[22951] = 19;
	v->a[22952] = anon_sym_PIPE;
	v->a[22953] = anon_sym_SEMI_SEMI;
	v->a[22954] = anon_sym_AMP_AMP;
	v->a[22955] = anon_sym_PIPE_PIPE;
	v->a[22956] = anon_sym_LT;
	v->a[22957] = anon_sym_GT;
	v->a[22958] = anon_sym_GT_GT;
	v->a[22959] = anon_sym_AMP_GT;
	small_parse_table_1148(v);
}

void	small_parse_table_1148(t_small_parse_table_array *v)
{
	v->a[22960] = anon_sym_AMP_GT_GT;
	v->a[22961] = anon_sym_LT_AMP;
	v->a[22962] = anon_sym_GT_AMP;
	v->a[22963] = anon_sym_GT_PIPE;
	v->a[22964] = anon_sym_LT_AMP_DASH;
	v->a[22965] = anon_sym_GT_AMP_DASH;
	v->a[22966] = anon_sym_LT_LT;
	v->a[22967] = anon_sym_LT_LT_DASH;
	v->a[22968] = aux_sym_heredoc_redirect_token1;
	v->a[22969] = anon_sym_AMP;
	v->a[22970] = anon_sym_SEMI;
	v->a[22971] = 5;
	v->a[22972] = actions(3);
	v->a[22973] = 1;
	v->a[22974] = sym_comment;
	v->a[22975] = actions(548);
	v->a[22976] = 2;
	v->a[22977] = sym_file_descriptor;
	v->a[22978] = sym_variable_name;
	v->a[22979] = state(212);
	small_parse_table_1149(v);
}

void	small_parse_table_1149(t_small_parse_table_array *v)
{
	v->a[22980] = 2;
	v->a[22981] = sym_concatenation;
	v->a[22982] = aux_sym_for_statement_repeat1;
	v->a[22983] = state(458);
	v->a[22984] = 5;
	v->a[22985] = sym_arithmetic_expansion;
	v->a[22986] = sym_string;
	v->a[22987] = sym_simple_expansion;
	v->a[22988] = sym_expansion;
	v->a[22989] = sym_command_substitution;
	v->a[22990] = actions(546);
	v->a[22991] = 28;
	v->a[22992] = anon_sym_PIPE;
	v->a[22993] = anon_sym_SEMI_SEMI;
	v->a[22994] = anon_sym_AMP_AMP;
	v->a[22995] = anon_sym_PIPE_PIPE;
	v->a[22996] = anon_sym_LT;
	v->a[22997] = anon_sym_GT;
	v->a[22998] = anon_sym_GT_GT;
	v->a[22999] = anon_sym_AMP_GT;
	small_parse_table_1150(v);
}

/* EOF small_parse_table_229.c */
