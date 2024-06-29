/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_594.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2970(t_small_parse_table_array *v)
{
	v->a[59400] = anon_sym_BQUOTE;
	v->a[59401] = actions(1973);
	v->a[59402] = 1;
	v->a[59403] = sym_variable_name;
	v->a[59404] = actions(1955);
	v->a[59405] = 2;
	v->a[59406] = anon_sym_PLUS_PLUS;
	v->a[59407] = anon_sym_DASH_DASH;
	v->a[59408] = actions(1957);
	v->a[59409] = 2;
	v->a[59410] = anon_sym_DASH2;
	v->a[59411] = anon_sym_PLUS2;
	v->a[59412] = actions(1965);
	v->a[59413] = 2;
	v->a[59414] = sym_number;
	v->a[59415] = aux_sym__simple_variable_name_token1;
	v->a[59416] = state(462);
	v->a[59417] = 3;
	v->a[59418] = sym_string;
	v->a[59419] = sym_simple_expansion;
	small_parse_table_2971(v);
}

void	small_parse_table_2971(t_small_parse_table_array *v)
{
	v->a[59420] = sym_expansion;
	v->a[59421] = state(512);
	v->a[59422] = 8;
	v->a[59423] = sym__arithmetic_expression;
	v->a[59424] = sym_arithmetic_literal;
	v->a[59425] = sym_arithmetic_binary_expression;
	v->a[59426] = sym_arithmetic_ternary_expression;
	v->a[59427] = sym_arithmetic_unary_expression;
	v->a[59428] = sym_arithmetic_postfix_expression;
	v->a[59429] = sym_arithmetic_parenthesized_expression;
	v->a[59430] = sym_command_substitution;
	v->a[59431] = 15;
	v->a[59432] = actions(1074);
	v->a[59433] = 1;
	v->a[59434] = sym_comment;
	v->a[59435] = actions(1831);
	v->a[59436] = 1;
	v->a[59437] = anon_sym_LPAREN;
	v->a[59438] = actions(1833);
	v->a[59439] = 1;
	small_parse_table_2972(v);
}

void	small_parse_table_2972(t_small_parse_table_array *v)
{
	v->a[59440] = anon_sym_BANG;
	v->a[59441] = actions(1841);
	v->a[59442] = 1;
	v->a[59443] = anon_sym_TILDE;
	v->a[59444] = actions(1843);
	v->a[59445] = 1;
	v->a[59446] = anon_sym_DOLLAR;
	v->a[59447] = actions(1845);
	v->a[59448] = 1;
	v->a[59449] = anon_sym_DQUOTE;
	v->a[59450] = actions(1849);
	v->a[59451] = 1;
	v->a[59452] = anon_sym_DOLLAR_LBRACE;
	v->a[59453] = actions(1851);
	v->a[59454] = 1;
	v->a[59455] = anon_sym_DOLLAR_LPAREN;
	v->a[59456] = actions(1853);
	v->a[59457] = 1;
	v->a[59458] = anon_sym_BQUOTE;
	v->a[59459] = actions(1855);
	small_parse_table_2973(v);
}

void	small_parse_table_2973(t_small_parse_table_array *v)
{
	v->a[59460] = 1;
	v->a[59461] = sym_variable_name;
	v->a[59462] = actions(1837);
	v->a[59463] = 2;
	v->a[59464] = anon_sym_PLUS_PLUS;
	v->a[59465] = anon_sym_DASH_DASH;
	v->a[59466] = actions(1839);
	v->a[59467] = 2;
	v->a[59468] = anon_sym_DASH2;
	v->a[59469] = anon_sym_PLUS2;
	v->a[59470] = actions(1847);
	v->a[59471] = 2;
	v->a[59472] = sym_number;
	v->a[59473] = aux_sym__simple_variable_name_token1;
	v->a[59474] = state(370);
	v->a[59475] = 3;
	v->a[59476] = sym_string;
	v->a[59477] = sym_simple_expansion;
	v->a[59478] = sym_expansion;
	v->a[59479] = state(409);
	small_parse_table_2974(v);
}

void	small_parse_table_2974(t_small_parse_table_array *v)
{
	v->a[59480] = 8;
	v->a[59481] = sym__arithmetic_expression;
	v->a[59482] = sym_arithmetic_literal;
	v->a[59483] = sym_arithmetic_binary_expression;
	v->a[59484] = sym_arithmetic_ternary_expression;
	v->a[59485] = sym_arithmetic_unary_expression;
	v->a[59486] = sym_arithmetic_postfix_expression;
	v->a[59487] = sym_arithmetic_parenthesized_expression;
	v->a[59488] = sym_command_substitution;
	v->a[59489] = 15;
	v->a[59490] = actions(1074);
	v->a[59491] = 1;
	v->a[59492] = sym_comment;
	v->a[59493] = actions(1831);
	v->a[59494] = 1;
	v->a[59495] = anon_sym_LPAREN;
	v->a[59496] = actions(1833);
	v->a[59497] = 1;
	v->a[59498] = anon_sym_BANG;
	v->a[59499] = actions(1841);
	small_parse_table_2975(v);
}

/* EOF small_parse_table_594.c */
