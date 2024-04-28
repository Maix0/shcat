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
	v->a[108900] = actions(1131);
	v->a[108901] = 1;
	v->a[108902] = anon_sym_LPAREN;
	v->a[108903] = actions(1141);
	v->a[108904] = 1;
	v->a[108905] = anon_sym_DOLLAR_LBRACK;
	v->a[108906] = actions(1145);
	v->a[108907] = 1;
	v->a[108908] = anon_sym_DOLLAR;
	v->a[108909] = actions(1149);
	v->a[108910] = 1;
	v->a[108911] = anon_sym_DQUOTE;
	v->a[108912] = actions(1153);
	v->a[108913] = 1;
	v->a[108914] = aux_sym_number_token1;
	v->a[108915] = actions(1155);
	v->a[108916] = 1;
	v->a[108917] = aux_sym_number_token2;
	v->a[108918] = actions(1157);
	v->a[108919] = 1;
	small_parse_table_5446(v);
}

void	small_parse_table_5446(t_small_parse_table_array *v)
{
	v->a[108920] = anon_sym_DOLLAR_LBRACE;
	v->a[108921] = actions(1159);
	v->a[108922] = 1;
	v->a[108923] = anon_sym_DOLLAR_LPAREN;
	v->a[108924] = actions(1163);
	v->a[108925] = 1;
	v->a[108926] = anon_sym_DOLLAR_BQUOTE;
	v->a[108927] = actions(1169);
	v->a[108928] = 1;
	v->a[108929] = sym__brace_start;
	v->a[108930] = actions(1171);
	v->a[108931] = 1;
	v->a[108932] = sym_word;
	v->a[108933] = actions(1173);
	v->a[108934] = 1;
	v->a[108935] = anon_sym_BANG;
	v->a[108936] = actions(1179);
	v->a[108937] = 1;
	v->a[108938] = anon_sym_TILDE;
	v->a[108939] = actions(1181);
	small_parse_table_5447(v);
}

void	small_parse_table_5447(t_small_parse_table_array *v)
{
	v->a[108940] = 1;
	v->a[108941] = sym__special_character;
	v->a[108942] = actions(1185);
	v->a[108943] = 1;
	v->a[108944] = sym_test_operator;
	v->a[108945] = actions(3060);
	v->a[108946] = 1;
	v->a[108947] = anon_sym_BQUOTE;
	v->a[108948] = state(2484);
	v->a[108949] = 1;
	v->a[108950] = aux_sym__literal_repeat1;
	v->a[108951] = state(2621);
	v->a[108952] = 1;
	v->a[108953] = sym__expression;
	v->a[108954] = actions(1129);
	v->a[108955] = 2;
	v->a[108956] = anon_sym_LPAREN_LPAREN;
	v->a[108957] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[108958] = actions(1165);
	v->a[108959] = 2;
	small_parse_table_5448(v);
}

void	small_parse_table_5448(t_small_parse_table_array *v)
{
	v->a[108960] = anon_sym_LT_LPAREN;
	v->a[108961] = anon_sym_GT_LPAREN;
	v->a[108962] = actions(1175);
	v->a[108963] = 2;
	v->a[108964] = anon_sym_PLUS_PLUS2;
	v->a[108965] = anon_sym_DASH_DASH2;
	v->a[108966] = actions(1177);
	v->a[108967] = 2;
	v->a[108968] = anon_sym_DASH2;
	v->a[108969] = anon_sym_PLUS2;
	v->a[108970] = actions(1183);
	v->a[108971] = 2;
	v->a[108972] = sym_raw_string;
	v->a[108973] = sym_ansi_c_string;
	v->a[108974] = state(2594);
	v->a[108975] = 6;
	v->a[108976] = sym_binary_expression;
	v->a[108977] = sym_ternary_expression;
	v->a[108978] = sym_unary_expression;
	v->a[108979] = sym_postfix_expression;
	small_parse_table_5449(v);
}

void	small_parse_table_5449(t_small_parse_table_array *v)
{
	v->a[108980] = sym_parenthesized_expression;
	v->a[108981] = sym_concatenation;
	v->a[108982] = state(2456);
	v->a[108983] = 9;
	v->a[108984] = sym_arithmetic_expansion;
	v->a[108985] = sym_brace_expression;
	v->a[108986] = sym_string;
	v->a[108987] = sym_translated_string;
	v->a[108988] = sym_number;
	v->a[108989] = sym_simple_expansion;
	v->a[108990] = sym_expansion;
	v->a[108991] = sym_command_substitution;
	v->a[108992] = sym_process_substitution;
	v->a[108993] = 26;
	v->a[108994] = actions(71);
	v->a[108995] = 1;
	v->a[108996] = sym_comment;
	v->a[108997] = actions(1131);
	v->a[108998] = 1;
	v->a[108999] = anon_sym_LPAREN;
	small_parse_table_5450(v);
}

/* EOF small_parse_table_1089.c */
