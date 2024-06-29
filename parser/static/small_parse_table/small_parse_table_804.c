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
	v->a[80400] = 1;
	v->a[80401] = aux_sym_heredoc_redirect_token1;
	v->a[80402] = state(1577);
	v->a[80403] = 1;
	v->a[80404] = aux_sym__heredoc_command;
	v->a[80405] = state(1953);
	v->a[80406] = 1;
	v->a[80407] = sym_concatenation;
	v->a[80408] = actions(847);
	v->a[80409] = 3;
	v->a[80410] = sym_raw_string;
	v->a[80411] = sym_number;
	v->a[80412] = sym_word;
	v->a[80413] = state(1788);
	v->a[80414] = 5;
	v->a[80415] = sym_arithmetic_expansion;
	v->a[80416] = sym_string;
	v->a[80417] = sym_simple_expansion;
	v->a[80418] = sym_expansion;
	v->a[80419] = sym_command_substitution;
	small_parse_table_4021(v);
}

void	small_parse_table_4021(t_small_parse_table_array *v)
{
	v->a[80420] = 8;
	v->a[80421] = actions(3);
	v->a[80422] = 1;
	v->a[80423] = sym_comment;
	v->a[80424] = actions(871);
	v->a[80425] = 1;
	v->a[80426] = sym_file_descriptor;
	v->a[80427] = actions(2999);
	v->a[80428] = 1;
	v->a[80429] = aux_sym_heredoc_redirect_token1;
	v->a[80430] = state(2231);
	v->a[80431] = 1;
	v->a[80432] = sym__heredoc_expression;
	v->a[80433] = actions(851);
	v->a[80434] = 2;
	v->a[80435] = anon_sym_AMP_AMP;
	v->a[80436] = anon_sym_PIPE_PIPE;
	v->a[80437] = actions(855);
	v->a[80438] = 2;
	v->a[80439] = anon_sym_LT_AMP_DASH;
	small_parse_table_4022(v);
}

void	small_parse_table_4022(t_small_parse_table_array *v)
{
	v->a[80440] = anon_sym_GT_AMP_DASH;
	v->a[80441] = state(1609);
	v->a[80442] = 2;
	v->a[80443] = sym_file_redirect;
	v->a[80444] = aux_sym_redirected_statement_repeat2;
	v->a[80445] = actions(853);
	v->a[80446] = 8;
	v->a[80447] = anon_sym_LT;
	v->a[80448] = anon_sym_GT;
	v->a[80449] = anon_sym_GT_GT;
	v->a[80450] = anon_sym_AMP_GT;
	v->a[80451] = anon_sym_AMP_GT_GT;
	v->a[80452] = anon_sym_LT_AMP;
	v->a[80453] = anon_sym_GT_AMP;
	v->a[80454] = anon_sym_GT_PIPE;
	v->a[80455] = 10;
	v->a[80456] = actions(3);
	v->a[80457] = 1;
	v->a[80458] = sym_comment;
	v->a[80459] = actions(2789);
	small_parse_table_4023(v);
}

void	small_parse_table_4023(t_small_parse_table_array *v)
{
	v->a[80460] = 1;
	v->a[80461] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80462] = actions(2793);
	v->a[80463] = 1;
	v->a[80464] = anon_sym_DQUOTE;
	v->a[80465] = actions(2795);
	v->a[80466] = 1;
	v->a[80467] = anon_sym_DOLLAR_LBRACE;
	v->a[80468] = actions(2797);
	v->a[80469] = 1;
	v->a[80470] = anon_sym_DOLLAR_LPAREN;
	v->a[80471] = actions(2799);
	v->a[80472] = 1;
	v->a[80473] = anon_sym_BQUOTE;
	v->a[80474] = actions(3003);
	v->a[80475] = 1;
	v->a[80476] = anon_sym_DOLLAR;
	v->a[80477] = actions(3005);
	v->a[80478] = 1;
	v->a[80479] = sym__bare_dollar;
	small_parse_table_4024(v);
}

void	small_parse_table_4024(t_small_parse_table_array *v)
{
	v->a[80480] = actions(3001);
	v->a[80481] = 5;
	v->a[80482] = aux_sym_concatenation_token1;
	v->a[80483] = sym_raw_string;
	v->a[80484] = sym_number;
	v->a[80485] = sym__comment_word;
	v->a[80486] = sym_word;
	v->a[80487] = state(469);
	v->a[80488] = 5;
	v->a[80489] = sym_arithmetic_expansion;
	v->a[80490] = sym_string;
	v->a[80491] = sym_simple_expansion;
	v->a[80492] = sym_expansion;
	v->a[80493] = sym_command_substitution;
	v->a[80494] = 10;
	v->a[80495] = actions(3);
	v->a[80496] = 1;
	v->a[80497] = sym_comment;
	v->a[80498] = actions(2701);
	v->a[80499] = 1;
	small_parse_table_4025(v);
}

/* EOF small_parse_table_804.c */
