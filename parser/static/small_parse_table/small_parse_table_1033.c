/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1033.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5165(t_small_parse_table_array *v)
{
	v->a[103300] = sym_unary_expression;
	v->a[103301] = sym_postfix_expression;
	v->a[103302] = sym_parenthesized_expression;
	v->a[103303] = sym_concatenation;
	v->a[103304] = state(2456);
	v->a[103305] = 9;
	v->a[103306] = sym_arithmetic_expansion;
	v->a[103307] = sym_brace_expression;
	v->a[103308] = sym_string;
	v->a[103309] = sym_translated_string;
	v->a[103310] = sym_number;
	v->a[103311] = sym_simple_expansion;
	v->a[103312] = sym_expansion;
	v->a[103313] = sym_command_substitution;
	v->a[103314] = sym_process_substitution;
	v->a[103315] = 26;
	v->a[103316] = actions(71);
	v->a[103317] = 1;
	v->a[103318] = sym_comment;
	v->a[103319] = actions(1131);
	small_parse_table_5166(v);
}

void	small_parse_table_5166(t_small_parse_table_array *v)
{
	v->a[103320] = 1;
	v->a[103321] = anon_sym_LPAREN;
	v->a[103322] = actions(1141);
	v->a[103323] = 1;
	v->a[103324] = anon_sym_DOLLAR_LBRACK;
	v->a[103325] = actions(1145);
	v->a[103326] = 1;
	v->a[103327] = anon_sym_DOLLAR;
	v->a[103328] = actions(1149);
	v->a[103329] = 1;
	v->a[103330] = anon_sym_DQUOTE;
	v->a[103331] = actions(1153);
	v->a[103332] = 1;
	v->a[103333] = aux_sym_number_token1;
	v->a[103334] = actions(1155);
	v->a[103335] = 1;
	v->a[103336] = aux_sym_number_token2;
	v->a[103337] = actions(1157);
	v->a[103338] = 1;
	v->a[103339] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_5167(v);
}

void	small_parse_table_5167(t_small_parse_table_array *v)
{
	v->a[103340] = actions(1159);
	v->a[103341] = 1;
	v->a[103342] = anon_sym_DOLLAR_LPAREN;
	v->a[103343] = actions(1163);
	v->a[103344] = 1;
	v->a[103345] = anon_sym_DOLLAR_BQUOTE;
	v->a[103346] = actions(1169);
	v->a[103347] = 1;
	v->a[103348] = sym__brace_start;
	v->a[103349] = actions(1171);
	v->a[103350] = 1;
	v->a[103351] = sym_word;
	v->a[103352] = actions(1173);
	v->a[103353] = 1;
	v->a[103354] = anon_sym_BANG;
	v->a[103355] = actions(1179);
	v->a[103356] = 1;
	v->a[103357] = anon_sym_TILDE;
	v->a[103358] = actions(1181);
	v->a[103359] = 1;
	small_parse_table_5168(v);
}

void	small_parse_table_5168(t_small_parse_table_array *v)
{
	v->a[103360] = sym__special_character;
	v->a[103361] = actions(1185);
	v->a[103362] = 1;
	v->a[103363] = sym_test_operator;
	v->a[103364] = actions(3060);
	v->a[103365] = 1;
	v->a[103366] = anon_sym_BQUOTE;
	v->a[103367] = state(2484);
	v->a[103368] = 1;
	v->a[103369] = aux_sym__literal_repeat1;
	v->a[103370] = state(3064);
	v->a[103371] = 1;
	v->a[103372] = sym__expression;
	v->a[103373] = actions(1129);
	v->a[103374] = 2;
	v->a[103375] = anon_sym_LPAREN_LPAREN;
	v->a[103376] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[103377] = actions(1165);
	v->a[103378] = 2;
	v->a[103379] = anon_sym_LT_LPAREN;
	small_parse_table_5169(v);
}

void	small_parse_table_5169(t_small_parse_table_array *v)
{
	v->a[103380] = anon_sym_GT_LPAREN;
	v->a[103381] = actions(1175);
	v->a[103382] = 2;
	v->a[103383] = anon_sym_PLUS_PLUS2;
	v->a[103384] = anon_sym_DASH_DASH2;
	v->a[103385] = actions(1177);
	v->a[103386] = 2;
	v->a[103387] = anon_sym_DASH2;
	v->a[103388] = anon_sym_PLUS2;
	v->a[103389] = actions(1183);
	v->a[103390] = 2;
	v->a[103391] = sym_raw_string;
	v->a[103392] = sym_ansi_c_string;
	v->a[103393] = state(2594);
	v->a[103394] = 6;
	v->a[103395] = sym_binary_expression;
	v->a[103396] = sym_ternary_expression;
	v->a[103397] = sym_unary_expression;
	v->a[103398] = sym_postfix_expression;
	v->a[103399] = sym_parenthesized_expression;
	small_parse_table_5170(v);
}

/* EOF small_parse_table_1033.c */
