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
	v->a[31900] = anon_sym_GT;
	v->a[31901] = anon_sym_GT_GT;
	v->a[31902] = anon_sym_LT_AMP;
	v->a[31903] = anon_sym_GT_AMP;
	v->a[31904] = anon_sym_GT_PIPE;
	v->a[31905] = anon_sym_LT_AMP_DASH;
	v->a[31906] = anon_sym_GT_AMP_DASH;
	v->a[31907] = anon_sym_LT_LT;
	v->a[31908] = anon_sym_LT_LT_DASH;
	v->a[31909] = aux_sym_heredoc_redirect_token1;
	v->a[31910] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31911] = anon_sym_AMP;
	v->a[31912] = anon_sym_DOLLAR;
	v->a[31913] = anon_sym_DQUOTE;
	v->a[31914] = sym_raw_string;
	v->a[31915] = sym_number;
	v->a[31916] = anon_sym_DOLLAR_LBRACE;
	v->a[31917] = anon_sym_DOLLAR_LPAREN;
	v->a[31918] = anon_sym_BQUOTE;
	v->a[31919] = sym_word;
	small_parse_table_1596(v);
}

void	small_parse_table_1596(t_small_parse_table_array *v)
{
	v->a[31920] = anon_sym_SEMI;
	v->a[31921] = 6;
	v->a[31922] = actions(3);
	v->a[31923] = 1;
	v->a[31924] = sym_comment;
	v->a[31925] = actions(1083);
	v->a[31926] = 1;
	v->a[31927] = aux_sym_concatenation_token1;
	v->a[31928] = actions(1185);
	v->a[31929] = 1;
	v->a[31930] = sym__concat;
	v->a[31931] = state(316);
	v->a[31932] = 1;
	v->a[31933] = aux_sym_concatenation_repeat1;
	v->a[31934] = actions(1095);
	v->a[31935] = 2;
	v->a[31936] = sym_file_descriptor;
	v->a[31937] = sym__bare_dollar;
	v->a[31938] = actions(1097);
	v->a[31939] = 28;
	small_parse_table_1597(v);
}

void	small_parse_table_1597(t_small_parse_table_array *v)
{
	v->a[31940] = anon_sym_LPAREN;
	v->a[31941] = anon_sym_PIPE;
	v->a[31942] = anon_sym_RPAREN;
	v->a[31943] = anon_sym_SEMI_SEMI;
	v->a[31944] = anon_sym_AMP_AMP;
	v->a[31945] = anon_sym_PIPE_PIPE;
	v->a[31946] = anon_sym_LT;
	v->a[31947] = anon_sym_GT;
	v->a[31948] = anon_sym_GT_GT;
	v->a[31949] = anon_sym_LT_AMP;
	v->a[31950] = anon_sym_GT_AMP;
	v->a[31951] = anon_sym_GT_PIPE;
	v->a[31952] = anon_sym_LT_AMP_DASH;
	v->a[31953] = anon_sym_GT_AMP_DASH;
	v->a[31954] = anon_sym_LT_LT;
	v->a[31955] = anon_sym_LT_LT_DASH;
	v->a[31956] = aux_sym_heredoc_redirect_token1;
	v->a[31957] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31958] = anon_sym_AMP;
	v->a[31959] = anon_sym_DOLLAR;
	small_parse_table_1598(v);
}

void	small_parse_table_1598(t_small_parse_table_array *v)
{
	v->a[31960] = anon_sym_DQUOTE;
	v->a[31961] = sym_raw_string;
	v->a[31962] = sym_number;
	v->a[31963] = anon_sym_DOLLAR_LBRACE;
	v->a[31964] = anon_sym_DOLLAR_LPAREN;
	v->a[31965] = anon_sym_BQUOTE;
	v->a[31966] = sym_word;
	v->a[31967] = anon_sym_SEMI;
	v->a[31968] = 17;
	v->a[31969] = actions(842);
	v->a[31970] = 1;
	v->a[31971] = anon_sym_PIPE;
	v->a[31972] = actions(844);
	v->a[31973] = 1;
	v->a[31974] = anon_sym_AMP_AMP;
	v->a[31975] = actions(846);
	v->a[31976] = 1;
	v->a[31977] = anon_sym_PIPE_PIPE;
	v->a[31978] = actions(856);
	v->a[31979] = 1;
	small_parse_table_1599(v);
}

void	small_parse_table_1599(t_small_parse_table_array *v)
{
	v->a[31980] = anon_sym_CARET;
	v->a[31981] = actions(858);
	v->a[31982] = 1;
	v->a[31983] = anon_sym_AMP;
	v->a[31984] = actions(870);
	v->a[31985] = 1;
	v->a[31986] = sym_comment;
	v->a[31987] = actions(1021);
	v->a[31988] = 1;
	v->a[31989] = anon_sym_EQ;
	v->a[31990] = actions(1023);
	v->a[31991] = 1;
	v->a[31992] = anon_sym_QMARK;
	v->a[31993] = actions(1199);
	v->a[31994] = 1;
	v->a[31995] = anon_sym_RPAREN_RPAREN;
	v->a[31996] = actions(850);
	v->a[31997] = 2;
	v->a[31998] = anon_sym_LT;
	v->a[31999] = anon_sym_GT;
	small_parse_table_1600(v);
}

/* EOF small_parse_table_319.c */
