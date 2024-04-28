/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_979.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4895(t_small_parse_table_array *v)
{
	v->a[97900] = aux_sym__literal_repeat1;
	v->a[97901] = state(2985);
	v->a[97902] = 1;
	v->a[97903] = sym__expression;
	v->a[97904] = actions(183);
	v->a[97905] = 2;
	v->a[97906] = anon_sym_PLUS_PLUS2;
	v->a[97907] = anon_sym_DASH_DASH2;
	v->a[97908] = actions(185);
	v->a[97909] = 2;
	v->a[97910] = anon_sym_DASH2;
	v->a[97911] = anon_sym_PLUS2;
	v->a[97912] = actions(352);
	v->a[97913] = 2;
	v->a[97914] = anon_sym_LPAREN_LPAREN;
	v->a[97915] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[97916] = actions(373);
	v->a[97917] = 2;
	v->a[97918] = sym_raw_string;
	v->a[97919] = sym_ansi_c_string;
	small_parse_table_4896(v);
}

void	small_parse_table_4896(t_small_parse_table_array *v)
{
	v->a[97920] = actions(387);
	v->a[97921] = 2;
	v->a[97922] = anon_sym_LT_LPAREN;
	v->a[97923] = anon_sym_GT_LPAREN;
	v->a[97924] = state(3071);
	v->a[97925] = 6;
	v->a[97926] = sym_binary_expression;
	v->a[97927] = sym_ternary_expression;
	v->a[97928] = sym_unary_expression;
	v->a[97929] = sym_postfix_expression;
	v->a[97930] = sym_parenthesized_expression;
	v->a[97931] = sym_concatenation;
	v->a[97932] = state(2521);
	v->a[97933] = 9;
	v->a[97934] = sym_arithmetic_expansion;
	v->a[97935] = sym_brace_expression;
	v->a[97936] = sym_string;
	v->a[97937] = sym_translated_string;
	v->a[97938] = sym_number;
	v->a[97939] = sym_simple_expansion;
	small_parse_table_4897(v);
}

void	small_parse_table_4897(t_small_parse_table_array *v)
{
	v->a[97940] = sym_expansion;
	v->a[97941] = sym_command_substitution;
	v->a[97942] = sym_process_substitution;
	v->a[97943] = 26;
	v->a[97944] = actions(71);
	v->a[97945] = 1;
	v->a[97946] = sym_comment;
	v->a[97947] = actions(1127);
	v->a[97948] = 1;
	v->a[97949] = sym_word;
	v->a[97950] = actions(1131);
	v->a[97951] = 1;
	v->a[97952] = anon_sym_LPAREN;
	v->a[97953] = actions(1133);
	v->a[97954] = 1;
	v->a[97955] = anon_sym_BANG;
	v->a[97956] = actions(1139);
	v->a[97957] = 1;
	v->a[97958] = anon_sym_TILDE;
	v->a[97959] = actions(1141);
	small_parse_table_4898(v);
}

void	small_parse_table_4898(t_small_parse_table_array *v)
{
	v->a[97960] = 1;
	v->a[97961] = anon_sym_DOLLAR_LBRACK;
	v->a[97962] = actions(1145);
	v->a[97963] = 1;
	v->a[97964] = anon_sym_DOLLAR;
	v->a[97965] = actions(1147);
	v->a[97966] = 1;
	v->a[97967] = sym__special_character;
	v->a[97968] = actions(1149);
	v->a[97969] = 1;
	v->a[97970] = anon_sym_DQUOTE;
	v->a[97971] = actions(1153);
	v->a[97972] = 1;
	v->a[97973] = aux_sym_number_token1;
	v->a[97974] = actions(1155);
	v->a[97975] = 1;
	v->a[97976] = aux_sym_number_token2;
	v->a[97977] = actions(1157);
	v->a[97978] = 1;
	v->a[97979] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_4899(v);
}

void	small_parse_table_4899(t_small_parse_table_array *v)
{
	v->a[97980] = actions(1159);
	v->a[97981] = 1;
	v->a[97982] = anon_sym_DOLLAR_LPAREN;
	v->a[97983] = actions(1163);
	v->a[97984] = 1;
	v->a[97985] = anon_sym_DOLLAR_BQUOTE;
	v->a[97986] = actions(1167);
	v->a[97987] = 1;
	v->a[97988] = sym_test_operator;
	v->a[97989] = actions(1169);
	v->a[97990] = 1;
	v->a[97991] = sym__brace_start;
	v->a[97992] = actions(3060);
	v->a[97993] = 1;
	v->a[97994] = anon_sym_BQUOTE;
	v->a[97995] = state(2484);
	v->a[97996] = 1;
	v->a[97997] = aux_sym__literal_repeat1;
	v->a[97998] = state(2955);
	v->a[97999] = 1;
	small_parse_table_4900(v);
}

/* EOF small_parse_table_979.c */
