/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_624.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3120(t_small_parse_table_array *v)
{
	v->a[62400] = sym_variable_name;
	v->a[62401] = actions(1933);
	v->a[62402] = 1;
	v->a[62403] = anon_sym_RPAREN_RPAREN;
	v->a[62404] = actions(1875);
	v->a[62405] = 2;
	v->a[62406] = anon_sym_PLUS_PLUS;
	v->a[62407] = anon_sym_DASH_DASH;
	v->a[62408] = actions(1877);
	v->a[62409] = 2;
	v->a[62410] = anon_sym_DASH2;
	v->a[62411] = anon_sym_PLUS2;
	v->a[62412] = actions(1885);
	v->a[62413] = 2;
	v->a[62414] = sym_number;
	v->a[62415] = aux_sym__simple_variable_name_token1;
	v->a[62416] = state(365);
	v->a[62417] = 3;
	v->a[62418] = sym_string;
	v->a[62419] = sym_simple_expansion;
	small_parse_table_3121(v);
}

void	small_parse_table_3121(t_small_parse_table_array *v)
{
	v->a[62420] = sym_expansion;
	v->a[62421] = state(527);
	v->a[62422] = 8;
	v->a[62423] = sym__arithmetic_expression;
	v->a[62424] = sym_arithmetic_literal;
	v->a[62425] = sym_arithmetic_binary_expression;
	v->a[62426] = sym_arithmetic_ternary_expression;
	v->a[62427] = sym_arithmetic_unary_expression;
	v->a[62428] = sym_arithmetic_postfix_expression;
	v->a[62429] = sym_arithmetic_parenthesized_expression;
	v->a[62430] = sym_command_substitution;
	v->a[62431] = 16;
	v->a[62432] = actions(1094);
	v->a[62433] = 1;
	v->a[62434] = sym_comment;
	v->a[62435] = actions(1869);
	v->a[62436] = 1;
	v->a[62437] = anon_sym_LPAREN;
	v->a[62438] = actions(1871);
	v->a[62439] = 1;
	small_parse_table_3122(v);
}

void	small_parse_table_3122(t_small_parse_table_array *v)
{
	v->a[62440] = anon_sym_BANG;
	v->a[62441] = actions(1879);
	v->a[62442] = 1;
	v->a[62443] = anon_sym_TILDE;
	v->a[62444] = actions(1881);
	v->a[62445] = 1;
	v->a[62446] = anon_sym_DOLLAR;
	v->a[62447] = actions(1883);
	v->a[62448] = 1;
	v->a[62449] = anon_sym_DQUOTE;
	v->a[62450] = actions(1887);
	v->a[62451] = 1;
	v->a[62452] = anon_sym_DOLLAR_LBRACE;
	v->a[62453] = actions(1889);
	v->a[62454] = 1;
	v->a[62455] = anon_sym_DOLLAR_LPAREN;
	v->a[62456] = actions(1891);
	v->a[62457] = 1;
	v->a[62458] = anon_sym_BQUOTE;
	v->a[62459] = actions(1893);
	small_parse_table_3123(v);
}

void	small_parse_table_3123(t_small_parse_table_array *v)
{
	v->a[62460] = 1;
	v->a[62461] = sym_variable_name;
	v->a[62462] = actions(1935);
	v->a[62463] = 1;
	v->a[62464] = anon_sym_RPAREN_RPAREN;
	v->a[62465] = actions(1875);
	v->a[62466] = 2;
	v->a[62467] = anon_sym_PLUS_PLUS;
	v->a[62468] = anon_sym_DASH_DASH;
	v->a[62469] = actions(1877);
	v->a[62470] = 2;
	v->a[62471] = anon_sym_DASH2;
	v->a[62472] = anon_sym_PLUS2;
	v->a[62473] = actions(1885);
	v->a[62474] = 2;
	v->a[62475] = sym_number;
	v->a[62476] = aux_sym__simple_variable_name_token1;
	v->a[62477] = state(365);
	v->a[62478] = 3;
	v->a[62479] = sym_string;
	small_parse_table_3124(v);
}

void	small_parse_table_3124(t_small_parse_table_array *v)
{
	v->a[62480] = sym_simple_expansion;
	v->a[62481] = sym_expansion;
	v->a[62482] = state(422);
	v->a[62483] = 8;
	v->a[62484] = sym__arithmetic_expression;
	v->a[62485] = sym_arithmetic_literal;
	v->a[62486] = sym_arithmetic_binary_expression;
	v->a[62487] = sym_arithmetic_ternary_expression;
	v->a[62488] = sym_arithmetic_unary_expression;
	v->a[62489] = sym_arithmetic_postfix_expression;
	v->a[62490] = sym_arithmetic_parenthesized_expression;
	v->a[62491] = sym_command_substitution;
	v->a[62492] = 16;
	v->a[62493] = actions(1094);
	v->a[62494] = 1;
	v->a[62495] = sym_comment;
	v->a[62496] = actions(1869);
	v->a[62497] = 1;
	v->a[62498] = anon_sym_LPAREN;
	v->a[62499] = actions(1871);
	small_parse_table_3125(v);
}

/* EOF small_parse_table_624.c */
