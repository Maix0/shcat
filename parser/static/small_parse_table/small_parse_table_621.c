/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_621.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3105(t_small_parse_table_array *v)
{
	v->a[62100] = sym_string;
	v->a[62101] = sym_simple_expansion;
	v->a[62102] = sym_expansion;
	v->a[62103] = state(463);
	v->a[62104] = 8;
	v->a[62105] = sym__arithmetic_expression;
	v->a[62106] = sym_arithmetic_literal;
	v->a[62107] = sym_arithmetic_binary_expression;
	v->a[62108] = sym_arithmetic_ternary_expression;
	v->a[62109] = sym_arithmetic_unary_expression;
	v->a[62110] = sym_arithmetic_postfix_expression;
	v->a[62111] = sym_arithmetic_parenthesized_expression;
	v->a[62112] = sym_command_substitution;
	v->a[62113] = 16;
	v->a[62114] = actions(1094);
	v->a[62115] = 1;
	v->a[62116] = sym_comment;
	v->a[62117] = actions(1869);
	v->a[62118] = 1;
	v->a[62119] = anon_sym_LPAREN;
	small_parse_table_3106(v);
}

void	small_parse_table_3106(t_small_parse_table_array *v)
{
	v->a[62120] = actions(1871);
	v->a[62121] = 1;
	v->a[62122] = anon_sym_BANG;
	v->a[62123] = actions(1879);
	v->a[62124] = 1;
	v->a[62125] = anon_sym_TILDE;
	v->a[62126] = actions(1881);
	v->a[62127] = 1;
	v->a[62128] = anon_sym_DOLLAR;
	v->a[62129] = actions(1883);
	v->a[62130] = 1;
	v->a[62131] = anon_sym_DQUOTE;
	v->a[62132] = actions(1887);
	v->a[62133] = 1;
	v->a[62134] = anon_sym_DOLLAR_LBRACE;
	v->a[62135] = actions(1889);
	v->a[62136] = 1;
	v->a[62137] = anon_sym_DOLLAR_LPAREN;
	v->a[62138] = actions(1891);
	v->a[62139] = 1;
	small_parse_table_3107(v);
}

void	small_parse_table_3107(t_small_parse_table_array *v)
{
	v->a[62140] = anon_sym_BQUOTE;
	v->a[62141] = actions(1893);
	v->a[62142] = 1;
	v->a[62143] = sym_variable_name;
	v->a[62144] = actions(1927);
	v->a[62145] = 1;
	v->a[62146] = anon_sym_RPAREN_RPAREN;
	v->a[62147] = actions(1875);
	v->a[62148] = 2;
	v->a[62149] = anon_sym_PLUS_PLUS;
	v->a[62150] = anon_sym_DASH_DASH;
	v->a[62151] = actions(1877);
	v->a[62152] = 2;
	v->a[62153] = anon_sym_DASH2;
	v->a[62154] = anon_sym_PLUS2;
	v->a[62155] = actions(1885);
	v->a[62156] = 2;
	v->a[62157] = sym_number;
	v->a[62158] = aux_sym__simple_variable_name_token1;
	v->a[62159] = state(365);
	small_parse_table_3108(v);
}

void	small_parse_table_3108(t_small_parse_table_array *v)
{
	v->a[62160] = 3;
	v->a[62161] = sym_string;
	v->a[62162] = sym_simple_expansion;
	v->a[62163] = sym_expansion;
	v->a[62164] = state(520);
	v->a[62165] = 8;
	v->a[62166] = sym__arithmetic_expression;
	v->a[62167] = sym_arithmetic_literal;
	v->a[62168] = sym_arithmetic_binary_expression;
	v->a[62169] = sym_arithmetic_ternary_expression;
	v->a[62170] = sym_arithmetic_unary_expression;
	v->a[62171] = sym_arithmetic_postfix_expression;
	v->a[62172] = sym_arithmetic_parenthesized_expression;
	v->a[62173] = sym_command_substitution;
	v->a[62174] = 16;
	v->a[62175] = actions(1094);
	v->a[62176] = 1;
	v->a[62177] = sym_comment;
	v->a[62178] = actions(1869);
	v->a[62179] = 1;
	small_parse_table_3109(v);
}

void	small_parse_table_3109(t_small_parse_table_array *v)
{
	v->a[62180] = anon_sym_LPAREN;
	v->a[62181] = actions(1871);
	v->a[62182] = 1;
	v->a[62183] = anon_sym_BANG;
	v->a[62184] = actions(1879);
	v->a[62185] = 1;
	v->a[62186] = anon_sym_TILDE;
	v->a[62187] = actions(1881);
	v->a[62188] = 1;
	v->a[62189] = anon_sym_DOLLAR;
	v->a[62190] = actions(1883);
	v->a[62191] = 1;
	v->a[62192] = anon_sym_DQUOTE;
	v->a[62193] = actions(1887);
	v->a[62194] = 1;
	v->a[62195] = anon_sym_DOLLAR_LBRACE;
	v->a[62196] = actions(1889);
	v->a[62197] = 1;
	v->a[62198] = anon_sym_DOLLAR_LPAREN;
	v->a[62199] = actions(1891);
	small_parse_table_3110(v);
}

/* EOF small_parse_table_621.c */
