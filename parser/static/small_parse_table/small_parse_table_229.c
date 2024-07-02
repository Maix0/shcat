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
	v->a[22900] = anon_sym_RPAREN;
	v->a[22901] = anon_sym_SEMI_SEMI;
	v->a[22902] = anon_sym_AMP_AMP;
	v->a[22903] = anon_sym_PIPE_PIPE;
	v->a[22904] = anon_sym_LT;
	v->a[22905] = anon_sym_GT;
	v->a[22906] = anon_sym_GT_GT;
	v->a[22907] = anon_sym_LT_AMP;
	v->a[22908] = anon_sym_GT_AMP;
	v->a[22909] = anon_sym_GT_PIPE;
	v->a[22910] = anon_sym_LT_GT;
	v->a[22911] = anon_sym_LT_LT;
	v->a[22912] = anon_sym_LT_LT_DASH;
	v->a[22913] = aux_sym_heredoc_redirect_token1;
	v->a[22914] = anon_sym_AMP;
	v->a[22915] = anon_sym_SEMI;
	v->a[22916] = 12;
	v->a[22917] = actions(3);
	v->a[22918] = 1;
	v->a[22919] = sym_comment;
	small_parse_table_1146(v);
}

void	small_parse_table_1146(t_small_parse_table_array *v)
{
	v->a[22920] = actions(511);
	v->a[22921] = 1;
	v->a[22922] = sym_file_descriptor;
	v->a[22923] = actions(821);
	v->a[22924] = 1;
	v->a[22925] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22926] = actions(823);
	v->a[22927] = 1;
	v->a[22928] = anon_sym_DOLLAR;
	v->a[22929] = actions(825);
	v->a[22930] = 1;
	v->a[22931] = anon_sym_DQUOTE;
	v->a[22932] = actions(827);
	v->a[22933] = 1;
	v->a[22934] = anon_sym_DOLLAR_LBRACE;
	v->a[22935] = actions(829);
	v->a[22936] = 1;
	v->a[22937] = anon_sym_DOLLAR_LPAREN;
	v->a[22938] = actions(831);
	v->a[22939] = 1;
	small_parse_table_1147(v);
}

void	small_parse_table_1147(t_small_parse_table_array *v)
{
	v->a[22940] = anon_sym_BQUOTE;
	v->a[22941] = state(241);
	v->a[22942] = 2;
	v->a[22943] = sym_concatenation;
	v->a[22944] = aux_sym_for_statement_repeat1;
	v->a[22945] = actions(819);
	v->a[22946] = 3;
	v->a[22947] = sym_raw_string;
	v->a[22948] = sym_number;
	v->a[22949] = sym_word;
	v->a[22950] = state(476);
	v->a[22951] = 5;
	v->a[22952] = sym_arithmetic_expansion;
	v->a[22953] = sym_string;
	v->a[22954] = sym_simple_expansion;
	v->a[22955] = sym_expansion;
	v->a[22956] = sym_command_substitution;
	v->a[22957] = actions(509);
	v->a[22958] = 17;
	v->a[22959] = anon_sym_PIPE;
	small_parse_table_1148(v);
}

void	small_parse_table_1148(t_small_parse_table_array *v)
{
	v->a[22960] = anon_sym_RPAREN;
	v->a[22961] = anon_sym_SEMI_SEMI;
	v->a[22962] = anon_sym_AMP_AMP;
	v->a[22963] = anon_sym_PIPE_PIPE;
	v->a[22964] = anon_sym_LT;
	v->a[22965] = anon_sym_GT;
	v->a[22966] = anon_sym_GT_GT;
	v->a[22967] = anon_sym_LT_AMP;
	v->a[22968] = anon_sym_GT_AMP;
	v->a[22969] = anon_sym_GT_PIPE;
	v->a[22970] = anon_sym_LT_GT;
	v->a[22971] = anon_sym_LT_LT;
	v->a[22972] = anon_sym_LT_LT_DASH;
	v->a[22973] = aux_sym_heredoc_redirect_token1;
	v->a[22974] = anon_sym_AMP;
	v->a[22975] = anon_sym_SEMI;
	v->a[22976] = 3;
	v->a[22977] = actions(680);
	v->a[22978] = 1;
	v->a[22979] = sym_comment;
	small_parse_table_1149(v);
}

void	small_parse_table_1149(t_small_parse_table_array *v)
{
	v->a[22980] = actions(833);
	v->a[22981] = 13;
	v->a[22982] = anon_sym_PIPE;
	v->a[22983] = anon_sym_EQ;
	v->a[22984] = anon_sym_LT;
	v->a[22985] = anon_sym_GT;
	v->a[22986] = anon_sym_GT_GT;
	v->a[22987] = anon_sym_LT_LT;
	v->a[22988] = anon_sym_CARET;
	v->a[22989] = anon_sym_AMP;
	v->a[22990] = anon_sym_PLUS;
	v->a[22991] = anon_sym_DASH;
	v->a[22992] = anon_sym_STAR;
	v->a[22993] = anon_sym_SLASH;
	v->a[22994] = anon_sym_PERCENT;
	v->a[22995] = actions(835);
	v->a[22996] = 21;
	v->a[22997] = anon_sym_AMP_AMP;
	v->a[22998] = anon_sym_PIPE_PIPE;
	v->a[22999] = anon_sym_RPAREN_RPAREN;
	small_parse_table_1150(v);
}

/* EOF small_parse_table_229.c */
