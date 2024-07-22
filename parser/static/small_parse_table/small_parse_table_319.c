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
	v->a[31900] = 3;
	v->a[31901] = sym_file_descriptor;
	v->a[31902] = sym__concat;
	v->a[31903] = sym__bare_dollar;
	v->a[31904] = actions(513);
	v->a[31905] = 27;
	v->a[31906] = anon_sym_LPAREN;
	v->a[31907] = anon_sym_PIPE;
	v->a[31908] = anon_sym_RPAREN;
	v->a[31909] = anon_sym_SEMI_SEMI;
	v->a[31910] = anon_sym_AMP_AMP;
	v->a[31911] = anon_sym_PIPE_PIPE;
	v->a[31912] = anon_sym_LT;
	v->a[31913] = anon_sym_GT;
	v->a[31914] = anon_sym_GT_GT;
	v->a[31915] = anon_sym_LT_AMP;
	v->a[31916] = anon_sym_GT_AMP;
	v->a[31917] = anon_sym_GT_PIPE;
	v->a[31918] = anon_sym_LT_GT;
	v->a[31919] = anon_sym_LT_LT;
	small_parse_table_1596(v);
}

void	small_parse_table_1596(t_small_parse_table_array *v)
{
	v->a[31920] = anon_sym_LT_LT_DASH;
	v->a[31921] = aux_sym_heredoc_redirect_token1;
	v->a[31922] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31923] = aux_sym_concatenation_token1;
	v->a[31924] = anon_sym_DOLLAR;
	v->a[31925] = anon_sym_DQUOTE;
	v->a[31926] = sym_raw_string;
	v->a[31927] = sym_number;
	v->a[31928] = anon_sym_DOLLAR_LBRACE;
	v->a[31929] = anon_sym_DOLLAR_LPAREN;
	v->a[31930] = anon_sym_BQUOTE;
	v->a[31931] = sym_word;
	v->a[31932] = anon_sym_SEMI;
	v->a[31933] = 6;
	v->a[31934] = actions(3);
	v->a[31935] = 1;
	v->a[31936] = sym_comment;
	v->a[31937] = actions(1253);
	v->a[31938] = 1;
	v->a[31939] = aux_sym_concatenation_token1;
	small_parse_table_1597(v);
}

void	small_parse_table_1597(t_small_parse_table_array *v)
{
	v->a[31940] = actions(1256);
	v->a[31941] = 1;
	v->a[31942] = sym__concat;
	v->a[31943] = state(409);
	v->a[31944] = 1;
	v->a[31945] = aux_sym_concatenation_repeat1;
	v->a[31946] = actions(1110);
	v->a[31947] = 3;
	v->a[31948] = sym_file_descriptor;
	v->a[31949] = sym_variable_name;
	v->a[31950] = ts_builtin_sym_end;
	v->a[31951] = actions(1105);
	v->a[31952] = 24;
	v->a[31953] = anon_sym_PIPE;
	v->a[31954] = anon_sym_SEMI_SEMI;
	v->a[31955] = anon_sym_AMP_AMP;
	v->a[31956] = anon_sym_PIPE_PIPE;
	v->a[31957] = anon_sym_LT;
	v->a[31958] = anon_sym_GT;
	v->a[31959] = anon_sym_GT_GT;
	small_parse_table_1598(v);
}

void	small_parse_table_1598(t_small_parse_table_array *v)
{
	v->a[31960] = anon_sym_LT_AMP;
	v->a[31961] = anon_sym_GT_AMP;
	v->a[31962] = anon_sym_GT_PIPE;
	v->a[31963] = anon_sym_LT_GT;
	v->a[31964] = anon_sym_LT_LT;
	v->a[31965] = anon_sym_LT_LT_DASH;
	v->a[31966] = aux_sym_heredoc_redirect_token1;
	v->a[31967] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31968] = anon_sym_DOLLAR;
	v->a[31969] = anon_sym_DQUOTE;
	v->a[31970] = sym_raw_string;
	v->a[31971] = sym_number;
	v->a[31972] = anon_sym_DOLLAR_LBRACE;
	v->a[31973] = anon_sym_DOLLAR_LPAREN;
	v->a[31974] = anon_sym_BQUOTE;
	v->a[31975] = sym_word;
	v->a[31976] = anon_sym_SEMI;
	v->a[31977] = 3;
	v->a[31978] = actions(3);
	v->a[31979] = 1;
	small_parse_table_1599(v);
}

void	small_parse_table_1599(t_small_parse_table_array *v)
{
	v->a[31980] = sym_comment;
	v->a[31981] = actions(527);
	v->a[31982] = 4;
	v->a[31983] = sym_file_descriptor;
	v->a[31984] = sym__concat;
	v->a[31985] = sym__bare_dollar;
	v->a[31986] = ts_builtin_sym_end;
	v->a[31987] = actions(525);
	v->a[31988] = 26;
	v->a[31989] = anon_sym_LPAREN;
	v->a[31990] = anon_sym_PIPE;
	v->a[31991] = anon_sym_SEMI_SEMI;
	v->a[31992] = anon_sym_AMP_AMP;
	v->a[31993] = anon_sym_PIPE_PIPE;
	v->a[31994] = anon_sym_LT;
	v->a[31995] = anon_sym_GT;
	v->a[31996] = anon_sym_GT_GT;
	v->a[31997] = anon_sym_LT_AMP;
	v->a[31998] = anon_sym_GT_AMP;
	v->a[31999] = anon_sym_GT_PIPE;
	small_parse_table_1600(v);
}

/* EOF small_parse_table_319.c */
