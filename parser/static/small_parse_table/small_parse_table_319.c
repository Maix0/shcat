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
	v->a[31900] = 5;
	v->a[31901] = sym_arithmetic_expansion;
	v->a[31902] = sym_string;
	v->a[31903] = sym_simple_expansion;
	v->a[31904] = sym_expansion;
	v->a[31905] = sym_command_substitution;
	v->a[31906] = actions(505);
	v->a[31907] = 13;
	v->a[31908] = anon_sym_PIPE;
	v->a[31909] = anon_sym_AMP_AMP;
	v->a[31910] = anon_sym_PIPE_PIPE;
	v->a[31911] = anon_sym_LT;
	v->a[31912] = anon_sym_GT;
	v->a[31913] = anon_sym_GT_GT;
	v->a[31914] = anon_sym_LT_AMP;
	v->a[31915] = anon_sym_GT_AMP;
	v->a[31916] = anon_sym_GT_PIPE;
	v->a[31917] = anon_sym_LT_GT;
	v->a[31918] = anon_sym_LT_LT;
	v->a[31919] = anon_sym_LT_LT_DASH;
	small_parse_table_1596(v);
}

void	small_parse_table_1596(t_small_parse_table_array *v)
{
	v->a[31920] = aux_sym_heredoc_redirect_token1;
	v->a[31921] = 20;
	v->a[31922] = actions(3);
	v->a[31923] = 1;
	v->a[31924] = sym_comment;
	v->a[31925] = actions(17);
	v->a[31926] = 1;
	v->a[31927] = anon_sym_LPAREN;
	v->a[31928] = actions(55);
	v->a[31929] = 1;
	v->a[31930] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31931] = actions(57);
	v->a[31932] = 1;
	v->a[31933] = anon_sym_DOLLAR;
	v->a[31934] = actions(59);
	v->a[31935] = 1;
	v->a[31936] = anon_sym_DQUOTE;
	v->a[31937] = actions(63);
	v->a[31938] = 1;
	v->a[31939] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1597(v);
}

void	small_parse_table_1597(t_small_parse_table_array *v)
{
	v->a[31940] = actions(65);
	v->a[31941] = 1;
	v->a[31942] = anon_sym_DOLLAR_LPAREN;
	v->a[31943] = actions(67);
	v->a[31944] = 1;
	v->a[31945] = anon_sym_BQUOTE;
	v->a[31946] = actions(71);
	v->a[31947] = 1;
	v->a[31948] = sym_variable_name;
	v->a[31949] = actions(1164);
	v->a[31950] = 1;
	v->a[31951] = sym_file_descriptor;
	v->a[31952] = state(183);
	v->a[31953] = 1;
	v->a[31954] = sym_command_name;
	v->a[31955] = state(584);
	v->a[31956] = 1;
	v->a[31957] = sym_concatenation;
	v->a[31958] = state(674);
	v->a[31959] = 1;
	small_parse_table_1598(v);
}

void	small_parse_table_1598(t_small_parse_table_array *v)
{
	v->a[31960] = aux_sym_command_repeat1;
	v->a[31961] = state(726);
	v->a[31962] = 1;
	v->a[31963] = sym_variable_assignment;
	v->a[31964] = state(1109);
	v->a[31965] = 1;
	v->a[31966] = sym_subshell;
	v->a[31967] = state(1113);
	v->a[31968] = 1;
	v->a[31969] = sym_command;
	v->a[31970] = state(1218);
	v->a[31971] = 1;
	v->a[31972] = sym_file_redirect;
	v->a[31973] = actions(61);
	v->a[31974] = 3;
	v->a[31975] = sym_raw_string;
	v->a[31976] = sym_number;
	v->a[31977] = sym_word;
	v->a[31978] = state(433);
	v->a[31979] = 5;
	small_parse_table_1599(v);
}

void	small_parse_table_1599(t_small_parse_table_array *v)
{
	v->a[31980] = sym_arithmetic_expansion;
	v->a[31981] = sym_string;
	v->a[31982] = sym_simple_expansion;
	v->a[31983] = sym_expansion;
	v->a[31984] = sym_command_substitution;
	v->a[31985] = actions(1162);
	v->a[31986] = 7;
	v->a[31987] = anon_sym_LT;
	v->a[31988] = anon_sym_GT;
	v->a[31989] = anon_sym_GT_GT;
	v->a[31990] = anon_sym_LT_AMP;
	v->a[31991] = anon_sym_GT_AMP;
	v->a[31992] = anon_sym_GT_PIPE;
	v->a[31993] = anon_sym_LT_GT;
	v->a[31994] = 6;
	v->a[31995] = actions(3);
	v->a[31996] = 1;
	v->a[31997] = sym_comment;
	v->a[31998] = actions(1209);
	v->a[31999] = 1;
	small_parse_table_1600(v);
}

/* EOF small_parse_table_319.c */
