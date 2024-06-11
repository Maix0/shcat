/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_641.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3205(t_small_parse_table_array *v)
{
	v->a[64100] = 1;
	v->a[64101] = anon_sym_DOLLAR_LPAREN;
	v->a[64102] = actions(1891);
	v->a[64103] = 1;
	v->a[64104] = anon_sym_BQUOTE;
	v->a[64105] = actions(1893);
	v->a[64106] = 1;
	v->a[64107] = sym_variable_name;
	v->a[64108] = actions(1875);
	v->a[64109] = 2;
	v->a[64110] = anon_sym_PLUS_PLUS;
	v->a[64111] = anon_sym_DASH_DASH;
	v->a[64112] = actions(1877);
	v->a[64113] = 2;
	v->a[64114] = anon_sym_DASH2;
	v->a[64115] = anon_sym_PLUS2;
	v->a[64116] = actions(1885);
	v->a[64117] = 2;
	v->a[64118] = sym_number;
	v->a[64119] = aux_sym__simple_variable_name_token1;
	small_parse_table_3206(v);
}

void	small_parse_table_3206(t_small_parse_table_array *v)
{
	v->a[64120] = state(365);
	v->a[64121] = 3;
	v->a[64122] = sym_string;
	v->a[64123] = sym_simple_expansion;
	v->a[64124] = sym_expansion;
	v->a[64125] = state(313);
	v->a[64126] = 8;
	v->a[64127] = sym__arithmetic_expression;
	v->a[64128] = sym_arithmetic_literal;
	v->a[64129] = sym_arithmetic_binary_expression;
	v->a[64130] = sym_arithmetic_ternary_expression;
	v->a[64131] = sym_arithmetic_unary_expression;
	v->a[64132] = sym_arithmetic_postfix_expression;
	v->a[64133] = sym_arithmetic_parenthesized_expression;
	v->a[64134] = sym_command_substitution;
	v->a[64135] = 15;
	v->a[64136] = actions(1094);
	v->a[64137] = 1;
	v->a[64138] = sym_comment;
	v->a[64139] = actions(1869);
	small_parse_table_3207(v);
}

void	small_parse_table_3207(t_small_parse_table_array *v)
{
	v->a[64140] = 1;
	v->a[64141] = anon_sym_LPAREN;
	v->a[64142] = actions(1871);
	v->a[64143] = 1;
	v->a[64144] = anon_sym_BANG;
	v->a[64145] = actions(1879);
	v->a[64146] = 1;
	v->a[64147] = anon_sym_TILDE;
	v->a[64148] = actions(1881);
	v->a[64149] = 1;
	v->a[64150] = anon_sym_DOLLAR;
	v->a[64151] = actions(1883);
	v->a[64152] = 1;
	v->a[64153] = anon_sym_DQUOTE;
	v->a[64154] = actions(1887);
	v->a[64155] = 1;
	v->a[64156] = anon_sym_DOLLAR_LBRACE;
	v->a[64157] = actions(1889);
	v->a[64158] = 1;
	v->a[64159] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_3208(v);
}

void	small_parse_table_3208(t_small_parse_table_array *v)
{
	v->a[64160] = actions(1891);
	v->a[64161] = 1;
	v->a[64162] = anon_sym_BQUOTE;
	v->a[64163] = actions(1893);
	v->a[64164] = 1;
	v->a[64165] = sym_variable_name;
	v->a[64166] = actions(1875);
	v->a[64167] = 2;
	v->a[64168] = anon_sym_PLUS_PLUS;
	v->a[64169] = anon_sym_DASH_DASH;
	v->a[64170] = actions(1877);
	v->a[64171] = 2;
	v->a[64172] = anon_sym_DASH2;
	v->a[64173] = anon_sym_PLUS2;
	v->a[64174] = actions(1885);
	v->a[64175] = 2;
	v->a[64176] = sym_number;
	v->a[64177] = aux_sym__simple_variable_name_token1;
	v->a[64178] = state(365);
	v->a[64179] = 3;
	small_parse_table_3209(v);
}

void	small_parse_table_3209(t_small_parse_table_array *v)
{
	v->a[64180] = sym_string;
	v->a[64181] = sym_simple_expansion;
	v->a[64182] = sym_expansion;
	v->a[64183] = state(317);
	v->a[64184] = 8;
	v->a[64185] = sym__arithmetic_expression;
	v->a[64186] = sym_arithmetic_literal;
	v->a[64187] = sym_arithmetic_binary_expression;
	v->a[64188] = sym_arithmetic_ternary_expression;
	v->a[64189] = sym_arithmetic_unary_expression;
	v->a[64190] = sym_arithmetic_postfix_expression;
	v->a[64191] = sym_arithmetic_parenthesized_expression;
	v->a[64192] = sym_command_substitution;
	v->a[64193] = 15;
	v->a[64194] = actions(1094);
	v->a[64195] = 1;
	v->a[64196] = sym_comment;
	v->a[64197] = actions(1869);
	v->a[64198] = 1;
	v->a[64199] = anon_sym_LPAREN;
	small_parse_table_3210(v);
}

/* EOF small_parse_table_641.c */
