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
	v->a[80400] = anon_sym_DOLLAR_LBRACE;
	v->a[80401] = anon_sym_DOLLAR_LPAREN;
	v->a[80402] = anon_sym_BQUOTE;
	v->a[80403] = anon_sym_DOLLAR_BQUOTE;
	v->a[80404] = anon_sym_LT_LPAREN;
	v->a[80405] = anon_sym_GT_LPAREN;
	v->a[80406] = aux_sym__simple_variable_name_token1;
	v->a[80407] = sym_word;
	v->a[80408] = 3;
	v->a[80409] = actions(3);
	v->a[80410] = 1;
	v->a[80411] = sym_comment;
	v->a[80412] = actions(1310);
	v->a[80413] = 6;
	v->a[80414] = sym_file_descriptor;
	v->a[80415] = sym__concat;
	v->a[80416] = sym_variable_name;
	v->a[80417] = sym_test_operator;
	v->a[80418] = sym__brace_start;
	v->a[80419] = aux_sym_heredoc_redirect_token1;
	small_parse_table_4021(v);
}

void	small_parse_table_4021(t_small_parse_table_array *v)
{
	v->a[80420] = actions(1308);
	v->a[80421] = 39;
	v->a[80422] = anon_sym_LPAREN_LPAREN;
	v->a[80423] = anon_sym_SEMI;
	v->a[80424] = anon_sym_PIPE_PIPE;
	v->a[80425] = anon_sym_AMP_AMP;
	v->a[80426] = anon_sym_PIPE;
	v->a[80427] = anon_sym_AMP;
	v->a[80428] = anon_sym_LT;
	v->a[80429] = anon_sym_GT;
	v->a[80430] = anon_sym_LT_LT;
	v->a[80431] = anon_sym_GT_GT;
	v->a[80432] = anon_sym_RPAREN;
	v->a[80433] = anon_sym_SEMI_SEMI;
	v->a[80434] = anon_sym_PIPE_AMP;
	v->a[80435] = anon_sym_AMP_GT;
	v->a[80436] = anon_sym_AMP_GT_GT;
	v->a[80437] = anon_sym_LT_AMP;
	v->a[80438] = anon_sym_GT_AMP;
	v->a[80439] = anon_sym_GT_PIPE;
	small_parse_table_4022(v);
}

void	small_parse_table_4022(t_small_parse_table_array *v)
{
	v->a[80440] = anon_sym_LT_AMP_DASH;
	v->a[80441] = anon_sym_GT_AMP_DASH;
	v->a[80442] = anon_sym_LT_LT_DASH;
	v->a[80443] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80444] = anon_sym_DOLLAR_LBRACK;
	v->a[80445] = aux_sym_concatenation_token1;
	v->a[80446] = anon_sym_DOLLAR;
	v->a[80447] = sym__special_character;
	v->a[80448] = anon_sym_DQUOTE;
	v->a[80449] = sym_raw_string;
	v->a[80450] = sym_ansi_c_string;
	v->a[80451] = aux_sym_number_token1;
	v->a[80452] = aux_sym_number_token2;
	v->a[80453] = anon_sym_DOLLAR_LBRACE;
	v->a[80454] = anon_sym_DOLLAR_LPAREN;
	v->a[80455] = anon_sym_BQUOTE;
	v->a[80456] = anon_sym_DOLLAR_BQUOTE;
	v->a[80457] = anon_sym_LT_LPAREN;
	v->a[80458] = anon_sym_GT_LPAREN;
	v->a[80459] = aux_sym__simple_variable_name_token1;
	small_parse_table_4023(v);
}

void	small_parse_table_4023(t_small_parse_table_array *v)
{
	v->a[80460] = sym_word;
	v->a[80461] = 28;
	v->a[80462] = actions(71);
	v->a[80463] = 1;
	v->a[80464] = sym_comment;
	v->a[80465] = actions(107);
	v->a[80466] = 1;
	v->a[80467] = anon_sym_TILDE;
	v->a[80468] = actions(237);
	v->a[80469] = 1;
	v->a[80470] = sym_word;
	v->a[80471] = actions(248);
	v->a[80472] = 1;
	v->a[80473] = anon_sym_LPAREN;
	v->a[80474] = actions(250);
	v->a[80475] = 1;
	v->a[80476] = anon_sym_BANG;
	v->a[80477] = actions(258);
	v->a[80478] = 1;
	v->a[80479] = anon_sym_DOLLAR;
	small_parse_table_4024(v);
}

void	small_parse_table_4024(t_small_parse_table_array *v)
{
	v->a[80480] = actions(264);
	v->a[80481] = 1;
	v->a[80482] = aux_sym_number_token1;
	v->a[80483] = actions(266);
	v->a[80484] = 1;
	v->a[80485] = aux_sym_number_token2;
	v->a[80486] = actions(270);
	v->a[80487] = 1;
	v->a[80488] = anon_sym_DOLLAR_LPAREN;
	v->a[80489] = actions(282);
	v->a[80490] = 1;
	v->a[80491] = sym_test_operator;
	v->a[80492] = actions(284);
	v->a[80493] = 1;
	v->a[80494] = sym__brace_start;
	v->a[80495] = actions(1075);
	v->a[80496] = 1;
	v->a[80497] = anon_sym_DOLLAR_LBRACK;
	v->a[80498] = actions(1079);
	v->a[80499] = 1;
	small_parse_table_4025(v);
}

/* EOF small_parse_table_804.c */
