/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_542.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2710(t_small_parse_table_array *v)
{
	v->a[54200] = actions(2005);
	v->a[54201] = 1;
	v->a[54202] = aux_sym__simple_variable_name_token1;
	v->a[54203] = actions(2007);
	v->a[54204] = 1;
	v->a[54205] = sym_variable_name;
	v->a[54206] = actions(2019);
	v->a[54207] = 1;
	v->a[54208] = anon_sym_RPAREN_RPAREN;
	v->a[54209] = actions(1985);
	v->a[54210] = 2;
	v->a[54211] = anon_sym_PLUS_PLUS;
	v->a[54212] = anon_sym_DASH_DASH;
	v->a[54213] = actions(1987);
	v->a[54214] = 2;
	v->a[54215] = anon_sym_DASH2;
	v->a[54216] = anon_sym_PLUS2;
	v->a[54217] = state(530);
	v->a[54218] = 4;
	v->a[54219] = sym_string;
	small_parse_table_2711(v);
}

void	small_parse_table_2711(t_small_parse_table_array *v)
{
	v->a[54220] = sym_number;
	v->a[54221] = sym_simple_expansion;
	v->a[54222] = sym_expansion;
	v->a[54223] = state(595);
	v->a[54224] = 8;
	v->a[54225] = sym__arithmetic_expression;
	v->a[54226] = sym_arithmetic_literal;
	v->a[54227] = sym_arithmetic_binary_expression;
	v->a[54228] = sym_arithmetic_ternary_expression;
	v->a[54229] = sym_arithmetic_unary_expression;
	v->a[54230] = sym_arithmetic_postfix_expression;
	v->a[54231] = sym_arithmetic_parenthesized_expression;
	v->a[54232] = sym_command_substitution;
	v->a[54233] = 18;
	v->a[54234] = actions(1404);
	v->a[54235] = 1;
	v->a[54236] = sym_comment;
	v->a[54237] = actions(1979);
	v->a[54238] = 1;
	v->a[54239] = anon_sym_LPAREN;
	small_parse_table_2712(v);
}

void	small_parse_table_2712(t_small_parse_table_array *v)
{
	v->a[54240] = actions(1981);
	v->a[54241] = 1;
	v->a[54242] = anon_sym_BANG;
	v->a[54243] = actions(1989);
	v->a[54244] = 1;
	v->a[54245] = anon_sym_TILDE;
	v->a[54246] = actions(1991);
	v->a[54247] = 1;
	v->a[54248] = anon_sym_DOLLAR;
	v->a[54249] = actions(1993);
	v->a[54250] = 1;
	v->a[54251] = anon_sym_DQUOTE;
	v->a[54252] = actions(1995);
	v->a[54253] = 1;
	v->a[54254] = aux_sym_number_token1;
	v->a[54255] = actions(1997);
	v->a[54256] = 1;
	v->a[54257] = aux_sym_number_token2;
	v->a[54258] = actions(1999);
	v->a[54259] = 1;
	small_parse_table_2713(v);
}

void	small_parse_table_2713(t_small_parse_table_array *v)
{
	v->a[54260] = anon_sym_DOLLAR_LBRACE;
	v->a[54261] = actions(2001);
	v->a[54262] = 1;
	v->a[54263] = anon_sym_DOLLAR_LPAREN;
	v->a[54264] = actions(2003);
	v->a[54265] = 1;
	v->a[54266] = anon_sym_BQUOTE;
	v->a[54267] = actions(2005);
	v->a[54268] = 1;
	v->a[54269] = aux_sym__simple_variable_name_token1;
	v->a[54270] = actions(2007);
	v->a[54271] = 1;
	v->a[54272] = sym_variable_name;
	v->a[54273] = actions(2021);
	v->a[54274] = 1;
	v->a[54275] = anon_sym_RPAREN_RPAREN;
	v->a[54276] = actions(1985);
	v->a[54277] = 2;
	v->a[54278] = anon_sym_PLUS_PLUS;
	v->a[54279] = anon_sym_DASH_DASH;
	small_parse_table_2714(v);
}

void	small_parse_table_2714(t_small_parse_table_array *v)
{
	v->a[54280] = actions(1987);
	v->a[54281] = 2;
	v->a[54282] = anon_sym_DASH2;
	v->a[54283] = anon_sym_PLUS2;
	v->a[54284] = state(530);
	v->a[54285] = 4;
	v->a[54286] = sym_string;
	v->a[54287] = sym_number;
	v->a[54288] = sym_simple_expansion;
	v->a[54289] = sym_expansion;
	v->a[54290] = state(658);
	v->a[54291] = 8;
	v->a[54292] = sym__arithmetic_expression;
	v->a[54293] = sym_arithmetic_literal;
	v->a[54294] = sym_arithmetic_binary_expression;
	v->a[54295] = sym_arithmetic_ternary_expression;
	v->a[54296] = sym_arithmetic_unary_expression;
	v->a[54297] = sym_arithmetic_postfix_expression;
	v->a[54298] = sym_arithmetic_parenthesized_expression;
	v->a[54299] = sym_command_substitution;
	small_parse_table_2715(v);
}

/* EOF small_parse_table_542.c */
