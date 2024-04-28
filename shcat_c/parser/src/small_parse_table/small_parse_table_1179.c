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
	v->a[117900] = aux_sym_number_token1;
	v->a[117901] = aux_sym_number_token2;
	v->a[117902] = anon_sym_DOLLAR_LBRACE;
	v->a[117903] = anon_sym_DOLLAR_LPAREN;
	v->a[117904] = anon_sym_BQUOTE;
	v->a[117905] = anon_sym_DOLLAR_BQUOTE;
	v->a[117906] = anon_sym_LT_LPAREN;
	v->a[117907] = anon_sym_GT_LPAREN;
	v->a[117908] = sym_word;
	v->a[117909] = 26;
	v->a[117910] = actions(71);
	v->a[117911] = 1;
	v->a[117912] = sym_comment;
	v->a[117913] = actions(1131);
	v->a[117914] = 1;
	v->a[117915] = anon_sym_LPAREN;
	v->a[117916] = actions(1141);
	v->a[117917] = 1;
	v->a[117918] = anon_sym_DOLLAR_LBRACK;
	v->a[117919] = actions(1145);
	small_parse_table_5896(v);
}

void	small_parse_table_5896(t_small_parse_table_array *v)
{
	v->a[117920] = 1;
	v->a[117921] = anon_sym_DOLLAR;
	v->a[117922] = actions(1149);
	v->a[117923] = 1;
	v->a[117924] = anon_sym_DQUOTE;
	v->a[117925] = actions(1153);
	v->a[117926] = 1;
	v->a[117927] = aux_sym_number_token1;
	v->a[117928] = actions(1155);
	v->a[117929] = 1;
	v->a[117930] = aux_sym_number_token2;
	v->a[117931] = actions(1157);
	v->a[117932] = 1;
	v->a[117933] = anon_sym_DOLLAR_LBRACE;
	v->a[117934] = actions(1159);
	v->a[117935] = 1;
	v->a[117936] = anon_sym_DOLLAR_LPAREN;
	v->a[117937] = actions(1163);
	v->a[117938] = 1;
	v->a[117939] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_5897(v);
}

void	small_parse_table_5897(t_small_parse_table_array *v)
{
	v->a[117940] = actions(1169);
	v->a[117941] = 1;
	v->a[117942] = sym__brace_start;
	v->a[117943] = actions(1187);
	v->a[117944] = 1;
	v->a[117945] = sym_word;
	v->a[117946] = actions(1189);
	v->a[117947] = 1;
	v->a[117948] = anon_sym_BANG;
	v->a[117949] = actions(1195);
	v->a[117950] = 1;
	v->a[117951] = anon_sym_TILDE;
	v->a[117952] = actions(1201);
	v->a[117953] = 1;
	v->a[117954] = sym_test_operator;
	v->a[117955] = actions(3060);
	v->a[117956] = 1;
	v->a[117957] = anon_sym_BQUOTE;
	v->a[117958] = actions(5779);
	v->a[117959] = 1;
	small_parse_table_5898(v);
}

void	small_parse_table_5898(t_small_parse_table_array *v)
{
	v->a[117960] = sym__special_character;
	v->a[117961] = state(2717);
	v->a[117962] = 1;
	v->a[117963] = aux_sym__literal_repeat1;
	v->a[117964] = state(2994);
	v->a[117965] = 1;
	v->a[117966] = sym__expression;
	v->a[117967] = actions(1129);
	v->a[117968] = 2;
	v->a[117969] = anon_sym_LPAREN_LPAREN;
	v->a[117970] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[117971] = actions(1165);
	v->a[117972] = 2;
	v->a[117973] = anon_sym_LT_LPAREN;
	v->a[117974] = anon_sym_GT_LPAREN;
	v->a[117975] = actions(1191);
	v->a[117976] = 2;
	v->a[117977] = anon_sym_PLUS_PLUS2;
	v->a[117978] = anon_sym_DASH_DASH2;
	v->a[117979] = actions(1193);
	small_parse_table_5899(v);
}

void	small_parse_table_5899(t_small_parse_table_array *v)
{
	v->a[117980] = 2;
	v->a[117981] = anon_sym_DASH2;
	v->a[117982] = anon_sym_PLUS2;
	v->a[117983] = actions(1199);
	v->a[117984] = 2;
	v->a[117985] = sym_raw_string;
	v->a[117986] = sym_ansi_c_string;
	v->a[117987] = state(2594);
	v->a[117988] = 6;
	v->a[117989] = sym_binary_expression;
	v->a[117990] = sym_ternary_expression;
	v->a[117991] = sym_unary_expression;
	v->a[117992] = sym_postfix_expression;
	v->a[117993] = sym_parenthesized_expression;
	v->a[117994] = sym_concatenation;
	v->a[117995] = state(2503);
	v->a[117996] = 9;
	v->a[117997] = sym_arithmetic_expansion;
	v->a[117998] = sym_brace_expression;
	v->a[117999] = sym_string;
	small_parse_table_5900(v);
}

/* EOF small_parse_table_1179.c */
