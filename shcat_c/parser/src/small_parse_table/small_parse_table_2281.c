/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2281.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11405(t_small_parse_table_array *v)
{
	v->a[228100] = sym_comment;
	v->a[228101] = actions(3602);
	v->a[228102] = 1;
	v->a[228103] = sym_variable_name;
	v->a[228104] = actions(9898);
	v->a[228105] = 1;
	v->a[228106] = anon_sym_LPAREN;
	v->a[228107] = actions(9900);
	v->a[228108] = 1;
	v->a[228109] = anon_sym_BANG;
	v->a[228110] = actions(9906);
	v->a[228111] = 1;
	v->a[228112] = anon_sym_TILDE;
	v->a[228113] = actions(9908);
	v->a[228114] = 1;
	v->a[228115] = anon_sym_DOLLAR;
	v->a[228116] = actions(9910);
	v->a[228117] = 1;
	v->a[228118] = anon_sym_DQUOTE;
	v->a[228119] = actions(9912);
	small_parse_table_11406(v);
}

void	small_parse_table_11406(t_small_parse_table_array *v)
{
	v->a[228120] = 1;
	v->a[228121] = aux_sym_number_token1;
	v->a[228122] = actions(9914);
	v->a[228123] = 1;
	v->a[228124] = aux_sym_number_token2;
	v->a[228125] = actions(9916);
	v->a[228126] = 1;
	v->a[228127] = anon_sym_DOLLAR_LBRACE;
	v->a[228128] = actions(9918);
	v->a[228129] = 1;
	v->a[228130] = anon_sym_DOLLAR_LPAREN;
	v->a[228131] = actions(9920);
	v->a[228132] = 1;
	v->a[228133] = anon_sym_BQUOTE;
	v->a[228134] = actions(9922);
	v->a[228135] = 1;
	v->a[228136] = anon_sym_DOLLAR_BQUOTE;
	v->a[228137] = actions(10832);
	v->a[228138] = 1;
	v->a[228139] = aux_sym__simple_variable_name_token1;
	small_parse_table_11407(v);
}

void	small_parse_table_11407(t_small_parse_table_array *v)
{
	v->a[228140] = state(3359);
	v->a[228141] = 1;
	v->a[228142] = sym__arithmetic_postfix_expression;
	v->a[228143] = state(3361);
	v->a[228144] = 1;
	v->a[228145] = sym__arithmetic_unary_expression;
	v->a[228146] = state(3367);
	v->a[228147] = 1;
	v->a[228148] = sym__arithmetic_ternary_expression;
	v->a[228149] = state(3375);
	v->a[228150] = 1;
	v->a[228151] = sym__arithmetic_binary_expression;
	v->a[228152] = actions(9902);
	v->a[228153] = 2;
	v->a[228154] = anon_sym_PLUS_PLUS2;
	v->a[228155] = anon_sym_DASH_DASH2;
	v->a[228156] = actions(9904);
	v->a[228157] = 2;
	v->a[228158] = anon_sym_DASH2;
	v->a[228159] = anon_sym_PLUS2;
	small_parse_table_11408(v);
}

void	small_parse_table_11408(t_small_parse_table_array *v)
{
	v->a[228160] = state(3265);
	v->a[228161] = 9;
	v->a[228162] = sym_subscript;
	v->a[228163] = sym__arithmetic_expression;
	v->a[228164] = sym__arithmetic_literal;
	v->a[228165] = sym__arithmetic_parenthesized_expression;
	v->a[228166] = sym_string;
	v->a[228167] = sym_number;
	v->a[228168] = sym_simple_expansion;
	v->a[228169] = sym_expansion;
	v->a[228170] = sym_command_substitution;
	v->a[228171] = 18;
	v->a[228172] = actions(3);
	v->a[228173] = 1;
	v->a[228174] = sym_comment;
	v->a[228175] = actions(5315);
	v->a[228176] = 1;
	v->a[228177] = anon_sym_DOLLAR_LBRACK;
	v->a[228178] = actions(5321);
	v->a[228179] = 1;
	small_parse_table_11409(v);
}

void	small_parse_table_11409(t_small_parse_table_array *v)
{
	v->a[228180] = anon_sym_DQUOTE;
	v->a[228181] = actions(5325);
	v->a[228182] = 1;
	v->a[228183] = aux_sym_number_token1;
	v->a[228184] = actions(5327);
	v->a[228185] = 1;
	v->a[228186] = aux_sym_number_token2;
	v->a[228187] = actions(5329);
	v->a[228188] = 1;
	v->a[228189] = anon_sym_DOLLAR_LBRACE;
	v->a[228190] = actions(5331);
	v->a[228191] = 1;
	v->a[228192] = anon_sym_DOLLAR_LPAREN;
	v->a[228193] = actions(5333);
	v->a[228194] = 1;
	v->a[228195] = anon_sym_BQUOTE;
	v->a[228196] = actions(5335);
	v->a[228197] = 1;
	v->a[228198] = anon_sym_DOLLAR_BQUOTE;
	v->a[228199] = actions(5341);
	small_parse_table_11410(v);
}

/* EOF small_parse_table_2281.c */
