/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_344.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1720(t_small_parse_table_array *v)
{
	v->a[34400] = sym_raw_string;
	v->a[34401] = sym_number;
	v->a[34402] = anon_sym_DOLLAR_LBRACE;
	v->a[34403] = anon_sym_DOLLAR_LPAREN;
	v->a[34404] = anon_sym_BQUOTE;
	v->a[34405] = sym_word;
	v->a[34406] = 3;
	v->a[34407] = actions(3);
	v->a[34408] = 1;
	v->a[34409] = sym_comment;
	v->a[34410] = actions(1050);
	v->a[34411] = 2;
	v->a[34412] = sym__concat;
	v->a[34413] = sym_variable_name;
	v->a[34414] = actions(1052);
	v->a[34415] = 17;
	v->a[34416] = anon_sym_PIPE;
	v->a[34417] = anon_sym_AMP_AMP;
	v->a[34418] = anon_sym_PIPE_PIPE;
	v->a[34419] = anon_sym_LT;
	small_parse_table_1721(v);
}

void	small_parse_table_1721(t_small_parse_table_array *v)
{
	v->a[34420] = anon_sym_GT;
	v->a[34421] = anon_sym_GT_GT;
	v->a[34422] = anon_sym_LT_LT;
	v->a[34423] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[34424] = aux_sym_concatenation_token1;
	v->a[34425] = anon_sym_DOLLAR;
	v->a[34426] = anon_sym_DQUOTE;
	v->a[34427] = sym_raw_string;
	v->a[34428] = sym_number;
	v->a[34429] = anon_sym_DOLLAR_LBRACE;
	v->a[34430] = anon_sym_DOLLAR_LPAREN;
	v->a[34431] = anon_sym_BQUOTE;
	v->a[34432] = sym_word;
	v->a[34433] = 10;
	v->a[34434] = actions(1424);
	v->a[34435] = 1;
	v->a[34436] = anon_sym_LPAREN;
	v->a[34437] = actions(1428);
	v->a[34438] = 1;
	v->a[34439] = anon_sym_DOLLAR;
	small_parse_table_1722(v);
}

void	small_parse_table_1722(t_small_parse_table_array *v)
{
	v->a[34440] = actions(1430);
	v->a[34441] = 1;
	v->a[34442] = anon_sym_DQUOTE;
	v->a[34443] = actions(1434);
	v->a[34444] = 1;
	v->a[34445] = anon_sym_DOLLAR_LBRACE;
	v->a[34446] = actions(1436);
	v->a[34447] = 1;
	v->a[34448] = sym_comment;
	v->a[34449] = actions(1438);
	v->a[34450] = 1;
	v->a[34451] = sym_variable_name;
	v->a[34452] = actions(1426);
	v->a[34453] = 2;
	v->a[34454] = anon_sym_DASH2;
	v->a[34455] = anon_sym_PLUS2;
	v->a[34456] = actions(1432);
	v->a[34457] = 2;
	v->a[34458] = sym_number;
	v->a[34459] = aux_sym__simple_variable_name_token1;
	small_parse_table_1723(v);
}

void	small_parse_table_1723(t_small_parse_table_array *v)
{
	v->a[34460] = state(1312);
	v->a[34461] = 3;
	v->a[34462] = sym_string;
	v->a[34463] = sym_simple_expansion;
	v->a[34464] = sym_expansion;
	v->a[34465] = state(1365);
	v->a[34466] = 7;
	v->a[34467] = sym__arithmetic_expression;
	v->a[34468] = sym_arithmetic_literal;
	v->a[34469] = sym_arithmetic_binary_expression;
	v->a[34470] = sym_arithmetic_ternary_expression;
	v->a[34471] = sym_arithmetic_unary_expression;
	v->a[34472] = sym_arithmetic_postfix_expression;
	v->a[34473] = sym_arithmetic_parenthesized_expression;
	v->a[34474] = 3;
	v->a[34475] = actions(3);
	v->a[34476] = 1;
	v->a[34477] = sym_comment;
	v->a[34478] = actions(1054);
	v->a[34479] = 2;
	small_parse_table_1724(v);
}

void	small_parse_table_1724(t_small_parse_table_array *v)
{
	v->a[34480] = sym__concat;
	v->a[34481] = sym_variable_name;
	v->a[34482] = actions(1056);
	v->a[34483] = 17;
	v->a[34484] = anon_sym_PIPE;
	v->a[34485] = anon_sym_AMP_AMP;
	v->a[34486] = anon_sym_PIPE_PIPE;
	v->a[34487] = anon_sym_LT;
	v->a[34488] = anon_sym_GT;
	v->a[34489] = anon_sym_GT_GT;
	v->a[34490] = anon_sym_LT_LT;
	v->a[34491] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[34492] = aux_sym_concatenation_token1;
	v->a[34493] = anon_sym_DOLLAR;
	v->a[34494] = anon_sym_DQUOTE;
	v->a[34495] = sym_raw_string;
	v->a[34496] = sym_number;
	v->a[34497] = anon_sym_DOLLAR_LBRACE;
	v->a[34498] = anon_sym_DOLLAR_LPAREN;
	v->a[34499] = anon_sym_BQUOTE;
	small_parse_table_1725(v);
}

/* EOF small_parse_table_344.c */
