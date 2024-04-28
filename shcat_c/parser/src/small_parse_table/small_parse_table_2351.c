/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2351.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11755(t_small_parse_table_array *v)
{
	v->a[235100] = 1;
	v->a[235101] = anon_sym_DOLLAR_BQUOTE;
	v->a[235102] = actions(9392);
	v->a[235103] = 1;
	v->a[235104] = sym_variable_name;
	v->a[235105] = actions(11082);
	v->a[235106] = 1;
	v->a[235107] = aux_sym__simple_variable_name_token1;
	v->a[235108] = state(3391);
	v->a[235109] = 1;
	v->a[235110] = sym__arithmetic_binary_expression;
	v->a[235111] = state(3396);
	v->a[235112] = 1;
	v->a[235113] = sym__arithmetic_ternary_expression;
	v->a[235114] = state(3398);
	v->a[235115] = 1;
	v->a[235116] = sym__arithmetic_unary_expression;
	v->a[235117] = state(3400);
	v->a[235118] = 1;
	v->a[235119] = sym__arithmetic_postfix_expression;
	small_parse_table_11756(v);
}

void	small_parse_table_11756(t_small_parse_table_array *v)
{
	v->a[235120] = actions(9368);
	v->a[235121] = 2;
	v->a[235122] = anon_sym_PLUS_PLUS2;
	v->a[235123] = anon_sym_DASH_DASH2;
	v->a[235124] = actions(9370);
	v->a[235125] = 2;
	v->a[235126] = anon_sym_DASH2;
	v->a[235127] = anon_sym_PLUS2;
	v->a[235128] = state(3325);
	v->a[235129] = 9;
	v->a[235130] = sym_subscript;
	v->a[235131] = sym__arithmetic_expression;
	v->a[235132] = sym__arithmetic_literal;
	v->a[235133] = sym__arithmetic_parenthesized_expression;
	v->a[235134] = sym_string;
	v->a[235135] = sym_number;
	v->a[235136] = sym_simple_expansion;
	v->a[235137] = sym_expansion;
	v->a[235138] = sym_command_substitution;
	v->a[235139] = 18;
	small_parse_table_11757(v);
}

void	small_parse_table_11757(t_small_parse_table_array *v)
{
	v->a[235140] = actions(3);
	v->a[235141] = 1;
	v->a[235142] = sym_comment;
	v->a[235143] = actions(1141);
	v->a[235144] = 1;
	v->a[235145] = anon_sym_DOLLAR_LBRACK;
	v->a[235146] = actions(1149);
	v->a[235147] = 1;
	v->a[235148] = anon_sym_DQUOTE;
	v->a[235149] = actions(1153);
	v->a[235150] = 1;
	v->a[235151] = aux_sym_number_token1;
	v->a[235152] = actions(1155);
	v->a[235153] = 1;
	v->a[235154] = aux_sym_number_token2;
	v->a[235155] = actions(1157);
	v->a[235156] = 1;
	v->a[235157] = anon_sym_DOLLAR_LBRACE;
	v->a[235158] = actions(1159);
	v->a[235159] = 1;
	small_parse_table_11758(v);
}

void	small_parse_table_11758(t_small_parse_table_array *v)
{
	v->a[235160] = anon_sym_DOLLAR_LPAREN;
	v->a[235161] = actions(1163);
	v->a[235162] = 1;
	v->a[235163] = anon_sym_DOLLAR_BQUOTE;
	v->a[235164] = actions(1169);
	v->a[235165] = 1;
	v->a[235166] = sym__brace_start;
	v->a[235167] = actions(3060);
	v->a[235168] = 1;
	v->a[235169] = anon_sym_BQUOTE;
	v->a[235170] = actions(10188);
	v->a[235171] = 1;
	v->a[235172] = sym_word;
	v->a[235173] = actions(10196);
	v->a[235174] = 1;
	v->a[235175] = sym__comment_word;
	v->a[235176] = actions(11084);
	v->a[235177] = 1;
	v->a[235178] = anon_sym_DOLLAR;
	v->a[235179] = actions(1129);
	small_parse_table_11759(v);
}

void	small_parse_table_11759(t_small_parse_table_array *v)
{
	v->a[235180] = 2;
	v->a[235181] = anon_sym_LPAREN_LPAREN;
	v->a[235182] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[235183] = actions(1165);
	v->a[235184] = 2;
	v->a[235185] = anon_sym_LT_LPAREN;
	v->a[235186] = anon_sym_GT_LPAREN;
	v->a[235187] = actions(10192);
	v->a[235188] = 2;
	v->a[235189] = sym_test_operator;
	v->a[235190] = sym__special_character;
	v->a[235191] = actions(10194);
	v->a[235192] = 3;
	v->a[235193] = sym__bare_dollar;
	v->a[235194] = sym_raw_string;
	v->a[235195] = sym_ansi_c_string;
	v->a[235196] = state(2392);
	v->a[235197] = 9;
	v->a[235198] = sym_arithmetic_expansion;
	v->a[235199] = sym_brace_expression;
	small_parse_table_11760(v);
}

/* EOF small_parse_table_2351.c */
