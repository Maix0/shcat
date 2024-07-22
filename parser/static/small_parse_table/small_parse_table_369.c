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
	v->a[36900] = aux_sym__variable_assignments_repeat1;
	v->a[36901] = state(1353);
	v->a[36902] = 3;
	v->a[36903] = sym_file_redirect;
	v->a[36904] = sym_heredoc_redirect;
	v->a[36905] = aux_sym_redirected_statement_repeat1;
	v->a[36906] = actions(1057);
	v->a[36907] = 5;
	v->a[36908] = anon_sym_AMP_AMP;
	v->a[36909] = anon_sym_PIPE_PIPE;
	v->a[36910] = anon_sym_LT_LT;
	v->a[36911] = anon_sym_LT_LT_DASH;
	v->a[36912] = aux_sym_heredoc_redirect_token1;
	v->a[36913] = actions(780);
	v->a[36914] = 16;
	v->a[36915] = anon_sym_LT;
	v->a[36916] = anon_sym_GT;
	v->a[36917] = anon_sym_GT_GT;
	v->a[36918] = anon_sym_LT_AMP;
	v->a[36919] = anon_sym_GT_AMP;
	small_parse_table_1846(v);
}

void	small_parse_table_1846(t_small_parse_table_array *v)
{
	v->a[36920] = anon_sym_GT_PIPE;
	v->a[36921] = anon_sym_LT_GT;
	v->a[36922] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[36923] = anon_sym_DOLLAR;
	v->a[36924] = anon_sym_DQUOTE;
	v->a[36925] = sym_raw_string;
	v->a[36926] = sym_number;
	v->a[36927] = anon_sym_DOLLAR_LBRACE;
	v->a[36928] = anon_sym_DOLLAR_LPAREN;
	v->a[36929] = anon_sym_BQUOTE;
	v->a[36930] = sym_word;
	v->a[36931] = 6;
	v->a[36932] = actions(3);
	v->a[36933] = 1;
	v->a[36934] = sym_comment;
	v->a[36935] = actions(1392);
	v->a[36936] = 1;
	v->a[36937] = aux_sym_concatenation_token1;
	v->a[36938] = actions(1400);
	v->a[36939] = 1;
	small_parse_table_1847(v);
}

void	small_parse_table_1847(t_small_parse_table_array *v)
{
	v->a[36940] = sym__concat;
	v->a[36941] = state(514);
	v->a[36942] = 1;
	v->a[36943] = aux_sym_concatenation_repeat1;
	v->a[36944] = actions(1208);
	v->a[36945] = 2;
	v->a[36946] = sym_file_descriptor;
	v->a[36947] = ts_builtin_sym_end;
	v->a[36948] = actions(1210);
	v->a[36949] = 24;
	v->a[36950] = anon_sym_PIPE;
	v->a[36951] = anon_sym_SEMI_SEMI;
	v->a[36952] = anon_sym_AMP_AMP;
	v->a[36953] = anon_sym_PIPE_PIPE;
	v->a[36954] = anon_sym_LT;
	v->a[36955] = anon_sym_GT;
	v->a[36956] = anon_sym_GT_GT;
	v->a[36957] = anon_sym_LT_AMP;
	v->a[36958] = anon_sym_GT_AMP;
	v->a[36959] = anon_sym_GT_PIPE;
	small_parse_table_1848(v);
}

void	small_parse_table_1848(t_small_parse_table_array *v)
{
	v->a[36960] = anon_sym_LT_GT;
	v->a[36961] = anon_sym_LT_LT;
	v->a[36962] = anon_sym_LT_LT_DASH;
	v->a[36963] = aux_sym_heredoc_redirect_token1;
	v->a[36964] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[36965] = anon_sym_DOLLAR;
	v->a[36966] = anon_sym_DQUOTE;
	v->a[36967] = sym_raw_string;
	v->a[36968] = sym_number;
	v->a[36969] = anon_sym_DOLLAR_LBRACE;
	v->a[36970] = anon_sym_DOLLAR_LPAREN;
	v->a[36971] = anon_sym_BQUOTE;
	v->a[36972] = sym_word;
	v->a[36973] = anon_sym_SEMI;
	v->a[36974] = 3;
	v->a[36975] = actions(3);
	v->a[36976] = 1;
	v->a[36977] = sym_comment;
	v->a[36978] = actions(1229);
	v->a[36979] = 4;
	small_parse_table_1849(v);
}

void	small_parse_table_1849(t_small_parse_table_array *v)
{
	v->a[36980] = sym_file_descriptor;
	v->a[36981] = sym__concat;
	v->a[36982] = sym_variable_name;
	v->a[36983] = ts_builtin_sym_end;
	v->a[36984] = actions(1227);
	v->a[36985] = 25;
	v->a[36986] = anon_sym_PIPE;
	v->a[36987] = anon_sym_SEMI_SEMI;
	v->a[36988] = anon_sym_AMP_AMP;
	v->a[36989] = anon_sym_PIPE_PIPE;
	v->a[36990] = anon_sym_LT;
	v->a[36991] = anon_sym_GT;
	v->a[36992] = anon_sym_GT_GT;
	v->a[36993] = anon_sym_LT_AMP;
	v->a[36994] = anon_sym_GT_AMP;
	v->a[36995] = anon_sym_GT_PIPE;
	v->a[36996] = anon_sym_LT_GT;
	v->a[36997] = anon_sym_LT_LT;
	v->a[36998] = anon_sym_LT_LT_DASH;
	v->a[36999] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1850(v);
}

/* EOF small_parse_table_369.c */
