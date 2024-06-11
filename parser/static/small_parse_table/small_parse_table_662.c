/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_662.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3310(t_small_parse_table_array *v)
{
	v->a[66200] = actions(1887);
	v->a[66201] = 1;
	v->a[66202] = anon_sym_DOLLAR_LBRACE;
	v->a[66203] = actions(1889);
	v->a[66204] = 1;
	v->a[66205] = anon_sym_DOLLAR_LPAREN;
	v->a[66206] = actions(1891);
	v->a[66207] = 1;
	v->a[66208] = anon_sym_BQUOTE;
	v->a[66209] = actions(1893);
	v->a[66210] = 1;
	v->a[66211] = sym_variable_name;
	v->a[66212] = actions(1875);
	v->a[66213] = 2;
	v->a[66214] = anon_sym_PLUS_PLUS;
	v->a[66215] = anon_sym_DASH_DASH;
	v->a[66216] = actions(1877);
	v->a[66217] = 2;
	v->a[66218] = anon_sym_DASH2;
	v->a[66219] = anon_sym_PLUS2;
	small_parse_table_3311(v);
}

void	small_parse_table_3311(t_small_parse_table_array *v)
{
	v->a[66220] = actions(1885);
	v->a[66221] = 2;
	v->a[66222] = sym_number;
	v->a[66223] = aux_sym__simple_variable_name_token1;
	v->a[66224] = state(365);
	v->a[66225] = 3;
	v->a[66226] = sym_string;
	v->a[66227] = sym_simple_expansion;
	v->a[66228] = sym_expansion;
	v->a[66229] = state(310);
	v->a[66230] = 8;
	v->a[66231] = sym__arithmetic_expression;
	v->a[66232] = sym_arithmetic_literal;
	v->a[66233] = sym_arithmetic_binary_expression;
	v->a[66234] = sym_arithmetic_ternary_expression;
	v->a[66235] = sym_arithmetic_unary_expression;
	v->a[66236] = sym_arithmetic_postfix_expression;
	v->a[66237] = sym_arithmetic_parenthesized_expression;
	v->a[66238] = sym_command_substitution;
	v->a[66239] = 15;
	small_parse_table_3312(v);
}

void	small_parse_table_3312(t_small_parse_table_array *v)
{
	v->a[66240] = actions(1094);
	v->a[66241] = 1;
	v->a[66242] = sym_comment;
	v->a[66243] = actions(1869);
	v->a[66244] = 1;
	v->a[66245] = anon_sym_LPAREN;
	v->a[66246] = actions(1871);
	v->a[66247] = 1;
	v->a[66248] = anon_sym_BANG;
	v->a[66249] = actions(1879);
	v->a[66250] = 1;
	v->a[66251] = anon_sym_TILDE;
	v->a[66252] = actions(1881);
	v->a[66253] = 1;
	v->a[66254] = anon_sym_DOLLAR;
	v->a[66255] = actions(1883);
	v->a[66256] = 1;
	v->a[66257] = anon_sym_DQUOTE;
	v->a[66258] = actions(1887);
	v->a[66259] = 1;
	small_parse_table_3313(v);
}

void	small_parse_table_3313(t_small_parse_table_array *v)
{
	v->a[66260] = anon_sym_DOLLAR_LBRACE;
	v->a[66261] = actions(1889);
	v->a[66262] = 1;
	v->a[66263] = anon_sym_DOLLAR_LPAREN;
	v->a[66264] = actions(1891);
	v->a[66265] = 1;
	v->a[66266] = anon_sym_BQUOTE;
	v->a[66267] = actions(1893);
	v->a[66268] = 1;
	v->a[66269] = sym_variable_name;
	v->a[66270] = actions(1875);
	v->a[66271] = 2;
	v->a[66272] = anon_sym_PLUS_PLUS;
	v->a[66273] = anon_sym_DASH_DASH;
	v->a[66274] = actions(1877);
	v->a[66275] = 2;
	v->a[66276] = anon_sym_DASH2;
	v->a[66277] = anon_sym_PLUS2;
	v->a[66278] = actions(1885);
	v->a[66279] = 2;
	small_parse_table_3314(v);
}

void	small_parse_table_3314(t_small_parse_table_array *v)
{
	v->a[66280] = sym_number;
	v->a[66281] = aux_sym__simple_variable_name_token1;
	v->a[66282] = state(365);
	v->a[66283] = 3;
	v->a[66284] = sym_string;
	v->a[66285] = sym_simple_expansion;
	v->a[66286] = sym_expansion;
	v->a[66287] = state(308);
	v->a[66288] = 8;
	v->a[66289] = sym__arithmetic_expression;
	v->a[66290] = sym_arithmetic_literal;
	v->a[66291] = sym_arithmetic_binary_expression;
	v->a[66292] = sym_arithmetic_ternary_expression;
	v->a[66293] = sym_arithmetic_unary_expression;
	v->a[66294] = sym_arithmetic_postfix_expression;
	v->a[66295] = sym_arithmetic_parenthesized_expression;
	v->a[66296] = sym_command_substitution;
	v->a[66297] = 15;
	v->a[66298] = actions(1094);
	v->a[66299] = 1;
	small_parse_table_3315(v);
}

/* EOF small_parse_table_662.c */
