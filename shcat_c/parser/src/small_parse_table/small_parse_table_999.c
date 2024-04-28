/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_999.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4995(t_small_parse_table_array *v)
{
	v->a[99900] = 1;
	v->a[99901] = anon_sym_BANG;
	v->a[99902] = actions(1103);
	v->a[99903] = 1;
	v->a[99904] = anon_sym_TILDE;
	v->a[99905] = actions(1113);
	v->a[99906] = 1;
	v->a[99907] = sym_test_operator;
	v->a[99908] = actions(5809);
	v->a[99909] = 1;
	v->a[99910] = anon_sym_BQUOTE;
	v->a[99911] = actions(5916);
	v->a[99912] = 1;
	v->a[99913] = sym__special_character;
	v->a[99914] = state(2472);
	v->a[99915] = 1;
	v->a[99916] = aux_sym__literal_repeat1;
	v->a[99917] = state(2837);
	v->a[99918] = 1;
	v->a[99919] = sym__expression;
	small_parse_table_4996(v);
}

void	small_parse_table_4996(t_small_parse_table_array *v)
{
	v->a[99920] = actions(352);
	v->a[99921] = 2;
	v->a[99922] = anon_sym_LPAREN_LPAREN;
	v->a[99923] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[99924] = actions(387);
	v->a[99925] = 2;
	v->a[99926] = anon_sym_LT_LPAREN;
	v->a[99927] = anon_sym_GT_LPAREN;
	v->a[99928] = actions(1099);
	v->a[99929] = 2;
	v->a[99930] = anon_sym_PLUS_PLUS2;
	v->a[99931] = anon_sym_DASH_DASH2;
	v->a[99932] = actions(1101);
	v->a[99933] = 2;
	v->a[99934] = anon_sym_DASH2;
	v->a[99935] = anon_sym_PLUS2;
	v->a[99936] = actions(1109);
	v->a[99937] = 2;
	v->a[99938] = sym_raw_string;
	v->a[99939] = sym_ansi_c_string;
	small_parse_table_4997(v);
}

void	small_parse_table_4997(t_small_parse_table_array *v)
{
	v->a[99940] = state(2863);
	v->a[99941] = 6;
	v->a[99942] = sym_binary_expression;
	v->a[99943] = sym_ternary_expression;
	v->a[99944] = sym_unary_expression;
	v->a[99945] = sym_postfix_expression;
	v->a[99946] = sym_parenthesized_expression;
	v->a[99947] = sym_concatenation;
	v->a[99948] = state(2451);
	v->a[99949] = 9;
	v->a[99950] = sym_arithmetic_expansion;
	v->a[99951] = sym_brace_expression;
	v->a[99952] = sym_string;
	v->a[99953] = sym_translated_string;
	v->a[99954] = sym_number;
	v->a[99955] = sym_simple_expansion;
	v->a[99956] = sym_expansion;
	v->a[99957] = sym_command_substitution;
	v->a[99958] = sym_process_substitution;
	v->a[99959] = 26;
	small_parse_table_4998(v);
}

void	small_parse_table_4998(t_small_parse_table_array *v)
{
	v->a[99960] = actions(71);
	v->a[99961] = 1;
	v->a[99962] = sym_comment;
	v->a[99963] = actions(1131);
	v->a[99964] = 1;
	v->a[99965] = anon_sym_LPAREN;
	v->a[99966] = actions(1141);
	v->a[99967] = 1;
	v->a[99968] = anon_sym_DOLLAR_LBRACK;
	v->a[99969] = actions(1145);
	v->a[99970] = 1;
	v->a[99971] = anon_sym_DOLLAR;
	v->a[99972] = actions(1149);
	v->a[99973] = 1;
	v->a[99974] = anon_sym_DQUOTE;
	v->a[99975] = actions(1153);
	v->a[99976] = 1;
	v->a[99977] = aux_sym_number_token1;
	v->a[99978] = actions(1155);
	v->a[99979] = 1;
	small_parse_table_4999(v);
}

void	small_parse_table_4999(t_small_parse_table_array *v)
{
	v->a[99980] = aux_sym_number_token2;
	v->a[99981] = actions(1157);
	v->a[99982] = 1;
	v->a[99983] = anon_sym_DOLLAR_LBRACE;
	v->a[99984] = actions(1159);
	v->a[99985] = 1;
	v->a[99986] = anon_sym_DOLLAR_LPAREN;
	v->a[99987] = actions(1163);
	v->a[99988] = 1;
	v->a[99989] = anon_sym_DOLLAR_BQUOTE;
	v->a[99990] = actions(1169);
	v->a[99991] = 1;
	v->a[99992] = sym__brace_start;
	v->a[99993] = actions(1211);
	v->a[99994] = 1;
	v->a[99995] = sym_word;
	v->a[99996] = actions(1213);
	v->a[99997] = 1;
	v->a[99998] = anon_sym_BANG;
	v->a[99999] = actions(1219);
	small_parse_table_5000(v);
}

/* EOF small_parse_table_999.c */
