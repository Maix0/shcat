/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_369.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1845(t_small_parse_table_array *v)
{
	v->a[36900] = anon_sym_AMP_AMP;
	v->a[36901] = anon_sym_PIPE_PIPE;
	v->a[36902] = anon_sym_LT_LT;
	v->a[36903] = anon_sym_LT_LT_DASH;
	v->a[36904] = aux_sym_heredoc_redirect_token1;
	v->a[36905] = anon_sym_SEMI;
	v->a[36906] = 11;
	v->a[36907] = actions(3);
	v->a[36908] = 1;
	v->a[36909] = sym_comment;
	v->a[36910] = actions(1389);
	v->a[36911] = 1;
	v->a[36912] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[36913] = actions(1392);
	v->a[36914] = 1;
	v->a[36915] = anon_sym_DOLLAR;
	v->a[36916] = actions(1395);
	v->a[36917] = 1;
	v->a[36918] = anon_sym_DQUOTE;
	v->a[36919] = actions(1398);
	small_parse_table_1846(v);
}

void	small_parse_table_1846(t_small_parse_table_array *v)
{
	v->a[36920] = 1;
	v->a[36921] = anon_sym_DOLLAR_LBRACE;
	v->a[36922] = actions(1401);
	v->a[36923] = 1;
	v->a[36924] = anon_sym_DOLLAR_LPAREN;
	v->a[36925] = actions(1404);
	v->a[36926] = 1;
	v->a[36927] = anon_sym_BQUOTE;
	v->a[36928] = state(601);
	v->a[36929] = 2;
	v->a[36930] = sym_concatenation;
	v->a[36931] = aux_sym_for_statement_repeat1;
	v->a[36932] = actions(1386);
	v->a[36933] = 3;
	v->a[36934] = sym_raw_string;
	v->a[36935] = sym_number;
	v->a[36936] = sym_word;
	v->a[36937] = state(726);
	v->a[36938] = 5;
	v->a[36939] = sym_arithmetic_expansion;
	small_parse_table_1847(v);
}

void	small_parse_table_1847(t_small_parse_table_array *v)
{
	v->a[36940] = sym_string;
	v->a[36941] = sym_simple_expansion;
	v->a[36942] = sym_expansion;
	v->a[36943] = sym_command_substitution;
	v->a[36944] = actions(618);
	v->a[36945] = 10;
	v->a[36946] = anon_sym_AMP_AMP;
	v->a[36947] = anon_sym_PIPE_PIPE;
	v->a[36948] = anon_sym_LT;
	v->a[36949] = anon_sym_GT;
	v->a[36950] = anon_sym_GT_GT;
	v->a[36951] = anon_sym_LT_AMP;
	v->a[36952] = anon_sym_GT_AMP;
	v->a[36953] = anon_sym_GT_PIPE;
	v->a[36954] = anon_sym_LT_GT;
	v->a[36955] = aux_sym_heredoc_redirect_token1;
	v->a[36956] = 3;
	v->a[36957] = actions(3);
	v->a[36958] = 1;
	v->a[36959] = sym_comment;
	small_parse_table_1848(v);
}

void	small_parse_table_1848(t_small_parse_table_array *v)
{
	v->a[36960] = actions(975);
	v->a[36961] = 1;
	v->a[36962] = sym__bare_dollar;
	v->a[36963] = actions(967);
	v->a[36964] = 25;
	v->a[36965] = anon_sym_PIPE;
	v->a[36966] = anon_sym_RPAREN;
	v->a[36967] = anon_sym_SEMI_SEMI;
	v->a[36968] = anon_sym_AMP_AMP;
	v->a[36969] = anon_sym_PIPE_PIPE;
	v->a[36970] = anon_sym_LT;
	v->a[36971] = anon_sym_GT;
	v->a[36972] = anon_sym_GT_GT;
	v->a[36973] = anon_sym_LT_AMP;
	v->a[36974] = anon_sym_GT_AMP;
	v->a[36975] = anon_sym_GT_PIPE;
	v->a[36976] = anon_sym_LT_GT;
	v->a[36977] = anon_sym_LT_LT;
	v->a[36978] = anon_sym_LT_LT_DASH;
	v->a[36979] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1849(v);
}

void	small_parse_table_1849(t_small_parse_table_array *v)
{
	v->a[36980] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[36981] = anon_sym_DOLLAR;
	v->a[36982] = anon_sym_DQUOTE;
	v->a[36983] = sym_raw_string;
	v->a[36984] = sym_number;
	v->a[36985] = anon_sym_DOLLAR_LBRACE;
	v->a[36986] = anon_sym_DOLLAR_LPAREN;
	v->a[36987] = anon_sym_BQUOTE;
	v->a[36988] = sym_word;
	v->a[36989] = anon_sym_SEMI;
	v->a[36990] = 6;
	v->a[36991] = actions(3);
	v->a[36992] = 1;
	v->a[36993] = sym_comment;
	v->a[36994] = actions(975);
	v->a[36995] = 1;
	v->a[36996] = sym__bare_dollar;
	v->a[36997] = actions(987);
	v->a[36998] = 1;
	v->a[36999] = aux_sym_concatenation_token1;
	small_parse_table_1850(v);
}

/* EOF small_parse_table_369.c */
