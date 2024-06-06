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
	v->a[22900] = anon_sym_SEMI_AMP;
	v->a[22901] = anon_sym_SEMI_SEMI_AMP;
	v->a[22902] = anon_sym_PIPE_AMP;
	v->a[22903] = anon_sym_AMP_AMP;
	v->a[22904] = anon_sym_PIPE_PIPE;
	v->a[22905] = anon_sym_LT;
	v->a[22906] = anon_sym_GT;
	v->a[22907] = anon_sym_GT_GT;
	v->a[22908] = anon_sym_AMP_GT;
	v->a[22909] = anon_sym_AMP_GT_GT;
	v->a[22910] = anon_sym_LT_AMP;
	v->a[22911] = anon_sym_GT_AMP;
	v->a[22912] = anon_sym_GT_PIPE;
	v->a[22913] = anon_sym_LT_AMP_DASH;
	v->a[22914] = anon_sym_GT_AMP_DASH;
	v->a[22915] = anon_sym_LT_LT;
	v->a[22916] = anon_sym_LT_LT_DASH;
	v->a[22917] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22918] = anon_sym_AMP;
	v->a[22919] = anon_sym_DOLLAR;
	small_parse_table_1146(v);
}

void	small_parse_table_1146(t_small_parse_table_array *v)
{
	v->a[22920] = sym__special_character;
	v->a[22921] = anon_sym_DQUOTE;
	v->a[22922] = sym_raw_string;
	v->a[22923] = aux_sym_number_token1;
	v->a[22924] = aux_sym_number_token2;
	v->a[22925] = anon_sym_DOLLAR_LBRACE;
	v->a[22926] = anon_sym_DOLLAR_LPAREN;
	v->a[22927] = anon_sym_BQUOTE;
	v->a[22928] = anon_sym_DOLLAR_BQUOTE;
	v->a[22929] = sym_word;
	v->a[22930] = anon_sym_SEMI;
	v->a[22931] = 3;
	v->a[22932] = actions(3);
	v->a[22933] = 1;
	v->a[22934] = sym_comment;
	v->a[22935] = actions(3117);
	v->a[22936] = 6;
	v->a[22937] = sym_file_descriptor;
	v->a[22938] = sym__concat;
	v->a[22939] = sym_variable_name;
	small_parse_table_1147(v);
}

void	small_parse_table_1147(t_small_parse_table_array *v)
{
	v->a[22940] = sym_test_operator;
	v->a[22941] = sym__brace_start;
	v->a[22942] = aux_sym_heredoc_redirect_token1;
	v->a[22943] = actions(3115);
	v->a[22944] = 36;
	v->a[22945] = anon_sym_esac;
	v->a[22946] = anon_sym_PIPE;
	v->a[22947] = anon_sym_SEMI_SEMI;
	v->a[22948] = anon_sym_SEMI_AMP;
	v->a[22949] = anon_sym_SEMI_SEMI_AMP;
	v->a[22950] = anon_sym_PIPE_AMP;
	v->a[22951] = anon_sym_AMP_AMP;
	v->a[22952] = anon_sym_PIPE_PIPE;
	v->a[22953] = anon_sym_LT;
	v->a[22954] = anon_sym_GT;
	v->a[22955] = anon_sym_GT_GT;
	v->a[22956] = anon_sym_AMP_GT;
	v->a[22957] = anon_sym_AMP_GT_GT;
	v->a[22958] = anon_sym_LT_AMP;
	v->a[22959] = anon_sym_GT_AMP;
	small_parse_table_1148(v);
}

void	small_parse_table_1148(t_small_parse_table_array *v)
{
	v->a[22960] = anon_sym_GT_PIPE;
	v->a[22961] = anon_sym_LT_AMP_DASH;
	v->a[22962] = anon_sym_GT_AMP_DASH;
	v->a[22963] = anon_sym_LT_LT;
	v->a[22964] = anon_sym_LT_LT_DASH;
	v->a[22965] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22966] = anon_sym_AMP;
	v->a[22967] = aux_sym_concatenation_token1;
	v->a[22968] = anon_sym_DOLLAR;
	v->a[22969] = sym__special_character;
	v->a[22970] = anon_sym_DQUOTE;
	v->a[22971] = sym_raw_string;
	v->a[22972] = aux_sym_number_token1;
	v->a[22973] = aux_sym_number_token2;
	v->a[22974] = anon_sym_DOLLAR_LBRACE;
	v->a[22975] = anon_sym_DOLLAR_LPAREN;
	v->a[22976] = anon_sym_BQUOTE;
	v->a[22977] = anon_sym_DOLLAR_BQUOTE;
	v->a[22978] = aux_sym__simple_variable_name_token1;
	v->a[22979] = sym_word;
	small_parse_table_1149(v);
}

void	small_parse_table_1149(t_small_parse_table_array *v)
{
	v->a[22980] = anon_sym_SEMI;
	v->a[22981] = 3;
	v->a[22982] = actions(3);
	v->a[22983] = 1;
	v->a[22984] = sym_comment;
	v->a[22985] = actions(2888);
	v->a[22986] = 6;
	v->a[22987] = sym_file_descriptor;
	v->a[22988] = sym__concat;
	v->a[22989] = sym_test_operator;
	v->a[22990] = sym__bare_dollar;
	v->a[22991] = sym__brace_start;
	v->a[22992] = aux_sym_heredoc_redirect_token1;
	v->a[22993] = actions(2886);
	v->a[22994] = 36;
	v->a[22995] = anon_sym_esac;
	v->a[22996] = anon_sym_LPAREN;
	v->a[22997] = anon_sym_PIPE;
	v->a[22998] = anon_sym_SEMI_SEMI;
	v->a[22999] = anon_sym_SEMI_AMP;
	small_parse_table_1150(v);
}

/* EOF small_parse_table_229.c */
