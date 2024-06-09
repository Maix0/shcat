/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_582.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2910(t_small_parse_table_array *v)
{
	v->a[58200] = anon_sym_PLUS_PLUS;
	v->a[58201] = anon_sym_DASH_DASH;
	v->a[58202] = actions(1987);
	v->a[58203] = 2;
	v->a[58204] = anon_sym_DASH2;
	v->a[58205] = anon_sym_PLUS2;
	v->a[58206] = state(530);
	v->a[58207] = 4;
	v->a[58208] = sym_string;
	v->a[58209] = sym_number;
	v->a[58210] = sym_simple_expansion;
	v->a[58211] = sym_expansion;
	v->a[58212] = state(419);
	v->a[58213] = 8;
	v->a[58214] = sym__arithmetic_expression;
	v->a[58215] = sym_arithmetic_literal;
	v->a[58216] = sym_arithmetic_binary_expression;
	v->a[58217] = sym_arithmetic_ternary_expression;
	v->a[58218] = sym_arithmetic_unary_expression;
	v->a[58219] = sym_arithmetic_postfix_expression;
	small_parse_table_2911(v);
}

void	small_parse_table_2911(t_small_parse_table_array *v)
{
	v->a[58220] = sym_arithmetic_parenthesized_expression;
	v->a[58221] = sym_command_substitution;
	v->a[58222] = 17;
	v->a[58223] = actions(1404);
	v->a[58224] = 1;
	v->a[58225] = sym_comment;
	v->a[58226] = actions(1979);
	v->a[58227] = 1;
	v->a[58228] = anon_sym_LPAREN;
	v->a[58229] = actions(1981);
	v->a[58230] = 1;
	v->a[58231] = anon_sym_BANG;
	v->a[58232] = actions(1989);
	v->a[58233] = 1;
	v->a[58234] = anon_sym_TILDE;
	v->a[58235] = actions(1991);
	v->a[58236] = 1;
	v->a[58237] = anon_sym_DOLLAR;
	v->a[58238] = actions(1993);
	v->a[58239] = 1;
	small_parse_table_2912(v);
}

void	small_parse_table_2912(t_small_parse_table_array *v)
{
	v->a[58240] = anon_sym_DQUOTE;
	v->a[58241] = actions(1995);
	v->a[58242] = 1;
	v->a[58243] = aux_sym_number_token1;
	v->a[58244] = actions(1997);
	v->a[58245] = 1;
	v->a[58246] = aux_sym_number_token2;
	v->a[58247] = actions(1999);
	v->a[58248] = 1;
	v->a[58249] = anon_sym_DOLLAR_LBRACE;
	v->a[58250] = actions(2001);
	v->a[58251] = 1;
	v->a[58252] = anon_sym_DOLLAR_LPAREN;
	v->a[58253] = actions(2003);
	v->a[58254] = 1;
	v->a[58255] = anon_sym_BQUOTE;
	v->a[58256] = actions(2005);
	v->a[58257] = 1;
	v->a[58258] = aux_sym__simple_variable_name_token1;
	v->a[58259] = actions(2007);
	small_parse_table_2913(v);
}

void	small_parse_table_2913(t_small_parse_table_array *v)
{
	v->a[58260] = 1;
	v->a[58261] = sym_variable_name;
	v->a[58262] = actions(1985);
	v->a[58263] = 2;
	v->a[58264] = anon_sym_PLUS_PLUS;
	v->a[58265] = anon_sym_DASH_DASH;
	v->a[58266] = actions(1987);
	v->a[58267] = 2;
	v->a[58268] = anon_sym_DASH2;
	v->a[58269] = anon_sym_PLUS2;
	v->a[58270] = state(530);
	v->a[58271] = 4;
	v->a[58272] = sym_string;
	v->a[58273] = sym_number;
	v->a[58274] = sym_simple_expansion;
	v->a[58275] = sym_expansion;
	v->a[58276] = state(418);
	v->a[58277] = 8;
	v->a[58278] = sym__arithmetic_expression;
	v->a[58279] = sym_arithmetic_literal;
	small_parse_table_2914(v);
}

void	small_parse_table_2914(t_small_parse_table_array *v)
{
	v->a[58280] = sym_arithmetic_binary_expression;
	v->a[58281] = sym_arithmetic_ternary_expression;
	v->a[58282] = sym_arithmetic_unary_expression;
	v->a[58283] = sym_arithmetic_postfix_expression;
	v->a[58284] = sym_arithmetic_parenthesized_expression;
	v->a[58285] = sym_command_substitution;
	v->a[58286] = 17;
	v->a[58287] = actions(1404);
	v->a[58288] = 1;
	v->a[58289] = sym_comment;
	v->a[58290] = actions(1979);
	v->a[58291] = 1;
	v->a[58292] = anon_sym_LPAREN;
	v->a[58293] = actions(1981);
	v->a[58294] = 1;
	v->a[58295] = anon_sym_BANG;
	v->a[58296] = actions(1989);
	v->a[58297] = 1;
	v->a[58298] = anon_sym_TILDE;
	v->a[58299] = actions(1991);
	small_parse_table_2915(v);
}

/* EOF small_parse_table_582.c */
