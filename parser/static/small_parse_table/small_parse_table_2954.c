/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2954.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14770(t_small_parse_table_array *v)
{
	v->a[295400] = sym_arithmetic_expansion;
	v->a[295401] = sym_simple_expansion;
	v->a[295402] = sym_expansion;
	v->a[295403] = sym_command_substitution;
	v->a[295404] = 12;
	v->a[295405] = actions(3);
	v->a[295406] = 1;
	v->a[295407] = sym_comment;
	v->a[295408] = actions(13060);
	v->a[295409] = 1;
	v->a[295410] = anon_sym_DOLLAR_LBRACK;
	v->a[295411] = actions(13066);
	v->a[295412] = 1;
	v->a[295413] = sym_string_content;
	v->a[295414] = actions(13068);
	v->a[295415] = 1;
	v->a[295416] = anon_sym_DOLLAR_LBRACE;
	v->a[295417] = actions(13070);
	v->a[295418] = 1;
	v->a[295419] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_14771(v);
}

void	small_parse_table_14771(t_small_parse_table_array *v)
{
	v->a[295420] = actions(13072);
	v->a[295421] = 1;
	v->a[295422] = anon_sym_BQUOTE;
	v->a[295423] = actions(13074);
	v->a[295424] = 1;
	v->a[295425] = anon_sym_DOLLAR_BQUOTE;
	v->a[295426] = actions(13196);
	v->a[295427] = 1;
	v->a[295428] = anon_sym_DOLLAR;
	v->a[295429] = actions(13198);
	v->a[295430] = 1;
	v->a[295431] = anon_sym_DQUOTE;
	v->a[295432] = state(5726);
	v->a[295433] = 1;
	v->a[295434] = aux_sym_string_repeat1;
	v->a[295435] = actions(13058);
	v->a[295436] = 2;
	v->a[295437] = anon_sym_LPAREN_LPAREN;
	v->a[295438] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[295439] = state(6127);
	small_parse_table_14772(v);
}

void	small_parse_table_14772(t_small_parse_table_array *v)
{
	v->a[295440] = 4;
	v->a[295441] = sym_arithmetic_expansion;
	v->a[295442] = sym_simple_expansion;
	v->a[295443] = sym_expansion;
	v->a[295444] = sym_command_substitution;
	v->a[295445] = 12;
	v->a[295446] = actions(3);
	v->a[295447] = 1;
	v->a[295448] = sym_comment;
	v->a[295449] = actions(13060);
	v->a[295450] = 1;
	v->a[295451] = anon_sym_DOLLAR_LBRACK;
	v->a[295452] = actions(13066);
	v->a[295453] = 1;
	v->a[295454] = sym_string_content;
	v->a[295455] = actions(13068);
	v->a[295456] = 1;
	v->a[295457] = anon_sym_DOLLAR_LBRACE;
	v->a[295458] = actions(13070);
	v->a[295459] = 1;
	small_parse_table_14773(v);
}

void	small_parse_table_14773(t_small_parse_table_array *v)
{
	v->a[295460] = anon_sym_DOLLAR_LPAREN;
	v->a[295461] = actions(13072);
	v->a[295462] = 1;
	v->a[295463] = anon_sym_BQUOTE;
	v->a[295464] = actions(13074);
	v->a[295465] = 1;
	v->a[295466] = anon_sym_DOLLAR_BQUOTE;
	v->a[295467] = actions(13200);
	v->a[295468] = 1;
	v->a[295469] = anon_sym_DOLLAR;
	v->a[295470] = actions(13202);
	v->a[295471] = 1;
	v->a[295472] = anon_sym_DQUOTE;
	v->a[295473] = state(5702);
	v->a[295474] = 1;
	v->a[295475] = aux_sym_string_repeat1;
	v->a[295476] = actions(13058);
	v->a[295477] = 2;
	v->a[295478] = anon_sym_LPAREN_LPAREN;
	v->a[295479] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_14774(v);
}

void	small_parse_table_14774(t_small_parse_table_array *v)
{
	v->a[295480] = state(6127);
	v->a[295481] = 4;
	v->a[295482] = sym_arithmetic_expansion;
	v->a[295483] = sym_simple_expansion;
	v->a[295484] = sym_expansion;
	v->a[295485] = sym_command_substitution;
	v->a[295486] = 12;
	v->a[295487] = actions(3);
	v->a[295488] = 1;
	v->a[295489] = sym_comment;
	v->a[295490] = actions(13060);
	v->a[295491] = 1;
	v->a[295492] = anon_sym_DOLLAR_LBRACK;
	v->a[295493] = actions(13066);
	v->a[295494] = 1;
	v->a[295495] = sym_string_content;
	v->a[295496] = actions(13068);
	v->a[295497] = 1;
	v->a[295498] = anon_sym_DOLLAR_LBRACE;
	v->a[295499] = actions(13070);
	small_parse_table_14775(v);
}

/* EOF small_parse_table_2954.c */
