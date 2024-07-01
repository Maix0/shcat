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
	v->a[80400] = actions(3583);
	v->a[80401] = 1;
	v->a[80402] = anon_sym_PIPE;
	v->a[80403] = actions(3585);
	v->a[80404] = 1;
	v->a[80405] = anon_sym_RPAREN;
	v->a[80406] = state(1837);
	v->a[80407] = 1;
	v->a[80408] = aux_sym_concatenation_repeat1;
	v->a[80409] = state(1889);
	v->a[80410] = 1;
	v->a[80411] = aux_sym__case_item_last_repeat1;
	v->a[80412] = actions(3587);
	v->a[80413] = 2;
	v->a[80414] = sym__concat;
	v->a[80415] = aux_sym_concatenation_token1;
	v->a[80416] = 3;
	v->a[80417] = actions(664);
	v->a[80418] = 1;
	v->a[80419] = sym_comment;
	small_parse_table_4021(v);
}

void	small_parse_table_4021(t_small_parse_table_array *v)
{
	v->a[80420] = actions(764);
	v->a[80421] = 1;
	v->a[80422] = anon_sym_DOLLAR;
	v->a[80423] = actions(766);
	v->a[80424] = 5;
	v->a[80425] = sym_heredoc_content;
	v->a[80426] = sym_heredoc_end;
	v->a[80427] = anon_sym_DOLLAR_LBRACE;
	v->a[80428] = anon_sym_DOLLAR_LPAREN;
	v->a[80429] = anon_sym_BQUOTE;
	v->a[80430] = 3;
	v->a[80431] = actions(3);
	v->a[80432] = 1;
	v->a[80433] = sym_comment;
	v->a[80434] = actions(770);
	v->a[80435] = 2;
	v->a[80436] = sym_regex;
	v->a[80437] = aux_sym_expansion_regex_token1;
	v->a[80438] = actions(768);
	v->a[80439] = 4;
	small_parse_table_4022(v);
}

void	small_parse_table_4022(t_small_parse_table_array *v)
{
	v->a[80440] = anon_sym_RPAREN;
	v->a[80441] = anon_sym_RBRACE;
	v->a[80442] = anon_sym_DQUOTE;
	v->a[80443] = sym_raw_string;
	v->a[80444] = 3;
	v->a[80445] = actions(3);
	v->a[80446] = 1;
	v->a[80447] = sym_comment;
	v->a[80448] = actions(795);
	v->a[80449] = 2;
	v->a[80450] = sym_regex;
	v->a[80451] = aux_sym_expansion_regex_token1;
	v->a[80452] = actions(793);
	v->a[80453] = 4;
	v->a[80454] = anon_sym_RPAREN;
	v->a[80455] = anon_sym_RBRACE;
	v->a[80456] = anon_sym_DQUOTE;
	v->a[80457] = sym_raw_string;
	v->a[80458] = 5;
	v->a[80459] = actions(3);
	small_parse_table_4023(v);
}

void	small_parse_table_4023(t_small_parse_table_array *v)
{
	v->a[80460] = 1;
	v->a[80461] = sym_comment;
	v->a[80462] = actions(3442);
	v->a[80463] = 1;
	v->a[80464] = aux_sym_heredoc_redirect_token1;
	v->a[80465] = actions(3480);
	v->a[80466] = 1;
	v->a[80467] = anon_sym_in;
	v->a[80468] = state(1948);
	v->a[80469] = 1;
	v->a[80470] = sym_terminator;
	v->a[80471] = actions(1893);
	v->a[80472] = 3;
	v->a[80473] = anon_sym_SEMI_SEMI;
	v->a[80474] = anon_sym_AMP;
	v->a[80475] = anon_sym_SEMI;
	v->a[80476] = 3;
	v->a[80477] = actions(3);
	v->a[80478] = 1;
	v->a[80479] = sym_comment;
	small_parse_table_4024(v);
}

void	small_parse_table_4024(t_small_parse_table_array *v)
{
	v->a[80480] = actions(815);
	v->a[80481] = 2;
	v->a[80482] = sym_regex;
	v->a[80483] = aux_sym_expansion_regex_token1;
	v->a[80484] = actions(813);
	v->a[80485] = 4;
	v->a[80486] = anon_sym_RPAREN;
	v->a[80487] = anon_sym_RBRACE;
	v->a[80488] = anon_sym_DQUOTE;
	v->a[80489] = sym_raw_string;
	v->a[80490] = 6;
	v->a[80491] = actions(664);
	v->a[80492] = 1;
	v->a[80493] = sym_comment;
	v->a[80494] = actions(3579);
	v->a[80495] = 1;
	v->a[80496] = anon_sym_elif;
	v->a[80497] = actions(3581);
	v->a[80498] = 1;
	v->a[80499] = anon_sym_else;
	small_parse_table_4025(v);
}

/* EOF small_parse_table_804.c */
