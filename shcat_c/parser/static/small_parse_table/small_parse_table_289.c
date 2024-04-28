/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_289.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1445(t_small_parse_table_array *v)
{
	v->a[28900] = aux_sym_number_token1;
	v->a[28901] = aux_sym_number_token2;
	v->a[28902] = anon_sym_DOLLAR_LBRACE;
	v->a[28903] = anon_sym_DOLLAR_LPAREN;
	v->a[28904] = anon_sym_BQUOTE;
	v->a[28905] = anon_sym_DOLLAR_BQUOTE;
	v->a[28906] = anon_sym_LT_LPAREN;
	v->a[28907] = anon_sym_GT_LPAREN;
	v->a[28908] = sym_word;
	v->a[28909] = 9;
	v->a[28910] = actions(3);
	v->a[28911] = 1;
	v->a[28912] = sym_comment;
	v->a[28913] = actions(4386);
	v->a[28914] = 1;
	v->a[28915] = sym_variable_name;
	v->a[28916] = state(6772);
	v->a[28917] = 1;
	v->a[28918] = sym_subscript;
	v->a[28919] = actions(4261);
	small_parse_table_1446(v);
}

void	small_parse_table_1446(t_small_parse_table_array *v)
{
	v->a[28920] = 2;
	v->a[28921] = sym_test_operator;
	v->a[28922] = sym__brace_start;
	v->a[28923] = actions(4348);
	v->a[28924] = 2;
	v->a[28925] = sym_file_descriptor;
	v->a[28926] = aux_sym_heredoc_redirect_token1;
	v->a[28927] = state(4358);
	v->a[28928] = 2;
	v->a[28929] = sym_variable_assignment;
	v->a[28930] = aux_sym_variable_assignments_repeat1;
	v->a[28931] = state(4455);
	v->a[28932] = 3;
	v->a[28933] = sym_file_redirect;
	v->a[28934] = sym_heredoc_redirect;
	v->a[28935] = aux_sym_redirected_statement_repeat1;
	v->a[28936] = actions(4247);
	v->a[28937] = 18;
	v->a[28938] = anon_sym_LPAREN_LPAREN;
	v->a[28939] = anon_sym_LT_LT_LT;
	small_parse_table_1447(v);
}

void	small_parse_table_1447(t_small_parse_table_array *v)
{
	v->a[28940] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28941] = anon_sym_DOLLAR_LBRACK;
	v->a[28942] = anon_sym_DOLLAR;
	v->a[28943] = sym__special_character;
	v->a[28944] = anon_sym_DQUOTE;
	v->a[28945] = sym_raw_string;
	v->a[28946] = sym_ansi_c_string;
	v->a[28947] = aux_sym_number_token1;
	v->a[28948] = aux_sym_number_token2;
	v->a[28949] = anon_sym_DOLLAR_LBRACE;
	v->a[28950] = anon_sym_DOLLAR_LPAREN;
	v->a[28951] = anon_sym_BQUOTE;
	v->a[28952] = anon_sym_DOLLAR_BQUOTE;
	v->a[28953] = anon_sym_LT_LPAREN;
	v->a[28954] = anon_sym_GT_LPAREN;
	v->a[28955] = sym_word;
	v->a[28956] = actions(4253);
	v->a[28957] = 21;
	v->a[28958] = anon_sym_SEMI;
	v->a[28959] = anon_sym_PIPE_PIPE;
	small_parse_table_1448(v);
}

void	small_parse_table_1448(t_small_parse_table_array *v)
{
	v->a[28960] = anon_sym_AMP_AMP;
	v->a[28961] = anon_sym_PIPE;
	v->a[28962] = anon_sym_AMP;
	v->a[28963] = anon_sym_LT;
	v->a[28964] = anon_sym_GT;
	v->a[28965] = anon_sym_LT_LT;
	v->a[28966] = anon_sym_GT_GT;
	v->a[28967] = anon_sym_SEMI_SEMI;
	v->a[28968] = anon_sym_SEMI_AMP;
	v->a[28969] = anon_sym_SEMI_SEMI_AMP;
	v->a[28970] = anon_sym_PIPE_AMP;
	v->a[28971] = anon_sym_AMP_GT;
	v->a[28972] = anon_sym_AMP_GT_GT;
	v->a[28973] = anon_sym_LT_AMP;
	v->a[28974] = anon_sym_GT_AMP;
	v->a[28975] = anon_sym_GT_PIPE;
	v->a[28976] = anon_sym_LT_AMP_DASH;
	v->a[28977] = anon_sym_GT_AMP_DASH;
	v->a[28978] = anon_sym_LT_LT_DASH;
	v->a[28979] = 3;
	small_parse_table_1449(v);
}

void	small_parse_table_1449(t_small_parse_table_array *v)
{
	v->a[28980] = actions(3);
	v->a[28981] = 1;
	v->a[28982] = sym_comment;
	v->a[28983] = actions(1354);
	v->a[28984] = 6;
	v->a[28985] = sym_file_descriptor;
	v->a[28986] = sym__concat;
	v->a[28987] = sym_test_operator;
	v->a[28988] = sym__bare_dollar;
	v->a[28989] = sym__brace_start;
	v->a[28990] = aux_sym_heredoc_redirect_token1;
	v->a[28991] = actions(1352);
	v->a[28992] = 44;
	v->a[28993] = anon_sym_LPAREN_LPAREN;
	v->a[28994] = anon_sym_SEMI;
	v->a[28995] = anon_sym_PIPE_PIPE;
	v->a[28996] = anon_sym_AMP_AMP;
	v->a[28997] = anon_sym_PIPE;
	v->a[28998] = anon_sym_AMP;
	v->a[28999] = anon_sym_EQ_EQ;
	small_parse_table_1450(v);
}

/* EOF small_parse_table_289.c */
