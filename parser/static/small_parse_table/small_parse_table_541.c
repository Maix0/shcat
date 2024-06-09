/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_541.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2705(t_small_parse_table_array *v)
{
	v->a[54100] = actions(1404);
	v->a[54101] = 1;
	v->a[54102] = sym_comment;
	v->a[54103] = actions(1979);
	v->a[54104] = 1;
	v->a[54105] = anon_sym_LPAREN;
	v->a[54106] = actions(1981);
	v->a[54107] = 1;
	v->a[54108] = anon_sym_BANG;
	v->a[54109] = actions(1989);
	v->a[54110] = 1;
	v->a[54111] = anon_sym_TILDE;
	v->a[54112] = actions(1991);
	v->a[54113] = 1;
	v->a[54114] = anon_sym_DOLLAR;
	v->a[54115] = actions(1993);
	v->a[54116] = 1;
	v->a[54117] = anon_sym_DQUOTE;
	v->a[54118] = actions(1995);
	v->a[54119] = 1;
	small_parse_table_2706(v);
}

void	small_parse_table_2706(t_small_parse_table_array *v)
{
	v->a[54120] = aux_sym_number_token1;
	v->a[54121] = actions(1997);
	v->a[54122] = 1;
	v->a[54123] = aux_sym_number_token2;
	v->a[54124] = actions(1999);
	v->a[54125] = 1;
	v->a[54126] = anon_sym_DOLLAR_LBRACE;
	v->a[54127] = actions(2001);
	v->a[54128] = 1;
	v->a[54129] = anon_sym_DOLLAR_LPAREN;
	v->a[54130] = actions(2003);
	v->a[54131] = 1;
	v->a[54132] = anon_sym_BQUOTE;
	v->a[54133] = actions(2005);
	v->a[54134] = 1;
	v->a[54135] = aux_sym__simple_variable_name_token1;
	v->a[54136] = actions(2007);
	v->a[54137] = 1;
	v->a[54138] = sym_variable_name;
	v->a[54139] = actions(2017);
	small_parse_table_2707(v);
}

void	small_parse_table_2707(t_small_parse_table_array *v)
{
	v->a[54140] = 1;
	v->a[54141] = anon_sym_RPAREN_RPAREN;
	v->a[54142] = actions(1985);
	v->a[54143] = 2;
	v->a[54144] = anon_sym_PLUS_PLUS;
	v->a[54145] = anon_sym_DASH_DASH;
	v->a[54146] = actions(1987);
	v->a[54147] = 2;
	v->a[54148] = anon_sym_DASH2;
	v->a[54149] = anon_sym_PLUS2;
	v->a[54150] = state(530);
	v->a[54151] = 4;
	v->a[54152] = sym_string;
	v->a[54153] = sym_number;
	v->a[54154] = sym_simple_expansion;
	v->a[54155] = sym_expansion;
	v->a[54156] = state(664);
	v->a[54157] = 8;
	v->a[54158] = sym__arithmetic_expression;
	v->a[54159] = sym_arithmetic_literal;
	small_parse_table_2708(v);
}

void	small_parse_table_2708(t_small_parse_table_array *v)
{
	v->a[54160] = sym_arithmetic_binary_expression;
	v->a[54161] = sym_arithmetic_ternary_expression;
	v->a[54162] = sym_arithmetic_unary_expression;
	v->a[54163] = sym_arithmetic_postfix_expression;
	v->a[54164] = sym_arithmetic_parenthesized_expression;
	v->a[54165] = sym_command_substitution;
	v->a[54166] = 18;
	v->a[54167] = actions(1404);
	v->a[54168] = 1;
	v->a[54169] = sym_comment;
	v->a[54170] = actions(1979);
	v->a[54171] = 1;
	v->a[54172] = anon_sym_LPAREN;
	v->a[54173] = actions(1981);
	v->a[54174] = 1;
	v->a[54175] = anon_sym_BANG;
	v->a[54176] = actions(1989);
	v->a[54177] = 1;
	v->a[54178] = anon_sym_TILDE;
	v->a[54179] = actions(1991);
	small_parse_table_2709(v);
}

void	small_parse_table_2709(t_small_parse_table_array *v)
{
	v->a[54180] = 1;
	v->a[54181] = anon_sym_DOLLAR;
	v->a[54182] = actions(1993);
	v->a[54183] = 1;
	v->a[54184] = anon_sym_DQUOTE;
	v->a[54185] = actions(1995);
	v->a[54186] = 1;
	v->a[54187] = aux_sym_number_token1;
	v->a[54188] = actions(1997);
	v->a[54189] = 1;
	v->a[54190] = aux_sym_number_token2;
	v->a[54191] = actions(1999);
	v->a[54192] = 1;
	v->a[54193] = anon_sym_DOLLAR_LBRACE;
	v->a[54194] = actions(2001);
	v->a[54195] = 1;
	v->a[54196] = anon_sym_DOLLAR_LPAREN;
	v->a[54197] = actions(2003);
	v->a[54198] = 1;
	v->a[54199] = anon_sym_BQUOTE;
	small_parse_table_2710(v);
}

/* EOF small_parse_table_541.c */
