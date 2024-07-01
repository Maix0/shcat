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
	v->a[28900] = sym_concatenation;
	v->a[28901] = state(1998);
	v->a[28902] = 1;
	v->a[28903] = sym__heredoc_expression;
	v->a[28904] = state(1999);
	v->a[28905] = 1;
	v->a[28906] = sym__heredoc_pipeline;
	v->a[28907] = actions(1068);
	v->a[28908] = 2;
	v->a[28909] = anon_sym_AMP_AMP;
	v->a[28910] = anon_sym_PIPE_PIPE;
	v->a[28911] = state(1478);
	v->a[28912] = 2;
	v->a[28913] = sym_file_redirect;
	v->a[28914] = aux_sym_redirected_statement_repeat2;
	v->a[28915] = actions(1064);
	v->a[28916] = 3;
	v->a[28917] = sym_raw_string;
	v->a[28918] = sym_number;
	v->a[28919] = sym_word;
	small_parse_table_1446(v);
}

void	small_parse_table_1446(t_small_parse_table_array *v)
{
	v->a[28920] = state(1573);
	v->a[28921] = 5;
	v->a[28922] = sym_arithmetic_expansion;
	v->a[28923] = sym_string;
	v->a[28924] = sym_simple_expansion;
	v->a[28925] = sym_expansion;
	v->a[28926] = sym_command_substitution;
	v->a[28927] = actions(1070);
	v->a[28928] = 7;
	v->a[28929] = anon_sym_LT;
	v->a[28930] = anon_sym_GT;
	v->a[28931] = anon_sym_GT_GT;
	v->a[28932] = anon_sym_LT_AMP;
	v->a[28933] = anon_sym_GT_AMP;
	v->a[28934] = anon_sym_GT_PIPE;
	v->a[28935] = anon_sym_LT_GT;
	v->a[28936] = 6;
	v->a[28937] = actions(3);
	v->a[28938] = 1;
	v->a[28939] = sym_comment;
	small_parse_table_1447(v);
}

void	small_parse_table_1447(t_small_parse_table_array *v)
{
	v->a[28940] = actions(1090);
	v->a[28941] = 1;
	v->a[28942] = aux_sym_concatenation_token1;
	v->a[28943] = actions(1095);
	v->a[28944] = 1;
	v->a[28945] = sym__concat;
	v->a[28946] = state(348);
	v->a[28947] = 1;
	v->a[28948] = aux_sym_concatenation_repeat1;
	v->a[28949] = actions(1093);
	v->a[28950] = 2;
	v->a[28951] = sym_file_descriptor;
	v->a[28952] = sym__bare_dollar;
	v->a[28953] = actions(1088);
	v->a[28954] = 27;
	v->a[28955] = anon_sym_LPAREN;
	v->a[28956] = anon_sym_PIPE;
	v->a[28957] = anon_sym_RPAREN;
	v->a[28958] = anon_sym_SEMI_SEMI;
	v->a[28959] = anon_sym_AMP_AMP;
	small_parse_table_1448(v);
}

void	small_parse_table_1448(t_small_parse_table_array *v)
{
	v->a[28960] = anon_sym_PIPE_PIPE;
	v->a[28961] = anon_sym_LT;
	v->a[28962] = anon_sym_GT;
	v->a[28963] = anon_sym_GT_GT;
	v->a[28964] = anon_sym_LT_AMP;
	v->a[28965] = anon_sym_GT_AMP;
	v->a[28966] = anon_sym_GT_PIPE;
	v->a[28967] = anon_sym_LT_GT;
	v->a[28968] = anon_sym_LT_LT;
	v->a[28969] = anon_sym_LT_LT_DASH;
	v->a[28970] = aux_sym_heredoc_redirect_token1;
	v->a[28971] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28972] = anon_sym_AMP;
	v->a[28973] = anon_sym_DOLLAR;
	v->a[28974] = anon_sym_DQUOTE;
	v->a[28975] = sym_raw_string;
	v->a[28976] = sym_number;
	v->a[28977] = anon_sym_DOLLAR_LBRACE;
	v->a[28978] = anon_sym_DOLLAR_LPAREN;
	v->a[28979] = anon_sym_BQUOTE;
	small_parse_table_1449(v);
}

void	small_parse_table_1449(t_small_parse_table_array *v)
{
	v->a[28980] = sym_word;
	v->a[28981] = anon_sym_SEMI;
	v->a[28982] = 7;
	v->a[28983] = actions(3);
	v->a[28984] = 1;
	v->a[28985] = sym_comment;
	v->a[28986] = actions(949);
	v->a[28987] = 1;
	v->a[28988] = sym_file_descriptor;
	v->a[28989] = actions(957);
	v->a[28990] = 1;
	v->a[28991] = sym_variable_name;
	v->a[28992] = state(1134);
	v->a[28993] = 2;
	v->a[28994] = sym_variable_assignment;
	v->a[28995] = aux_sym__variable_assignments_repeat1;
	v->a[28996] = state(1194);
	v->a[28997] = 3;
	v->a[28998] = sym_file_redirect;
	v->a[28999] = sym_heredoc_redirect;
	small_parse_table_1450(v);
}

/* EOF small_parse_table_289.c */
