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
	v->a[50100] = anon_sym_DOLLAR;
	v->a[50101] = actions(1752);
	v->a[50102] = 1;
	v->a[50103] = anon_sym_DQUOTE;
	v->a[50104] = actions(1756);
	v->a[50105] = 1;
	v->a[50106] = anon_sym_DOLLAR_LBRACE;
	v->a[50107] = actions(1758);
	v->a[50108] = 1;
	v->a[50109] = anon_sym_DOLLAR_LPAREN;
	v->a[50110] = actions(1760);
	v->a[50111] = 1;
	v->a[50112] = anon_sym_BQUOTE;
	v->a[50113] = actions(1762);
	v->a[50114] = 1;
	v->a[50115] = sym_variable_name;
	v->a[50116] = actions(1744);
	v->a[50117] = 2;
	v->a[50118] = anon_sym_PLUS_PLUS;
	v->a[50119] = anon_sym_DASH_DASH;
	small_parse_table_2506(v);
}

void	small_parse_table_2506(t_small_parse_table_array *v)
{
	v->a[50120] = actions(1746);
	v->a[50121] = 2;
	v->a[50122] = anon_sym_DASH2;
	v->a[50123] = anon_sym_PLUS2;
	v->a[50124] = actions(1754);
	v->a[50125] = 2;
	v->a[50126] = sym_number;
	v->a[50127] = aux_sym__simple_variable_name_token1;
	v->a[50128] = state(260);
	v->a[50129] = 3;
	v->a[50130] = sym_string;
	v->a[50131] = sym_simple_expansion;
	v->a[50132] = sym_expansion;
	v->a[50133] = state(309);
	v->a[50134] = 8;
	v->a[50135] = sym__arithmetic_expression;
	v->a[50136] = sym_arithmetic_literal;
	v->a[50137] = sym_arithmetic_binary_expression;
	v->a[50138] = sym_arithmetic_ternary_expression;
	v->a[50139] = sym_arithmetic_unary_expression;
	small_parse_table_2507(v);
}

void	small_parse_table_2507(t_small_parse_table_array *v)
{
	v->a[50140] = sym_arithmetic_postfix_expression;
	v->a[50141] = sym_arithmetic_parenthesized_expression;
	v->a[50142] = sym_command_substitution;
	v->a[50143] = 15;
	v->a[50144] = actions(664);
	v->a[50145] = 1;
	v->a[50146] = sym_comment;
	v->a[50147] = actions(1740);
	v->a[50148] = 1;
	v->a[50149] = anon_sym_LPAREN;
	v->a[50150] = actions(1742);
	v->a[50151] = 1;
	v->a[50152] = anon_sym_BANG;
	v->a[50153] = actions(1748);
	v->a[50154] = 1;
	v->a[50155] = anon_sym_TILDE;
	v->a[50156] = actions(1750);
	v->a[50157] = 1;
	v->a[50158] = anon_sym_DOLLAR;
	v->a[50159] = actions(1752);
	small_parse_table_2508(v);
}

void	small_parse_table_2508(t_small_parse_table_array *v)
{
	v->a[50160] = 1;
	v->a[50161] = anon_sym_DQUOTE;
	v->a[50162] = actions(1756);
	v->a[50163] = 1;
	v->a[50164] = anon_sym_DOLLAR_LBRACE;
	v->a[50165] = actions(1758);
	v->a[50166] = 1;
	v->a[50167] = anon_sym_DOLLAR_LPAREN;
	v->a[50168] = actions(1760);
	v->a[50169] = 1;
	v->a[50170] = anon_sym_BQUOTE;
	v->a[50171] = actions(1762);
	v->a[50172] = 1;
	v->a[50173] = sym_variable_name;
	v->a[50174] = actions(1744);
	v->a[50175] = 2;
	v->a[50176] = anon_sym_PLUS_PLUS;
	v->a[50177] = anon_sym_DASH_DASH;
	v->a[50178] = actions(1746);
	v->a[50179] = 2;
	small_parse_table_2509(v);
}

void	small_parse_table_2509(t_small_parse_table_array *v)
{
	v->a[50180] = anon_sym_DASH2;
	v->a[50181] = anon_sym_PLUS2;
	v->a[50182] = actions(1754);
	v->a[50183] = 2;
	v->a[50184] = sym_number;
	v->a[50185] = aux_sym__simple_variable_name_token1;
	v->a[50186] = state(260);
	v->a[50187] = 3;
	v->a[50188] = sym_string;
	v->a[50189] = sym_simple_expansion;
	v->a[50190] = sym_expansion;
	v->a[50191] = state(310);
	v->a[50192] = 8;
	v->a[50193] = sym__arithmetic_expression;
	v->a[50194] = sym_arithmetic_literal;
	v->a[50195] = sym_arithmetic_binary_expression;
	v->a[50196] = sym_arithmetic_ternary_expression;
	v->a[50197] = sym_arithmetic_unary_expression;
	v->a[50198] = sym_arithmetic_postfix_expression;
	v->a[50199] = sym_arithmetic_parenthesized_expression;
	small_parse_table_2510(v);
}

/* EOF small_parse_table_501.c */
