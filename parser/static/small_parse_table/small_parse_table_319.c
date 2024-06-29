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
	v->a[31900] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31901] = anon_sym_AMP;
	v->a[31902] = aux_sym_concatenation_token1;
	v->a[31903] = anon_sym_DOLLAR;
	v->a[31904] = anon_sym_DQUOTE;
	v->a[31905] = sym_raw_string;
	v->a[31906] = sym_number;
	v->a[31907] = anon_sym_DOLLAR_LBRACE;
	v->a[31908] = anon_sym_DOLLAR_LPAREN;
	v->a[31909] = anon_sym_BQUOTE;
	v->a[31910] = sym_word;
	v->a[31911] = anon_sym_SEMI;
	v->a[31912] = 3;
	v->a[31913] = actions(3);
	v->a[31914] = 1;
	v->a[31915] = sym_comment;
	v->a[31916] = actions(1100);
	v->a[31917] = 3;
	v->a[31918] = sym_file_descriptor;
	v->a[31919] = sym__concat;
	small_parse_table_1596(v);
}

void	small_parse_table_1596(t_small_parse_table_array *v)
{
	v->a[31920] = sym__bare_dollar;
	v->a[31921] = actions(1098);
	v->a[31922] = 31;
	v->a[31923] = anon_sym_LPAREN;
	v->a[31924] = anon_sym_PIPE;
	v->a[31925] = anon_sym_RPAREN;
	v->a[31926] = anon_sym_SEMI_SEMI;
	v->a[31927] = anon_sym_AMP_AMP;
	v->a[31928] = anon_sym_PIPE_PIPE;
	v->a[31929] = anon_sym_LT;
	v->a[31930] = anon_sym_GT;
	v->a[31931] = anon_sym_GT_GT;
	v->a[31932] = anon_sym_AMP_GT;
	v->a[31933] = anon_sym_AMP_GT_GT;
	v->a[31934] = anon_sym_LT_AMP;
	v->a[31935] = anon_sym_GT_AMP;
	v->a[31936] = anon_sym_GT_PIPE;
	v->a[31937] = anon_sym_LT_AMP_DASH;
	v->a[31938] = anon_sym_GT_AMP_DASH;
	v->a[31939] = anon_sym_LT_LT;
	small_parse_table_1597(v);
}

void	small_parse_table_1597(t_small_parse_table_array *v)
{
	v->a[31940] = anon_sym_LT_LT_DASH;
	v->a[31941] = aux_sym_heredoc_redirect_token1;
	v->a[31942] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31943] = anon_sym_AMP;
	v->a[31944] = aux_sym_concatenation_token1;
	v->a[31945] = anon_sym_DOLLAR;
	v->a[31946] = anon_sym_DQUOTE;
	v->a[31947] = sym_raw_string;
	v->a[31948] = sym_number;
	v->a[31949] = anon_sym_DOLLAR_LBRACE;
	v->a[31950] = anon_sym_DOLLAR_LPAREN;
	v->a[31951] = anon_sym_BQUOTE;
	v->a[31952] = sym_word;
	v->a[31953] = anon_sym_SEMI;
	v->a[31954] = 12;
	v->a[31955] = actions(3);
	v->a[31956] = 1;
	v->a[31957] = sym_comment;
	v->a[31958] = actions(518);
	v->a[31959] = 1;
	small_parse_table_1598(v);
}

void	small_parse_table_1598(t_small_parse_table_array *v)
{
	v->a[31960] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31961] = actions(521);
	v->a[31962] = 1;
	v->a[31963] = anon_sym_DOLLAR;
	v->a[31964] = actions(524);
	v->a[31965] = 1;
	v->a[31966] = anon_sym_DQUOTE;
	v->a[31967] = actions(527);
	v->a[31968] = 1;
	v->a[31969] = anon_sym_DOLLAR_LBRACE;
	v->a[31970] = actions(530);
	v->a[31971] = 1;
	v->a[31972] = anon_sym_DOLLAR_LPAREN;
	v->a[31973] = actions(533);
	v->a[31974] = 1;
	v->a[31975] = anon_sym_BQUOTE;
	v->a[31976] = actions(536);
	v->a[31977] = 2;
	v->a[31978] = sym_file_descriptor;
	v->a[31979] = sym_variable_name;
	small_parse_table_1599(v);
}

void	small_parse_table_1599(t_small_parse_table_array *v)
{
	v->a[31980] = state(383);
	v->a[31981] = 2;
	v->a[31982] = sym_concatenation;
	v->a[31983] = aux_sym_for_statement_repeat1;
	v->a[31984] = actions(1225);
	v->a[31985] = 3;
	v->a[31986] = sym_raw_string;
	v->a[31987] = sym_number;
	v->a[31988] = sym_word;
	v->a[31989] = state(795);
	v->a[31990] = 5;
	v->a[31991] = sym_arithmetic_expansion;
	v->a[31992] = sym_string;
	v->a[31993] = sym_simple_expansion;
	v->a[31994] = sym_expansion;
	v->a[31995] = sym_command_substitution;
	v->a[31996] = actions(516);
	v->a[31997] = 16;
	v->a[31998] = anon_sym_PIPE;
	v->a[31999] = anon_sym_AMP_AMP;
	small_parse_table_1600(v);
}

/* EOF small_parse_table_319.c */
