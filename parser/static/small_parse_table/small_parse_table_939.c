/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_939.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4695(t_small_parse_table_array *v)
{
	v->a[93900] = anon_sym_DASH2;
	v->a[93901] = anon_sym_PLUS2;
	v->a[93902] = actions(1199);
	v->a[93903] = 2;
	v->a[93904] = sym_raw_string;
	v->a[93905] = sym_ansi_c_string;
	v->a[93906] = state(2594);
	v->a[93907] = 6;
	v->a[93908] = sym_binary_expression;
	v->a[93909] = sym_ternary_expression;
	v->a[93910] = sym_unary_expression;
	v->a[93911] = sym_postfix_expression;
	v->a[93912] = sym_parenthesized_expression;
	v->a[93913] = sym_concatenation;
	v->a[93914] = state(2503);
	v->a[93915] = 9;
	v->a[93916] = sym_arithmetic_expansion;
	v->a[93917] = sym_brace_expression;
	v->a[93918] = sym_string;
	v->a[93919] = sym_translated_string;
	small_parse_table_4696(v);
}

void	small_parse_table_4696(t_small_parse_table_array *v)
{
	v->a[93920] = sym_number;
	v->a[93921] = sym_simple_expansion;
	v->a[93922] = sym_expansion;
	v->a[93923] = sym_command_substitution;
	v->a[93924] = sym_process_substitution;
	v->a[93925] = 27;
	v->a[93926] = actions(71);
	v->a[93927] = 1;
	v->a[93928] = sym_comment;
	v->a[93929] = actions(1127);
	v->a[93930] = 1;
	v->a[93931] = sym_word;
	v->a[93932] = actions(1131);
	v->a[93933] = 1;
	v->a[93934] = anon_sym_LPAREN;
	v->a[93935] = actions(1133);
	v->a[93936] = 1;
	v->a[93937] = anon_sym_BANG;
	v->a[93938] = actions(1139);
	v->a[93939] = 1;
	small_parse_table_4697(v);
}

void	small_parse_table_4697(t_small_parse_table_array *v)
{
	v->a[93940] = anon_sym_TILDE;
	v->a[93941] = actions(1141);
	v->a[93942] = 1;
	v->a[93943] = anon_sym_DOLLAR_LBRACK;
	v->a[93944] = actions(1145);
	v->a[93945] = 1;
	v->a[93946] = anon_sym_DOLLAR;
	v->a[93947] = actions(1147);
	v->a[93948] = 1;
	v->a[93949] = sym__special_character;
	v->a[93950] = actions(1149);
	v->a[93951] = 1;
	v->a[93952] = anon_sym_DQUOTE;
	v->a[93953] = actions(1153);
	v->a[93954] = 1;
	v->a[93955] = aux_sym_number_token1;
	v->a[93956] = actions(1155);
	v->a[93957] = 1;
	v->a[93958] = aux_sym_number_token2;
	v->a[93959] = actions(1157);
	small_parse_table_4698(v);
}

void	small_parse_table_4698(t_small_parse_table_array *v)
{
	v->a[93960] = 1;
	v->a[93961] = anon_sym_DOLLAR_LBRACE;
	v->a[93962] = actions(1159);
	v->a[93963] = 1;
	v->a[93964] = anon_sym_DOLLAR_LPAREN;
	v->a[93965] = actions(1163);
	v->a[93966] = 1;
	v->a[93967] = anon_sym_DOLLAR_BQUOTE;
	v->a[93968] = actions(1167);
	v->a[93969] = 1;
	v->a[93970] = sym_test_operator;
	v->a[93971] = actions(1169);
	v->a[93972] = 1;
	v->a[93973] = sym__brace_start;
	v->a[93974] = actions(3060);
	v->a[93975] = 1;
	v->a[93976] = anon_sym_BQUOTE;
	v->a[93977] = actions(6025);
	v->a[93978] = 1;
	v->a[93979] = sym__regex_no_space;
	small_parse_table_4699(v);
}

void	small_parse_table_4699(t_small_parse_table_array *v)
{
	v->a[93980] = state(2484);
	v->a[93981] = 1;
	v->a[93982] = aux_sym__literal_repeat1;
	v->a[93983] = state(2979);
	v->a[93984] = 1;
	v->a[93985] = sym__expression;
	v->a[93986] = actions(1129);
	v->a[93987] = 2;
	v->a[93988] = anon_sym_LPAREN_LPAREN;
	v->a[93989] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[93990] = actions(1135);
	v->a[93991] = 2;
	v->a[93992] = anon_sym_PLUS_PLUS2;
	v->a[93993] = anon_sym_DASH_DASH2;
	v->a[93994] = actions(1137);
	v->a[93995] = 2;
	v->a[93996] = anon_sym_DASH2;
	v->a[93997] = anon_sym_PLUS2;
	v->a[93998] = actions(1151);
	v->a[93999] = 2;
	small_parse_table_4700(v);
}

/* EOF small_parse_table_939.c */
