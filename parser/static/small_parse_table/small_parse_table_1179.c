/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1179.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5895(t_small_parse_table_array *v)
{
	v->a[117900] = 7;
	v->a[117901] = sym_arithmetic_expansion;
	v->a[117902] = sym_brace_expression;
	v->a[117903] = sym_string;
	v->a[117904] = sym_number;
	v->a[117905] = sym_simple_expansion;
	v->a[117906] = sym_expansion;
	v->a[117907] = sym_command_substitution;
	v->a[117908] = 16;
	v->a[117909] = actions(3);
	v->a[117910] = 1;
	v->a[117911] = sym_comment;
	v->a[117912] = actions(6390);
	v->a[117913] = 1;
	v->a[117914] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[117915] = actions(6396);
	v->a[117916] = 1;
	v->a[117917] = anon_sym_DQUOTE;
	v->a[117918] = actions(6400);
	v->a[117919] = 1;
	small_parse_table_5896(v);
}

void	small_parse_table_5896(t_small_parse_table_array *v)
{
	v->a[117920] = aux_sym_number_token1;
	v->a[117921] = actions(6402);
	v->a[117922] = 1;
	v->a[117923] = aux_sym_number_token2;
	v->a[117924] = actions(6404);
	v->a[117925] = 1;
	v->a[117926] = anon_sym_DOLLAR_LBRACE;
	v->a[117927] = actions(6406);
	v->a[117928] = 1;
	v->a[117929] = anon_sym_DOLLAR_LPAREN;
	v->a[117930] = actions(6408);
	v->a[117931] = 1;
	v->a[117932] = anon_sym_BQUOTE;
	v->a[117933] = actions(6410);
	v->a[117934] = 1;
	v->a[117935] = anon_sym_DOLLAR_BQUOTE;
	v->a[117936] = actions(6412);
	v->a[117937] = 1;
	v->a[117938] = sym__brace_start;
	v->a[117939] = actions(6923);
	small_parse_table_5897(v);
}

void	small_parse_table_5897(t_small_parse_table_array *v)
{
	v->a[117940] = 1;
	v->a[117941] = sym_word;
	v->a[117942] = actions(6925);
	v->a[117943] = 1;
	v->a[117944] = anon_sym_DOLLAR;
	v->a[117945] = actions(6927);
	v->a[117946] = 1;
	v->a[117947] = sym__special_character;
	v->a[117948] = actions(6931);
	v->a[117949] = 1;
	v->a[117950] = sym__comment_word;
	v->a[117951] = actions(6929);
	v->a[117952] = 3;
	v->a[117953] = sym_test_operator;
	v->a[117954] = sym__bare_dollar;
	v->a[117955] = sym_raw_string;
	v->a[117956] = state(3240);
	v->a[117957] = 7;
	v->a[117958] = sym_arithmetic_expansion;
	v->a[117959] = sym_brace_expression;
	small_parse_table_5898(v);
}

void	small_parse_table_5898(t_small_parse_table_array *v)
{
	v->a[117960] = sym_string;
	v->a[117961] = sym_number;
	v->a[117962] = sym_simple_expansion;
	v->a[117963] = sym_expansion;
	v->a[117964] = sym_command_substitution;
	v->a[117965] = 16;
	v->a[117966] = actions(3);
	v->a[117967] = 1;
	v->a[117968] = sym_comment;
	v->a[117969] = actions(1540);
	v->a[117970] = 1;
	v->a[117971] = anon_sym_DOLLAR;
	v->a[117972] = actions(1546);
	v->a[117973] = 1;
	v->a[117974] = aux_sym_number_token1;
	v->a[117975] = actions(1548);
	v->a[117976] = 1;
	v->a[117977] = aux_sym_number_token2;
	v->a[117978] = actions(1552);
	v->a[117979] = 1;
	small_parse_table_5899(v);
}

void	small_parse_table_5899(t_small_parse_table_array *v)
{
	v->a[117980] = anon_sym_DOLLAR_LPAREN;
	v->a[117981] = actions(1560);
	v->a[117982] = 1;
	v->a[117983] = sym__brace_start;
	v->a[117984] = actions(6169);
	v->a[117985] = 1;
	v->a[117986] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[117987] = actions(6173);
	v->a[117988] = 1;
	v->a[117989] = anon_sym_DQUOTE;
	v->a[117990] = actions(6175);
	v->a[117991] = 1;
	v->a[117992] = anon_sym_DOLLAR_LBRACE;
	v->a[117993] = actions(6177);
	v->a[117994] = 1;
	v->a[117995] = anon_sym_BQUOTE;
	v->a[117996] = actions(6179);
	v->a[117997] = 1;
	v->a[117998] = anon_sym_DOLLAR_BQUOTE;
	v->a[117999] = actions(6933);
	small_parse_table_5900(v);
}

/* EOF small_parse_table_1179.c */
