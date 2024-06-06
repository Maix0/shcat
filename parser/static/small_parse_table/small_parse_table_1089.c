/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1089.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5445(t_small_parse_table_array *v)
{
	v->a[108900] = 1;
	v->a[108901] = anon_sym_DQUOTE;
	v->a[108902] = actions(6252);
	v->a[108903] = 1;
	v->a[108904] = anon_sym_DOLLAR_LBRACE;
	v->a[108905] = actions(6254);
	v->a[108906] = 1;
	v->a[108907] = anon_sym_BQUOTE;
	v->a[108908] = actions(6256);
	v->a[108909] = 1;
	v->a[108910] = anon_sym_DOLLAR_BQUOTE;
	v->a[108911] = state(1205);
	v->a[108912] = 1;
	v->a[108913] = aux_sym__literal_repeat1;
	v->a[108914] = actions(1991);
	v->a[108915] = 2;
	v->a[108916] = sym_test_operator;
	v->a[108917] = sym_raw_string;
	v->a[108918] = state(370);
	v->a[108919] = 2;
	small_parse_table_5446(v);
}

void	small_parse_table_5446(t_small_parse_table_array *v)
{
	v->a[108920] = sym_concatenation;
	v->a[108921] = aux_sym_for_statement_repeat1;
	v->a[108922] = state(791);
	v->a[108923] = 7;
	v->a[108924] = sym_arithmetic_expansion;
	v->a[108925] = sym_brace_expression;
	v->a[108926] = sym_string;
	v->a[108927] = sym_number;
	v->a[108928] = sym_simple_expansion;
	v->a[108929] = sym_expansion;
	v->a[108930] = sym_command_substitution;
	v->a[108931] = 8;
	v->a[108932] = actions(3);
	v->a[108933] = 1;
	v->a[108934] = sym_comment;
	v->a[108935] = actions(5157);
	v->a[108936] = 1;
	v->a[108937] = aux_sym_heredoc_redirect_token1;
	v->a[108938] = actions(5970);
	v->a[108939] = 1;
	small_parse_table_5447(v);
}

void	small_parse_table_5447(t_small_parse_table_array *v)
{
	v->a[108940] = sym_file_descriptor;
	v->a[108941] = actions(2945);
	v->a[108942] = 2;
	v->a[108943] = anon_sym_LT_LT;
	v->a[108944] = anon_sym_LT_LT_DASH;
	v->a[108945] = actions(5968);
	v->a[108946] = 2;
	v->a[108947] = anon_sym_LT_AMP_DASH;
	v->a[108948] = anon_sym_GT_AMP_DASH;
	v->a[108949] = state(2290);
	v->a[108950] = 3;
	v->a[108951] = sym_file_redirect;
	v->a[108952] = sym_heredoc_redirect;
	v->a[108953] = aux_sym_redirected_statement_repeat1;
	v->a[108954] = actions(5151);
	v->a[108955] = 7;
	v->a[108956] = anon_sym_PIPE;
	v->a[108957] = anon_sym_SEMI_SEMI;
	v->a[108958] = anon_sym_PIPE_AMP;
	v->a[108959] = anon_sym_AMP_AMP;
	small_parse_table_5448(v);
}

void	small_parse_table_5448(t_small_parse_table_array *v)
{
	v->a[108960] = anon_sym_PIPE_PIPE;
	v->a[108961] = anon_sym_AMP;
	v->a[108962] = anon_sym_SEMI;
	v->a[108963] = actions(5966);
	v->a[108964] = 8;
	v->a[108965] = anon_sym_LT;
	v->a[108966] = anon_sym_GT;
	v->a[108967] = anon_sym_GT_GT;
	v->a[108968] = anon_sym_AMP_GT;
	v->a[108969] = anon_sym_AMP_GT_GT;
	v->a[108970] = anon_sym_LT_AMP;
	v->a[108971] = anon_sym_GT_AMP;
	v->a[108972] = anon_sym_GT_PIPE;
	v->a[108973] = 10;
	v->a[108974] = actions(3);
	v->a[108975] = 1;
	v->a[108976] = sym_comment;
	v->a[108977] = actions(3373);
	v->a[108978] = 1;
	v->a[108979] = aux_sym_heredoc_redirect_token1;
	small_parse_table_5449(v);
}

void	small_parse_table_5449(t_small_parse_table_array *v)
{
	v->a[108980] = actions(5970);
	v->a[108981] = 1;
	v->a[108982] = sym_file_descriptor;
	v->a[108983] = actions(2516);
	v->a[108984] = 2;
	v->a[108985] = anon_sym_PIPE;
	v->a[108986] = anon_sym_PIPE_AMP;
	v->a[108987] = actions(2945);
	v->a[108988] = 2;
	v->a[108989] = anon_sym_LT_LT;
	v->a[108990] = anon_sym_LT_LT_DASH;
	v->a[108991] = actions(3300);
	v->a[108992] = 2;
	v->a[108993] = anon_sym_AMP_AMP;
	v->a[108994] = anon_sym_PIPE_PIPE;
	v->a[108995] = actions(5968);
	v->a[108996] = 2;
	v->a[108997] = anon_sym_LT_AMP_DASH;
	v->a[108998] = anon_sym_GT_AMP_DASH;
	v->a[108999] = actions(3371);
	small_parse_table_5450(v);
}

/* EOF small_parse_table_1089.c */
