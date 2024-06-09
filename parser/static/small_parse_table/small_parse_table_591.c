/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_591.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2955(t_small_parse_table_array *v)
{
	v->a[59100] = anon_sym_PLUS_PLUS;
	v->a[59101] = anon_sym_DASH_DASH;
	v->a[59102] = actions(2083);
	v->a[59103] = 2;
	v->a[59104] = anon_sym_DASH2;
	v->a[59105] = anon_sym_PLUS2;
	v->a[59106] = state(588);
	v->a[59107] = 4;
	v->a[59108] = sym_string;
	v->a[59109] = sym_number;
	v->a[59110] = sym_simple_expansion;
	v->a[59111] = sym_expansion;
	v->a[59112] = state(611);
	v->a[59113] = 8;
	v->a[59114] = sym__arithmetic_expression;
	v->a[59115] = sym_arithmetic_literal;
	v->a[59116] = sym_arithmetic_binary_expression;
	v->a[59117] = sym_arithmetic_ternary_expression;
	v->a[59118] = sym_arithmetic_unary_expression;
	v->a[59119] = sym_arithmetic_postfix_expression;
	small_parse_table_2956(v);
}

void	small_parse_table_2956(t_small_parse_table_array *v)
{
	v->a[59120] = sym_arithmetic_parenthesized_expression;
	v->a[59121] = sym_command_substitution;
	v->a[59122] = 17;
	v->a[59123] = actions(1404);
	v->a[59124] = 1;
	v->a[59125] = sym_comment;
	v->a[59126] = actions(2077);
	v->a[59127] = 1;
	v->a[59128] = anon_sym_LPAREN;
	v->a[59129] = actions(2079);
	v->a[59130] = 1;
	v->a[59131] = anon_sym_BANG;
	v->a[59132] = actions(2085);
	v->a[59133] = 1;
	v->a[59134] = anon_sym_TILDE;
	v->a[59135] = actions(2087);
	v->a[59136] = 1;
	v->a[59137] = anon_sym_DOLLAR;
	v->a[59138] = actions(2089);
	v->a[59139] = 1;
	small_parse_table_2957(v);
}

void	small_parse_table_2957(t_small_parse_table_array *v)
{
	v->a[59140] = anon_sym_DQUOTE;
	v->a[59141] = actions(2091);
	v->a[59142] = 1;
	v->a[59143] = aux_sym_number_token1;
	v->a[59144] = actions(2093);
	v->a[59145] = 1;
	v->a[59146] = aux_sym_number_token2;
	v->a[59147] = actions(2095);
	v->a[59148] = 1;
	v->a[59149] = anon_sym_DOLLAR_LBRACE;
	v->a[59150] = actions(2097);
	v->a[59151] = 1;
	v->a[59152] = anon_sym_DOLLAR_LPAREN;
	v->a[59153] = actions(2099);
	v->a[59154] = 1;
	v->a[59155] = anon_sym_BQUOTE;
	v->a[59156] = actions(2101);
	v->a[59157] = 1;
	v->a[59158] = aux_sym__simple_variable_name_token1;
	v->a[59159] = actions(2103);
	small_parse_table_2958(v);
}

void	small_parse_table_2958(t_small_parse_table_array *v)
{
	v->a[59160] = 1;
	v->a[59161] = sym_variable_name;
	v->a[59162] = actions(2081);
	v->a[59163] = 2;
	v->a[59164] = anon_sym_PLUS_PLUS;
	v->a[59165] = anon_sym_DASH_DASH;
	v->a[59166] = actions(2083);
	v->a[59167] = 2;
	v->a[59168] = anon_sym_DASH2;
	v->a[59169] = anon_sym_PLUS2;
	v->a[59170] = state(588);
	v->a[59171] = 4;
	v->a[59172] = sym_string;
	v->a[59173] = sym_number;
	v->a[59174] = sym_simple_expansion;
	v->a[59175] = sym_expansion;
	v->a[59176] = state(613);
	v->a[59177] = 8;
	v->a[59178] = sym__arithmetic_expression;
	v->a[59179] = sym_arithmetic_literal;
	small_parse_table_2959(v);
}

void	small_parse_table_2959(t_small_parse_table_array *v)
{
	v->a[59180] = sym_arithmetic_binary_expression;
	v->a[59181] = sym_arithmetic_ternary_expression;
	v->a[59182] = sym_arithmetic_unary_expression;
	v->a[59183] = sym_arithmetic_postfix_expression;
	v->a[59184] = sym_arithmetic_parenthesized_expression;
	v->a[59185] = sym_command_substitution;
	v->a[59186] = 3;
	v->a[59187] = actions(3);
	v->a[59188] = 1;
	v->a[59189] = sym_comment;
	v->a[59190] = actions(1192);
	v->a[59191] = 2;
	v->a[59192] = sym_file_descriptor;
	v->a[59193] = sym__concat;
	v->a[59194] = actions(1190);
	v->a[59195] = 26;
	v->a[59196] = anon_sym_PIPE;
	v->a[59197] = anon_sym_AMP_AMP;
	v->a[59198] = anon_sym_PIPE_PIPE;
	v->a[59199] = anon_sym_LT;
	small_parse_table_2960(v);
}

/* EOF small_parse_table_591.c */
