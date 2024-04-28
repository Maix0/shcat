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
	v->a[22900] = actions(3743);
	v->a[22901] = 1;
	v->a[22902] = anon_sym_DOLLAR_LPAREN;
	v->a[22903] = actions(3745);
	v->a[22904] = 1;
	v->a[22905] = anon_sym_BQUOTE;
	v->a[22906] = actions(3747);
	v->a[22907] = 1;
	v->a[22908] = anon_sym_DOLLAR_BQUOTE;
	v->a[22909] = actions(3751);
	v->a[22910] = 1;
	v->a[22911] = sym_file_descriptor;
	v->a[22912] = actions(3753);
	v->a[22913] = 1;
	v->a[22914] = sym_test_operator;
	v->a[22915] = actions(3755);
	v->a[22916] = 1;
	v->a[22917] = sym__brace_start;
	v->a[22918] = actions(4060);
	v->a[22919] = 1;
	small_parse_table_1146(v);
}

void	small_parse_table_1146(t_small_parse_table_array *v)
{
	v->a[22920] = aux_sym_heredoc_redirect_token1;
	v->a[22921] = state(3596);
	v->a[22922] = 1;
	v->a[22923] = aux_sym__heredoc_command;
	v->a[22924] = state(5351);
	v->a[22925] = 1;
	v->a[22926] = aux_sym__literal_repeat1;
	v->a[22927] = state(5456);
	v->a[22928] = 1;
	v->a[22929] = sym_concatenation;
	v->a[22930] = state(6944);
	v->a[22931] = 1;
	v->a[22932] = sym__heredoc_expression;
	v->a[22933] = state(6945);
	v->a[22934] = 1;
	v->a[22935] = sym__heredoc_pipeline;
	v->a[22936] = actions(3715);
	v->a[22937] = 2;
	v->a[22938] = anon_sym_LPAREN_LPAREN;
	v->a[22939] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1147(v);
}

void	small_parse_table_1147(t_small_parse_table_array *v)
{
	v->a[22940] = actions(3717);
	v->a[22941] = 2;
	v->a[22942] = anon_sym_PIPE_PIPE;
	v->a[22943] = anon_sym_AMP_AMP;
	v->a[22944] = actions(3719);
	v->a[22945] = 2;
	v->a[22946] = anon_sym_PIPE;
	v->a[22947] = anon_sym_PIPE_AMP;
	v->a[22948] = actions(3723);
	v->a[22949] = 2;
	v->a[22950] = anon_sym_LT_AMP_DASH;
	v->a[22951] = anon_sym_GT_AMP_DASH;
	v->a[22952] = actions(3749);
	v->a[22953] = 2;
	v->a[22954] = anon_sym_LT_LPAREN;
	v->a[22955] = anon_sym_GT_LPAREN;
	v->a[22956] = actions(3713);
	v->a[22957] = 3;
	v->a[22958] = sym_raw_string;
	v->a[22959] = sym_ansi_c_string;
	small_parse_table_1148(v);
}

void	small_parse_table_1148(t_small_parse_table_array *v)
{
	v->a[22960] = sym_word;
	v->a[22961] = state(5517);
	v->a[22962] = 3;
	v->a[22963] = sym_file_redirect;
	v->a[22964] = sym_herestring_redirect;
	v->a[22965] = aux_sym_redirected_statement_repeat2;
	v->a[22966] = actions(3721);
	v->a[22967] = 8;
	v->a[22968] = anon_sym_LT;
	v->a[22969] = anon_sym_GT;
	v->a[22970] = anon_sym_GT_GT;
	v->a[22971] = anon_sym_AMP_GT;
	v->a[22972] = anon_sym_AMP_GT_GT;
	v->a[22973] = anon_sym_LT_AMP;
	v->a[22974] = anon_sym_GT_AMP;
	v->a[22975] = anon_sym_GT_PIPE;
	v->a[22976] = state(5062);
	v->a[22977] = 9;
	v->a[22978] = sym_arithmetic_expansion;
	v->a[22979] = sym_brace_expression;
	small_parse_table_1149(v);
}

void	small_parse_table_1149(t_small_parse_table_array *v)
{
	v->a[22980] = sym_string;
	v->a[22981] = sym_translated_string;
	v->a[22982] = sym_number;
	v->a[22983] = sym_simple_expansion;
	v->a[22984] = sym_expansion;
	v->a[22985] = sym_command_substitution;
	v->a[22986] = sym_process_substitution;
	v->a[22987] = 30;
	v->a[22988] = actions(3);
	v->a[22989] = 1;
	v->a[22990] = sym_comment;
	v->a[22991] = actions(3727);
	v->a[22992] = 1;
	v->a[22993] = anon_sym_LT_LT_LT;
	v->a[22994] = actions(3729);
	v->a[22995] = 1;
	v->a[22996] = anon_sym_DOLLAR_LBRACK;
	v->a[22997] = actions(3731);
	v->a[22998] = 1;
	v->a[22999] = anon_sym_DOLLAR;
	small_parse_table_1150(v);
}

/* EOF small_parse_table_229.c */
