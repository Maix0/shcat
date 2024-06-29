/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_604.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3020(t_small_parse_table_array *v)
{
	v->a[60400] = sym_arithmetic_ternary_expression;
	v->a[60401] = sym_arithmetic_unary_expression;
	v->a[60402] = sym_arithmetic_postfix_expression;
	v->a[60403] = sym_arithmetic_parenthesized_expression;
	v->a[60404] = sym_command_substitution;
	v->a[60405] = 15;
	v->a[60406] = actions(1074);
	v->a[60407] = 1;
	v->a[60408] = sym_comment;
	v->a[60409] = actions(1831);
	v->a[60410] = 1;
	v->a[60411] = anon_sym_LPAREN;
	v->a[60412] = actions(1833);
	v->a[60413] = 1;
	v->a[60414] = anon_sym_BANG;
	v->a[60415] = actions(1841);
	v->a[60416] = 1;
	v->a[60417] = anon_sym_TILDE;
	v->a[60418] = actions(1843);
	v->a[60419] = 1;
	small_parse_table_3021(v);
}

void	small_parse_table_3021(t_small_parse_table_array *v)
{
	v->a[60420] = anon_sym_DOLLAR;
	v->a[60421] = actions(1845);
	v->a[60422] = 1;
	v->a[60423] = anon_sym_DQUOTE;
	v->a[60424] = actions(1849);
	v->a[60425] = 1;
	v->a[60426] = anon_sym_DOLLAR_LBRACE;
	v->a[60427] = actions(1851);
	v->a[60428] = 1;
	v->a[60429] = anon_sym_DOLLAR_LPAREN;
	v->a[60430] = actions(1853);
	v->a[60431] = 1;
	v->a[60432] = anon_sym_BQUOTE;
	v->a[60433] = actions(1855);
	v->a[60434] = 1;
	v->a[60435] = sym_variable_name;
	v->a[60436] = actions(1837);
	v->a[60437] = 2;
	v->a[60438] = anon_sym_PLUS_PLUS;
	v->a[60439] = anon_sym_DASH_DASH;
	small_parse_table_3022(v);
}

void	small_parse_table_3022(t_small_parse_table_array *v)
{
	v->a[60440] = actions(1839);
	v->a[60441] = 2;
	v->a[60442] = anon_sym_DASH2;
	v->a[60443] = anon_sym_PLUS2;
	v->a[60444] = actions(1847);
	v->a[60445] = 2;
	v->a[60446] = sym_number;
	v->a[60447] = aux_sym__simple_variable_name_token1;
	v->a[60448] = state(370);
	v->a[60449] = 3;
	v->a[60450] = sym_string;
	v->a[60451] = sym_simple_expansion;
	v->a[60452] = sym_expansion;
	v->a[60453] = state(346);
	v->a[60454] = 8;
	v->a[60455] = sym__arithmetic_expression;
	v->a[60456] = sym_arithmetic_literal;
	v->a[60457] = sym_arithmetic_binary_expression;
	v->a[60458] = sym_arithmetic_ternary_expression;
	v->a[60459] = sym_arithmetic_unary_expression;
	small_parse_table_3023(v);
}

void	small_parse_table_3023(t_small_parse_table_array *v)
{
	v->a[60460] = sym_arithmetic_postfix_expression;
	v->a[60461] = sym_arithmetic_parenthesized_expression;
	v->a[60462] = sym_command_substitution;
	v->a[60463] = 15;
	v->a[60464] = actions(1074);
	v->a[60465] = 1;
	v->a[60466] = sym_comment;
	v->a[60467] = actions(1831);
	v->a[60468] = 1;
	v->a[60469] = anon_sym_LPAREN;
	v->a[60470] = actions(1833);
	v->a[60471] = 1;
	v->a[60472] = anon_sym_BANG;
	v->a[60473] = actions(1841);
	v->a[60474] = 1;
	v->a[60475] = anon_sym_TILDE;
	v->a[60476] = actions(1843);
	v->a[60477] = 1;
	v->a[60478] = anon_sym_DOLLAR;
	v->a[60479] = actions(1845);
	small_parse_table_3024(v);
}

void	small_parse_table_3024(t_small_parse_table_array *v)
{
	v->a[60480] = 1;
	v->a[60481] = anon_sym_DQUOTE;
	v->a[60482] = actions(1849);
	v->a[60483] = 1;
	v->a[60484] = anon_sym_DOLLAR_LBRACE;
	v->a[60485] = actions(1851);
	v->a[60486] = 1;
	v->a[60487] = anon_sym_DOLLAR_LPAREN;
	v->a[60488] = actions(1853);
	v->a[60489] = 1;
	v->a[60490] = anon_sym_BQUOTE;
	v->a[60491] = actions(1855);
	v->a[60492] = 1;
	v->a[60493] = sym_variable_name;
	v->a[60494] = actions(1837);
	v->a[60495] = 2;
	v->a[60496] = anon_sym_PLUS_PLUS;
	v->a[60497] = anon_sym_DASH_DASH;
	v->a[60498] = actions(1839);
	v->a[60499] = 2;
	small_parse_table_3025(v);
}

/* EOF small_parse_table_604.c */
