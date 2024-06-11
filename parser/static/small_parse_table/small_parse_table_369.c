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
	v->a[36900] = aux_sym_for_statement_repeat1;
	v->a[36901] = state(950);
	v->a[36902] = 5;
	v->a[36903] = sym_arithmetic_expansion;
	v->a[36904] = sym_string;
	v->a[36905] = sym_simple_expansion;
	v->a[36906] = sym_expansion;
	v->a[36907] = sym_command_substitution;
	v->a[36908] = actions(610);
	v->a[36909] = 24;
	v->a[36910] = anon_sym_PIPE;
	v->a[36911] = anon_sym_AMP_AMP;
	v->a[36912] = anon_sym_PIPE_PIPE;
	v->a[36913] = anon_sym_LT;
	v->a[36914] = anon_sym_GT;
	v->a[36915] = anon_sym_GT_GT;
	v->a[36916] = anon_sym_AMP_GT;
	v->a[36917] = anon_sym_AMP_GT_GT;
	v->a[36918] = anon_sym_LT_AMP;
	v->a[36919] = anon_sym_GT_AMP;
	small_parse_table_1846(v);
}

void	small_parse_table_1846(t_small_parse_table_array *v)
{
	v->a[36920] = anon_sym_GT_PIPE;
	v->a[36921] = anon_sym_LT_AMP_DASH;
	v->a[36922] = anon_sym_GT_AMP_DASH;
	v->a[36923] = anon_sym_LT_LT;
	v->a[36924] = anon_sym_LT_LT_DASH;
	v->a[36925] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[36926] = anon_sym_DOLLAR;
	v->a[36927] = anon_sym_DQUOTE;
	v->a[36928] = sym_raw_string;
	v->a[36929] = sym_number;
	v->a[36930] = anon_sym_DOLLAR_LBRACE;
	v->a[36931] = anon_sym_DOLLAR_LPAREN;
	v->a[36932] = anon_sym_BQUOTE;
	v->a[36933] = sym_word;
	v->a[36934] = 12;
	v->a[36935] = actions(3);
	v->a[36936] = 1;
	v->a[36937] = sym_comment;
	v->a[36938] = actions(1395);
	v->a[36939] = 1;
	small_parse_table_1847(v);
}

void	small_parse_table_1847(t_small_parse_table_array *v)
{
	v->a[36940] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[36941] = actions(1398);
	v->a[36942] = 1;
	v->a[36943] = anon_sym_DOLLAR;
	v->a[36944] = actions(1401);
	v->a[36945] = 1;
	v->a[36946] = anon_sym_DQUOTE;
	v->a[36947] = actions(1404);
	v->a[36948] = 1;
	v->a[36949] = anon_sym_DOLLAR_LBRACE;
	v->a[36950] = actions(1407);
	v->a[36951] = 1;
	v->a[36952] = anon_sym_DOLLAR_LPAREN;
	v->a[36953] = actions(1410);
	v->a[36954] = 1;
	v->a[36955] = anon_sym_BQUOTE;
	v->a[36956] = actions(559);
	v->a[36957] = 2;
	v->a[36958] = sym_file_descriptor;
	v->a[36959] = sym_variable_name;
	small_parse_table_1848(v);
}

void	small_parse_table_1848(t_small_parse_table_array *v)
{
	v->a[36960] = state(484);
	v->a[36961] = 2;
	v->a[36962] = sym_concatenation;
	v->a[36963] = aux_sym_for_statement_repeat1;
	v->a[36964] = actions(1392);
	v->a[36965] = 3;
	v->a[36966] = sym_raw_string;
	v->a[36967] = sym_number;
	v->a[36968] = sym_word;
	v->a[36969] = state(950);
	v->a[36970] = 5;
	v->a[36971] = sym_arithmetic_expansion;
	v->a[36972] = sym_string;
	v->a[36973] = sym_simple_expansion;
	v->a[36974] = sym_expansion;
	v->a[36975] = sym_command_substitution;
	v->a[36976] = actions(564);
	v->a[36977] = 15;
	v->a[36978] = anon_sym_PIPE;
	v->a[36979] = anon_sym_AMP_AMP;
	small_parse_table_1849(v);
}

void	small_parse_table_1849(t_small_parse_table_array *v)
{
	v->a[36980] = anon_sym_PIPE_PIPE;
	v->a[36981] = anon_sym_LT;
	v->a[36982] = anon_sym_GT;
	v->a[36983] = anon_sym_GT_GT;
	v->a[36984] = anon_sym_AMP_GT;
	v->a[36985] = anon_sym_AMP_GT_GT;
	v->a[36986] = anon_sym_LT_AMP;
	v->a[36987] = anon_sym_GT_AMP;
	v->a[36988] = anon_sym_GT_PIPE;
	v->a[36989] = anon_sym_LT_AMP_DASH;
	v->a[36990] = anon_sym_GT_AMP_DASH;
	v->a[36991] = anon_sym_LT_LT;
	v->a[36992] = anon_sym_LT_LT_DASH;
	v->a[36993] = 3;
	v->a[36994] = actions(3);
	v->a[36995] = 1;
	v->a[36996] = sym_comment;
	v->a[36997] = actions(1100);
	v->a[36998] = 3;
	v->a[36999] = sym_file_descriptor;
	small_parse_table_1850(v);
}

/* EOF small_parse_table_369.c */
