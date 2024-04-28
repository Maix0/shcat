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
	v->a[36900] = anon_sym_PIPE_AMP;
	v->a[36901] = anon_sym_AMP_GT;
	v->a[36902] = anon_sym_AMP_GT_GT;
	v->a[36903] = anon_sym_LT_AMP;
	v->a[36904] = anon_sym_GT_AMP;
	v->a[36905] = anon_sym_GT_PIPE;
	v->a[36906] = anon_sym_LT_AMP_DASH;
	v->a[36907] = anon_sym_GT_AMP_DASH;
	v->a[36908] = anon_sym_LT_LT_DASH;
	v->a[36909] = anon_sym_LT_LT_LT;
	v->a[36910] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[36911] = anon_sym_DOLLAR_LBRACK;
	v->a[36912] = sym__special_character;
	v->a[36913] = sym_raw_string;
	v->a[36914] = sym_ansi_c_string;
	v->a[36915] = aux_sym_number_token1;
	v->a[36916] = aux_sym_number_token2;
	v->a[36917] = anon_sym_DOLLAR_LBRACE;
	v->a[36918] = anon_sym_DOLLAR_LPAREN;
	v->a[36919] = anon_sym_BQUOTE;
	small_parse_table_1846(v);
}

void	small_parse_table_1846(t_small_parse_table_array *v)
{
	v->a[36920] = anon_sym_DOLLAR_BQUOTE;
	v->a[36921] = anon_sym_LT_LPAREN;
	v->a[36922] = anon_sym_GT_LPAREN;
	v->a[36923] = sym_word;
	v->a[36924] = 9;
	v->a[36925] = actions(3);
	v->a[36926] = 1;
	v->a[36927] = sym_comment;
	v->a[36928] = actions(4811);
	v->a[36929] = 1;
	v->a[36930] = sym_variable_name;
	v->a[36931] = state(6786);
	v->a[36932] = 1;
	v->a[36933] = sym_subscript;
	v->a[36934] = actions(4261);
	v->a[36935] = 2;
	v->a[36936] = sym_test_operator;
	v->a[36937] = sym__brace_start;
	v->a[36938] = actions(4348);
	v->a[36939] = 2;
	small_parse_table_1847(v);
}

void	small_parse_table_1847(t_small_parse_table_array *v)
{
	v->a[36940] = sym_file_descriptor;
	v->a[36941] = aux_sym_heredoc_redirect_token1;
	v->a[36942] = state(4534);
	v->a[36943] = 2;
	v->a[36944] = sym_variable_assignment;
	v->a[36945] = aux_sym_variable_assignments_repeat1;
	v->a[36946] = state(4746);
	v->a[36947] = 3;
	v->a[36948] = sym_file_redirect;
	v->a[36949] = sym_heredoc_redirect;
	v->a[36950] = aux_sym_redirected_statement_repeat1;
	v->a[36951] = actions(4247);
	v->a[36952] = 18;
	v->a[36953] = anon_sym_LPAREN_LPAREN;
	v->a[36954] = anon_sym_LT_LT_LT;
	v->a[36955] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[36956] = anon_sym_DOLLAR_LBRACK;
	v->a[36957] = anon_sym_DOLLAR;
	v->a[36958] = sym__special_character;
	v->a[36959] = anon_sym_DQUOTE;
	small_parse_table_1848(v);
}

void	small_parse_table_1848(t_small_parse_table_array *v)
{
	v->a[36960] = sym_raw_string;
	v->a[36961] = sym_ansi_c_string;
	v->a[36962] = aux_sym_number_token1;
	v->a[36963] = aux_sym_number_token2;
	v->a[36964] = anon_sym_DOLLAR_LBRACE;
	v->a[36965] = anon_sym_DOLLAR_LPAREN;
	v->a[36966] = anon_sym_BQUOTE;
	v->a[36967] = anon_sym_DOLLAR_BQUOTE;
	v->a[36968] = anon_sym_LT_LPAREN;
	v->a[36969] = anon_sym_GT_LPAREN;
	v->a[36970] = sym_word;
	v->a[36971] = actions(4253);
	v->a[36972] = 20;
	v->a[36973] = anon_sym_SEMI;
	v->a[36974] = anon_sym_PIPE_PIPE;
	v->a[36975] = anon_sym_AMP_AMP;
	v->a[36976] = anon_sym_PIPE;
	v->a[36977] = anon_sym_AMP;
	v->a[36978] = anon_sym_LT;
	v->a[36979] = anon_sym_GT;
	small_parse_table_1849(v);
}

void	small_parse_table_1849(t_small_parse_table_array *v)
{
	v->a[36980] = anon_sym_LT_LT;
	v->a[36981] = anon_sym_GT_GT;
	v->a[36982] = anon_sym_RPAREN;
	v->a[36983] = anon_sym_SEMI_SEMI;
	v->a[36984] = anon_sym_PIPE_AMP;
	v->a[36985] = anon_sym_AMP_GT;
	v->a[36986] = anon_sym_AMP_GT_GT;
	v->a[36987] = anon_sym_LT_AMP;
	v->a[36988] = anon_sym_GT_AMP;
	v->a[36989] = anon_sym_GT_PIPE;
	v->a[36990] = anon_sym_LT_AMP_DASH;
	v->a[36991] = anon_sym_GT_AMP_DASH;
	v->a[36992] = anon_sym_LT_LT_DASH;
	v->a[36993] = 23;
	v->a[36994] = actions(71);
	v->a[36995] = 1;
	v->a[36996] = sym_comment;
	v->a[36997] = actions(4816);
	v->a[36998] = 1;
	v->a[36999] = sym_word;
	small_parse_table_1850(v);
}

/* EOF small_parse_table_369.c */
