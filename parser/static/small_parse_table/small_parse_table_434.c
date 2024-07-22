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
	v->a[43400] = sym_raw_string;
	v->a[43401] = sym_number;
	v->a[43402] = anon_sym_DOLLAR_LBRACE;
	v->a[43403] = anon_sym_DOLLAR_LPAREN;
	v->a[43404] = anon_sym_BQUOTE;
	v->a[43405] = sym_word;
	v->a[43406] = 16;
	v->a[43407] = actions(501);
	v->a[43408] = 1;
	v->a[43409] = sym_comment;
	v->a[43410] = actions(1469);
	v->a[43411] = 1;
	v->a[43412] = anon_sym_LPAREN;
	v->a[43413] = actions(1471);
	v->a[43414] = 1;
	v->a[43415] = anon_sym_BANG;
	v->a[43416] = actions(1479);
	v->a[43417] = 1;
	v->a[43418] = anon_sym_TILDE;
	v->a[43419] = actions(1481);
	small_parse_table_2171(v);
}

void	small_parse_table_2171(t_small_parse_table_array *v)
{
	v->a[43420] = 1;
	v->a[43421] = anon_sym_DOLLAR;
	v->a[43422] = actions(1483);
	v->a[43423] = 1;
	v->a[43424] = anon_sym_DQUOTE;
	v->a[43425] = actions(1487);
	v->a[43426] = 1;
	v->a[43427] = anon_sym_DOLLAR_LBRACE;
	v->a[43428] = actions(1489);
	v->a[43429] = 1;
	v->a[43430] = anon_sym_DOLLAR_LPAREN;
	v->a[43431] = actions(1491);
	v->a[43432] = 1;
	v->a[43433] = anon_sym_BQUOTE;
	v->a[43434] = actions(1493);
	v->a[43435] = 1;
	v->a[43436] = sym_variable_name;
	v->a[43437] = actions(1558);
	v->a[43438] = 1;
	v->a[43439] = anon_sym_RPAREN_RPAREN;
	small_parse_table_2172(v);
}

void	small_parse_table_2172(t_small_parse_table_array *v)
{
	v->a[43440] = actions(1475);
	v->a[43441] = 2;
	v->a[43442] = anon_sym_PLUS_PLUS;
	v->a[43443] = anon_sym_DASH_DASH;
	v->a[43444] = actions(1477);
	v->a[43445] = 2;
	v->a[43446] = anon_sym_DASH2;
	v->a[43447] = anon_sym_PLUS2;
	v->a[43448] = actions(1485);
	v->a[43449] = 2;
	v->a[43450] = sym_number;
	v->a[43451] = aux_sym__simple_variable_name_token1;
	v->a[43452] = state(194);
	v->a[43453] = 3;
	v->a[43454] = sym_string;
	v->a[43455] = sym_simple_expansion;
	v->a[43456] = sym_expansion;
	v->a[43457] = state(300);
	v->a[43458] = 8;
	v->a[43459] = sym__arithmetic_expression;
	small_parse_table_2173(v);
}

void	small_parse_table_2173(t_small_parse_table_array *v)
{
	v->a[43460] = sym_arithmetic_literal;
	v->a[43461] = sym_arithmetic_binary_expression;
	v->a[43462] = sym_arithmetic_ternary_expression;
	v->a[43463] = sym_arithmetic_unary_expression;
	v->a[43464] = sym_arithmetic_postfix_expression;
	v->a[43465] = sym_arithmetic_parenthesized_expression;
	v->a[43466] = sym_command_substitution;
	v->a[43467] = 7;
	v->a[43468] = actions(3);
	v->a[43469] = 1;
	v->a[43470] = sym_comment;
	v->a[43471] = actions(1457);
	v->a[43472] = 1;
	v->a[43473] = sym_file_descriptor;
	v->a[43474] = actions(1460);
	v->a[43475] = 1;
	v->a[43476] = sym_variable_name;
	v->a[43477] = actions(1560);
	v->a[43478] = 1;
	v->a[43479] = anon_sym_RPAREN;
	small_parse_table_2174(v);
}

void	small_parse_table_2174(t_small_parse_table_array *v)
{
	v->a[43480] = actions(1454);
	v->a[43481] = 7;
	v->a[43482] = anon_sym_LT;
	v->a[43483] = anon_sym_GT;
	v->a[43484] = anon_sym_GT_GT;
	v->a[43485] = anon_sym_LT_AMP;
	v->a[43486] = anon_sym_GT_AMP;
	v->a[43487] = anon_sym_GT_PIPE;
	v->a[43488] = anon_sym_LT_GT;
	v->a[43489] = actions(1449);
	v->a[43490] = 8;
	v->a[43491] = anon_sym_PIPE;
	v->a[43492] = anon_sym_SEMI_SEMI;
	v->a[43493] = anon_sym_AMP_AMP;
	v->a[43494] = anon_sym_PIPE_PIPE;
	v->a[43495] = anon_sym_LT_LT;
	v->a[43496] = anon_sym_LT_LT_DASH;
	v->a[43497] = aux_sym_heredoc_redirect_token1;
	v->a[43498] = anon_sym_SEMI;
	v->a[43499] = actions(1447);
	small_parse_table_2175(v);
}

/* EOF small_parse_table_434.c */
