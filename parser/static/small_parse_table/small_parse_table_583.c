/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_583.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2915(t_small_parse_table_array *v)
{
	v->a[58300] = 1;
	v->a[58301] = anon_sym_DOLLAR;
	v->a[58302] = actions(1993);
	v->a[58303] = 1;
	v->a[58304] = anon_sym_DQUOTE;
	v->a[58305] = actions(1995);
	v->a[58306] = 1;
	v->a[58307] = aux_sym_number_token1;
	v->a[58308] = actions(1997);
	v->a[58309] = 1;
	v->a[58310] = aux_sym_number_token2;
	v->a[58311] = actions(1999);
	v->a[58312] = 1;
	v->a[58313] = anon_sym_DOLLAR_LBRACE;
	v->a[58314] = actions(2001);
	v->a[58315] = 1;
	v->a[58316] = anon_sym_DOLLAR_LPAREN;
	v->a[58317] = actions(2003);
	v->a[58318] = 1;
	v->a[58319] = anon_sym_BQUOTE;
	small_parse_table_2916(v);
}

void	small_parse_table_2916(t_small_parse_table_array *v)
{
	v->a[58320] = actions(2005);
	v->a[58321] = 1;
	v->a[58322] = aux_sym__simple_variable_name_token1;
	v->a[58323] = actions(2007);
	v->a[58324] = 1;
	v->a[58325] = sym_variable_name;
	v->a[58326] = actions(1985);
	v->a[58327] = 2;
	v->a[58328] = anon_sym_PLUS_PLUS;
	v->a[58329] = anon_sym_DASH_DASH;
	v->a[58330] = actions(1987);
	v->a[58331] = 2;
	v->a[58332] = anon_sym_DASH2;
	v->a[58333] = anon_sym_PLUS2;
	v->a[58334] = state(530);
	v->a[58335] = 4;
	v->a[58336] = sym_string;
	v->a[58337] = sym_number;
	v->a[58338] = sym_simple_expansion;
	v->a[58339] = sym_expansion;
	small_parse_table_2917(v);
}

void	small_parse_table_2917(t_small_parse_table_array *v)
{
	v->a[58340] = state(417);
	v->a[58341] = 8;
	v->a[58342] = sym__arithmetic_expression;
	v->a[58343] = sym_arithmetic_literal;
	v->a[58344] = sym_arithmetic_binary_expression;
	v->a[58345] = sym_arithmetic_ternary_expression;
	v->a[58346] = sym_arithmetic_unary_expression;
	v->a[58347] = sym_arithmetic_postfix_expression;
	v->a[58348] = sym_arithmetic_parenthesized_expression;
	v->a[58349] = sym_command_substitution;
	v->a[58350] = 17;
	v->a[58351] = actions(1404);
	v->a[58352] = 1;
	v->a[58353] = sym_comment;
	v->a[58354] = actions(1979);
	v->a[58355] = 1;
	v->a[58356] = anon_sym_LPAREN;
	v->a[58357] = actions(1981);
	v->a[58358] = 1;
	v->a[58359] = anon_sym_BANG;
	small_parse_table_2918(v);
}

void	small_parse_table_2918(t_small_parse_table_array *v)
{
	v->a[58360] = actions(1989);
	v->a[58361] = 1;
	v->a[58362] = anon_sym_TILDE;
	v->a[58363] = actions(1991);
	v->a[58364] = 1;
	v->a[58365] = anon_sym_DOLLAR;
	v->a[58366] = actions(1993);
	v->a[58367] = 1;
	v->a[58368] = anon_sym_DQUOTE;
	v->a[58369] = actions(1995);
	v->a[58370] = 1;
	v->a[58371] = aux_sym_number_token1;
	v->a[58372] = actions(1997);
	v->a[58373] = 1;
	v->a[58374] = aux_sym_number_token2;
	v->a[58375] = actions(1999);
	v->a[58376] = 1;
	v->a[58377] = anon_sym_DOLLAR_LBRACE;
	v->a[58378] = actions(2001);
	v->a[58379] = 1;
	small_parse_table_2919(v);
}

void	small_parse_table_2919(t_small_parse_table_array *v)
{
	v->a[58380] = anon_sym_DOLLAR_LPAREN;
	v->a[58381] = actions(2003);
	v->a[58382] = 1;
	v->a[58383] = anon_sym_BQUOTE;
	v->a[58384] = actions(2005);
	v->a[58385] = 1;
	v->a[58386] = aux_sym__simple_variable_name_token1;
	v->a[58387] = actions(2007);
	v->a[58388] = 1;
	v->a[58389] = sym_variable_name;
	v->a[58390] = actions(1985);
	v->a[58391] = 2;
	v->a[58392] = anon_sym_PLUS_PLUS;
	v->a[58393] = anon_sym_DASH_DASH;
	v->a[58394] = actions(1987);
	v->a[58395] = 2;
	v->a[58396] = anon_sym_DASH2;
	v->a[58397] = anon_sym_PLUS2;
	v->a[58398] = state(530);
	v->a[58399] = 4;
	small_parse_table_2920(v);
}

/* EOF small_parse_table_583.c */
