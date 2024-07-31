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
	v->a[31900] = anon_sym_RPAREN;
	v->a[31901] = anon_sym_SEMI_SEMI;
	v->a[31902] = anon_sym_AMP_AMP;
	v->a[31903] = anon_sym_PIPE_PIPE;
	v->a[31904] = anon_sym_LT;
	v->a[31905] = anon_sym_GT;
	v->a[31906] = anon_sym_GT_GT;
	v->a[31907] = anon_sym_LT_AMP;
	v->a[31908] = anon_sym_GT_AMP;
	v->a[31909] = anon_sym_GT_PIPE;
	v->a[31910] = anon_sym_LT_GT;
	v->a[31911] = anon_sym_LT_LT;
	v->a[31912] = anon_sym_LT_LT_DASH;
	v->a[31913] = aux_sym_heredoc_redirect_token1;
	v->a[31914] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31915] = aux_sym_concatenation_token1;
	v->a[31916] = anon_sym_DOLLAR;
	v->a[31917] = anon_sym_DQUOTE;
	v->a[31918] = sym_raw_string;
	v->a[31919] = sym_number;
	small_parse_table_1596(v);
}

void	small_parse_table_1596(t_small_parse_table_array *v)
{
	v->a[31920] = anon_sym_DOLLAR_LBRACE;
	v->a[31921] = anon_sym_DOLLAR_LPAREN;
	v->a[31922] = anon_sym_BQUOTE;
	v->a[31923] = sym_word;
	v->a[31924] = anon_sym_SEMI;
	v->a[31925] = 15;
	v->a[31926] = actions(3);
	v->a[31927] = 1;
	v->a[31928] = sym_comment;
	v->a[31929] = actions(53);
	v->a[31930] = 1;
	v->a[31931] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31932] = actions(55);
	v->a[31933] = 1;
	v->a[31934] = anon_sym_DOLLAR;
	v->a[31935] = actions(57);
	v->a[31936] = 1;
	v->a[31937] = anon_sym_DQUOTE;
	v->a[31938] = actions(61);
	v->a[31939] = 1;
	small_parse_table_1597(v);
}

void	small_parse_table_1597(t_small_parse_table_array *v)
{
	v->a[31940] = anon_sym_DOLLAR_LBRACE;
	v->a[31941] = actions(63);
	v->a[31942] = 1;
	v->a[31943] = anon_sym_DOLLAR_LPAREN;
	v->a[31944] = actions(65);
	v->a[31945] = 1;
	v->a[31946] = anon_sym_BQUOTE;
	v->a[31947] = actions(341);
	v->a[31948] = 1;
	v->a[31949] = sym_variable_name;
	v->a[31950] = state(323);
	v->a[31951] = 1;
	v->a[31952] = sym_command_name;
	v->a[31953] = state(602);
	v->a[31954] = 1;
	v->a[31955] = sym_concatenation;
	v->a[31956] = state(1073);
	v->a[31957] = 1;
	v->a[31958] = sym_file_redirect;
	v->a[31959] = state(823);
	small_parse_table_1598(v);
}

void	small_parse_table_1598(t_small_parse_table_array *v)
{
	v->a[31960] = 2;
	v->a[31961] = sym_variable_assignment;
	v->a[31962] = aux_sym_command_repeat1;
	v->a[31963] = actions(303);
	v->a[31964] = 3;
	v->a[31965] = sym_raw_string;
	v->a[31966] = sym_number;
	v->a[31967] = sym_word;
	v->a[31968] = state(603);
	v->a[31969] = 5;
	v->a[31970] = sym_arithmetic_expansion;
	v->a[31971] = sym_string;
	v->a[31972] = sym_simple_expansion;
	v->a[31973] = sym_expansion;
	v->a[31974] = sym_command_substitution;
	v->a[31975] = actions(965);
	v->a[31976] = 7;
	v->a[31977] = anon_sym_LT;
	v->a[31978] = anon_sym_GT;
	v->a[31979] = anon_sym_GT_GT;
	small_parse_table_1599(v);
}

void	small_parse_table_1599(t_small_parse_table_array *v)
{
	v->a[31980] = anon_sym_LT_AMP;
	v->a[31981] = anon_sym_GT_AMP;
	v->a[31982] = anon_sym_GT_PIPE;
	v->a[31983] = anon_sym_LT_GT;
	v->a[31984] = 3;
	v->a[31985] = actions(3);
	v->a[31986] = 1;
	v->a[31987] = sym_comment;
	v->a[31988] = actions(449);
	v->a[31989] = 1;
	v->a[31990] = sym__concat;
	v->a[31991] = actions(447);
	v->a[31992] = 26;
	v->a[31993] = anon_sym_PIPE;
	v->a[31994] = anon_sym_RPAREN;
	v->a[31995] = anon_sym_SEMI_SEMI;
	v->a[31996] = anon_sym_AMP_AMP;
	v->a[31997] = anon_sym_PIPE_PIPE;
	v->a[31998] = anon_sym_LT;
	v->a[31999] = anon_sym_GT;
	small_parse_table_1600(v);
}

/* EOF small_parse_table_319.c */
