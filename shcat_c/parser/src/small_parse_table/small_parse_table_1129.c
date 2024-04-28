/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1129.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5645(t_small_parse_table_array *v)
{
	v->a[112900] = anon_sym_DQUOTE;
	v->a[112901] = actions(1153);
	v->a[112902] = 1;
	v->a[112903] = aux_sym_number_token1;
	v->a[112904] = actions(1155);
	v->a[112905] = 1;
	v->a[112906] = aux_sym_number_token2;
	v->a[112907] = actions(1157);
	v->a[112908] = 1;
	v->a[112909] = anon_sym_DOLLAR_LBRACE;
	v->a[112910] = actions(1159);
	v->a[112911] = 1;
	v->a[112912] = anon_sym_DOLLAR_LPAREN;
	v->a[112913] = actions(1163);
	v->a[112914] = 1;
	v->a[112915] = anon_sym_DOLLAR_BQUOTE;
	v->a[112916] = actions(1169);
	v->a[112917] = 1;
	v->a[112918] = sym__brace_start;
	v->a[112919] = actions(1187);
	small_parse_table_5646(v);
}

void	small_parse_table_5646(t_small_parse_table_array *v)
{
	v->a[112920] = 1;
	v->a[112921] = sym_word;
	v->a[112922] = actions(1189);
	v->a[112923] = 1;
	v->a[112924] = anon_sym_BANG;
	v->a[112925] = actions(1195);
	v->a[112926] = 1;
	v->a[112927] = anon_sym_TILDE;
	v->a[112928] = actions(1201);
	v->a[112929] = 1;
	v->a[112930] = sym_test_operator;
	v->a[112931] = actions(3060);
	v->a[112932] = 1;
	v->a[112933] = anon_sym_BQUOTE;
	v->a[112934] = actions(5779);
	v->a[112935] = 1;
	v->a[112936] = sym__special_character;
	v->a[112937] = state(2717);
	v->a[112938] = 1;
	v->a[112939] = aux_sym__literal_repeat1;
	small_parse_table_5647(v);
}

void	small_parse_table_5647(t_small_parse_table_array *v)
{
	v->a[112940] = state(2995);
	v->a[112941] = 1;
	v->a[112942] = sym__expression;
	v->a[112943] = actions(1129);
	v->a[112944] = 2;
	v->a[112945] = anon_sym_LPAREN_LPAREN;
	v->a[112946] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[112947] = actions(1165);
	v->a[112948] = 2;
	v->a[112949] = anon_sym_LT_LPAREN;
	v->a[112950] = anon_sym_GT_LPAREN;
	v->a[112951] = actions(1191);
	v->a[112952] = 2;
	v->a[112953] = anon_sym_PLUS_PLUS2;
	v->a[112954] = anon_sym_DASH_DASH2;
	v->a[112955] = actions(1193);
	v->a[112956] = 2;
	v->a[112957] = anon_sym_DASH2;
	v->a[112958] = anon_sym_PLUS2;
	v->a[112959] = actions(1199);
	small_parse_table_5648(v);
}

void	small_parse_table_5648(t_small_parse_table_array *v)
{
	v->a[112960] = 2;
	v->a[112961] = sym_raw_string;
	v->a[112962] = sym_ansi_c_string;
	v->a[112963] = state(2594);
	v->a[112964] = 6;
	v->a[112965] = sym_binary_expression;
	v->a[112966] = sym_ternary_expression;
	v->a[112967] = sym_unary_expression;
	v->a[112968] = sym_postfix_expression;
	v->a[112969] = sym_parenthesized_expression;
	v->a[112970] = sym_concatenation;
	v->a[112971] = state(2503);
	v->a[112972] = 9;
	v->a[112973] = sym_arithmetic_expansion;
	v->a[112974] = sym_brace_expression;
	v->a[112975] = sym_string;
	v->a[112976] = sym_translated_string;
	v->a[112977] = sym_number;
	v->a[112978] = sym_simple_expansion;
	v->a[112979] = sym_expansion;
	small_parse_table_5649(v);
}

void	small_parse_table_5649(t_small_parse_table_array *v)
{
	v->a[112980] = sym_command_substitution;
	v->a[112981] = sym_process_substitution;
	v->a[112982] = 8;
	v->a[112983] = actions(3);
	v->a[112984] = 1;
	v->a[112985] = sym_comment;
	v->a[112986] = actions(5826);
	v->a[112987] = 1;
	v->a[112988] = aux_sym_heredoc_redirect_token1;
	v->a[112989] = actions(5828);
	v->a[112990] = 1;
	v->a[112991] = sym_file_descriptor;
	v->a[112992] = actions(6358);
	v->a[112993] = 1;
	v->a[112994] = anon_sym_RPAREN;
	v->a[112995] = actions(5831);
	v->a[112996] = 3;
	v->a[112997] = sym_variable_name;
	v->a[112998] = sym_test_operator;
	v->a[112999] = sym__brace_start;
	small_parse_table_5650(v);
}

/* EOF small_parse_table_1129.c */
