/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_424.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2120(t_small_parse_table_array *v)
{
	v->a[42400] = actions(1353);
	v->a[42401] = 1;
	v->a[42402] = sym_extglob_pattern;
	v->a[42403] = actions(1581);
	v->a[42404] = 1;
	v->a[42405] = anon_sym_esac;
	v->a[42406] = state(801);
	v->a[42407] = 1;
	v->a[42408] = aux_sym_case_statement_repeat1;
	v->a[42409] = state(1432);
	v->a[42410] = 1;
	v->a[42411] = sym_case_item;
	v->a[42412] = state(1770);
	v->a[42413] = 1;
	v->a[42414] = sym__case_item_last;
	v->a[42415] = state(1594);
	v->a[42416] = 2;
	v->a[42417] = sym_concatenation;
	v->a[42418] = sym__extglob_blob;
	v->a[42419] = actions(1333);
	small_parse_table_2121(v);
}

void	small_parse_table_2121(t_small_parse_table_array *v)
{
	v->a[42420] = 3;
	v->a[42421] = sym_raw_string;
	v->a[42422] = sym_number;
	v->a[42423] = sym_word;
	v->a[42424] = state(1520);
	v->a[42425] = 5;
	v->a[42426] = sym_arithmetic_expansion;
	v->a[42427] = sym_string;
	v->a[42428] = sym_simple_expansion;
	v->a[42429] = sym_expansion;
	v->a[42430] = sym_command_substitution;
	v->a[42431] = 12;
	v->a[42432] = actions(407);
	v->a[42433] = 1;
	v->a[42434] = sym_comment;
	v->a[42435] = actions(1522);
	v->a[42436] = 1;
	v->a[42437] = anon_sym_LPAREN;
	v->a[42438] = actions(1524);
	v->a[42439] = 1;
	small_parse_table_2122(v);
}

void	small_parse_table_2122(t_small_parse_table_array *v)
{
	v->a[42440] = anon_sym_BANG;
	v->a[42441] = actions(1530);
	v->a[42442] = 1;
	v->a[42443] = anon_sym_DOLLAR;
	v->a[42444] = actions(1532);
	v->a[42445] = 1;
	v->a[42446] = anon_sym_DQUOTE;
	v->a[42447] = actions(1536);
	v->a[42448] = 1;
	v->a[42449] = anon_sym_DOLLAR_LBRACE;
	v->a[42450] = actions(1538);
	v->a[42451] = 1;
	v->a[42452] = sym_variable_name;
	v->a[42453] = actions(1526);
	v->a[42454] = 2;
	v->a[42455] = anon_sym_PLUS_PLUS;
	v->a[42456] = anon_sym_DASH_DASH;
	v->a[42457] = actions(1528);
	v->a[42458] = 2;
	v->a[42459] = anon_sym_DASH2;
	small_parse_table_2123(v);
}

void	small_parse_table_2123(t_small_parse_table_array *v)
{
	v->a[42460] = anon_sym_PLUS2;
	v->a[42461] = actions(1534);
	v->a[42462] = 2;
	v->a[42463] = sym_number;
	v->a[42464] = aux_sym__simple_variable_name_token1;
	v->a[42465] = state(206);
	v->a[42466] = 3;
	v->a[42467] = sym_string;
	v->a[42468] = sym_simple_expansion;
	v->a[42469] = sym_expansion;
	v->a[42470] = state(212);
	v->a[42471] = 7;
	v->a[42472] = sym__arithmetic_expression;
	v->a[42473] = sym_arithmetic_literal;
	v->a[42474] = sym_arithmetic_binary_expression;
	v->a[42475] = sym_arithmetic_ternary_expression;
	v->a[42476] = sym_arithmetic_unary_expression;
	v->a[42477] = sym_arithmetic_postfix_expression;
	v->a[42478] = sym_arithmetic_parenthesized_expression;
	v->a[42479] = 16;
	small_parse_table_2124(v);
}

void	small_parse_table_2124(t_small_parse_table_array *v)
{
	v->a[42480] = actions(3);
	v->a[42481] = 1;
	v->a[42482] = sym_comment;
	v->a[42483] = actions(1337);
	v->a[42484] = 1;
	v->a[42485] = anon_sym_LPAREN;
	v->a[42486] = actions(1341);
	v->a[42487] = 1;
	v->a[42488] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42489] = actions(1343);
	v->a[42490] = 1;
	v->a[42491] = anon_sym_DOLLAR;
	v->a[42492] = actions(1345);
	v->a[42493] = 1;
	v->a[42494] = anon_sym_DQUOTE;
	v->a[42495] = actions(1347);
	v->a[42496] = 1;
	v->a[42497] = anon_sym_DOLLAR_LBRACE;
	v->a[42498] = actions(1349);
	v->a[42499] = 1;
	small_parse_table_2125(v);
}

/* EOF small_parse_table_424.c */
