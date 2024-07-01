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
	v->a[80400] = actions(2255);
	v->a[80401] = 3;
	v->a[80402] = anon_sym_AMP_AMP;
	v->a[80403] = anon_sym_PIPE_PIPE;
	v->a[80404] = anon_sym_LT_LT_DASH;
	v->a[80405] = actions(3116);
	v->a[80406] = 4;
	v->a[80407] = anon_sym_LT;
	v->a[80408] = anon_sym_GT;
	v->a[80409] = anon_sym_LT_AMP;
	v->a[80410] = anon_sym_GT_AMP;
	v->a[80411] = 10;
	v->a[80412] = actions(3);
	v->a[80413] = 1;
	v->a[80414] = sym_comment;
	v->a[80415] = actions(2587);
	v->a[80416] = 1;
	v->a[80417] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80418] = actions(2591);
	v->a[80419] = 1;
	small_parse_table_4021(v);
}

void	small_parse_table_4021(t_small_parse_table_array *v)
{
	v->a[80420] = anon_sym_DQUOTE;
	v->a[80421] = actions(2593);
	v->a[80422] = 1;
	v->a[80423] = anon_sym_DOLLAR_LBRACE;
	v->a[80424] = actions(2595);
	v->a[80425] = 1;
	v->a[80426] = anon_sym_DOLLAR_LPAREN;
	v->a[80427] = actions(2597);
	v->a[80428] = 1;
	v->a[80429] = anon_sym_BQUOTE;
	v->a[80430] = actions(2741);
	v->a[80431] = 1;
	v->a[80432] = anon_sym_DOLLAR;
	v->a[80433] = state(212);
	v->a[80434] = 2;
	v->a[80435] = sym_concatenation;
	v->a[80436] = aux_sym_for_statement_repeat1;
	v->a[80437] = actions(3114);
	v->a[80438] = 3;
	v->a[80439] = sym_raw_string;
	small_parse_table_4022(v);
}

void	small_parse_table_4022(t_small_parse_table_array *v)
{
	v->a[80440] = sym_number;
	v->a[80441] = sym_word;
	v->a[80442] = state(507);
	v->a[80443] = 5;
	v->a[80444] = sym_arithmetic_expansion;
	v->a[80445] = sym_string;
	v->a[80446] = sym_simple_expansion;
	v->a[80447] = sym_expansion;
	v->a[80448] = sym_command_substitution;
	v->a[80449] = 10;
	v->a[80450] = actions(3);
	v->a[80451] = 1;
	v->a[80452] = sym_comment;
	v->a[80453] = actions(2685);
	v->a[80454] = 1;
	v->a[80455] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80456] = actions(2687);
	v->a[80457] = 1;
	v->a[80458] = anon_sym_DOLLAR;
	v->a[80459] = actions(2689);
	small_parse_table_4023(v);
}

void	small_parse_table_4023(t_small_parse_table_array *v)
{
	v->a[80460] = 1;
	v->a[80461] = anon_sym_DQUOTE;
	v->a[80462] = actions(2691);
	v->a[80463] = 1;
	v->a[80464] = anon_sym_DOLLAR_LBRACE;
	v->a[80465] = actions(2693);
	v->a[80466] = 1;
	v->a[80467] = anon_sym_DOLLAR_LPAREN;
	v->a[80468] = actions(2695);
	v->a[80469] = 1;
	v->a[80470] = anon_sym_BQUOTE;
	v->a[80471] = state(200);
	v->a[80472] = 2;
	v->a[80473] = sym_concatenation;
	v->a[80474] = aux_sym_for_statement_repeat1;
	v->a[80475] = actions(3059);
	v->a[80476] = 3;
	v->a[80477] = sym_raw_string;
	v->a[80478] = sym_number;
	v->a[80479] = sym_word;
	small_parse_table_4024(v);
}

void	small_parse_table_4024(t_small_parse_table_array *v)
{
	v->a[80480] = state(456);
	v->a[80481] = 5;
	v->a[80482] = sym_arithmetic_expansion;
	v->a[80483] = sym_string;
	v->a[80484] = sym_simple_expansion;
	v->a[80485] = sym_expansion;
	v->a[80486] = sym_command_substitution;
	v->a[80487] = 3;
	v->a[80488] = actions(870);
	v->a[80489] = 1;
	v->a[80490] = sym_comment;
	v->a[80491] = actions(968);
	v->a[80492] = 6;
	v->a[80493] = anon_sym_PIPE;
	v->a[80494] = anon_sym_LT;
	v->a[80495] = anon_sym_GT;
	v->a[80496] = anon_sym_LT_AMP;
	v->a[80497] = anon_sym_GT_AMP;
	v->a[80498] = anon_sym_LT_LT;
	v->a[80499] = actions(970);
	small_parse_table_4025(v);
}

/* EOF small_parse_table_804.c */
