/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1099.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5495(t_small_parse_table_array *v)
{
	v->a[109900] = anon_sym_LT_LT;
	v->a[109901] = anon_sym_LT_LT_DASH;
	v->a[109902] = anon_sym_AMP;
	v->a[109903] = anon_sym_BQUOTE;
	v->a[109904] = anon_sym_SEMI;
	v->a[109905] = 17;
	v->a[109906] = actions(57);
	v->a[109907] = 1;
	v->a[109908] = sym_comment;
	v->a[109909] = actions(2460);
	v->a[109910] = 1;
	v->a[109911] = anon_sym_DOLLAR;
	v->a[109912] = actions(2466);
	v->a[109913] = 1;
	v->a[109914] = aux_sym_number_token1;
	v->a[109915] = actions(2468);
	v->a[109916] = 1;
	v->a[109917] = aux_sym_number_token2;
	v->a[109918] = actions(2472);
	v->a[109919] = 1;
	small_parse_table_5496(v);
}

void	small_parse_table_5496(t_small_parse_table_array *v)
{
	v->a[109920] = anon_sym_DOLLAR_LPAREN;
	v->a[109921] = actions(2482);
	v->a[109922] = 1;
	v->a[109923] = sym__brace_start;
	v->a[109924] = actions(5066);
	v->a[109925] = 1;
	v->a[109926] = sym_word;
	v->a[109927] = actions(6051);
	v->a[109928] = 1;
	v->a[109929] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[109930] = actions(6053);
	v->a[109931] = 1;
	v->a[109932] = sym__special_character;
	v->a[109933] = actions(6055);
	v->a[109934] = 1;
	v->a[109935] = anon_sym_DQUOTE;
	v->a[109936] = actions(6057);
	v->a[109937] = 1;
	v->a[109938] = anon_sym_DOLLAR_LBRACE;
	v->a[109939] = actions(6059);
	small_parse_table_5497(v);
}

void	small_parse_table_5497(t_small_parse_table_array *v)
{
	v->a[109940] = 1;
	v->a[109941] = anon_sym_BQUOTE;
	v->a[109942] = actions(6061);
	v->a[109943] = 1;
	v->a[109944] = anon_sym_DOLLAR_BQUOTE;
	v->a[109945] = state(2666);
	v->a[109946] = 1;
	v->a[109947] = aux_sym__literal_repeat1;
	v->a[109948] = actions(5074);
	v->a[109949] = 2;
	v->a[109950] = sym_test_operator;
	v->a[109951] = sym_raw_string;
	v->a[109952] = state(1860);
	v->a[109953] = 2;
	v->a[109954] = sym_concatenation;
	v->a[109955] = aux_sym_for_statement_repeat1;
	v->a[109956] = state(2609);
	v->a[109957] = 7;
	v->a[109958] = sym_arithmetic_expansion;
	v->a[109959] = sym_brace_expression;
	small_parse_table_5498(v);
}

void	small_parse_table_5498(t_small_parse_table_array *v)
{
	v->a[109960] = sym_string;
	v->a[109961] = sym_number;
	v->a[109962] = sym_simple_expansion;
	v->a[109963] = sym_expansion;
	v->a[109964] = sym_command_substitution;
	v->a[109965] = 7;
	v->a[109966] = actions(3);
	v->a[109967] = 1;
	v->a[109968] = sym_comment;
	v->a[109969] = actions(5641);
	v->a[109970] = 1;
	v->a[109971] = aux_sym_heredoc_redirect_token1;
	v->a[109972] = actions(5808);
	v->a[109973] = 1;
	v->a[109974] = sym_file_descriptor;
	v->a[109975] = state(2359);
	v->a[109976] = 1;
	v->a[109977] = sym_file_redirect;
	v->a[109978] = actions(5241);
	v->a[109979] = 2;
	small_parse_table_5499(v);
}

void	small_parse_table_5499(t_small_parse_table_array *v)
{
	v->a[109980] = anon_sym_LT_AMP_DASH;
	v->a[109981] = anon_sym_GT_AMP_DASH;
	v->a[109982] = actions(5239);
	v->a[109983] = 8;
	v->a[109984] = anon_sym_LT;
	v->a[109985] = anon_sym_GT;
	v->a[109986] = anon_sym_GT_GT;
	v->a[109987] = anon_sym_AMP_GT;
	v->a[109988] = anon_sym_AMP_GT_GT;
	v->a[109989] = anon_sym_LT_AMP;
	v->a[109990] = anon_sym_GT_AMP;
	v->a[109991] = anon_sym_GT_PIPE;
	v->a[109992] = actions(5639);
	v->a[109993] = 11;
	v->a[109994] = anon_sym_PIPE;
	v->a[109995] = anon_sym_SEMI_SEMI;
	v->a[109996] = anon_sym_SEMI_AMP;
	v->a[109997] = anon_sym_SEMI_SEMI_AMP;
	v->a[109998] = anon_sym_PIPE_AMP;
	v->a[109999] = anon_sym_AMP_AMP;
	small_parse_table_5500(v);
}

/* EOF small_parse_table_1099.c */
