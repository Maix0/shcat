/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1029.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5145(t_small_parse_table_array *v)
{
	v->a[102900] = anon_sym_DOLLAR_LBRACE;
	v->a[102901] = actions(1159);
	v->a[102902] = 1;
	v->a[102903] = anon_sym_DOLLAR_LPAREN;
	v->a[102904] = actions(1163);
	v->a[102905] = 1;
	v->a[102906] = anon_sym_DOLLAR_BQUOTE;
	v->a[102907] = actions(1169);
	v->a[102908] = 1;
	v->a[102909] = sym__brace_start;
	v->a[102910] = actions(1171);
	v->a[102911] = 1;
	v->a[102912] = sym_word;
	v->a[102913] = actions(1173);
	v->a[102914] = 1;
	v->a[102915] = anon_sym_BANG;
	v->a[102916] = actions(1179);
	v->a[102917] = 1;
	v->a[102918] = anon_sym_TILDE;
	v->a[102919] = actions(1181);
	small_parse_table_5146(v);
}

void	small_parse_table_5146(t_small_parse_table_array *v)
{
	v->a[102920] = 1;
	v->a[102921] = sym__special_character;
	v->a[102922] = actions(1185);
	v->a[102923] = 1;
	v->a[102924] = sym_test_operator;
	v->a[102925] = actions(3060);
	v->a[102926] = 1;
	v->a[102927] = anon_sym_BQUOTE;
	v->a[102928] = state(2484);
	v->a[102929] = 1;
	v->a[102930] = aux_sym__literal_repeat1;
	v->a[102931] = state(3059);
	v->a[102932] = 1;
	v->a[102933] = sym__expression;
	v->a[102934] = actions(1129);
	v->a[102935] = 2;
	v->a[102936] = anon_sym_LPAREN_LPAREN;
	v->a[102937] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[102938] = actions(1165);
	v->a[102939] = 2;
	small_parse_table_5147(v);
}

void	small_parse_table_5147(t_small_parse_table_array *v)
{
	v->a[102940] = anon_sym_LT_LPAREN;
	v->a[102941] = anon_sym_GT_LPAREN;
	v->a[102942] = actions(1175);
	v->a[102943] = 2;
	v->a[102944] = anon_sym_PLUS_PLUS2;
	v->a[102945] = anon_sym_DASH_DASH2;
	v->a[102946] = actions(1177);
	v->a[102947] = 2;
	v->a[102948] = anon_sym_DASH2;
	v->a[102949] = anon_sym_PLUS2;
	v->a[102950] = actions(1183);
	v->a[102951] = 2;
	v->a[102952] = sym_raw_string;
	v->a[102953] = sym_ansi_c_string;
	v->a[102954] = state(2594);
	v->a[102955] = 6;
	v->a[102956] = sym_binary_expression;
	v->a[102957] = sym_ternary_expression;
	v->a[102958] = sym_unary_expression;
	v->a[102959] = sym_postfix_expression;
	small_parse_table_5148(v);
}

void	small_parse_table_5148(t_small_parse_table_array *v)
{
	v->a[102960] = sym_parenthesized_expression;
	v->a[102961] = sym_concatenation;
	v->a[102962] = state(2456);
	v->a[102963] = 9;
	v->a[102964] = sym_arithmetic_expansion;
	v->a[102965] = sym_brace_expression;
	v->a[102966] = sym_string;
	v->a[102967] = sym_translated_string;
	v->a[102968] = sym_number;
	v->a[102969] = sym_simple_expansion;
	v->a[102970] = sym_expansion;
	v->a[102971] = sym_command_substitution;
	v->a[102972] = sym_process_substitution;
	v->a[102973] = 26;
	v->a[102974] = actions(71);
	v->a[102975] = 1;
	v->a[102976] = sym_comment;
	v->a[102977] = actions(1131);
	v->a[102978] = 1;
	v->a[102979] = anon_sym_LPAREN;
	small_parse_table_5149(v);
}

void	small_parse_table_5149(t_small_parse_table_array *v)
{
	v->a[102980] = actions(1141);
	v->a[102981] = 1;
	v->a[102982] = anon_sym_DOLLAR_LBRACK;
	v->a[102983] = actions(1145);
	v->a[102984] = 1;
	v->a[102985] = anon_sym_DOLLAR;
	v->a[102986] = actions(1149);
	v->a[102987] = 1;
	v->a[102988] = anon_sym_DQUOTE;
	v->a[102989] = actions(1153);
	v->a[102990] = 1;
	v->a[102991] = aux_sym_number_token1;
	v->a[102992] = actions(1155);
	v->a[102993] = 1;
	v->a[102994] = aux_sym_number_token2;
	v->a[102995] = actions(1157);
	v->a[102996] = 1;
	v->a[102997] = anon_sym_DOLLAR_LBRACE;
	v->a[102998] = actions(1159);
	v->a[102999] = 1;
	small_parse_table_5150(v);
}

/* EOF small_parse_table_1029.c */
