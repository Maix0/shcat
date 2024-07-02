/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_501.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2505(t_small_parse_table_array *v)
{
	v->a[50100] = anon_sym_DOLLAR_LPAREN;
	v->a[50101] = anon_sym_BQUOTE;
	v->a[50102] = sym_word;
	v->a[50103] = 15;
	v->a[50104] = actions(680);
	v->a[50105] = 1;
	v->a[50106] = sym_comment;
	v->a[50107] = actions(1574);
	v->a[50108] = 1;
	v->a[50109] = anon_sym_LPAREN;
	v->a[50110] = actions(1576);
	v->a[50111] = 1;
	v->a[50112] = anon_sym_BANG;
	v->a[50113] = actions(1584);
	v->a[50114] = 1;
	v->a[50115] = anon_sym_TILDE;
	v->a[50116] = actions(1586);
	v->a[50117] = 1;
	v->a[50118] = anon_sym_DOLLAR;
	v->a[50119] = actions(1588);
	small_parse_table_2506(v);
}

void	small_parse_table_2506(t_small_parse_table_array *v)
{
	v->a[50120] = 1;
	v->a[50121] = anon_sym_DQUOTE;
	v->a[50122] = actions(1592);
	v->a[50123] = 1;
	v->a[50124] = anon_sym_DOLLAR_LBRACE;
	v->a[50125] = actions(1594);
	v->a[50126] = 1;
	v->a[50127] = anon_sym_DOLLAR_LPAREN;
	v->a[50128] = actions(1596);
	v->a[50129] = 1;
	v->a[50130] = anon_sym_BQUOTE;
	v->a[50131] = actions(1598);
	v->a[50132] = 1;
	v->a[50133] = sym_variable_name;
	v->a[50134] = actions(1580);
	v->a[50135] = 2;
	v->a[50136] = anon_sym_PLUS_PLUS;
	v->a[50137] = anon_sym_DASH_DASH;
	v->a[50138] = actions(1582);
	v->a[50139] = 2;
	small_parse_table_2507(v);
}

void	small_parse_table_2507(t_small_parse_table_array *v)
{
	v->a[50140] = anon_sym_DASH2;
	v->a[50141] = anon_sym_PLUS2;
	v->a[50142] = actions(1590);
	v->a[50143] = 2;
	v->a[50144] = sym_number;
	v->a[50145] = aux_sym__simple_variable_name_token1;
	v->a[50146] = state(238);
	v->a[50147] = 3;
	v->a[50148] = sym_string;
	v->a[50149] = sym_simple_expansion;
	v->a[50150] = sym_expansion;
	v->a[50151] = state(217);
	v->a[50152] = 8;
	v->a[50153] = sym__arithmetic_expression;
	v->a[50154] = sym_arithmetic_literal;
	v->a[50155] = sym_arithmetic_binary_expression;
	v->a[50156] = sym_arithmetic_ternary_expression;
	v->a[50157] = sym_arithmetic_unary_expression;
	v->a[50158] = sym_arithmetic_postfix_expression;
	v->a[50159] = sym_arithmetic_parenthesized_expression;
	small_parse_table_2508(v);
}

void	small_parse_table_2508(t_small_parse_table_array *v)
{
	v->a[50160] = sym_command_substitution;
	v->a[50161] = 4;
	v->a[50162] = actions(3);
	v->a[50163] = 1;
	v->a[50164] = sym_comment;
	v->a[50165] = actions(1424);
	v->a[50166] = 1;
	v->a[50167] = anon_sym_BQUOTE;
	v->a[50168] = actions(1426);
	v->a[50169] = 2;
	v->a[50170] = sym_file_descriptor;
	v->a[50171] = sym_variable_name;
	v->a[50172] = actions(1422);
	v->a[50173] = 23;
	v->a[50174] = anon_sym_for;
	v->a[50175] = anon_sym_while;
	v->a[50176] = anon_sym_until;
	v->a[50177] = anon_sym_if;
	v->a[50178] = anon_sym_case;
	v->a[50179] = anon_sym_LPAREN;
	small_parse_table_2509(v);
}

void	small_parse_table_2509(t_small_parse_table_array *v)
{
	v->a[50180] = anon_sym_LBRACE;
	v->a[50181] = anon_sym_BANG;
	v->a[50182] = anon_sym_LT;
	v->a[50183] = anon_sym_GT;
	v->a[50184] = anon_sym_GT_GT;
	v->a[50185] = anon_sym_LT_AMP;
	v->a[50186] = anon_sym_GT_AMP;
	v->a[50187] = anon_sym_GT_PIPE;
	v->a[50188] = anon_sym_LT_GT;
	v->a[50189] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50190] = anon_sym_DOLLAR;
	v->a[50191] = anon_sym_DQUOTE;
	v->a[50192] = sym_raw_string;
	v->a[50193] = sym_number;
	v->a[50194] = anon_sym_DOLLAR_LBRACE;
	v->a[50195] = anon_sym_DOLLAR_LPAREN;
	v->a[50196] = sym_word;
	v->a[50197] = 4;
	v->a[50198] = actions(3);
	v->a[50199] = 1;
	small_parse_table_2510(v);
}

/* EOF small_parse_table_501.c */
