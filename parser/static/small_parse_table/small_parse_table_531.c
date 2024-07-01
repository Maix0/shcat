/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_531.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2655(t_small_parse_table_array *v)
{
	v->a[53100] = anon_sym_DQUOTE;
	v->a[53101] = actions(1762);
	v->a[53102] = 1;
	v->a[53103] = anon_sym_DOLLAR_LBRACE;
	v->a[53104] = actions(1764);
	v->a[53105] = 1;
	v->a[53106] = anon_sym_DOLLAR_LPAREN;
	v->a[53107] = actions(1766);
	v->a[53108] = 1;
	v->a[53109] = anon_sym_BQUOTE;
	v->a[53110] = actions(1768);
	v->a[53111] = 1;
	v->a[53112] = sym_variable_name;
	v->a[53113] = actions(1868);
	v->a[53114] = 1;
	v->a[53115] = anon_sym_RPAREN_RPAREN;
	v->a[53116] = actions(1750);
	v->a[53117] = 2;
	v->a[53118] = anon_sym_PLUS_PLUS;
	v->a[53119] = anon_sym_DASH_DASH;
	small_parse_table_2656(v);
}

void	small_parse_table_2656(t_small_parse_table_array *v)
{
	v->a[53120] = actions(1752);
	v->a[53121] = 2;
	v->a[53122] = anon_sym_DASH2;
	v->a[53123] = anon_sym_PLUS2;
	v->a[53124] = actions(1760);
	v->a[53125] = 2;
	v->a[53126] = sym_number;
	v->a[53127] = aux_sym__simple_variable_name_token1;
	v->a[53128] = state(271);
	v->a[53129] = 3;
	v->a[53130] = sym_string;
	v->a[53131] = sym_simple_expansion;
	v->a[53132] = sym_expansion;
	v->a[53133] = state(336);
	v->a[53134] = 8;
	v->a[53135] = sym__arithmetic_expression;
	v->a[53136] = sym_arithmetic_literal;
	v->a[53137] = sym_arithmetic_binary_expression;
	v->a[53138] = sym_arithmetic_ternary_expression;
	v->a[53139] = sym_arithmetic_unary_expression;
	small_parse_table_2657(v);
}

void	small_parse_table_2657(t_small_parse_table_array *v)
{
	v->a[53140] = sym_arithmetic_postfix_expression;
	v->a[53141] = sym_arithmetic_parenthesized_expression;
	v->a[53142] = sym_command_substitution;
	v->a[53143] = 16;
	v->a[53144] = actions(870);
	v->a[53145] = 1;
	v->a[53146] = sym_comment;
	v->a[53147] = actions(1744);
	v->a[53148] = 1;
	v->a[53149] = anon_sym_LPAREN;
	v->a[53150] = actions(1746);
	v->a[53151] = 1;
	v->a[53152] = anon_sym_BANG;
	v->a[53153] = actions(1754);
	v->a[53154] = 1;
	v->a[53155] = anon_sym_TILDE;
	v->a[53156] = actions(1756);
	v->a[53157] = 1;
	v->a[53158] = anon_sym_DOLLAR;
	v->a[53159] = actions(1758);
	small_parse_table_2658(v);
}

void	small_parse_table_2658(t_small_parse_table_array *v)
{
	v->a[53160] = 1;
	v->a[53161] = anon_sym_DQUOTE;
	v->a[53162] = actions(1762);
	v->a[53163] = 1;
	v->a[53164] = anon_sym_DOLLAR_LBRACE;
	v->a[53165] = actions(1764);
	v->a[53166] = 1;
	v->a[53167] = anon_sym_DOLLAR_LPAREN;
	v->a[53168] = actions(1766);
	v->a[53169] = 1;
	v->a[53170] = anon_sym_BQUOTE;
	v->a[53171] = actions(1768);
	v->a[53172] = 1;
	v->a[53173] = sym_variable_name;
	v->a[53174] = actions(1870);
	v->a[53175] = 1;
	v->a[53176] = anon_sym_RPAREN_RPAREN;
	v->a[53177] = actions(1750);
	v->a[53178] = 2;
	v->a[53179] = anon_sym_PLUS_PLUS;
	small_parse_table_2659(v);
}

void	small_parse_table_2659(t_small_parse_table_array *v)
{
	v->a[53180] = anon_sym_DASH_DASH;
	v->a[53181] = actions(1752);
	v->a[53182] = 2;
	v->a[53183] = anon_sym_DASH2;
	v->a[53184] = anon_sym_PLUS2;
	v->a[53185] = actions(1760);
	v->a[53186] = 2;
	v->a[53187] = sym_number;
	v->a[53188] = aux_sym__simple_variable_name_token1;
	v->a[53189] = state(271);
	v->a[53190] = 3;
	v->a[53191] = sym_string;
	v->a[53192] = sym_simple_expansion;
	v->a[53193] = sym_expansion;
	v->a[53194] = state(380);
	v->a[53195] = 8;
	v->a[53196] = sym__arithmetic_expression;
	v->a[53197] = sym_arithmetic_literal;
	v->a[53198] = sym_arithmetic_binary_expression;
	v->a[53199] = sym_arithmetic_ternary_expression;
	small_parse_table_2660(v);
}

/* EOF small_parse_table_531.c */
