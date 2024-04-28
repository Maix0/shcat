/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1041.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5205(t_small_parse_table_array *v)
{
	v->a[104100] = 1;
	v->a[104101] = sym__brace_start;
	v->a[104102] = actions(3060);
	v->a[104103] = 1;
	v->a[104104] = anon_sym_BQUOTE;
	v->a[104105] = state(2484);
	v->a[104106] = 1;
	v->a[104107] = aux_sym__literal_repeat1;
	v->a[104108] = state(2621);
	v->a[104109] = 1;
	v->a[104110] = sym__expression;
	v->a[104111] = actions(1129);
	v->a[104112] = 2;
	v->a[104113] = anon_sym_LPAREN_LPAREN;
	v->a[104114] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[104115] = actions(1135);
	v->a[104116] = 2;
	v->a[104117] = anon_sym_PLUS_PLUS2;
	v->a[104118] = anon_sym_DASH_DASH2;
	v->a[104119] = actions(1137);
	small_parse_table_5206(v);
}

void	small_parse_table_5206(t_small_parse_table_array *v)
{
	v->a[104120] = 2;
	v->a[104121] = anon_sym_DASH2;
	v->a[104122] = anon_sym_PLUS2;
	v->a[104123] = actions(1151);
	v->a[104124] = 2;
	v->a[104125] = sym_raw_string;
	v->a[104126] = sym_ansi_c_string;
	v->a[104127] = actions(1165);
	v->a[104128] = 2;
	v->a[104129] = anon_sym_LT_LPAREN;
	v->a[104130] = anon_sym_GT_LPAREN;
	v->a[104131] = state(2594);
	v->a[104132] = 6;
	v->a[104133] = sym_binary_expression;
	v->a[104134] = sym_ternary_expression;
	v->a[104135] = sym_unary_expression;
	v->a[104136] = sym_postfix_expression;
	v->a[104137] = sym_parenthesized_expression;
	v->a[104138] = sym_concatenation;
	v->a[104139] = state(2573);
	small_parse_table_5207(v);
}

void	small_parse_table_5207(t_small_parse_table_array *v)
{
	v->a[104140] = 9;
	v->a[104141] = sym_arithmetic_expansion;
	v->a[104142] = sym_brace_expression;
	v->a[104143] = sym_string;
	v->a[104144] = sym_translated_string;
	v->a[104145] = sym_number;
	v->a[104146] = sym_simple_expansion;
	v->a[104147] = sym_expansion;
	v->a[104148] = sym_command_substitution;
	v->a[104149] = sym_process_substitution;
	v->a[104150] = 3;
	v->a[104151] = actions(71);
	v->a[104152] = 1;
	v->a[104153] = sym_comment;
	v->a[104154] = actions(1296);
	v->a[104155] = 16;
	v->a[104156] = anon_sym_PIPE;
	v->a[104157] = anon_sym_EQ_EQ;
	v->a[104158] = anon_sym_LT;
	v->a[104159] = anon_sym_GT;
	small_parse_table_5208(v);
}

void	small_parse_table_5208(t_small_parse_table_array *v)
{
	v->a[104160] = anon_sym_LT_LT;
	v->a[104161] = anon_sym_LPAREN;
	v->a[104162] = anon_sym_EQ_TILDE;
	v->a[104163] = anon_sym_AMP_GT;
	v->a[104164] = anon_sym_LT_AMP;
	v->a[104165] = anon_sym_GT_AMP;
	v->a[104166] = anon_sym_DOLLAR;
	v->a[104167] = aux_sym_number_token1;
	v->a[104168] = aux_sym_number_token2;
	v->a[104169] = anon_sym_DOLLAR_LPAREN;
	v->a[104170] = anon_sym_BQUOTE;
	v->a[104171] = sym_word;
	v->a[104172] = actions(1298);
	v->a[104173] = 27;
	v->a[104174] = sym_file_descriptor;
	v->a[104175] = sym__concat;
	v->a[104176] = sym_test_operator;
	v->a[104177] = sym__bare_dollar;
	v->a[104178] = sym__brace_start;
	v->a[104179] = anon_sym_LPAREN_LPAREN;
	small_parse_table_5209(v);
}

void	small_parse_table_5209(t_small_parse_table_array *v)
{
	v->a[104180] = anon_sym_PIPE_PIPE;
	v->a[104181] = anon_sym_AMP_AMP;
	v->a[104182] = anon_sym_GT_GT;
	v->a[104183] = anon_sym_PIPE_AMP;
	v->a[104184] = anon_sym_AMP_GT_GT;
	v->a[104185] = anon_sym_GT_PIPE;
	v->a[104186] = anon_sym_LT_AMP_DASH;
	v->a[104187] = anon_sym_GT_AMP_DASH;
	v->a[104188] = anon_sym_LT_LT_DASH;
	v->a[104189] = anon_sym_LT_LT_LT;
	v->a[104190] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[104191] = anon_sym_DOLLAR_LBRACK;
	v->a[104192] = aux_sym_concatenation_token1;
	v->a[104193] = sym__special_character;
	v->a[104194] = anon_sym_DQUOTE;
	v->a[104195] = sym_raw_string;
	v->a[104196] = sym_ansi_c_string;
	v->a[104197] = anon_sym_DOLLAR_LBRACE;
	v->a[104198] = anon_sym_DOLLAR_BQUOTE;
	v->a[104199] = anon_sym_LT_LPAREN;
	small_parse_table_5210(v);
}

/* EOF small_parse_table_1041.c */
