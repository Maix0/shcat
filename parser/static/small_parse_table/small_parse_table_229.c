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
	v->a[22900] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22901] = actions(499);
	v->a[22902] = 1;
	v->a[22903] = anon_sym_DOLLAR;
	v->a[22904] = actions(501);
	v->a[22905] = 1;
	v->a[22906] = anon_sym_DQUOTE;
	v->a[22907] = actions(503);
	v->a[22908] = 1;
	v->a[22909] = anon_sym_DOLLAR_LBRACE;
	v->a[22910] = actions(505);
	v->a[22911] = 1;
	v->a[22912] = anon_sym_DOLLAR_LPAREN;
	v->a[22913] = actions(507);
	v->a[22914] = 1;
	v->a[22915] = anon_sym_BQUOTE;
	v->a[22916] = actions(509);
	v->a[22917] = 1;
	v->a[22918] = sym__bare_dollar;
	v->a[22919] = actions(555);
	small_parse_table_1146(v);
}

void	small_parse_table_1146(t_small_parse_table_array *v)
{
	v->a[22920] = 1;
	v->a[22921] = sym_file_descriptor;
	v->a[22922] = state(224);
	v->a[22923] = 1;
	v->a[22924] = aux_sym_command_repeat2;
	v->a[22925] = state(729);
	v->a[22926] = 1;
	v->a[22927] = sym_concatenation;
	v->a[22928] = actions(511);
	v->a[22929] = 3;
	v->a[22930] = sym_raw_string;
	v->a[22931] = sym_number;
	v->a[22932] = sym_word;
	v->a[22933] = state(519);
	v->a[22934] = 5;
	v->a[22935] = sym_arithmetic_expansion;
	v->a[22936] = sym_string;
	v->a[22937] = sym_simple_expansion;
	v->a[22938] = sym_expansion;
	v->a[22939] = sym_command_substitution;
	small_parse_table_1147(v);
}

void	small_parse_table_1147(t_small_parse_table_array *v)
{
	v->a[22940] = actions(557);
	v->a[22941] = 19;
	v->a[22942] = anon_sym_PIPE;
	v->a[22943] = anon_sym_SEMI_SEMI;
	v->a[22944] = anon_sym_AMP_AMP;
	v->a[22945] = anon_sym_PIPE_PIPE;
	v->a[22946] = anon_sym_LT;
	v->a[22947] = anon_sym_GT;
	v->a[22948] = anon_sym_GT_GT;
	v->a[22949] = anon_sym_AMP_GT;
	v->a[22950] = anon_sym_AMP_GT_GT;
	v->a[22951] = anon_sym_LT_AMP;
	v->a[22952] = anon_sym_GT_AMP;
	v->a[22953] = anon_sym_GT_PIPE;
	v->a[22954] = anon_sym_LT_AMP_DASH;
	v->a[22955] = anon_sym_GT_AMP_DASH;
	v->a[22956] = anon_sym_LT_LT;
	v->a[22957] = anon_sym_LT_LT_DASH;
	v->a[22958] = aux_sym_heredoc_redirect_token1;
	v->a[22959] = anon_sym_AMP;
	small_parse_table_1148(v);
}

void	small_parse_table_1148(t_small_parse_table_array *v)
{
	v->a[22960] = anon_sym_SEMI;
	v->a[22961] = 6;
	v->a[22962] = actions(3);
	v->a[22963] = 1;
	v->a[22964] = sym_comment;
	v->a[22965] = actions(379);
	v->a[22966] = 1;
	v->a[22967] = sym_file_descriptor;
	v->a[22968] = actions(429);
	v->a[22969] = 1;
	v->a[22970] = sym_variable_name;
	v->a[22971] = actions(427);
	v->a[22972] = 2;
	v->a[22973] = aux_sym__simple_variable_name_token1;
	v->a[22974] = aux_sym__multiline_variable_name_token1;
	v->a[22975] = actions(425);
	v->a[22976] = 9;
	v->a[22977] = anon_sym_BANG;
	v->a[22978] = anon_sym_DASH;
	v->a[22979] = anon_sym_STAR;
	small_parse_table_1149(v);
}

void	small_parse_table_1149(t_small_parse_table_array *v)
{
	v->a[22980] = anon_sym_QMARK;
	v->a[22981] = anon_sym_DOLLAR;
	v->a[22982] = anon_sym_POUND;
	v->a[22983] = anon_sym_AT;
	v->a[22984] = anon_sym_0;
	v->a[22985] = anon_sym__;
	v->a[22986] = actions(381);
	v->a[22987] = 24;
	v->a[22988] = anon_sym_PIPE;
	v->a[22989] = anon_sym_AMP_AMP;
	v->a[22990] = anon_sym_PIPE_PIPE;
	v->a[22991] = anon_sym_LT;
	v->a[22992] = anon_sym_GT;
	v->a[22993] = anon_sym_GT_GT;
	v->a[22994] = anon_sym_AMP_GT;
	v->a[22995] = anon_sym_AMP_GT_GT;
	v->a[22996] = anon_sym_LT_AMP;
	v->a[22997] = anon_sym_GT_AMP;
	v->a[22998] = anon_sym_GT_PIPE;
	v->a[22999] = anon_sym_LT_AMP_DASH;
	small_parse_table_1150(v);
}

/* EOF small_parse_table_229.c */
