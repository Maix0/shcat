/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_804.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4020(t_small_parse_table_array *v)
{
	v->a[80400] = sym_arithmetic_expansion;
	v->a[80401] = sym_string;
	v->a[80402] = sym_number;
	v->a[80403] = sym_simple_expansion;
	v->a[80404] = sym_expansion;
	v->a[80405] = sym_command_substitution;
	v->a[80406] = 12;
	v->a[80407] = actions(3);
	v->a[80408] = 1;
	v->a[80409] = sym_comment;
	v->a[80410] = actions(1749);
	v->a[80411] = 1;
	v->a[80412] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80413] = actions(1751);
	v->a[80414] = 1;
	v->a[80415] = anon_sym_DOLLAR;
	v->a[80416] = actions(1753);
	v->a[80417] = 1;
	v->a[80418] = anon_sym_DQUOTE;
	v->a[80419] = actions(1755);
	small_parse_table_4021(v);
}

void	small_parse_table_4021(t_small_parse_table_array *v)
{
	v->a[80420] = 1;
	v->a[80421] = aux_sym_number_token1;
	v->a[80422] = actions(1757);
	v->a[80423] = 1;
	v->a[80424] = aux_sym_number_token2;
	v->a[80425] = actions(1759);
	v->a[80426] = 1;
	v->a[80427] = anon_sym_DOLLAR_LBRACE;
	v->a[80428] = actions(1761);
	v->a[80429] = 1;
	v->a[80430] = anon_sym_DOLLAR_LPAREN;
	v->a[80431] = actions(1763);
	v->a[80432] = 1;
	v->a[80433] = anon_sym_BQUOTE;
	v->a[80434] = actions(3268);
	v->a[80435] = 1;
	v->a[80436] = sym__bare_dollar;
	v->a[80437] = actions(3264);
	v->a[80438] = 3;
	v->a[80439] = sym_raw_string;
	small_parse_table_4022(v);
}

void	small_parse_table_4022(t_small_parse_table_array *v)
{
	v->a[80440] = sym__comment_word;
	v->a[80441] = sym_word;
	v->a[80442] = state(966);
	v->a[80443] = 6;
	v->a[80444] = sym_arithmetic_expansion;
	v->a[80445] = sym_string;
	v->a[80446] = sym_number;
	v->a[80447] = sym_simple_expansion;
	v->a[80448] = sym_expansion;
	v->a[80449] = sym_command_substitution;
	v->a[80450] = 12;
	v->a[80451] = actions(3);
	v->a[80452] = 1;
	v->a[80453] = sym_comment;
	v->a[80454] = actions(905);
	v->a[80455] = 1;
	v->a[80456] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80457] = actions(909);
	v->a[80458] = 1;
	v->a[80459] = anon_sym_DQUOTE;
	small_parse_table_4023(v);
}

void	small_parse_table_4023(t_small_parse_table_array *v)
{
	v->a[80460] = actions(911);
	v->a[80461] = 1;
	v->a[80462] = aux_sym_number_token1;
	v->a[80463] = actions(913);
	v->a[80464] = 1;
	v->a[80465] = aux_sym_number_token2;
	v->a[80466] = actions(915);
	v->a[80467] = 1;
	v->a[80468] = anon_sym_DOLLAR_LBRACE;
	v->a[80469] = actions(917);
	v->a[80470] = 1;
	v->a[80471] = anon_sym_DOLLAR_LPAREN;
	v->a[80472] = actions(919);
	v->a[80473] = 1;
	v->a[80474] = anon_sym_BQUOTE;
	v->a[80475] = actions(3077);
	v->a[80476] = 1;
	v->a[80477] = sym__bare_dollar;
	v->a[80478] = actions(3332);
	v->a[80479] = 1;
	small_parse_table_4024(v);
}

void	small_parse_table_4024(t_small_parse_table_array *v)
{
	v->a[80480] = anon_sym_DOLLAR;
	v->a[80481] = actions(3075);
	v->a[80482] = 3;
	v->a[80483] = sym_raw_string;
	v->a[80484] = sym__comment_word;
	v->a[80485] = sym_word;
	v->a[80486] = state(981);
	v->a[80487] = 6;
	v->a[80488] = sym_arithmetic_expansion;
	v->a[80489] = sym_string;
	v->a[80490] = sym_number;
	v->a[80491] = sym_simple_expansion;
	v->a[80492] = sym_expansion;
	v->a[80493] = sym_command_substitution;
	v->a[80494] = 12;
	v->a[80495] = actions(3);
	v->a[80496] = 1;
	v->a[80497] = sym_comment;
	v->a[80498] = actions(905);
	v->a[80499] = 1;
	small_parse_table_4025(v);
}

/* EOF small_parse_table_804.c */
