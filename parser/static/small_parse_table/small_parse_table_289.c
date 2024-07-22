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
	v->a[28900] = 1;
	v->a[28901] = sym_file_descriptor;
	v->a[28902] = actions(1030);
	v->a[28903] = 1;
	v->a[28904] = sym_variable_name;
	v->a[28905] = state(706);
	v->a[28906] = 1;
	v->a[28907] = sym_terminator;
	v->a[28908] = actions(790);
	v->a[28909] = 2;
	v->a[28910] = anon_sym_LT_LT;
	v->a[28911] = anon_sym_LT_LT_DASH;
	v->a[28912] = actions(1028);
	v->a[28913] = 2;
	v->a[28914] = anon_sym_AMP_AMP;
	v->a[28915] = anon_sym_PIPE_PIPE;
	v->a[28916] = state(1137);
	v->a[28917] = 2;
	v->a[28918] = sym_variable_assignment;
	v->a[28919] = aux_sym__variable_assignments_repeat1;
	small_parse_table_1446(v);
}

void	small_parse_table_1446(t_small_parse_table_array *v)
{
	v->a[28920] = actions(1089);
	v->a[28921] = 3;
	v->a[28922] = anon_sym_SEMI_SEMI;
	v->a[28923] = aux_sym_heredoc_redirect_token1;
	v->a[28924] = anon_sym_SEMI;
	v->a[28925] = state(1194);
	v->a[28926] = 3;
	v->a[28927] = sym_file_redirect;
	v->a[28928] = sym_heredoc_redirect;
	v->a[28929] = aux_sym_redirected_statement_repeat1;
	v->a[28930] = actions(780);
	v->a[28931] = 16;
	v->a[28932] = anon_sym_LT;
	v->a[28933] = anon_sym_GT;
	v->a[28934] = anon_sym_GT_GT;
	v->a[28935] = anon_sym_LT_AMP;
	v->a[28936] = anon_sym_GT_AMP;
	v->a[28937] = anon_sym_GT_PIPE;
	v->a[28938] = anon_sym_LT_GT;
	v->a[28939] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1447(v);
}

void	small_parse_table_1447(t_small_parse_table_array *v)
{
	v->a[28940] = anon_sym_DOLLAR;
	v->a[28941] = anon_sym_DQUOTE;
	v->a[28942] = sym_raw_string;
	v->a[28943] = sym_number;
	v->a[28944] = anon_sym_DOLLAR_LBRACE;
	v->a[28945] = anon_sym_DOLLAR_LPAREN;
	v->a[28946] = anon_sym_BQUOTE;
	v->a[28947] = sym_word;
	v->a[28948] = 12;
	v->a[28949] = actions(3);
	v->a[28950] = 1;
	v->a[28951] = sym_comment;
	v->a[28952] = actions(678);
	v->a[28953] = 1;
	v->a[28954] = sym_file_descriptor;
	v->a[28955] = actions(962);
	v->a[28956] = 1;
	v->a[28957] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28958] = actions(964);
	v->a[28959] = 1;
	small_parse_table_1448(v);
}

void	small_parse_table_1448(t_small_parse_table_array *v)
{
	v->a[28960] = anon_sym_DOLLAR;
	v->a[28961] = actions(966);
	v->a[28962] = 1;
	v->a[28963] = anon_sym_DQUOTE;
	v->a[28964] = actions(968);
	v->a[28965] = 1;
	v->a[28966] = anon_sym_DOLLAR_LBRACE;
	v->a[28967] = actions(970);
	v->a[28968] = 1;
	v->a[28969] = anon_sym_DOLLAR_LPAREN;
	v->a[28970] = actions(972);
	v->a[28971] = 1;
	v->a[28972] = anon_sym_BQUOTE;
	v->a[28973] = state(332);
	v->a[28974] = 2;
	v->a[28975] = sym_concatenation;
	v->a[28976] = aux_sym_for_statement_repeat1;
	v->a[28977] = actions(1033);
	v->a[28978] = 3;
	v->a[28979] = sym_raw_string;
	small_parse_table_1449(v);
}

void	small_parse_table_1449(t_small_parse_table_array *v)
{
	v->a[28980] = sym_number;
	v->a[28981] = sym_word;
	v->a[28982] = state(623);
	v->a[28983] = 5;
	v->a[28984] = sym_arithmetic_expansion;
	v->a[28985] = sym_string;
	v->a[28986] = sym_simple_expansion;
	v->a[28987] = sym_expansion;
	v->a[28988] = sym_command_substitution;
	v->a[28989] = actions(676);
	v->a[28990] = 15;
	v->a[28991] = anon_sym_PIPE;
	v->a[28992] = anon_sym_SEMI_SEMI;
	v->a[28993] = anon_sym_AMP_AMP;
	v->a[28994] = anon_sym_PIPE_PIPE;
	v->a[28995] = anon_sym_LT;
	v->a[28996] = anon_sym_GT;
	v->a[28997] = anon_sym_GT_GT;
	v->a[28998] = anon_sym_LT_AMP;
	v->a[28999] = anon_sym_GT_AMP;
	small_parse_table_1450(v);
}

/* EOF small_parse_table_289.c */
