/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_434.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2170(t_small_parse_table_array *v)
{
	v->a[43400] = sym_comment;
	v->a[43401] = actions(1540);
	v->a[43402] = 1;
	v->a[43403] = anon_sym_LPAREN;
	v->a[43404] = actions(1542);
	v->a[43405] = 1;
	v->a[43406] = anon_sym_BANG;
	v->a[43407] = actions(1548);
	v->a[43408] = 1;
	v->a[43409] = anon_sym_DOLLAR;
	v->a[43410] = actions(1550);
	v->a[43411] = 1;
	v->a[43412] = anon_sym_DQUOTE;
	v->a[43413] = actions(1554);
	v->a[43414] = 1;
	v->a[43415] = anon_sym_DOLLAR_LBRACE;
	v->a[43416] = actions(1556);
	v->a[43417] = 1;
	v->a[43418] = sym_variable_name;
	v->a[43419] = actions(1544);
	small_parse_table_2171(v);
}

void	small_parse_table_2171(t_small_parse_table_array *v)
{
	v->a[43420] = 2;
	v->a[43421] = anon_sym_PLUS_PLUS;
	v->a[43422] = anon_sym_DASH_DASH;
	v->a[43423] = actions(1546);
	v->a[43424] = 2;
	v->a[43425] = anon_sym_DASH2;
	v->a[43426] = anon_sym_PLUS2;
	v->a[43427] = actions(1552);
	v->a[43428] = 2;
	v->a[43429] = sym_number;
	v->a[43430] = aux_sym__simple_variable_name_token1;
	v->a[43431] = state(157);
	v->a[43432] = 3;
	v->a[43433] = sym_string;
	v->a[43434] = sym_simple_expansion;
	v->a[43435] = sym_expansion;
	v->a[43436] = state(254);
	v->a[43437] = 7;
	v->a[43438] = sym__arithmetic_expression;
	v->a[43439] = sym_arithmetic_literal;
	small_parse_table_2172(v);
}

void	small_parse_table_2172(t_small_parse_table_array *v)
{
	v->a[43440] = sym_arithmetic_binary_expression;
	v->a[43441] = sym_arithmetic_ternary_expression;
	v->a[43442] = sym_arithmetic_unary_expression;
	v->a[43443] = sym_arithmetic_postfix_expression;
	v->a[43444] = sym_arithmetic_parenthesized_expression;
	v->a[43445] = 16;
	v->a[43446] = actions(3);
	v->a[43447] = 1;
	v->a[43448] = sym_comment;
	v->a[43449] = actions(1337);
	v->a[43450] = 1;
	v->a[43451] = anon_sym_LPAREN;
	v->a[43452] = actions(1341);
	v->a[43453] = 1;
	v->a[43454] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[43455] = actions(1343);
	v->a[43456] = 1;
	v->a[43457] = anon_sym_DOLLAR;
	v->a[43458] = actions(1345);
	v->a[43459] = 1;
	small_parse_table_2173(v);
}

void	small_parse_table_2173(t_small_parse_table_array *v)
{
	v->a[43460] = anon_sym_DQUOTE;
	v->a[43461] = actions(1347);
	v->a[43462] = 1;
	v->a[43463] = anon_sym_DOLLAR_LBRACE;
	v->a[43464] = actions(1349);
	v->a[43465] = 1;
	v->a[43466] = anon_sym_DOLLAR_LPAREN;
	v->a[43467] = actions(1351);
	v->a[43468] = 1;
	v->a[43469] = anon_sym_BQUOTE;
	v->a[43470] = actions(1353);
	v->a[43471] = 1;
	v->a[43472] = sym_extglob_pattern;
	v->a[43473] = actions(1585);
	v->a[43474] = 1;
	v->a[43475] = anon_sym_esac;
	v->a[43476] = state(802);
	v->a[43477] = 1;
	v->a[43478] = aux_sym_case_statement_repeat1;
	v->a[43479] = state(1432);
	small_parse_table_2174(v);
}

void	small_parse_table_2174(t_small_parse_table_array *v)
{
	v->a[43480] = 1;
	v->a[43481] = sym_case_item;
	v->a[43482] = state(1659);
	v->a[43483] = 1;
	v->a[43484] = sym__case_item_last;
	v->a[43485] = state(1594);
	v->a[43486] = 2;
	v->a[43487] = sym_concatenation;
	v->a[43488] = sym__extglob_blob;
	v->a[43489] = actions(1333);
	v->a[43490] = 3;
	v->a[43491] = sym_raw_string;
	v->a[43492] = sym_number;
	v->a[43493] = sym_word;
	v->a[43494] = state(1520);
	v->a[43495] = 5;
	v->a[43496] = sym_arithmetic_expansion;
	v->a[43497] = sym_string;
	v->a[43498] = sym_simple_expansion;
	v->a[43499] = sym_expansion;
	small_parse_table_2175(v);
}

/* EOF small_parse_table_434.c */
