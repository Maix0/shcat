/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1144.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5720(t_small_parse_table_array *v)
{
	v->a[114400] = sym__bare_dollar;
	v->a[114401] = sym_raw_string;
	v->a[114402] = state(1118);
	v->a[114403] = 7;
	v->a[114404] = sym_arithmetic_expansion;
	v->a[114405] = sym_brace_expression;
	v->a[114406] = sym_string;
	v->a[114407] = sym_number;
	v->a[114408] = sym_simple_expansion;
	v->a[114409] = sym_expansion;
	v->a[114410] = sym_command_substitution;
	v->a[114411] = 16;
	v->a[114412] = actions(3);
	v->a[114413] = 1;
	v->a[114414] = sym_comment;
	v->a[114415] = actions(1979);
	v->a[114416] = 1;
	v->a[114417] = aux_sym_number_token1;
	v->a[114418] = actions(1981);
	v->a[114419] = 1;
	small_parse_table_5721(v);
}

void	small_parse_table_5721(t_small_parse_table_array *v)
{
	v->a[114420] = aux_sym_number_token2;
	v->a[114421] = actions(1985);
	v->a[114422] = 1;
	v->a[114423] = anon_sym_DOLLAR_LPAREN;
	v->a[114424] = actions(1993);
	v->a[114425] = 1;
	v->a[114426] = sym__brace_start;
	v->a[114427] = actions(6246);
	v->a[114428] = 1;
	v->a[114429] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[114430] = actions(6250);
	v->a[114431] = 1;
	v->a[114432] = anon_sym_DQUOTE;
	v->a[114433] = actions(6252);
	v->a[114434] = 1;
	v->a[114435] = anon_sym_DOLLAR_LBRACE;
	v->a[114436] = actions(6254);
	v->a[114437] = 1;
	v->a[114438] = anon_sym_BQUOTE;
	v->a[114439] = actions(6256);
	small_parse_table_5722(v);
}

void	small_parse_table_5722(t_small_parse_table_array *v)
{
	v->a[114440] = 1;
	v->a[114441] = anon_sym_DOLLAR_BQUOTE;
	v->a[114442] = actions(6615);
	v->a[114443] = 1;
	v->a[114444] = sym_word;
	v->a[114445] = actions(6619);
	v->a[114446] = 1;
	v->a[114447] = sym__special_character;
	v->a[114448] = actions(6623);
	v->a[114449] = 1;
	v->a[114450] = sym__comment_word;
	v->a[114451] = actions(6645);
	v->a[114452] = 1;
	v->a[114453] = anon_sym_DOLLAR;
	v->a[114454] = actions(6621);
	v->a[114455] = 3;
	v->a[114456] = sym_test_operator;
	v->a[114457] = sym__bare_dollar;
	v->a[114458] = sym_raw_string;
	v->a[114459] = state(981);
	small_parse_table_5723(v);
}

void	small_parse_table_5723(t_small_parse_table_array *v)
{
	v->a[114460] = 7;
	v->a[114461] = sym_arithmetic_expansion;
	v->a[114462] = sym_brace_expression;
	v->a[114463] = sym_string;
	v->a[114464] = sym_number;
	v->a[114465] = sym_simple_expansion;
	v->a[114466] = sym_expansion;
	v->a[114467] = sym_command_substitution;
	v->a[114468] = 16;
	v->a[114469] = actions(3);
	v->a[114470] = 1;
	v->a[114471] = sym_comment;
	v->a[114472] = actions(5453);
	v->a[114473] = 1;
	v->a[114474] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[114475] = actions(5459);
	v->a[114476] = 1;
	v->a[114477] = anon_sym_DQUOTE;
	v->a[114478] = actions(5463);
	v->a[114479] = 1;
	small_parse_table_5724(v);
}

void	small_parse_table_5724(t_small_parse_table_array *v)
{
	v->a[114480] = aux_sym_number_token1;
	v->a[114481] = actions(5465);
	v->a[114482] = 1;
	v->a[114483] = aux_sym_number_token2;
	v->a[114484] = actions(5467);
	v->a[114485] = 1;
	v->a[114486] = anon_sym_DOLLAR_LBRACE;
	v->a[114487] = actions(5469);
	v->a[114488] = 1;
	v->a[114489] = anon_sym_DOLLAR_LPAREN;
	v->a[114490] = actions(5471);
	v->a[114491] = 1;
	v->a[114492] = anon_sym_BQUOTE;
	v->a[114493] = actions(5473);
	v->a[114494] = 1;
	v->a[114495] = anon_sym_DOLLAR_BQUOTE;
	v->a[114496] = actions(5479);
	v->a[114497] = 1;
	v->a[114498] = sym__brace_start;
	v->a[114499] = actions(6637);
	small_parse_table_5725(v);
}

/* EOF small_parse_table_1144.c */
