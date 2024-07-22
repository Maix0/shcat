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
	v->a[50100] = actions(1706);
	v->a[50101] = 2;
	v->a[50102] = sym_number;
	v->a[50103] = aux_sym__simple_variable_name_token1;
	v->a[50104] = state(238);
	v->a[50105] = 3;
	v->a[50106] = sym_string;
	v->a[50107] = sym_simple_expansion;
	v->a[50108] = sym_expansion;
	v->a[50109] = state(305);
	v->a[50110] = 8;
	v->a[50111] = sym__arithmetic_expression;
	v->a[50112] = sym_arithmetic_literal;
	v->a[50113] = sym_arithmetic_binary_expression;
	v->a[50114] = sym_arithmetic_ternary_expression;
	v->a[50115] = sym_arithmetic_unary_expression;
	v->a[50116] = sym_arithmetic_postfix_expression;
	v->a[50117] = sym_arithmetic_parenthesized_expression;
	v->a[50118] = sym_command_substitution;
	v->a[50119] = 15;
	small_parse_table_2506(v);
}

void	small_parse_table_2506(t_small_parse_table_array *v)
{
	v->a[50120] = actions(501);
	v->a[50121] = 1;
	v->a[50122] = sym_comment;
	v->a[50123] = actions(1692);
	v->a[50124] = 1;
	v->a[50125] = anon_sym_LPAREN;
	v->a[50126] = actions(1694);
	v->a[50127] = 1;
	v->a[50128] = anon_sym_BANG;
	v->a[50129] = actions(1700);
	v->a[50130] = 1;
	v->a[50131] = anon_sym_TILDE;
	v->a[50132] = actions(1702);
	v->a[50133] = 1;
	v->a[50134] = anon_sym_DOLLAR;
	v->a[50135] = actions(1704);
	v->a[50136] = 1;
	v->a[50137] = anon_sym_DQUOTE;
	v->a[50138] = actions(1708);
	v->a[50139] = 1;
	small_parse_table_2507(v);
}

void	small_parse_table_2507(t_small_parse_table_array *v)
{
	v->a[50140] = anon_sym_DOLLAR_LBRACE;
	v->a[50141] = actions(1710);
	v->a[50142] = 1;
	v->a[50143] = anon_sym_DOLLAR_LPAREN;
	v->a[50144] = actions(1712);
	v->a[50145] = 1;
	v->a[50146] = anon_sym_BQUOTE;
	v->a[50147] = actions(1714);
	v->a[50148] = 1;
	v->a[50149] = sym_variable_name;
	v->a[50150] = actions(1696);
	v->a[50151] = 2;
	v->a[50152] = anon_sym_PLUS_PLUS;
	v->a[50153] = anon_sym_DASH_DASH;
	v->a[50154] = actions(1698);
	v->a[50155] = 2;
	v->a[50156] = anon_sym_DASH2;
	v->a[50157] = anon_sym_PLUS2;
	v->a[50158] = actions(1706);
	v->a[50159] = 2;
	small_parse_table_2508(v);
}

void	small_parse_table_2508(t_small_parse_table_array *v)
{
	v->a[50160] = sym_number;
	v->a[50161] = aux_sym__simple_variable_name_token1;
	v->a[50162] = state(238);
	v->a[50163] = 3;
	v->a[50164] = sym_string;
	v->a[50165] = sym_simple_expansion;
	v->a[50166] = sym_expansion;
	v->a[50167] = state(296);
	v->a[50168] = 8;
	v->a[50169] = sym__arithmetic_expression;
	v->a[50170] = sym_arithmetic_literal;
	v->a[50171] = sym_arithmetic_binary_expression;
	v->a[50172] = sym_arithmetic_ternary_expression;
	v->a[50173] = sym_arithmetic_unary_expression;
	v->a[50174] = sym_arithmetic_postfix_expression;
	v->a[50175] = sym_arithmetic_parenthesized_expression;
	v->a[50176] = sym_command_substitution;
	v->a[50177] = 15;
	v->a[50178] = actions(501);
	v->a[50179] = 1;
	small_parse_table_2509(v);
}

void	small_parse_table_2509(t_small_parse_table_array *v)
{
	v->a[50180] = sym_comment;
	v->a[50181] = actions(1692);
	v->a[50182] = 1;
	v->a[50183] = anon_sym_LPAREN;
	v->a[50184] = actions(1694);
	v->a[50185] = 1;
	v->a[50186] = anon_sym_BANG;
	v->a[50187] = actions(1700);
	v->a[50188] = 1;
	v->a[50189] = anon_sym_TILDE;
	v->a[50190] = actions(1702);
	v->a[50191] = 1;
	v->a[50192] = anon_sym_DOLLAR;
	v->a[50193] = actions(1704);
	v->a[50194] = 1;
	v->a[50195] = anon_sym_DQUOTE;
	v->a[50196] = actions(1708);
	v->a[50197] = 1;
	v->a[50198] = anon_sym_DOLLAR_LBRACE;
	v->a[50199] = actions(1710);
	small_parse_table_2510(v);
}

/* EOF small_parse_table_501.c */
