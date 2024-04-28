/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_319.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1595(t_small_parse_table_array *v)
{
	v->a[31900] = sym_comment;
	v->a[31901] = actions(3282);
	v->a[31902] = 1;
	v->a[31903] = anon_sym_DQUOTE;
	v->a[31904] = actions(3286);
	v->a[31905] = 1;
	v->a[31906] = sym_variable_name;
	v->a[31907] = state(1628);
	v->a[31908] = 1;
	v->a[31909] = sym_string;
	v->a[31910] = actions(3284);
	v->a[31911] = 2;
	v->a[31912] = aux_sym__simple_variable_name_token1;
	v->a[31913] = aux_sym__multiline_variable_name_token1;
	v->a[31914] = actions(1241);
	v->a[31915] = 3;
	v->a[31916] = sym_file_descriptor;
	v->a[31917] = sym_test_operator;
	v->a[31918] = sym__brace_start;
	v->a[31919] = actions(3280);
	small_parse_table_1596(v);
}

void	small_parse_table_1596(t_small_parse_table_array *v)
{
	v->a[31920] = 9;
	v->a[31921] = anon_sym_DASH;
	v->a[31922] = anon_sym_STAR;
	v->a[31923] = anon_sym_BANG;
	v->a[31924] = anon_sym_QMARK;
	v->a[31925] = anon_sym_DOLLAR;
	v->a[31926] = anon_sym_POUND;
	v->a[31927] = anon_sym_AT2;
	v->a[31928] = anon_sym_0;
	v->a[31929] = anon_sym__;
	v->a[31930] = actions(1239);
	v->a[31931] = 33;
	v->a[31932] = anon_sym_LPAREN_LPAREN;
	v->a[31933] = anon_sym_PIPE_PIPE;
	v->a[31934] = anon_sym_AMP_AMP;
	v->a[31935] = anon_sym_PIPE;
	v->a[31936] = anon_sym_LT;
	v->a[31937] = anon_sym_GT;
	v->a[31938] = anon_sym_LT_LT;
	v->a[31939] = anon_sym_GT_GT;
	small_parse_table_1597(v);
}

void	small_parse_table_1597(t_small_parse_table_array *v)
{
	v->a[31940] = anon_sym_PIPE_AMP;
	v->a[31941] = anon_sym_AMP_GT;
	v->a[31942] = anon_sym_AMP_GT_GT;
	v->a[31943] = anon_sym_LT_AMP;
	v->a[31944] = anon_sym_GT_AMP;
	v->a[31945] = anon_sym_GT_PIPE;
	v->a[31946] = anon_sym_LT_AMP_DASH;
	v->a[31947] = anon_sym_GT_AMP_DASH;
	v->a[31948] = anon_sym_LT_LT_DASH;
	v->a[31949] = aux_sym_heredoc_redirect_token1;
	v->a[31950] = anon_sym_LT_LT_LT;
	v->a[31951] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31952] = anon_sym_DOLLAR_LBRACK;
	v->a[31953] = sym__special_character;
	v->a[31954] = sym_raw_string;
	v->a[31955] = sym_ansi_c_string;
	v->a[31956] = aux_sym_number_token1;
	v->a[31957] = aux_sym_number_token2;
	v->a[31958] = anon_sym_DOLLAR_LBRACE;
	v->a[31959] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1598(v);
}

void	small_parse_table_1598(t_small_parse_table_array *v)
{
	v->a[31960] = anon_sym_BQUOTE;
	v->a[31961] = anon_sym_DOLLAR_BQUOTE;
	v->a[31962] = anon_sym_LT_LPAREN;
	v->a[31963] = anon_sym_GT_LPAREN;
	v->a[31964] = sym_word;
	v->a[31965] = 6;
	v->a[31966] = actions(3);
	v->a[31967] = 1;
	v->a[31968] = sym_comment;
	v->a[31969] = actions(4374);
	v->a[31970] = 1;
	v->a[31971] = aux_sym_concatenation_token1;
	v->a[31972] = actions(4571);
	v->a[31973] = 1;
	v->a[31974] = sym__concat;
	v->a[31975] = state(894);
	v->a[31976] = 1;
	v->a[31977] = aux_sym_concatenation_repeat1;
	v->a[31978] = actions(1267);
	v->a[31979] = 5;
	small_parse_table_1599(v);
}

void	small_parse_table_1599(t_small_parse_table_array *v)
{
	v->a[31980] = sym_file_descriptor;
	v->a[31981] = sym_test_operator;
	v->a[31982] = sym__bare_dollar;
	v->a[31983] = sym__brace_start;
	v->a[31984] = aux_sym_heredoc_redirect_token1;
	v->a[31985] = actions(1265);
	v->a[31986] = 42;
	v->a[31987] = anon_sym_LPAREN_LPAREN;
	v->a[31988] = anon_sym_SEMI;
	v->a[31989] = anon_sym_PIPE_PIPE;
	v->a[31990] = anon_sym_AMP_AMP;
	v->a[31991] = anon_sym_PIPE;
	v->a[31992] = anon_sym_AMP;
	v->a[31993] = anon_sym_EQ_EQ;
	v->a[31994] = anon_sym_LT;
	v->a[31995] = anon_sym_GT;
	v->a[31996] = anon_sym_LT_LT;
	v->a[31997] = anon_sym_GT_GT;
	v->a[31998] = anon_sym_esac;
	v->a[31999] = anon_sym_SEMI_SEMI;
	small_parse_table_1600(v);
}

/* EOF small_parse_table_319.c */
